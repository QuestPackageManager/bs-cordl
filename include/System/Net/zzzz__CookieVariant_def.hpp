#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CookieVariant)
// Forward declare root types
namespace System::Net {
struct CookieVariant;
}
// Write type traits
MARK_VAL_T(::System::Net::CookieVariant);
// Type: System.Net::CookieVariant
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9119))
// CS Name: ::System.Net::CookieVariant
struct CORDL_TYPE CookieVariant {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CookieVariant_Unwrapped
  enum struct __CookieVariant_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Plain = static_cast<int32_t>(0x1),
    __E_Rfc2109 = static_cast<int32_t>(0x2),
    __E_Rfc2965 = static_cast<int32_t>(0x3),
    __E_Default = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CookieVariant_Unwrapped() const noexcept {
    return static_cast<__CookieVariant_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CookieVariant(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieVariant();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::System::Net::CookieVariant const Unknown;

  /// @brief Field Plain value: static_cast<int32_t>(0x1)
  static ::System::Net::CookieVariant const Plain;

  /// @brief Field Rfc2109 value: static_cast<int32_t>(0x2)
  static ::System::Net::CookieVariant const Rfc2109;

  /// @brief Field Rfc2965 value: static_cast<int32_t>(0x3)
  static ::System::Net::CookieVariant const Rfc2965;

  /// @brief Field Default value: static_cast<int32_t>(0x2)
  static ::System::Net::CookieVariant const Default;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CookieVariant, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::CookieVariant, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieVariant, "System.Net", "CookieVariant");
