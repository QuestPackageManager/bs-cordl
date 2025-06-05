#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneGraphicSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StandaloneGraphicSettingsViewController)
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
class NamedIntListSettingsController;
}
namespace GlobalNamespace {
class PresetsSettingsController;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneGraphicSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandaloneGraphicSettingsViewController);
// Dependencies GraphicSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandaloneGraphicSettingsViewController
class CORDL_TYPE StandaloneGraphicSettingsViewController : public ::GlobalNamespace::GraphicSettingsViewController {
public:
  // Declarations
  /// @brief Field _antiAliasingLevel, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__antiAliasingLevel, put = __cordl_internal_set__antiAliasingLevel)) ::UnityW<::GlobalNamespace::NamedIntListSettingsController> _antiAliasingLevel;

  /// @brief Field _fullscreen, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__fullscreen, put = __cordl_internal_set__fullscreen)) ::UnityW<::UnityEngine::UI::Toggle> _fullscreen;

  /// @brief Field _mainEffect, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffect, put = __cordl_internal_set__mainEffect)) ::UnityW<::GlobalNamespace::PresetsSettingsController> _mainEffect;

  /// @brief Field _mirror, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__mirror, put = __cordl_internal_set__mirror)) ::UnityW<::GlobalNamespace::PresetsSettingsController> _mirror;

  /// @brief Field _screenDisplacementEffects, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__screenDisplacementEffects, put = __cordl_internal_set__screenDisplacementEffects)) ::UnityW<::UnityEngine::UI::Toggle> _screenDisplacementEffects;

  /// @brief Field _shockwaveMaxParticles, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__shockwaveMaxParticles, put = __cordl_internal_set__shockwaveMaxParticles)) ::UnityW<::GlobalNamespace::NamedIntListSettingsController>
      _shockwaveMaxParticles;

  /// @brief Field _smoke, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__smoke, put = __cordl_internal_set__smoke)) ::UnityW<::UnityEngine::UI::Toggle> _smoke;

  /// @brief Field _vrRenderingScale, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__vrRenderingScale, put = __cordl_internal_set__vrRenderingScale)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> _vrRenderingScale;

  /// @brief Method DidActivate, addr 0x3af9c14, size 0x3e4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3af9ff8, size 0x2e4, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleAntiAliasingLevelChanged, addr 0x3afa2dc, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAntiAliasingLevelChanged(int32_t newValue);

  /// @brief Method HandleFullscreenToggled, addr 0x3afa314, size 0x20, virtual false, abstract: false, final false
  inline void HandleFullscreenToggled(bool newValue);

  /// @brief Method HandleMainEffectChanged, addr 0x3afa394, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMainEffectChanged(int32_t newValue);

  /// @brief Method HandleMirrorChanged, addr 0x3afa3b0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMirrorChanged(int32_t newValue);

  /// @brief Method HandleScreenDisplacementToggled, addr 0x3afa374, size 0x20, virtual false, abstract: false, final false
  inline void HandleScreenDisplacementToggled(bool newValue);

  /// @brief Method HandleShockwaveMaxParticlesChanged, addr 0x3afa334, size 0x1c, virtual false, abstract: false, final false
  inline void HandleShockwaveMaxParticlesChanged(int32_t newValue);

  /// @brief Method HandleSmokeToggled, addr 0x3afa350, size 0x24, virtual false, abstract: false, final false
  inline void HandleSmokeToggled(bool newValue);

  /// @brief Method HandleVrRenderingScaleChanged, addr 0x3afa2f8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleVrRenderingScaleChanged(::GlobalNamespace::FormattedFloatListSettingsController* _, float_t newValue);

  static inline ::GlobalNamespace::StandaloneGraphicSettingsViewController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController> const& __cordl_internal_get__antiAliasingLevel() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController>& __cordl_internal_get__antiAliasingLevel();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__fullscreen() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__fullscreen();

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController> const& __cordl_internal_get__mainEffect() const;

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController>& __cordl_internal_get__mainEffect();

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController> const& __cordl_internal_get__mirror() const;

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController>& __cordl_internal_get__mirror();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__screenDisplacementEffects() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__screenDisplacementEffects();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController> const& __cordl_internal_get__shockwaveMaxParticles() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController>& __cordl_internal_get__shockwaveMaxParticles();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__smoke() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__smoke();

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__vrRenderingScale() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__vrRenderingScale();

  constexpr void __cordl_internal_set__antiAliasingLevel(::UnityW<::GlobalNamespace::NamedIntListSettingsController> value);

  constexpr void __cordl_internal_set__fullscreen(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__mainEffect(::UnityW<::GlobalNamespace::PresetsSettingsController> value);

  constexpr void __cordl_internal_set__mirror(::UnityW<::GlobalNamespace::PresetsSettingsController> value);

  constexpr void __cordl_internal_set__screenDisplacementEffects(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__shockwaveMaxParticles(::UnityW<::GlobalNamespace::NamedIntListSettingsController> value);

  constexpr void __cordl_internal_set__smoke(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__vrRenderingScale(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  /// @brief Method .ctor, addr 0x3afa3cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneGraphicSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandaloneGraphicSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneGraphicSettingsViewController(StandaloneGraphicSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneGraphicSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneGraphicSettingsViewController(StandaloneGraphicSettingsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4950 };

  /// @brief Field _antiAliasingLevel, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListSettingsController> ____antiAliasingLevel;

  /// @brief Field _vrRenderingScale, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____vrRenderingScale;

  /// @brief Field _fullscreen, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____fullscreen;

  /// @brief Field _shockwaveMaxParticles, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListSettingsController> ____shockwaveMaxParticles;

  /// @brief Field _smoke, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____smoke;

  /// @brief Field _screenDisplacementEffects, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____screenDisplacementEffects;

  /// @brief Field _mainEffect, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PresetsSettingsController> ____mainEffect;

  /// @brief Field _mirror, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PresetsSettingsController> ____mirror;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____antiAliasingLevel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____vrRenderingScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____fullscreen) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____shockwaveMaxParticles) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____smoke) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____screenDisplacementEffects) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____mainEffect) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____mirror) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneGraphicSettingsViewController, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandaloneGraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneGraphicSettingsViewController*, "", "StandaloneGraphicSettingsViewController");
