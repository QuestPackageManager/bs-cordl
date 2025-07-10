#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectSubMenuDestination.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectSubMenuDestination)
namespace GlobalNamespace {
struct SelectSubMenuDestination_Destination;
}
// Forward declare root types
namespace GlobalNamespace {
struct SelectSubMenuDestination_Destination;
}
namespace GlobalNamespace {
class SelectSubMenuDestination;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SelectSubMenuDestination_Destination);
MARK_REF_PTR_T(::GlobalNamespace::SelectSubMenuDestination);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SelectSubMenuDestination/Destination
struct CORDL_TYPE SelectSubMenuDestination_Destination {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SelectSubMenuDestination_Destination_Unwrapped
  enum struct __SelectSubMenuDestination_Destination_Unwrapped : int32_t {
    __E_MainMenu = static_cast<int32_t>(0x0),
    __E_Campaign = static_cast<int32_t>(0x1),
    __E_SoloFreePlay = static_cast<int32_t>(0x2),
    __E_PartyFreePlay = static_cast<int32_t>(0x3),
    __E_Settings = static_cast<int32_t>(0x4),
    __E_Tutorial = static_cast<int32_t>(0x5),
    __E_Multiplayer = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SelectSubMenuDestination_Destination_Unwrapped() const noexcept {
    return static_cast<__SelectSubMenuDestination_Destination_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectSubMenuDestination_Destination();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectSubMenuDestination_Destination(int32_t value__) noexcept;

  /// @brief Field Campaign value: I32(1)
  static ::GlobalNamespace::SelectSubMenuDestination_Destination const Campaign;

  /// @brief Field MainMenu value: I32(0)
  static ::GlobalNamespace::SelectSubMenuDestination_Destination const MainMenu;

  /// @brief Field Multiplayer value: I32(6)
  static ::GlobalNamespace::SelectSubMenuDestination_Destination const Multiplayer;

  /// @brief Field PartyFreePlay value: I32(3)
  static ::GlobalNamespace::SelectSubMenuDestination_Destination const PartyFreePlay;

  /// @brief Field Settings value: I32(4)
  static ::GlobalNamespace::SelectSubMenuDestination_Destination const Settings;

  /// @brief Field SoloFreePlay value: I32(2)
  static ::GlobalNamespace::SelectSubMenuDestination_Destination const SoloFreePlay;

  /// @brief Field Tutorial value: I32(5)
  static ::GlobalNamespace::SelectSubMenuDestination_Destination const Tutorial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12819 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectSubMenuDestination_Destination, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectSubMenuDestination_Destination, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MenuDestination, SelectSubMenuDestination::Destination
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectSubMenuDestination
class CORDL_TYPE SelectSubMenuDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  using Destination = ::GlobalNamespace::SelectSubMenuDestination_Destination;

  /// @brief Field menuDestination, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_menuDestination, put = __cordl_internal_set_menuDestination)) ::GlobalNamespace::SelectSubMenuDestination_Destination menuDestination;

  static inline ::GlobalNamespace::SelectSubMenuDestination* New_ctor(::GlobalNamespace::SelectSubMenuDestination_Destination menuDestination);

  constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination const& __cordl_internal_get_menuDestination() const;

  constexpr ::GlobalNamespace::SelectSubMenuDestination_Destination& __cordl_internal_get_menuDestination();

  constexpr void __cordl_internal_set_menuDestination(::GlobalNamespace::SelectSubMenuDestination_Destination value);

  /// @brief Method .ctor, addr 0x26aee70, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SelectSubMenuDestination_Destination menuDestination);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectSubMenuDestination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectSubMenuDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectSubMenuDestination(SelectSubMenuDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectSubMenuDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectSubMenuDestination(SelectSubMenuDestination const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12820 };

  /// @brief Field menuDestination, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::SelectSubMenuDestination_Destination ___menuDestination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectSubMenuDestination, ___menuDestination) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectSubMenuDestination, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectSubMenuDestination_Destination, "", "SelectSubMenuDestination/Destination");
NEED_NO_BOX(::GlobalNamespace::SelectSubMenuDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectSubMenuDestination*, "", "SelectSubMenuDestination");
