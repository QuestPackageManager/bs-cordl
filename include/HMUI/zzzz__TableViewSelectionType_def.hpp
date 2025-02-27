#pragma once
// IWYU pragma private; include "HMUI/TableViewSelectionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TableViewSelectionType)
// Forward declare root types
namespace HMUI {
struct TableViewSelectionType;
}
// Write type traits
MARK_VAL_T(::HMUI::TableViewSelectionType);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.TableViewSelectionType
struct CORDL_TYPE TableViewSelectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TableViewSelectionType_Unwrapped
  enum struct __TableViewSelectionType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Single = static_cast<int32_t>(0x1),
    __E_Multiple = static_cast<int32_t>(0x2),
    __E_DeselectableSingle = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TableViewSelectionType_Unwrapped() const noexcept {
    return static_cast<__TableViewSelectionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TableViewSelectionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TableViewSelectionType(int32_t value__) noexcept;

  /// @brief Field DeselectableSingle value: I32(3)
  static ::HMUI::TableViewSelectionType const DeselectableSingle;

  /// @brief Field Multiple value: I32(2)
  static ::HMUI::TableViewSelectionType const Multiple;

  /// @brief Field None value: I32(0)
  static ::HMUI::TableViewSelectionType const None;

  /// @brief Field Single value: I32(1)
  static ::HMUI::TableViewSelectionType const Single;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16114 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::TableViewSelectionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::TableViewSelectionType, 0x4>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableViewSelectionType, "HMUI", "TableViewSelectionType");
