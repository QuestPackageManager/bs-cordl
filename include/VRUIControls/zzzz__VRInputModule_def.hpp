#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRInputModule)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace VRUIControls {
class VRPointer;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace VRUIControls {
class MouseButtonEventData;
}
namespace GlobalNamespace {
class HapticFeedbackController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace VRUIControls {
class MouseState;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13204))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15650))
// CS Name: ::VRUIControls::VRInputModule*
class CORDL_TYPE VRInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
  // Declarations
  /// @brief Field _vrPointer, offset 0x50, size 0x8
  __declspec(property(get = __get__vrPointer, put = __set__vrPointer))::VRUIControls::VRPointer* _vrPointer;

  /// @brief Field _rumblePreset, offset 0x58, size 0x8
  __declspec(property(get = __get__rumblePreset, put = __set__rumblePreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _rumblePreset;

  /// @brief Field _hapticFeedbackController, offset 0x60, size 0x8
  __declspec(property(get = __get__hapticFeedbackController, put = __set__hapticFeedbackController))::GlobalNamespace::HapticFeedbackController* _hapticFeedbackController;

  /// @brief Field onProcessMousePressEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_onProcessMousePressEvent, put = __set_onProcessMousePressEvent))::System::Action_1<::UnityEngine::GameObject*>* onProcessMousePressEvent;

  /// @brief Field _pointerData, offset 0x70, size 0x8
  __declspec(property(get = __get__pointerData, put = __set__pointerData))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* _pointerData;

  /// @brief Field _componentList, offset 0x78, size 0x8
  __declspec(property(get = __get__componentList, put = __set__componentList))::System::Collections::Generic::List_1<::UnityEngine::Component*>* _componentList;

  /// @brief Field _mouseState, offset 0x80, size 0x8
  __declspec(property(get = __get__mouseState, put = __set__mouseState))::VRUIControls::MouseState* _mouseState;

  /// @brief Field _raycastComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__raycastComparer, put = setStaticF__raycastComparer))::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* _raycastComparer;

  constexpr ::VRUIControls::VRPointer*& __get__vrPointer();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRPointer*> const& __get__vrPointer() const;

  constexpr void __set__vrPointer(::VRUIControls::VRPointer* value);

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__rumblePreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__rumblePreset() const;

  constexpr void __set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr ::GlobalNamespace::HapticFeedbackController*& __get__hapticFeedbackController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackController*> const& __get__hapticFeedbackController() const;

  constexpr void __set__hapticFeedbackController(::GlobalNamespace::HapticFeedbackController* value);

  constexpr ::System::Action_1<::UnityEngine::GameObject*>*& __get_onProcessMousePressEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::GameObject*>*> const& __get_onProcessMousePressEvent() const;

  constexpr void __set_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& __get__pointerData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*> const& __get__pointerData() const;

  constexpr void __set__pointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Component*>*& __get__componentList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Component*>*> const& __get__componentList() const;

  constexpr void __set__componentList(::System::Collections::Generic::List_1<::UnityEngine::Component*>* value);

  constexpr ::VRUIControls::MouseState*& __get__mouseState();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::MouseState*> const& __get__mouseState() const;

  constexpr void __set__mouseState(::VRUIControls::MouseState* value);

  static inline void setStaticF__raycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value);

  static inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* getStaticF__raycastComparer();

  /// @brief Method add_onProcessMousePressEvent addr 0x2d4d240 size 0xb0 virtual false final false
  inline void add_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>* value);

  /// @brief Method remove_onProcessMousePressEvent addr 0x2d4d2f0 size 0xb0 virtual false final false
  inline void remove_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>* value);

  /// @brief Method OnDisable addr 0x2d4d3a0 size 0x1c virtual true final false
  inline void OnDisable();

  /// @brief Method GetPointerData addr 0x2d4d5c4 size 0xec virtual false final false
  inline bool GetPointerData(int32_t id, ByRef<::UnityEngine::EventSystems::PointerEventData*> data, bool create);

  /// @brief Method GetMousePointerEventData addr 0x2d4d6b0 size 0x3ac virtual true final false
  inline ::VRUIControls::MouseState* GetMousePointerEventData(int32_t id);

  /// @brief Method GetLastPointerEventData addr 0x2d4da5c size 0x20 virtual false final false
  inline ::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int32_t id);

  /// @brief Method ShouldStartDrag addr 0x2d4da7c size 0x30 virtual false final false
  inline bool ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold);

  /// @brief Method ProcessMove addr 0x2d4daac size 0x18 virtual true final false
  inline void ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method ProcessDrag addr 0x2d4e3bc size 0x2c4 virtual true final false
  inline void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method IsPointerOverGameObject addr 0x2d4e680 size 0x9c virtual true final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  /// @brief Method ClearSelection addr 0x2d4d3bc size 0x208 virtual false final false
  inline void ClearSelection();

  /// @brief Method ToString addr 0x2d4e71c size 0x270 virtual true final false
  inline ::StringW ToString();

  /// @brief Method DeselectIfSelectionChanged addr 0x2d4e98c size 0xf0 virtual false final false
  inline void DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent);

  /// @brief Method Process addr 0x2d4ea7c size 0x1fc virtual true final false
  inline void Process();

  /// @brief Method SendUpdateEventToSelectedObject addr 0x2d4f400 size 0x148 virtual false final false
  inline bool SendUpdateEventToSelectedObject();

  /// @brief Method ProcessMousePress addr 0x2d4ec78 size 0x720 virtual false final false
  inline void ProcessMousePress(::VRUIControls::MouseButtonEventData* data);

  /// @brief Method HandlePointerExitAndEnter addr 0x2d4dac4 size 0x8f8 virtual false final false
  inline void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget);

  /// @brief Method RaycastComparer addr 0x2d4f548 size 0x3e4 virtual false final false
  static inline int32_t RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs);

  static inline ::VRUIControls::VRInputModule* New_ctor();

  /// @brief Method .ctor addr 0x2d4f92c size 0xf0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRInputModule(VRInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRInputModule(VRInputModule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRInputModule();

public:
  /// @brief Field _vrPointer, offset: 0x50, size: 0x8, def value: None
  ::VRUIControls::VRPointer* ____vrPointer;

  /// @brief Field _rumblePreset, offset: 0x58, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____rumblePreset;

  /// @brief Field _hapticFeedbackController, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::HapticFeedbackController* ____hapticFeedbackController;

  /// @brief Field onProcessMousePressEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::GameObject*>* ___onProcessMousePressEvent;

  /// @brief Field _pointerData, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* ____pointerData;

  /// @brief Field _componentList, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Component*>* ____componentList;

  /// @brief Field _mouseState, offset: 0x80, size: 0x8, def value: None
  ::VRUIControls::MouseState* ____mouseState;

  /// @brief Field kMouseLeftId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseLeftId{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kMinPressValue offset 0xffffffff size 0x4
  static constexpr float_t kMinPressValue{ 0.9 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::VRInputModule, 0x88>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____vrPointer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____rumblePreset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____hapticFeedbackController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ___onProcessMousePressEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____pointerData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____componentList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRInputModule, ____mouseState) == 0x80, "Offset mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::VRInputModule);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRInputModule*, "VRUIControls", "VRInputModule");
