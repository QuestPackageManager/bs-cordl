#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectSubMenuDestination.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__SelectSubMenuDestination_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectSubMenuDestination)
namespace GlobalNamespace {
struct __SelectSubMenuDestination__Destination;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SelectSubMenuDestination__Destination;
}
namespace GlobalNamespace {
class SelectSubMenuDestination;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SelectSubMenuDestination__Destination);
MARK_REF_PTR_T(::GlobalNamespace::SelectSubMenuDestination);
// Type: ::Destination
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SelectSubMenuDestination::Destination
struct CORDL_TYPE __SelectSubMenuDestination__Destination {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SelectSubMenuDestination__Destination_Unwrapped
  enum struct ____SelectSubMenuDestination__Destination_Unwrapped : int32_t {
    __E_MainMenu = static_cast<int32_t>(0x0),
    __E_Campaign = static_cast<int32_t>(0x1),
    __E_SoloFreePlay = static_cast<int32_t>(0x2),
    __E_PartyFreePlay = static_cast<int32_t>(0x3),
    __E_Settings = static_cast<int32_t>(0x4),
    __E_Tutorial = static_cast<int32_t>(0x5),
    __E_Multiplayer = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SelectSubMenuDestination__Destination_Unwrapped() const noexcept {
    return static_cast<____SelectSubMenuDestination__Destination_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectSubMenuDestination__Destination();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SelectSubMenuDestination__Destination(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Campaign value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SelectSubMenuDestination__Destination const Campaign;

  /// @brief Field MainMenu value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SelectSubMenuDestination__Destination const MainMenu;

  /// @brief Field Multiplayer value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__SelectSubMenuDestination__Destination const Multiplayer;

  /// @brief Field PartyFreePlay value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SelectSubMenuDestination__Destination const PartyFreePlay;

  /// @brief Field Settings value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__SelectSubMenuDestination__Destination const Settings;

  /// @brief Field SoloFreePlay value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SelectSubMenuDestination__Destination const SoloFreePlay;

  /// @brief Field Tutorial value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__SelectSubMenuDestination__Destination const Tutorial;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectSubMenuDestination__Destination, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectSubMenuDestination__Destination, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SelectSubMenuDestination
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectSubMenuDestination*
class CORDL_TYPE SelectSubMenuDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  using Destination = ::GlobalNamespace::__SelectSubMenuDestination__Destination;

  /// @brief Field menuDestination, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_menuDestination, put = __cordl_internal_set_menuDestination))::GlobalNamespace::__SelectSubMenuDestination__Destination menuDestination;

  static inline ::GlobalNamespace::SelectSubMenuDestination* New_ctor(::GlobalNamespace::__SelectSubMenuDestination__Destination menuDestination);

  constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination const& __cordl_internal_get_menuDestination() const;

  constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination& __cordl_internal_get_menuDestination();

  constexpr void __cordl_internal_set_menuDestination(::GlobalNamespace::__SelectSubMenuDestination__Destination value);

  /// @brief Method .ctor, addr 0x14abd94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__SelectSubMenuDestination__Destination menuDestination);

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

  /// @brief Field menuDestination, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__SelectSubMenuDestination__Destination ___menuDestination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectSubMenuDestination, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectSubMenuDestination, ___menuDestination) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectSubMenuDestination__Destination, "", "SelectSubMenuDestination/Destination");
NEED_NO_BOX(::GlobalNamespace::SelectSubMenuDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectSubMenuDestination*, "", "SelectSubMenuDestination");
