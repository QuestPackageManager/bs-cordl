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
  /// @brief Field _colorScheme, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme)) ::StringW _colorScheme;

  /// @brief Field _environment, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__environment, put = __cordl_internal_set__environment)) ::StringW _environment;

  /// @brief Field _overrideLightshowColors, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideLightshowColors, put = __cordl_internal_set__overrideLightshowColors)) bool _overrideLightshowColors;

  __declspec(property(get = get_colorScheme)) ::StringW colorScheme;

  __declspec(property(get = get_environment)) ::StringW environment;

  __declspec(property(get = get_overrideColorScheme)) bool overrideColorScheme;

  __declspec(property(get = get_overrideEnvironment)) bool overrideEnvironment;

  __declspec(property(get = get_overrideLightshowColors)) bool overrideLightshowColors;

  static inline ::BeatSaber::Destinations::GameplayEnvironmentOverride* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__colorScheme() const;

  constexpr ::StringW& __cordl_internal_get__colorScheme();

  constexpr ::StringW const& __cordl_internal_get__environment() const;

  constexpr ::StringW& __cordl_internal_get__environment();

  constexpr bool const& __cordl_internal_get__overrideLightshowColors() const;

  constexpr bool& __cordl_internal_get__overrideLightshowColors();

  constexpr void __cordl_internal_set__colorScheme(::StringW value);

  constexpr void __cordl_internal_set__environment(::StringW value);

  constexpr void __cordl_internal_set__overrideLightshowColors(bool value);

  /// @brief Method .ctor, addr 0x3181814, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorScheme, addr 0x3181804, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_colorScheme();

  /// @brief Method get_environment, addr 0x31817dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_environment();

  /// @brief Method get_overrideColorScheme, addr 0x31817e4, size 0x20, virtual false, abstract: false, final false
  inline bool get_overrideColorScheme();

  /// @brief Method get_overrideEnvironment, addr 0x31817bc, size 0x20, virtual false, abstract: false, final false
  inline bool get_overrideEnvironment();

  /// @brief Method get_overrideLightshowColors, addr 0x318180c, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideLightshowColors();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22655 };

  /// @brief Field _environment, offset: 0x10, size: 0x8, def value: None
  ::StringW ____environment;

  /// @brief Field _colorScheme, offset: 0x18, size: 0x8, def value: None
  ::StringW ____colorScheme;

  /// @brief Field _overrideLightshowColors, offset: 0x20, size: 0x1, def value: None
  bool ____overrideLightshowColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::GameplayEnvironmentOverride, ____environment) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::GameplayEnvironmentOverride, ____colorScheme) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::GameplayEnvironmentOverride, ____overrideLightshowColors) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::GameplayEnvironmentOverride, 0x28>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::GameplayEnvironmentOverride);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::GameplayEnvironmentOverride*, "BeatSaber.Destinations", "GameplayEnvironmentOverride");
