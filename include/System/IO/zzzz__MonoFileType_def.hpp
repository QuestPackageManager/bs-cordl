#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoFileType)
// Forward declare root types
namespace System::IO {
struct MonoFileType;
}
// Write type traits
MARK_VAL_T(::System::IO::MonoFileType);
// Type: System.IO::MonoFileType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3629))
// CS Name: ::System.IO::MonoFileType
struct CORDL_TYPE MonoFileType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MonoFileType_Unwrapped
  enum struct __MonoFileType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Disk = static_cast<int32_t>(0x1),
    __E_Char = static_cast<int32_t>(0x2),
    __E_Pipe = static_cast<int32_t>(0x3),
    __E_Remote = static_cast<int32_t>(0x8000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MonoFileType_Unwrapped() const noexcept {
    return static_cast<__MonoFileType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MonoFileType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoFileType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::System::IO::MonoFileType const Unknown;

  /// @brief Field Disk value: static_cast<int32_t>(0x1)
  static ::System::IO::MonoFileType const Disk;

  /// @brief Field Char value: static_cast<int32_t>(0x2)
  static ::System::IO::MonoFileType const Char;

  /// @brief Field Pipe value: static_cast<int32_t>(0x3)
  static ::System::IO::MonoFileType const Pipe;

  /// @brief Field Remote value: static_cast<int32_t>(0x8000)
  static ::System::IO::MonoFileType const Remote;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoFileType, 0x4>, "Size mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoFileType, "System.IO", "MonoFileType");
