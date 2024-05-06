#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaseNoteVisuals)
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseNoteVisuals;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseNoteVisuals);
// Type: ::BaseNoteVisuals
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BaseNoteVisuals*
class CORDL_TYPE BaseNoteVisuals : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cutoutAnimateEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cutoutAnimateEffect, put = __cordl_internal_set__cutoutAnimateEffect))::UnityW<::GlobalNamespace::CutoutAnimateEffect> _cutoutAnimateEffect;

  /// @brief Field _noteController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__noteController, put = __cordl_internal_set__noteController))::UnityW<::GlobalNamespace::NoteControllerBase> _noteController;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept;

  /// @brief Method AnimateCutout, addr 0x261a754, size 0x2c, virtual false, abstract: false, final false
  inline void AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration);

  /// @brief Method Awake, addr 0x261a454, size 0x144, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNoteControllerDidInit, addr 0x261a728, size 0x1c, virtual true, abstract: false, final true
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method HandleNoteControllerNoteDidStartDissolving, addr 0x261a744, size 0x10, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration);

  static inline ::GlobalNamespace::BaseNoteVisuals* New_ctor();

  /// @brief Method OnDestroy, addr 0x261a598, size 0x190, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect> const& __cordl_internal_get__cutoutAnimateEffect() const;

  constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect>& __cordl_internal_get__cutoutAnimateEffect();

  constexpr ::UnityW<::GlobalNamespace::NoteControllerBase> const& __cordl_internal_get__noteController() const;

  constexpr ::UnityW<::GlobalNamespace::NoteControllerBase>& __cordl_internal_get__noteController();

  constexpr void __cordl_internal_set__cutoutAnimateEffect(::UnityW<::GlobalNamespace::CutoutAnimateEffect> value);

  constexpr void __cordl_internal_set__noteController(::UnityW<::GlobalNamespace::NoteControllerBase> value);

  /// @brief Method .ctor, addr 0x261a780, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr ::GlobalNamespace::INoteControllerDidInitEvent* i___GlobalNamespace__INoteControllerDidInitEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent* i___GlobalNamespace__INoteControllerNoteDidStartDissolvingEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseNoteVisuals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseNoteVisuals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseNoteVisuals(BaseNoteVisuals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseNoteVisuals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseNoteVisuals(BaseNoteVisuals const&) = delete;

  /// @brief Field _noteController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteControllerBase> ____noteController;

  /// @brief Field _cutoutAnimateEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CutoutAnimateEffect> ____cutoutAnimateEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseNoteVisuals, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNoteVisuals, ____noteController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNoteVisuals, ____cutoutAnimateEffect) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseNoteVisuals);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNoteVisuals*, "", "BaseNoteVisuals");
