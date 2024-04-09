#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeMatchState)
// Forward declare root types
namespace System::Xml::Schema {
struct AttributeMatchState;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::AttributeMatchState);
// Type: System.Xml.Schema::AttributeMatchState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::AttributeMatchState
struct CORDL_TYPE AttributeMatchState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AttributeMatchState_Unwrapped
  enum struct __AttributeMatchState_Unwrapped : int32_t {
    __E_AttributeFound = static_cast<int32_t>(0x0),
    __E_AnyIdAttributeFound = static_cast<int32_t>(0x1),
    __E_UndeclaredElementAndAttribute = static_cast<int32_t>(0x2),
    __E_UndeclaredAttribute = static_cast<int32_t>(0x3),
    __E_AnyAttributeLax = static_cast<int32_t>(0x4),
    __E_AnyAttributeSkip = static_cast<int32_t>(0x5),
    __E_ProhibitedAnyAttribute = static_cast<int32_t>(0x6),
    __E_ProhibitedAttribute = static_cast<int32_t>(0x7),
    __E_AttributeNameMismatch = static_cast<int32_t>(0x8),
    __E_ValidateAttributeInvalidCall = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AttributeMatchState_Unwrapped() const noexcept {
    return static_cast<__AttributeMatchState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeMatchState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AttributeMatchState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AnyAttributeLax value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::AttributeMatchState const AnyAttributeLax;

  /// @brief Field AnyAttributeSkip value: static_cast<int32_t>(0x5)
  static ::System::Xml::Schema::AttributeMatchState const AnyAttributeSkip;

  /// @brief Field AnyIdAttributeFound value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::AttributeMatchState const AnyIdAttributeFound;

  /// @brief Field AttributeFound value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::AttributeMatchState const AttributeFound;

  /// @brief Field AttributeNameMismatch value: static_cast<int32_t>(0x8)
  static ::System::Xml::Schema::AttributeMatchState const AttributeNameMismatch;

  /// @brief Field ProhibitedAnyAttribute value: static_cast<int32_t>(0x6)
  static ::System::Xml::Schema::AttributeMatchState const ProhibitedAnyAttribute;

  /// @brief Field ProhibitedAttribute value: static_cast<int32_t>(0x7)
  static ::System::Xml::Schema::AttributeMatchState const ProhibitedAttribute;

  /// @brief Field UndeclaredAttribute value: static_cast<int32_t>(0x3)
  static ::System::Xml::Schema::AttributeMatchState const UndeclaredAttribute;

  /// @brief Field UndeclaredElementAndAttribute value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::AttributeMatchState const UndeclaredElementAndAttribute;

  /// @brief Field ValidateAttributeInvalidCall value: static_cast<int32_t>(0x9)
  static ::System::Xml::Schema::AttributeMatchState const ValidateAttributeInvalidCall;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::AttributeMatchState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::AttributeMatchState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::AttributeMatchState, "System.Xml.Schema", "AttributeMatchState");
