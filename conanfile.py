from conan import ConanFile
from conan.tools.cmake import CMakeToolchain, CMake, cmake_layout, CMakeDeps


class clipRecipe(ConanFile):
    name = "clip"
    version = "0.0.1"
    package_type = "library"

    # Optional metadata
    license = "Unlicense"
    author = "Aravind Pai dragondive@outlook.in"
    url = "https://github.com/heavens-arena/clip"
    description = "command line interface utility"
    topics = ("cli")

    # Binary configuration
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False], "fPIC": [True, False]}
    default_options = {"shared": False, "fPIC": True}

    # Sources are located in the same place as this recipe, copy them to the recipe
    exports_sources = "CMakeLists.txt", "src/*", "include/*"

    def config_options(self):
        if self.settings.os == "Windows":
            self.options.rm_safe("fPIC")

    def configure(self):
        if self.options.shared:
            self.options.rm_safe("fPIC")

        if self.settings.compiler in ["gcc",  "clang", "Visual Studio"]:
            self.settings.compiler.cppstd = "20"

    def layout(self):
        cmake_layout(self)

    def generate(self):
        deps = CMakeDeps(self)
        deps.generate()
        tc = CMakeToolchain(self)
        tc.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()

    def package_info(self):
        self.cpp_info.libs = ["clip"]

    

    

