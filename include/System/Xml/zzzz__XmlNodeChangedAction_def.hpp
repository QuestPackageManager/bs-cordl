#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeChangedAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeChangedAction)
// Forward declare root types
namespace System::Xml {
struct XmlNodeChangedAction;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlNodeChangedAction);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlNodeChangedAction
struct CORDL_TYPE XmlNodeChangedAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlNodeChangedAction_Unwrapped
  enum struct __XmlNodeChangedAction_Unwrapped : int32_t {
    __E_Insert = static_cast<int32_t>(0x0),
    __E_Remove = static_cast<int32_t>(0x1),
    __E_Change = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlNodeChangedAction_Unwrapped() const noexcept {
    return static_cast<__XmlNodeChangedAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeChangedAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlNodeChangedAction(int32_t value__) noexcept;

  /// @brief Field Change value: I32(2)
  static ::System::Xml::XmlNodeChangedAction const Change;

  /// @brief Field Insert value: I32(0)
  static ::System::Xml::XmlNodeChangedAction const Insert;

  /// @brief Field Remove value: I32(1)
  static ::System::Xml::XmlNodeChangedAction const Remove;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7300 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNodeChangedAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeChangedAction, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeChangedAction, "System.Xml", "XmlNodeChangedAction");
