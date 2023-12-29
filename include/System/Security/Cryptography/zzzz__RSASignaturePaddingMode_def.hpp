#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RSASignaturePaddingMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct RSASignaturePaddingMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::RSASignaturePaddingMode);
// Type: System.Security.Cryptography::RSASignaturePaddingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2915))
// CS Name: ::System.Security.Cryptography::RSASignaturePaddingMode
struct CORDL_TYPE RSASignaturePaddingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RSASignaturePaddingMode_Unwrapped
  enum struct __RSASignaturePaddingMode_Unwrapped : int32_t {
    __E_Pkcs1 = static_cast<int32_t>(0x0),
    __E_Pss = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RSASignaturePaddingMode_Unwrapped() const noexcept {
    return static_cast<__RSASignaturePaddingMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RSASignaturePaddingMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RSASignaturePaddingMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Pkcs1 value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::RSASignaturePaddingMode const Pkcs1;

  /// @brief Field Pss value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::RSASignaturePaddingMode const Pss;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSASignaturePaddingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSASignaturePaddingMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSASignaturePaddingMode, "System.Security.Cryptography", "RSASignaturePaddingMode");
