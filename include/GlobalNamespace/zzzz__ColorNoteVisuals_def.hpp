#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorNoteVisuals)
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class NoteControllerBase;
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
// Type: ::ColorNoteVisuals
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4740))
// CS Name: ::ColorNoteVisuals*
class CORDL_TYPE ColorNoteVisuals : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _defaultColorAlpha, offset 0x18, size 0x4
  __declspec(property(get = __get__defaultColorAlpha, put = __set__defaultColorAlpha)) float_t _defaultColorAlpha;

  /// @brief Field _noteController, offset 0x20, size 0x8
  __declspec(property(get = __get__noteController, put = __set__noteController))::GlobalNamespace::NoteControllerBase* _noteController;

  /// @brief Field _materialPropertyBlockControllers, offset 0x28, size 0x8
  __declspec(property(get = __get__materialPropertyBlockControllers,
                      put = __set__materialPropertyBlockControllers))::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,
                                                                              ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> _materialPropertyBlockControllers;

  /// @brief Field _arrowMeshRenderers, offset 0x30, size 0x8
  __declspec(property(get = __get__arrowMeshRenderers, put = __set__arrowMeshRenderers))::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> _arrowMeshRenderers;

  /// @brief Field _circleMeshRenderers, offset 0x38, size 0x8
  __declspec(property(get = __get__circleMeshRenderers, put = __set__circleMeshRenderers))::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> _circleMeshRenderers;

  /// @brief Field _colorManager, offset 0x40, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field didInitEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_didInitEvent, put = __set_didInitEvent))::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>* didInitEvent;

  /// @brief Field _noteColor, offset 0x50, size 0x10
  __declspec(property(get = __get__noteColor, put = __set__noteColor))::UnityEngine::Color _noteColor;

  /// @brief Field _colorId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorId, put = setStaticF__colorId)) int32_t _colorId;

  __declspec(property(put = set_showArrow)) bool showArrow;

  __declspec(property(put = set_showCircle)) bool showCircle;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept;

  constexpr float_t& __get__defaultColorAlpha();

  constexpr float_t const& __get__defaultColorAlpha() const;

  constexpr void __set__defaultColorAlpha(float_t value);

  constexpr ::GlobalNamespace::NoteControllerBase*& __get__noteController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteControllerBase*> const& __get__noteController() const;

  constexpr void __set__noteController(::GlobalNamespace::NoteControllerBase* value);

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& __get__materialPropertyBlockControllers();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& __get__materialPropertyBlockControllers() const;

  constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> value);

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& __get__arrowMeshRenderers();

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& __get__arrowMeshRenderers() const;

  constexpr void __set__arrowMeshRenderers(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value);

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& __get__circleMeshRenderers();

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& __get__circleMeshRenderers() const;

  constexpr void __set__circleMeshRenderers(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>*& __get_didInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>*> const& __get_didInitEvent() const;

  constexpr void __set_didInitEvent(::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>* value);

  constexpr ::UnityEngine::Color& __get__noteColor();

  constexpr ::UnityEngine::Color const& __get__noteColor() const;

  constexpr void __set__noteColor(::UnityEngine::Color value);

  static inline void setStaticF__colorId(int32_t value);

  static inline int32_t getStaticF__colorId();

  /// @brief Method add_didInitEvent, addr 0x2384c18, size 0xb0, virtual false, abstract: false, final false
  inline void add_didInitEvent(::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>* value);

  /// @brief Method remove_didInitEvent, addr 0x2384cc8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didInitEvent(::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>* value);

  /// @brief Method set_showArrow, addr 0x2384d78, size 0x68, virtual false, abstract: false, final false
  inline void set_showArrow(bool value);

  /// @brief Method set_showCircle, addr 0x2384de0, size 0x68, virtual false, abstract: false, final false
  inline void set_showCircle(bool value);

  /// @brief Method Awake, addr 0x2384e48, size 0x1d0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x2385018, size 0x220, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNoteControllerDidInit, addr 0x2385238, size 0x178, virtual true, abstract: false, final true
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method HandleNoteControllerNoteDidPassJumpThreeQuarters, addr 0x23853b0, size 0x20, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method HandleNoteControllerNoteDidStartDissolving, addr 0x23853d0, size 0x20, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration);

  static inline ::GlobalNamespace::ColorNoteVisuals* New_ctor();

  /// @brief Method .ctor, addr 0x23853f0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorNoteVisuals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorNoteVisuals(ColorNoteVisuals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorNoteVisuals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorNoteVisuals(ColorNoteVisuals const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorNoteVisuals();

public:
  /// @brief Field _defaultColorAlpha, offset: 0x18, size: 0x4, def value: None
  float_t ____defaultColorAlpha;

  /// @brief Field _noteController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NoteControllerBase* ____noteController;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> ____materialPropertyBlockControllers;

  /// @brief Field _arrowMeshRenderers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> ____arrowMeshRenderers;

  /// @brief Field _circleMeshRenderers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> ____circleMeshRenderers;

  /// @brief Field _colorManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field didInitEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>* ___didInitEvent;

  /// @brief Field _noteColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____noteColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorNoteVisuals, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____defaultColorAlpha) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____noteController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____materialPropertyBlockControllers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____arrowMeshRenderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____circleMeshRenderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____colorManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ___didInitEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorNoteVisuals, ____noteColor) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorNoteVisuals);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorNoteVisuals*, "", "ColorNoteVisuals");
