#pragma once
// IWYU pragma private; include "System/Xml/Schema/ValidatorState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValidatorState)
// Forward declare root types
namespace System::Xml::Schema {
struct ValidatorState;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::ValidatorState);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.ValidatorState
struct CORDL_TYPE ValidatorState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ValidatorState_Unwrapped
  enum struct __ValidatorState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Start = static_cast<int32_t>(0x1),
    __E_TopLevelAttribute = static_cast<int32_t>(0x2),
    __E_TopLevelTextOrWS = static_cast<int32_t>(0x3),
    __E_Element = static_cast<int32_t>(0x4),
    __E_Attribute = static_cast<int32_t>(0x5),
    __E_EndOfAttributes = static_cast<int32_t>(0x6),
    __E_Text = static_cast<int32_t>(0x7),
    __E_Whitespace = static_cast<int32_t>(0x8),
    __E_EndElement = static_cast<int32_t>(0x9),
    __E_SkipToEndElement = static_cast<int32_t>(0xa),
    __E_Finish = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ValidatorState_Unwrapped() const noexcept {
    return static_cast<__ValidatorState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidatorState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValidatorState(int32_t value__) noexcept;

  /// @brief Field Attribute value: I32(5)
  static ::System::Xml::Schema::ValidatorState const Attribute;

  /// @brief Field Element value: I32(4)
  static ::System::Xml::Schema::ValidatorState const Element;

  /// @brief Field EndElement value: I32(9)
  static ::System::Xml::Schema::ValidatorState const EndElement;

  /// @brief Field EndOfAttributes value: I32(6)
  static ::System::Xml::Schema::ValidatorState const EndOfAttributes;

  /// @brief Field Finish value: I32(11)
  static ::System::Xml::Schema::ValidatorState const Finish;

  /// @brief Field None value: I32(0)
  static ::System::Xml::Schema::ValidatorState const None;

  /// @brief Field SkipToEndElement value: I32(10)
  static ::System::Xml::Schema::ValidatorState const SkipToEndElement;

  /// @brief Field Start value: I32(1)
  static ::System::Xml::Schema::ValidatorState const Start;

  /// @brief Field Text value: I32(7)
  static ::System::Xml::Schema::ValidatorState const Text;

  /// @brief Field TopLevelAttribute value: I32(2)
  static ::System::Xml::Schema::ValidatorState const TopLevelAttribute;

  /// @brief Field TopLevelTextOrWS value: I32(3)
  static ::System::Xml::Schema::ValidatorState const TopLevelTextOrWS;

  /// @brief Field Whitespace value: I32(8)
  static ::System::Xml::Schema::ValidatorState const Whitespace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9804 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::ValidatorState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ValidatorState, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ValidatorState, "System.Xml.Schema", "ValidatorState");
