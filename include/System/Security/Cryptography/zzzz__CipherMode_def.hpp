#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CipherMode)
// Forward declare root types
namespace System::Security::Cryptography {
struct CipherMode;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::CipherMode);
// Type: System.Security.Cryptography::CipherMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2921))
// CS Name: ::System.Security.Cryptography::CipherMode
struct CORDL_TYPE CipherMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CipherMode_Unwrapped
  enum struct __CipherMode_Unwrapped : int32_t {
    __E_CBC = static_cast<int32_t>(0x1),
    __E_ECB = static_cast<int32_t>(0x2),
    __E_OFB = static_cast<int32_t>(0x3),
    __E_CFB = static_cast<int32_t>(0x4),
    __E_CTS = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CipherMode_Unwrapped() const noexcept {
    return static_cast<__CipherMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CipherMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CBC value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::CipherMode const CBC;

  /// @brief Field ECB value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::CipherMode const ECB;

  /// @brief Field OFB value: static_cast<int32_t>(0x3)
  static ::System::Security::Cryptography::CipherMode const OFB;

  /// @brief Field CFB value: static_cast<int32_t>(0x4)
  static ::System::Security::Cryptography::CipherMode const CFB;

  /// @brief Field CTS value: static_cast<int32_t>(0x5)
  static ::System::Security::Cryptography::CipherMode const CTS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CipherMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CipherMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CipherMode, "System.Security.Cryptography", "CipherMode");
