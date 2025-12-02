#pragma once
// IWYU pragma private; include "System/Xml/WriteState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WriteState)
// Forward declare root types
namespace System::Xml {
struct WriteState;
}
// Write type traits
MARK_VAL_T(::System::Xml::WriteState);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.WriteState
struct CORDL_TYPE WriteState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WriteState_Unwrapped
  enum struct __WriteState_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_Prolog = static_cast<int32_t>(0x1),
    __E_Element = static_cast<int32_t>(0x2),
    __E_Attribute = static_cast<int32_t>(0x3),
    __E_Content = static_cast<int32_t>(0x4),
    __E_Closed = static_cast<int32_t>(0x5),
    __E_Error = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WriteState_Unwrapped() const noexcept {
    return static_cast<__WriteState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WriteState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WriteState(int32_t value__) noexcept;

  /// @brief Field Attribute value: I32(3)
  static ::System::Xml::WriteState const Attribute;

  /// @brief Field Closed value: I32(5)
  static ::System::Xml::WriteState const Closed;

  /// @brief Field Content value: I32(4)
  static ::System::Xml::WriteState const Content;

  /// @brief Field Element value: I32(2)
  static ::System::Xml::WriteState const Element;

  /// @brief Field Error value: I32(6)
  static ::System::Xml::WriteState const Error;

  /// @brief Field Prolog value: I32(1)
  static ::System::Xml::WriteState const Prolog;

  /// @brief Field Start value: I32(0)
  static ::System::Xml::WriteState const Start;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9337 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::WriteState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::WriteState, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::WriteState, "System.Xml", "WriteState");
