#pragma once
// IWYU pragma private; include "System/Xml/Linq/XObjectChange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XObjectChange)
// Forward declare root types
namespace System::Xml::Linq {
struct XObjectChange;
}
// Write type traits
MARK_VAL_T(::System::Xml::Linq::XObjectChange);
// Type: System.Xml.Linq::XObjectChange
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: true
// CS Name: ::System.Xml.Linq::XObjectChange
struct CORDL_TYPE XObjectChange {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XObjectChange_Unwrapped
  enum struct __XObjectChange_Unwrapped : int32_t {
    __E_Add = static_cast<int32_t>(0x0),
    __E_Remove = static_cast<int32_t>(0x1),
    __E_Name = static_cast<int32_t>(0x2),
    __E_Value = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XObjectChange_Unwrapped() const noexcept {
    return static_cast<__XObjectChange_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XObjectChange();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XObjectChange(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Add value: static_cast<int32_t>(0x0)
  static ::System::Xml::Linq::XObjectChange const Add;

  /// @brief Field Name value: static_cast<int32_t>(0x2)
  static ::System::Xml::Linq::XObjectChange const Name;

  /// @brief Field Remove value: static_cast<int32_t>(0x1)
  static ::System::Xml::Linq::XObjectChange const Remove;

  /// @brief Field Value value: static_cast<int32_t>(0x3)
  static ::System::Xml::Linq::XObjectChange const Value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17916 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XObjectChange, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XObjectChange, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObjectChange, "System.Xml.Linq", "XObjectChange");
