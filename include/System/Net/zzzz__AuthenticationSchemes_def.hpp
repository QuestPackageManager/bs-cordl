#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationSchemes)
// Forward declare root types
namespace System::Net {
struct AuthenticationSchemes;
}
// Write type traits
MARK_VAL_T(::System::Net::AuthenticationSchemes);
// Type: System.Net::AuthenticationSchemes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9056))
// CS Name: ::System.Net::AuthenticationSchemes
struct CORDL_TYPE AuthenticationSchemes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AuthenticationSchemes_Unwrapped
  enum struct __AuthenticationSchemes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Digest = static_cast<int32_t>(0x1),
    __E_Negotiate = static_cast<int32_t>(0x2),
    __E_Ntlm = static_cast<int32_t>(0x4),
    __E_Basic = static_cast<int32_t>(0x8),
    __E_Anonymous = static_cast<int32_t>(0x8000),
    __E_IntegratedWindowsAuthentication = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AuthenticationSchemes_Unwrapped() const noexcept {
    return static_cast<__AuthenticationSchemes_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AuthenticationSchemes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationSchemes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Net::AuthenticationSchemes const None;

  /// @brief Field Digest value: static_cast<int32_t>(0x1)
  static ::System::Net::AuthenticationSchemes const Digest;

  /// @brief Field Negotiate value: static_cast<int32_t>(0x2)
  static ::System::Net::AuthenticationSchemes const Negotiate;

  /// @brief Field Ntlm value: static_cast<int32_t>(0x4)
  static ::System::Net::AuthenticationSchemes const Ntlm;

  /// @brief Field Basic value: static_cast<int32_t>(0x8)
  static ::System::Net::AuthenticationSchemes const Basic;

  /// @brief Field Anonymous value: static_cast<int32_t>(0x8000)
  static ::System::Net::AuthenticationSchemes const Anonymous;

  /// @brief Field IntegratedWindowsAuthentication value: static_cast<int32_t>(0x6)
  static ::System::Net::AuthenticationSchemes const IntegratedWindowsAuthentication;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::AuthenticationSchemes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::AuthenticationSchemes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AuthenticationSchemes, "System.Net", "AuthenticationSchemes");
