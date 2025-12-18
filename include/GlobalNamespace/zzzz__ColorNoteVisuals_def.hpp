#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorNoteVisuals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorNoteVisuals)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorNoteVisuals;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorNoteVisuals);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorNoteVisuals
class CORDL_TYPE ColorNoteVisuals : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _arrowMeshRenderers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__arrowMeshRenderers,
                      put = __cordl_internal_set__arrowMeshRenderers)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>
      _arrowMeshRenderers;

  /// @brief Field _circleMeshRenderers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__circleMeshRenderers,
                      put = __cordl_internal_set__circleMeshRenderers)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>
      _circleMeshRenderers;

  /// @brief Field _colorId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__colorId, put = setStaticF__colorId)) int32_t _colorId;

  /// @brief Field _colorManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _defaultColorAlpha, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultColorAlpha, put = __cordl_internal_set__defaultColorAlpha)) float_t _defaultColorAlpha;

  /// @brief Field _materialPropertyBlockControllers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockControllers,
                      put = __cordl_internal_set__materialPropertyBlockControllers)) ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>,
                                                                                              ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>
      _materialPropertyBlockControllers;

  /// @brief Field _noteColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__noteColor, put = __cordl_internal_set__noteColor)) ::UnityEngine::Color _noteColor;

  /// @brief Field _noteController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__noteController, put = __cordl_internal_set__noteController)) ::UnityW<::GlobalNamespace::NoteControllerBase> _noteController;

  /// @brief Field didInitEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_didInitEvent,
                      put = __cordl_internal_set_didInitEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* didInitEvent;

  __declspec(property(put = set_showArrow)) bool showArrow;

  __declspec(property(put = set_showCircle)) bool showCircle;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept;

  /// @brief Method Awake, addr 0x5725570, size 0x1dc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNoteControllerDidInit, addr 0x572597c, size 0x178, virtual true, abstract: false, final true
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method HandleNoteControllerNoteDidPassJumpThreeQuarters, addr 0x5725af4, size 0x20, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method HandleNoteControllerNoteDidStartDissolving, addr 0x5725b14, size 0x20, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration);

  static inline ::GlobalNamespace::ColorNoteVisuals* New_ctor();

  /// @brief Method OnDestroy, addr 0x572574c, size 0x230, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get__arrowMeshRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get__arrowMeshRenderers();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get__circleMeshRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get__circleMeshRenderers();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr float_t const& __cordl_internal_get__defaultColorAlpha() const;

  constexpr float_t& __cordl_internal_get__defaultColorAlpha();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> const&
  __cordl_internal_get__materialPropertyBlockControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>&
  __cordl_internal_get__materialPropertyBlockControllers();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__noteColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__noteColor();

  constexpr ::UnityW<::GlobalNamespace::NoteControllerBase> const& __cordl_internal_get__noteController() const;

  constexpr ::UnityW<::GlobalNamespace::NoteControllerBase>& __cordl_internal_get__noteController();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* const& __cordl_internal_get_didInitEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>*& __cordl_internal_get_didInitEvent();

  constexpr void __cordl_internal_set__arrowMeshRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  constexpr void __cordl_internal_set__circleMeshRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__defaultColorAlpha(float_t value);

  constexpr void __cordl_internal_set__materialPropertyBlockControllers(
      ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> value);

  constexpr void __cordl_internal_set__noteColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__noteController(::UnityW<::GlobalNamespace::NoteControllerBase> value);

  constexpr void __cordl_internal_set_didInitEvent(::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* value);

  /// @brief Method .ctor, addr 0x5725b34, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didInitEvent, addr 0x5725328, size 0xc0, virtual false, abstract: false, final false
  inline void add_didInitEvent(::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* value);

  static inline int32_t getStaticF__colorId();

  /// @brief Convert to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr ::GlobalNamespace::INoteControllerDidInitEvent* i___GlobalNamespace__INoteControllerDidInitEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent* i___GlobalNamespace__INoteControllerNoteDidPassJumpThreeQuartersEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent* i___GlobalNamespace__INoteControllerNoteDidStartDissolvingEvent() noexcept;

  /// @brief Method remove_didInitEvent, addr 0x57253e8, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didInitEvent(::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* value);

  static inline void setStaticF__colorId(int32_t value);

  /// @brief Method set_showArrow, addr 0x57254a8, size 0x64, virtual false, abstract: false, final false
  inline void set_showArrow(bool value);

  /// @brief Method set_showCircle, addr 0x572550c, size 0x64, virtual false, abstract: false, final false
  inline void set_showCircle(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorNoteVisuals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorNoteVisuals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorNoteVisuals(ColorNoteVisuals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorNoteVisuals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorNoteVisuals(ColorNoteVisuals const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5659 };

  /// @brief Field _defaultColorAlpha, offset: 0x20, size: 0x4, def value: None
  float_t ____defaultColorAlpha;

  /// @brief Field _noteController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteControllerBase> ____noteController;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> ____materialPropertyBlockControllers;

  /// @brief Field _arrowMeshRenderers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ____arrowMeshRenderers;

  /// @brief Field _circleMeshRenderers, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ____circleMeshRenderers;

  /// @brief Field _colorManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field didInitEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* ___didInitEvent;

  /// @brief Field _noteColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____noteColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____defaultColorAlpha) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____noteController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____materialPropertyBlockControllers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____arrowMeshRenderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____circleMeshRenderers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____colorManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ___didInitEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____noteColor) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorNoteVisuals, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorNoteVisuals);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorNoteVisuals*, "", "ColorNoteVisuals");
