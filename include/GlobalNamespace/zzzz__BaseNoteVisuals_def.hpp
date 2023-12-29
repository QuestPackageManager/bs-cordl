#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaseNoteVisuals)
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class CutoutAnimateEffect;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4855))
// CS Name: ::BaseNoteVisuals*
class CORDL_TYPE BaseNoteVisuals : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _noteController, offset 0x18, size 0x8
  __declspec(property(get = __get__noteController, put = __set__noteController))::GlobalNamespace::NoteControllerBase* _noteController;

  /// @brief Field _cutoutAnimateEffect, offset 0x20, size 0x8
  __declspec(property(get = __get__cutoutAnimateEffect, put = __set__cutoutAnimateEffect))::GlobalNamespace::CutoutAnimateEffect* _cutoutAnimateEffect;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept;

  constexpr ::GlobalNamespace::NoteControllerBase*& __get__noteController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteControllerBase*> const& __get__noteController() const;

  constexpr void __set__noteController(::GlobalNamespace::NoteControllerBase* value);

  constexpr ::GlobalNamespace::CutoutAnimateEffect*& __get__cutoutAnimateEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutoutAnimateEffect*> const& __get__cutoutAnimateEffect() const;

  constexpr void __set__cutoutAnimateEffect(::GlobalNamespace::CutoutAnimateEffect* value);

  /// @brief Method Awake addr 0x224dcd8 size 0x144 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x224de1c size 0x190 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleNoteControllerDidInit addr 0x224dfac size 0x1c virtual true final true
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method HandleNoteControllerNoteDidStartDissolving addr 0x224dfc8 size 0x10 virtual true final true
  inline void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration);

  /// @brief Method AnimateCutout addr 0x224dfd8 size 0x2c virtual false final false
  inline void AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration);

  static inline ::GlobalNamespace::BaseNoteVisuals* New_ctor();

  /// @brief Method .ctor addr 0x224e004 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseNoteVisuals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseNoteVisuals(BaseNoteVisuals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseNoteVisuals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseNoteVisuals(BaseNoteVisuals const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseNoteVisuals();

public:
  /// @brief Field _noteController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::NoteControllerBase* ____noteController;

  /// @brief Field _cutoutAnimateEffect, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CutoutAnimateEffect* ____cutoutAnimateEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseNoteVisuals, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNoteVisuals, ____noteController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNoteVisuals, ____cutoutAnimateEffect) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseNoteVisuals);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNoteVisuals*, "", "BaseNoteVisuals");
