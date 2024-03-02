#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DllImportSearchPath)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct DllImportSearchPath;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::DllImportSearchPath);
// Type: System.Runtime.InteropServices::DllImportSearchPath
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: ::System.Runtime.InteropServices::DllImportSearchPath
struct CORDL_TYPE DllImportSearchPath {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DllImportSearchPath_Unwrapped
  enum struct __DllImportSearchPath_Unwrapped : int32_t {
    __E_UseDllDirectoryForDependencies = static_cast<int32_t>(0x100),
    __E_ApplicationDirectory = static_cast<int32_t>(0x200),
    __E_UserDirectories = static_cast<int32_t>(0x400),
    __E_System32 = static_cast<int32_t>(0x800),
    __E_SafeDirectories = static_cast<int32_t>(0x1000),
    __E_AssemblyDirectory = static_cast<int32_t>(0x2),
    __E_LegacyBehavior = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DllImportSearchPath_Unwrapped() const noexcept {
    return static_cast<__DllImportSearchPath_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DllImportSearchPath();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DllImportSearchPath(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ApplicationDirectory value: static_cast<int32_t>(0x200)
  static ::System::Runtime::InteropServices::DllImportSearchPath const ApplicationDirectory;

  /// @brief Field AssemblyDirectory value: static_cast<int32_t>(0x2)
  static ::System::Runtime::InteropServices::DllImportSearchPath const AssemblyDirectory;

  /// @brief Field LegacyBehavior value: static_cast<int32_t>(0x0)
  static ::System::Runtime::InteropServices::DllImportSearchPath const LegacyBehavior;

  /// @brief Field SafeDirectories value: static_cast<int32_t>(0x1000)
  static ::System::Runtime::InteropServices::DllImportSearchPath const SafeDirectories;

  /// @brief Field System32 value: static_cast<int32_t>(0x800)
  static ::System::Runtime::InteropServices::DllImportSearchPath const System32;

  /// @brief Field UseDllDirectoryForDependencies value: static_cast<int32_t>(0x100)
  static ::System::Runtime::InteropServices::DllImportSearchPath const UseDllDirectoryForDependencies;

  /// @brief Field UserDirectories value: static_cast<int32_t>(0x400)
  static ::System::Runtime::InteropServices::DllImportSearchPath const UserDirectories;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::DllImportSearchPath, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DllImportSearchPath, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::DllImportSearchPath, "System.Runtime.InteropServices", "DllImportSearchPath");
