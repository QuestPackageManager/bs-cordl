#pragma once
// IWYU pragma private; include "OculusStudios/HierarchyIcons/Icon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Icon)
// Forward declare root types
namespace OculusStudios::HierarchyIcons {
struct Icon;
}
// Write type traits
MARK_VAL_T(::OculusStudios::HierarchyIcons::Icon);
// Dependencies
namespace OculusStudios::HierarchyIcons {
// Is value type: true
// CS Name: OculusStudios.HierarchyIcons.Icon
struct CORDL_TYPE Icon {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Icon_Unwrapped
  enum struct __Icon_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_EditOffTintable = static_cast<int32_t>(0x1),
    __E_EditTintable = static_cast<int32_t>(0x2),
    __E_Note = static_cast<int32_t>(0x3),
    __E_NoteParent = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Icon_Unwrapped() const noexcept {
    return static_cast<__Icon_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Icon();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Icon(int32_t value__) noexcept;

  /// @brief Field EditOffTintable value: I32(1)
  static ::OculusStudios::HierarchyIcons::Icon const EditOffTintable;

  /// @brief Field EditTintable value: I32(2)
  static ::OculusStudios::HierarchyIcons::Icon const EditTintable;

  /// @brief Field None value: I32(0)
  static ::OculusStudios::HierarchyIcons::Icon const None;

  /// @brief Field Note value: I32(3)
  static ::OculusStudios::HierarchyIcons::Icon const Note;

  /// @brief Field NoteParent value: I32(4)
  static ::OculusStudios::HierarchyIcons::Icon const NoteParent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23237 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::HierarchyIcons::Icon, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::HierarchyIcons::Icon, 0x4>, "Size mismatch!");

} // namespace OculusStudios::HierarchyIcons
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::HierarchyIcons::Icon, "OculusStudios.HierarchyIcons", "Icon");
