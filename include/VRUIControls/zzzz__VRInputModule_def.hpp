#pragma once
// IWYU pragma private; include "VRUIControls/VRInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRInputModule)
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace VRUIControls {
class MouseButtonEventData;
}
namespace VRUIControls {
class MouseState;
}
namespace VRUIControls {
class VRPointer;
}
// Forward declare root types
namespace VRUIControls {
class VRInputModule;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::VRInputModule);
// Type: VRUIControls::VRInputModule
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: false
// CS Name: ::VRUIControls::VRInputModule*
class CORDL_TYPE VRInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
  // Declarations
  /// @brief Field _componentList, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__componentList, put = __cordl_internal_set__componentList))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* _componentList;

  /// @brief Field _hapticFeedbackManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager))::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _mouseState, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__mouseState, put = __cordl_internal_set__mouseState))::VRUIControls::MouseState* _mouseState;

  /// @brief Field _pointerData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerData,
                      put = __cordl_internal_set__pointerData))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* _pointerData;

  /// @brief Field _raycastComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__raycastComparer, put = setStaticF__raycastComparer))::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* _raycastComparer;

  /// @brief Field _rumblePreset, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__rumblePreset, put = __cordl_internal_set__rumblePreset))::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _rumblePreset;

  /// @brief Field _vrPointer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPointer, put = __cordl_internal_set__vrPointer))::UnityW<::VRUIControls::VRPointer> _vrPointer;

  /// @brief Field onProcessMousePressEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_onProcessMousePressEvent,
                      put = __cordl_internal_set_onProcessMousePressEvent))::System::Action_1<::UnityW<::UnityEngine::GameObject>>* onProcessMousePressEvent;

  /// @brief Method ClearSelection, addr 0x364d14c, size 0x208, virtual false, abstract: false, final false
  inline void ClearSelection();

  /// @brief Method DeselectIfSelectionChanged, addr 0x364e6f8, size 0xf0, virtual false, abstract: false, final false
  inline void DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent);

  /// @brief Method GetLastPointerEventData, addr 0x364d7c8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int32_t id);

  /// @brief Method GetMousePointerEventData, addr 0x364d440, size 0x388, virtual true, abstract: false, final false
  inline ::VRUIControls::MouseState* GetMousePointerEventData(int32_t id);

  /// @brief Method GetPointerData, addr 0x364d354, size 0xec, virtual false, abstract: false, final false
  inline bool GetPointerData(int32_t id, ByRef<::UnityEngine::EventSystems::PointerEventData*> data, bool create);

  /// @brief Method HandlePointerExitAndEnter, addr 0x364d830, size 0x8f8, virtual false, abstract: false, final false
  inline void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget);

  /// @brief Method IsPointerOverGameObject, addr 0x364e3ec, size 0x9c, virtual true, abstract: false, final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  static inline ::VRUIControls::VRInputModule* New_ctor();

  /// @brief Method OnDisable, addr 0x364d130, size 0x1c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Process, addr 0x364e7e8, size 0x214, virtual true, abstract: false, final false
  inline void Process();

  /// @brief Method ProcessDrag, addr 0x364e128, size 0x2c4, virtual true, abstract: false, final false
  inline void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method ProcessMousePress, addr 0x364e9fc, size 0x720, virtual false, abstract: false, final false
  inline void ProcessMousePress(::VRUIControls::MouseButtonEventData* data);

  /// @brief Method ProcessMove, addr 0x364d818, size 0x18, virtual true, abstract: false, final false
  inline void ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method RaycastComparer, addr 0x364f2cc, size 0x3e4, virtual false, abstract: false, final false
  static inline int32_t RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs);

  /// @brief Method SendUpdateEventToSelectedObject, addr 0x364f184, size 0x148, virtual false, abstract: false, final false
  inline bool SendUpdateEventToSelectedObject();

  /// @brief Method ShouldStartDrag, addr 0x364d7e8, size 0x30, virtual false, abstract: false, final false
  inline bool ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold);

  /// @brief Method ToString, addr 0x364e488, size 0x270, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*& __cordl_internal_get__componentList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*> const& __cordl_internal_get__componentList() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::VRUIControls::MouseState*& __cordl_internal_get__mouseState();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::MouseState*> const& __cordl_internal_get__mouseState() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get__pointerData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*> const&
  __cordl_internal_get__pointerData() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__rumblePreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__rumblePreset();

  constexpr ::UnityW<::VRUIControls::VRPointer> const& __cordl_internal_get__vrPointer() const;

  constexpr ::UnityW<::VRUIControls::VRPointer>& __cordl_internal_get__vrPointer();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_onProcessMousePressEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_onProcessMousePressEvent() const;

  constexpr void __cordl_internal_set__componentList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__mouseState(::VRUIControls::MouseState* value);

  constexpr void __cordl_internal_set__pointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set__rumblePreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__vrPointer(::UnityW<::VRUIControls::VRPointer> value);

  constexpr void __cordl_internal_set_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method .ctor, addr 0x364f6b0, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onProcessMousePressEvent, addr 0x364cfd0, size 0xb0, virtual false, abstract: false, final false
  inline void add_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  static inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* getStaticF__raycastComparer();

  /// @brief Method remove_onProcessMousePressEvent, addr 0x364d080, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF__raycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRInputModule(VRInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRInputModule(VRInputModule const&) = delete;

  /// @brief Field _vrPointer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRPointer> ____vrPointer;

  /// @brief Field _rumblePreset, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____rumblePreset;

  /// @brief Field _hapticFeedbackManager, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field onProcessMousePressEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::GameObject>>* ___onProcessMousePressEvent;

  /// @brief Field _pointerData, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* ____pointerData;

  /// @brief Field _componentList, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* ____componentList;

  /// @brief Field _mouseState, offset: 0x80, size: 0x8, def value: None
  ::VRUIControls::MouseState* ____mouseState;

  /// @brief Field kMinPressValue offset 0xffffffff size 0x4
  static constexpr float_t kMinPressValue{ 0.9 };

  /// @brief Field kMouseLeftId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseLeftId{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::VRInputModule, 0x88>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____vrPointer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____rumblePreset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____hapticFeedbackManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ___onProcessMousePressEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____pointerData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____componentList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____mouseState) == 0x80, "Offset mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::VRInputModule);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRInputModule*, "VRUIControls", "VRInputModule");
