#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/GameplayEnvironmentOverride.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameplayEnvironmentOverride)
// Forward declare root types
namespace BeatSaber::Destinations {
class GameplayEnvironmentOverride;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::GameplayEnvironmentOverride);
// Dependencies System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.GameplayEnvironmentOverride
class CORDL_TYPE GameplayEnvironmentOverride : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorScheme, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_colorScheme, put = __cordl_internal_set_colorScheme)) ::StringW colorScheme;

  /// @brief Field environment, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_environment, put = __cordl_internal_set_environment)) ::StringW environment;

  __declspec(property(get = get_overrideColorScheme)) bool overrideColorScheme;

  __declspec(property(get = get_overrideEnvironment)) bool overrideEnvironment;

  /// @brief Field overrideLightshowColors, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideLightshowColors, put = __cordl_internal_set_overrideLightshowColors)) bool overrideLightshowColors;

  static inline ::BeatSaber::Destinations::GameplayEnvironmentOverride* New_ctor();

  static inline ::BeatSaber::Destinations::GameplayEnvironmentOverride* New_ctor(::StringW environment, ::StringW colorScheme, bool overrideLightshowColors);

  constexpr ::StringW const& __cordl_internal_get_colorScheme() const;

  constexpr ::StringW& __cordl_internal_get_colorScheme();

  constexpr ::StringW const& __cordl_internal_get_environment() const;

  constexpr ::StringW& __cordl_internal_get_environment();

  constexpr bool const& __cordl_internal_get_overrideLightshowColors() const;

  constexpr bool& __cordl_internal_get_overrideLightshowColors();

  constexpr void __cordl_internal_set_colorScheme(::StringW value);

  constexpr void __cordl_internal_set_environment(::StringW value);

  constexpr void __cordl_internal_set_overrideLightshowColors(bool value);

  /// @brief Method .ctor, addr 0x31b1670, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x31b168c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW environment, ::StringW colorScheme, bool overrideLightshowColors);

  /// @brief Method get_overrideColorScheme, addr 0x31b1650, size 0x20, virtual false, abstract: false, final false
  inline bool get_overrideColorScheme();

  /// @brief Method get_overrideEnvironment, addr 0x31b1630, size 0x20, virtual false, abstract: false, final false
  inline bool get_overrideEnvironment();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayEnvironmentOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayEnvironmentOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayEnvironmentOverride(GameplayEnvironmentOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayEnvironmentOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayEnvironmentOverride(GameplayEnvironmentOverride const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22745 };

  /// @brief Field environment, offset: 0x10, size: 0x8, def value: None
  ::StringW ___environment;

  /// @brief Field colorScheme, offset: 0x18, size: 0x8, def value: None
  ::StringW ___colorScheme;

  /// @brief Field overrideLightshowColors, offset: 0x20, size: 0x1, def value: None
  bool ___overrideLightshowColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::GameplayEnvironmentOverride, ___environment) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::GameplayEnvironmentOverride, ___colorScheme) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::GameplayEnvironmentOverride, ___overrideLightshowColors) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::GameplayEnvironmentOverride, 0x28>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::GameplayEnvironmentOverride);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::GameplayEnvironmentOverride*, "BeatSaber.Destinations", "GameplayEnvironmentOverride");
