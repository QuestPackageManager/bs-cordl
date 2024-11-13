#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/PointerInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerInputModule)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__FramePressState;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__InputButton;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__ButtonState;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseButtonEventData;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseState;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class PointerInputModule;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__ButtonState;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseButtonEventData;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::PointerInputModule);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__PointerInputModule__ButtonState);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__PointerInputModule__MouseState);
// Type: ::ButtonState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: ::PointerInputModule::ButtonState*
class CORDL_TYPE __PointerInputModule__ButtonState : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_button, put = set_button)) ::UnityEngine::EventSystems::__PointerEventData__InputButton button;

  __declspec(property(get = get_eventData, put = set_eventData)) ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* eventData;

  /// @brief Field m_Button, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Button, put = __cordl_internal_set_m_Button)) ::UnityEngine::EventSystems::__PointerEventData__InputButton m_Button;

  /// @brief Field m_EventData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventData, put = __cordl_internal_set_m_EventData)) ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* m_EventData;

  static inline ::UnityEngine::EventSystems::__PointerInputModule__ButtonState* New_ctor();

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton const& __cordl_internal_get_m_Button() const;

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton& __cordl_internal_get_m_Button();

  constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*& __cordl_internal_get_m_EventData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*> const& __cordl_internal_get_m_EventData() const;

  constexpr void __cordl_internal_set_m_Button(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  constexpr void __cordl_internal_set_m_EventData(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* value);

  /// @brief Method .ctor, addr 0x4a77910, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_button, addr 0x4a77900, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerEventData__InputButton get_button();

  /// @brief Method get_eventData, addr 0x4a778f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* get_eventData();

  /// @brief Method set_button, addr 0x4a77908, size 0x8, virtual false, abstract: false, final false
  inline void set_button(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  /// @brief Method set_eventData, addr 0x4a778f8, size 0x8, virtual false, abstract: false, final false
  inline void set_eventData(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerInputModule__ButtonState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__ButtonState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerInputModule__ButtonState(__PointerInputModule__ButtonState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__ButtonState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerInputModule__ButtonState(__PointerInputModule__ButtonState const&) = delete;

  /// @brief Field m_Button, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__InputButton ___m_Button;

  /// @brief Field m_EventData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* ___m_EventData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15175 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__PointerInputModule__ButtonState, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__PointerInputModule__ButtonState, ___m_Button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__PointerInputModule__ButtonState, ___m_EventData) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
// Type: ::MouseState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: ::PointerInputModule::MouseState*
class CORDL_TYPE __PointerInputModule__MouseState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_TrackedButtons, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrackedButtons,
                      put = __cordl_internal_set_m_TrackedButtons)) ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>* m_TrackedButtons;

  /// @brief Method AnyPressesThisFrame, addr 0x4a77918, size 0xbc, virtual false, abstract: false, final false
  inline bool AnyPressesThisFrame();

  /// @brief Method AnyReleasesThisFrame, addr 0x4a779e4, size 0xc0, virtual false, abstract: false, final false
  inline bool AnyReleasesThisFrame();

  /// @brief Method GetButtonState, addr 0x4a77ab8, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__ButtonState* GetButtonState(::UnityEngine::EventSystems::__PointerEventData__InputButton button);

  static inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* New_ctor();

  /// @brief Method SetButtonState, addr 0x4a76e98, size 0x38, virtual false, abstract: false, final false
  inline void SetButtonState(::UnityEngine::EventSystems::__PointerEventData__InputButton button, ::UnityEngine::EventSystems::__PointerEventData__FramePressState stateForMouseButton,
                             ::UnityEngine::EventSystems::PointerEventData* data);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>*& __cordl_internal_get_m_TrackedButtons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>*> const&
  __cordl_internal_get_m_TrackedButtons() const;

  constexpr void __cordl_internal_set_m_TrackedButtons(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>* value);

  /// @brief Method .ctor, addr 0x4a77874, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerInputModule__MouseState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__MouseState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerInputModule__MouseState(__PointerInputModule__MouseState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__MouseState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerInputModule__MouseState(__PointerInputModule__MouseState const&) = delete;

  /// @brief Field m_TrackedButtons, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>* ___m_TrackedButtons;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15176 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__PointerInputModule__MouseState, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__PointerInputModule__MouseState, ___m_TrackedButtons) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
// Type: ::MouseButtonEventData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: ::PointerInputModule::MouseButtonEventData*
class CORDL_TYPE __PointerInputModule__MouseButtonEventData : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonData, put = __cordl_internal_set_buttonData)) ::UnityEngine::EventSystems::PointerEventData* buttonData;

  /// @brief Field buttonState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_buttonState, put = __cordl_internal_set_buttonState)) ::UnityEngine::EventSystems::__PointerEventData__FramePressState buttonState;

  static inline ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* New_ctor();

  /// @brief Method PressedThisFrame, addr 0x4a779d4, size 0x10, virtual false, abstract: false, final false
  inline bool PressedThisFrame();

  /// @brief Method ReleasedThisFrame, addr 0x4a77aa4, size 0x14, virtual false, abstract: false, final false
  inline bool ReleasedThisFrame();

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_buttonData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __cordl_internal_get_buttonData() const;

  constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState const& __cordl_internal_get_buttonState() const;

  constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState& __cordl_internal_get_buttonState();

  constexpr void __cordl_internal_set_buttonData(::UnityEngine::EventSystems::PointerEventData* value);

  constexpr void __cordl_internal_set_buttonState(::UnityEngine::EventSystems::__PointerEventData__FramePressState value);

  /// @brief Method .ctor, addr 0x4a77c48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerInputModule__MouseButtonEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__MouseButtonEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerInputModule__MouseButtonEventData(__PointerInputModule__MouseButtonEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__MouseButtonEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerInputModule__MouseButtonEventData(__PointerInputModule__MouseButtonEventData const&) = delete;

  /// @brief Field buttonState, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__FramePressState ___buttonState;

  /// @brief Field buttonData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___buttonData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData, ___buttonState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData, ___buttonData) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::PointerInputModule
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: ::UnityEngine.EventSystems::PointerInputModule*
class CORDL_TYPE PointerInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
  // Declarations
  using ButtonState = ::UnityEngine::EventSystems::__PointerInputModule__ButtonState;

  using MouseButtonEventData = ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData;

  using MouseState = ::UnityEngine::EventSystems::__PointerInputModule__MouseState;

  /// @brief Field m_MouseState, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseState, put = __cordl_internal_set_m_MouseState)) ::UnityEngine::EventSystems::__PointerInputModule__MouseState* m_MouseState;

  /// @brief Field m_PointerData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerData,
                      put = __cordl_internal_set_m_PointerData)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* m_PointerData;

  /// @brief Method ClearSelection, addr 0x4a772c0, size 0x1c0, virtual false, abstract: false, final false
  inline void ClearSelection();

  /// @brief Method CopyFromTo, addr 0x4a76a68, size 0x88, virtual false, abstract: false, final false
  inline void CopyFromTo(::UnityEngine::EventSystems::PointerEventData* from, ::UnityEngine::EventSystems::PointerEventData* to);

  /// @brief Method DeselectIfSelectionChanged, addr 0x4a776e8, size 0xec, virtual false, abstract: false, final false
  inline void DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent);

  /// @brief Method GetLastPointerEventData, addr 0x4a76ed0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int32_t id);

  /// @brief Method GetMousePointerEventData, addr 0x4a76b6c, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* GetMousePointerEventData();

  /// @brief Method GetMousePointerEventData, addr 0x4a76b80, size 0x318, virtual true, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* GetMousePointerEventData(int32_t id);

  /// @brief Method GetPointerData, addr 0x4a765a4, size 0xec, virtual false, abstract: false, final false
  inline bool GetPointerData(int32_t id, ByRef<::UnityEngine::EventSystems::PointerEventData*> data, bool create);

  /// @brief Method GetTouchPointerEventData, addr 0x4a766ec, size 0x37c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(::UnityEngine::Touch input, ByRef<bool> pressed, ByRef<bool> released);

  /// @brief Method IsPointerOverGameObject, addr 0x4a77224, size 0x9c, virtual true, abstract: false, final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  static inline ::UnityEngine::EventSystems::PointerInputModule* New_ctor();

  /// @brief Method ProcessDrag, addr 0x4a76f64, size 0x2c0, virtual true, abstract: false, final false
  inline void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method ProcessMove, addr 0x4a76f20, size 0x44, virtual true, abstract: false, final false
  inline void ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method RemovePointerData, addr 0x4a76690, size 0x5c, virtual false, abstract: false, final false
  inline void RemovePointerData(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method ShouldStartDrag, addr 0x4a76ef0, size 0x30, virtual false, abstract: false, final false
  static inline bool ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold);

  /// @brief Method StateForMouseButton, addr 0x4a76af0, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerEventData__FramePressState StateForMouseButton(int32_t buttonId);

  /// @brief Method ToString, addr 0x4a77480, size 0x268, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseState*& __cordl_internal_get_m_MouseState();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::__PointerInputModule__MouseState*> const& __cordl_internal_get_m_MouseState() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_m_PointerData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*> const&
  __cordl_internal_get_m_PointerData() const;

  constexpr void __cordl_internal_set_m_MouseState(::UnityEngine::EventSystems::__PointerInputModule__MouseState* value);

  constexpr void __cordl_internal_set_m_PointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method .ctor, addr 0x4a777d4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerInputModule(PointerInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerInputModule(PointerInputModule const&) = delete;

  /// @brief Field m_PointerData, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* ___m_PointerData;

  /// @brief Field m_MouseState, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::EventSystems::__PointerInputModule__MouseState* ___m_MouseState;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15178 };

  /// @brief Field kFakeTouchesId offset 0xffffffff size 0x4
  static constexpr int32_t kFakeTouchesId{ static_cast<int32_t>(0xfffffffc) };

  /// @brief Field kMouseLeftId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseLeftId{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kMouseMiddleId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseMiddleId{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field kMouseRightId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseRightId{ static_cast<int32_t>(0xfffffffe) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerInputModule, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerInputModule, ___m_PointerData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerInputModule, ___m_MouseState) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::PointerInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerInputModule*, "UnityEngine.EventSystems", "PointerInputModule");
NEED_NO_BOX(::UnityEngine::EventSystems::__PointerInputModule__ButtonState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__PointerInputModule__ButtonState*, "UnityEngine.EventSystems", "PointerInputModule/ButtonState");
NEED_NO_BOX(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*, "UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData");
NEED_NO_BOX(::UnityEngine::EventSystems::__PointerInputModule__MouseState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__PointerInputModule__MouseState*, "UnityEngine.EventSystems", "PointerInputModule/MouseState");
