#pragma once
// IWYU pragma private; include "System/Xml/XmlOutputMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlOutputMethod)
// Forward declare root types
namespace System::Xml {
struct XmlOutputMethod;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlOutputMethod);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlOutputMethod
struct CORDL_TYPE XmlOutputMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlOutputMethod_Unwrapped
  enum struct __XmlOutputMethod_Unwrapped : int32_t {
    __E_Xml = static_cast<int32_t>(0x0),
    __E_Html = static_cast<int32_t>(0x1),
    __E_Text = static_cast<int32_t>(0x2),
    __E_AutoDetect = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlOutputMethod_Unwrapped() const noexcept {
    return static_cast<__XmlOutputMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlOutputMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlOutputMethod(int32_t value__) noexcept;

  /// @brief Field AutoDetect value: I32(3)
  static ::System::Xml::XmlOutputMethod const AutoDetect;

  /// @brief Field Html value: I32(1)
  static ::System::Xml::XmlOutputMethod const Html;

  /// @brief Field Text value: I32(2)
  static ::System::Xml::XmlOutputMethod const Text;

  /// @brief Field Xml value: I32(0)
  static ::System::Xml::XmlOutputMethod const Xml;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7274 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlOutputMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlOutputMethod, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlOutputMethod, "System.Xml", "XmlOutputMethod");
