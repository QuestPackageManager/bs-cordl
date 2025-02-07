#pragma once
// IWYU pragma private; include "System/Xml/XmlSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSpace)
// Forward declare root types
namespace System::Xml {
struct XmlSpace;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlSpace);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlSpace
struct CORDL_TYPE XmlSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSpace_Unwrapped
  enum struct __XmlSpace_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Default = static_cast<int32_t>(0x1),
    __E_Preserve = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSpace_Unwrapped() const noexcept {
    return static_cast<__XmlSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSpace(int32_t value__) noexcept;

  /// @brief Field Default value: I32(1)
  static ::System::Xml::XmlSpace const Default;

  /// @brief Field None value: I32(0)
  static ::System::Xml::XmlSpace const None;

  /// @brief Field Preserve value: I32(2)
  static ::System::Xml::XmlSpace const Preserve;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7228 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlSpace, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlSpace, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlSpace, "System.Xml", "XmlSpace");
