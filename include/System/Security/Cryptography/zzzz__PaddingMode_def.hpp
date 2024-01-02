#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PaddingMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct PaddingMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::PaddingMode);
// Type: System.Security.Cryptography::PaddingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2922))
// CS Name: ::System.Security.Cryptography::PaddingMode
struct CORDL_TYPE PaddingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PaddingMode_Unwrapped
  enum struct __PaddingMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x1),
    __E_PKCS7 = static_cast<int32_t>(0x2),
    __E_Zeros = static_cast<int32_t>(0x3),
    __E_ANSIX923 = static_cast<int32_t>(0x4),
    __E_ISO10126 = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PaddingMode_Unwrapped() const noexcept {
    return static_cast<__PaddingMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PaddingMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PaddingMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::PaddingMode const None;

  /// @brief Field PKCS7 value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::PaddingMode const PKCS7;

  /// @brief Field Zeros value: static_cast<int32_t>(0x3)
  static ::System::Security::Cryptography::PaddingMode const Zeros;

  /// @brief Field ANSIX923 value: static_cast<int32_t>(0x4)
  static ::System::Security::Cryptography::PaddingMode const ANSIX923;

  /// @brief Field ISO10126 value: static_cast<int32_t>(0x5)
  static ::System::Security::Cryptography::PaddingMode const ISO10126;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::PaddingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PaddingMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::PaddingMode, "System.Security.Cryptography", "PaddingMode");
