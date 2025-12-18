#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultEventSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultEventSystem)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> struct ValueTuple_4;
}
namespace UnityEngine::InputForUI {
struct CommandEvent;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct Event;
}
namespace UnityEngine::InputForUI {
struct IMECompositionEvent;
}
namespace UnityEngine::InputForUI {
struct KeyEvent;
}
namespace UnityEngine::InputForUI {
struct NavigationEvent;
}
namespace UnityEngine::InputForUI {
struct PointerEvent;
}
namespace UnityEngine::InputForUI {
struct TextInputEvent;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
struct DefaultEventSystem_FocusBasedEventSequenceContext;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem_InputForUIProcessor;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem_LegacyInputProcessor;
}
namespace UnityEngine::UIElements {
struct DefaultEventSystem_UpdateMode;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem___c;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class InputForUIProcessor_DefaultEventSystem___c;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class LegacyInputProcessor_DefaultEventSystem_IInput;
}
namespace UnityEngine::UIElements {
class LegacyInputProcessor_DefaultEventSystem_Input;
}
namespace UnityEngine::UIElements {
class LegacyInputProcessor_DefaultEventSystem_NoInput;
}
namespace UnityEngine::UIElements {
class LegacyInputProcessor_DefaultEventSystem___c;
}
namespace UnityEngine::UIElements {
struct NavigationDeviceType;
}
namespace UnityEngine::UIElements {
struct NavigationMoveEvent_Direction;
}
namespace UnityEngine::UIElements {
class RuntimePanel;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct PenData;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct DefaultEventSystem_UpdateMode;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem_InputForUIProcessor;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem_LegacyInputProcessor;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem___c;
}
namespace UnityEngine::UIElements {
class InputForUIProcessor_DefaultEventSystem___c;
}
namespace UnityEngine::UIElements {
class LegacyInputProcessor_DefaultEventSystem_IInput;
}
namespace UnityEngine::UIElements {
class LegacyInputProcessor_DefaultEventSystem_Input;
}
namespace UnityEngine::UIElements {
class LegacyInputProcessor_DefaultEventSystem_NoInput;
}
namespace UnityEngine::UIElements {
class LegacyInputProcessor_DefaultEventSystem___c;
}
namespace UnityEngine::UIElements {
struct DefaultEventSystem_FocusBasedEventSequenceContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DefaultEventSystem_UpdateMode);
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultEventSystem);
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor);
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor);
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultEventSystem___c);
MARK_REF_PTR_T(::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c);
MARK_REF_PTR_T(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input);
MARK_REF_PTR_T(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c);
MARK_VAL_T(::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultEventSystem/InputForUIProcessor/<>c
class CORDL_TYPE InputForUIProcessor_DefaultEventSystem___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                                                                                                ::UnityEngine::UIElements::EventBase*>* __9__10_0;

  /// @brief Field <>9__10_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_1, put = setStaticF___9__10_1)) ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                                                                                                ::UnityEngine::UIElements::EventBase*>* __9__10_1;

  /// @brief Field <>9__10_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_2,
                      put = setStaticF___9__10_2)) ::System::Func_2<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                                                                    ::UnityEngine::UIElements::EventBase*>* __9__10_2;

  /// @brief Field <>9__10_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_3, put = setStaticF___9__10_3)) ::System::Func_2<
      ::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
      ::UnityEngine::UIElements::EventBase*>* __9__10_3;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0,
                      put = setStaticF___9__11_0)) ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_1,
                      put = setStaticF___9__11_1)) ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>* __9__11_1;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0,
                      put = setStaticF___9__12_0)) ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>, ::UnityEngine::UIElements::EventBase*>* __9__12_0;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0,
                      put = setStaticF___9__9_0)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                                                   ::UnityEngine::UIElements::EventBase*>* __9__9_0;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_1,
                      put = setStaticF___9__9_1)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                                                   ::UnityEngine::UIElements::EventBase*>* __9__9_1;

  /// @brief Field <>9__9_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_2,
                      put = setStaticF___9__9_2)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                                                   ::UnityEngine::UIElements::EventBase*>* __9__9_2;

  /// @brief Field <>9__9_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_3,
                      put = setStaticF___9__9_3)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                                                   ::UnityEngine::UIElements::EventBase*>* __9__9_3;

  /// @brief Field <>9__9_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_4,
                      put = setStaticF___9__9_4)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>,
                                                                   ::UnityEngine::UIElements::EventBase*>* __9__9_4;

  static inline ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c* New_ctor();

  /// @brief Method <ProcessKeyEvent>b__11_0, addr 0x6bba79c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessKeyEvent_b__11_0(::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode> t);

  /// @brief Method <ProcessKeyEvent>b__11_1, addr 0x6bba7f0, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessKeyEvent_b__11_1(::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode> t);

  /// @brief Method <ProcessNavigationEvent>b__10_0, addr 0x6bba6fc, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessNavigationEvent_b__10_0(::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers> t);

  /// @brief Method <ProcessNavigationEvent>b__10_1, addr 0x6bba74c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessNavigationEvent_b__10_1(::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers> t);

  /// @brief Method <ProcessNavigationEvent>b__10_2, addr 0x6bba614, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase*
  _ProcessNavigationEvent_b__10_2(::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers> t);

  /// @brief Method <ProcessNavigationEvent>b__10_3, addr 0x6bba68c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase*
  _ProcessNavigationEvent_b__10_3(::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers> t);

  /// @brief Method <ProcessPointerEvent>b__9_0, addr 0x6bba2f4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessPointerEvent_b__9_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t> t);

  /// @brief Method <ProcessPointerEvent>b__9_1, addr 0x6bba394, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessPointerEvent_b__9_1(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t> t);

  /// @brief Method <ProcessPointerEvent>b__9_2, addr 0x6bba434, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessPointerEvent_b__9_2(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t> t);

  /// @brief Method <ProcessPointerEvent>b__9_3, addr 0x6bba4d4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessPointerEvent_b__9_3(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t> t);

  /// @brief Method <ProcessPointerEvent>b__9_4, addr 0x6bba574, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessPointerEvent_b__9_4(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 _,
                                                                           ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2> t);

  /// @brief Method <ProcessTextInputEvent>b__12_0, addr 0x6bba844, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessTextInputEvent_b__12_0(::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t> t);

  /// @brief Method .ctor, addr 0x6bba2f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c* getStaticF___9();

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__10_0();

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__10_1();

  static inline ::System::Func_2<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__10_2();

  static inline ::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                                 ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__10_3();

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__11_0();

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__11_1();

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__12_0();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                 ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__9_0();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                 ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__9_1();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                 ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__9_2();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                 ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__9_3();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__9_4();

  static inline void setStaticF___9(::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c* value);

  static inline void
  setStaticF___9__10_0(::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void
  setStaticF___9__10_1(::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__10_2(
      ::System::Func_2<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__10_3(
      ::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                       ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__11_1(::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__9_0(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                                          ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__9_1(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                                          ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__9_2(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                                          ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__9_3(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>,
                                                          ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__9_4(
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputForUIProcessor_DefaultEventSystem___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputForUIProcessor_DefaultEventSystem___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputForUIProcessor_DefaultEventSystem___c(InputForUIProcessor_DefaultEventSystem___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputForUIProcessor_DefaultEventSystem___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputForUIProcessor_DefaultEventSystem___c(InputForUIProcessor_DefaultEventSystem___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, Unity.IntegerTime.DiscreteTime
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultEventSystem/InputForUIProcessor
class CORDL_TYPE DefaultEventSystem_InputForUIProcessor : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c;

  /// @brief Field m_EventList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventList, put = __cordl_internal_set_m_EventList)) ::System::Collections::Generic::Queue_1<::UnityEngine::InputForUI::Event>* m_EventList;

  /// @brief Field m_EventSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventSystem, put = __cordl_internal_set_m_EventSystem)) ::UnityEngine::UIElements::DefaultEventSystem* m_EventSystem;

  /// @brief Field m_LastPointerTimestamp, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastPointerTimestamp, put = __cordl_internal_set_m_LastPointerTimestamp)) ::Unity::IntegerTime::DiscreteTime m_LastPointerTimestamp;

  /// @brief Field m_NextPointerTimestamp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NextPointerTimestamp, put = __cordl_internal_set_m_NextPointerTimestamp)) ::Unity::IntegerTime::DiscreteTime m_NextPointerTimestamp;

  /// @brief Method GetModifiers, addr 0x6bba248, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::EventModifiers GetModifiers(::UnityEngine::InputForUI::EventModifiers eventModifiers);

  static inline ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* New_ctor(::UnityEngine::UIElements::DefaultEventSystem* eventSystem);

  /// @brief Method OnEvent, addr 0x6bb8f5c, size 0xb8, virtual false, abstract: false, final false
  inline bool OnEvent(::ByRef<::UnityEngine::InputForUI::Event> ev);

  /// @brief Method ProcessCommandEvent, addr 0x6bb9c88, size 0x8c, virtual false, abstract: false, final false
  inline void ProcessCommandEvent(::UnityEngine::InputForUI::CommandEvent commandEvent);

  /// @brief Method ProcessIMECompositionEvent, addr 0x6bb9bfc, size 0x8c, virtual false, abstract: false, final false
  inline void ProcessIMECompositionEvent(::UnityEngine::InputForUI::IMECompositionEvent compositionEvent);

  /// @brief Method ProcessInputForUIEvents, addr 0x6bb7c2c, size 0x428, virtual false, abstract: false, final false
  inline void ProcessInputForUIEvents();

  /// @brief Method ProcessKeyEvent, addr 0x6bb97e4, size 0x290, virtual false, abstract: false, final false
  inline void ProcessKeyEvent(::UnityEngine::InputForUI::KeyEvent keyEvent);

  /// @brief Method ProcessNavigationEvent, addr 0x6bb9d14, size 0x51c, virtual false, abstract: false, final false
  inline void ProcessNavigationEvent(::UnityEngine::InputForUI::NavigationEvent navigationEvent);

  /// @brief Method ProcessPointerEvent, addr 0x6bb9014, size 0x7d0, virtual false, abstract: false, final false
  inline void ProcessPointerEvent(::UnityEngine::InputForUI::PointerEvent pointerEvent);

  /// @brief Method ProcessTextInputEvent, addr 0x6bb9a74, size 0x188, virtual false, abstract: false, final false
  inline void ProcessTextInputEvent(::UnityEngine::InputForUI::TextInputEvent textInputEvent);

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::InputForUI::Event>* const& __cordl_internal_get_m_EventList() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::InputForUI::Event>*& __cordl_internal_get_m_EventList();

  constexpr ::UnityEngine::UIElements::DefaultEventSystem* const& __cordl_internal_get_m_EventSystem() const;

  constexpr ::UnityEngine::UIElements::DefaultEventSystem*& __cordl_internal_get_m_EventSystem();

  constexpr ::Unity::IntegerTime::DiscreteTime const& __cordl_internal_get_m_LastPointerTimestamp() const;

  constexpr ::Unity::IntegerTime::DiscreteTime& __cordl_internal_get_m_LastPointerTimestamp();

  constexpr ::Unity::IntegerTime::DiscreteTime const& __cordl_internal_get_m_NextPointerTimestamp() const;

  constexpr ::Unity::IntegerTime::DiscreteTime& __cordl_internal_get_m_NextPointerTimestamp();

  constexpr void __cordl_internal_set_m_EventList(::System::Collections::Generic::Queue_1<::UnityEngine::InputForUI::Event>* value);

  constexpr void __cordl_internal_set_m_EventSystem(::UnityEngine::UIElements::DefaultEventSystem* value);

  constexpr void __cordl_internal_set_m_LastPointerTimestamp(::Unity::IntegerTime::DiscreteTime value);

  constexpr void __cordl_internal_set_m_NextPointerTimestamp(::Unity::IntegerTime::DiscreteTime value);

  /// @brief Method .ctor, addr 0x6bb8280, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::DefaultEventSystem* eventSystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEventSystem_InputForUIProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem_InputForUIProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEventSystem_InputForUIProcessor(DefaultEventSystem_InputForUIProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem_InputForUIProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEventSystem_InputForUIProcessor(DefaultEventSystem_InputForUIProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4377 };

  /// @brief Field m_EventSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::DefaultEventSystem* ___m_EventSystem;

  /// @brief Field m_LastPointerTimestamp, offset: 0x18, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime ___m_LastPointerTimestamp;

  /// @brief Field m_NextPointerTimestamp, offset: 0x20, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime ___m_NextPointerTimestamp;

  /// @brief Field m_EventList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::InputForUI::Event>* ___m_EventList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor, ___m_EventSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor, ___m_LastPointerTimestamp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor, ___m_NextPointerTimestamp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor, ___m_EventList) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultEventSystem/LegacyInputProcessor/IInput
class CORDL_TYPE LegacyInputProcessor_DefaultEventSystem_IInput {
public:
  // Declarations
  __declspec(property(get = get_anyKey)) bool anyKey;

  __declspec(property(get = get_doubleClickTime)) float_t doubleClickTime;

  __declspec(property(get = get_mouseButtonCount)) int32_t mouseButtonCount;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector3 mousePosition;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  __declspec(property(get = get_unscaledTime)) float_t unscaledTime;

  /// @brief Method ClearLastPenContactEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearLastPenContactEvent();

  /// @brief Method GetAxisRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetLastPenContactEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::PenData GetLastPenContactEvent();

  /// @brief Method GetMouseButtonDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  /// @brief Method get_anyKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_anyKey();

  /// @brief Method get_doubleClickTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_doubleClickTime();

  /// @brief Method get_mouseButtonCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_mouseButtonCount();

  /// @brief Method get_mousePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePresent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_mousePresent();

  /// @brief Method get_touchCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_touchCount();

  /// @brief Method get_unscaledTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_unscaledTime();

  // Ctor Parameters [CppParam { name: "", ty: "LegacyInputProcessor_DefaultEventSystem_IInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacyInputProcessor_DefaultEventSystem_IInput(LegacyInputProcessor_DefaultEventSystem_IInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4378 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultEventSystem/LegacyInputProcessor/Input
class CORDL_TYPE LegacyInputProcessor_DefaultEventSystem_Input : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_anyKey)) bool anyKey;

  __declspec(property(get = get_doubleClickTime)) float_t doubleClickTime;

  __declspec(property(get = get_mouseButtonCount)) int32_t mouseButtonCount;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector3 mousePosition;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  __declspec(property(get = get_unscaledTime)) float_t unscaledTime;

  /// @brief Convert operator to "::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput"
  constexpr operator ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*() noexcept;

  /// @brief Method ClearLastPenContactEvent, addr 0x6bbceec, size 0x28, virtual true, abstract: false, final true
  inline void ClearLastPenContactEvent();

  /// @brief Method GetAxisRaw, addr 0x6bbcee4, size 0x8, virtual true, abstract: false, final true
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0x6bbcedc, size 0x8, virtual true, abstract: false, final true
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetLastPenContactEvent, addr 0x6bbcf14, size 0x6c, virtual true, abstract: false, final true
  inline ::UnityEngine::PenData GetLastPenContactEvent();

  /// @brief Method GetMouseButtonDown, addr 0x6bbd030, size 0x3c, virtual true, abstract: false, final true
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0x6bbd06c, size 0x3c, virtual true, abstract: false, final true
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0x6bbcfa8, size 0x80, virtual true, abstract: false, final true
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  static inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input* New_ctor();

  /// @brief Method .ctor, addr 0x6bbaa70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anyKey, addr 0x6bbd0b8, size 0x28, virtual true, abstract: false, final true
  inline bool get_anyKey();

  /// @brief Method get_doubleClickTime, addr 0x6bbd108, size 0x3c, virtual true, abstract: false, final true
  inline float_t get_doubleClickTime();

  /// @brief Method get_mouseButtonCount, addr 0x6bbd0b0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_mouseButtonCount();

  /// @brief Method get_mousePosition, addr 0x6bbd0a8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePresent, addr 0x6bbd028, size 0x8, virtual true, abstract: false, final true
  inline bool get_mousePresent();

  /// @brief Method get_touchCount, addr 0x6bbcf80, size 0x28, virtual true, abstract: false, final true
  inline int32_t get_touchCount();

  /// @brief Method get_unscaledTime, addr 0x6bbd0e0, size 0x28, virtual true, abstract: false, final true
  inline float_t get_unscaledTime();

  /// @brief Convert to "::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput"
  constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* i___UnityEngine__UIElements__LegacyInputProcessor_DefaultEventSystem_IInput() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacyInputProcessor_DefaultEventSystem_Input();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacyInputProcessor_DefaultEventSystem_Input", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacyInputProcessor_DefaultEventSystem_Input(LegacyInputProcessor_DefaultEventSystem_Input&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacyInputProcessor_DefaultEventSystem_Input", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacyInputProcessor_DefaultEventSystem_Input(LegacyInputProcessor_DefaultEventSystem_Input const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultEventSystem/LegacyInputProcessor/NoInput
class CORDL_TYPE LegacyInputProcessor_DefaultEventSystem_NoInput : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_anyKey)) bool anyKey;

  __declspec(property(get = get_doubleClickTime)) float_t doubleClickTime;

  __declspec(property(get = get_mouseButtonCount)) int32_t mouseButtonCount;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector3 mousePosition;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  __declspec(property(get = get_unscaledTime)) float_t unscaledTime;

  /// @brief Convert operator to "::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput"
  constexpr operator ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*() noexcept;

  /// @brief Method ClearLastPenContactEvent, addr 0x6bbd170, size 0x4, virtual true, abstract: false, final true
  inline void ClearLastPenContactEvent();

  /// @brief Method GetAxisRaw, addr 0x6bbd14c, size 0x8, virtual true, abstract: false, final true
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0x6bbd144, size 0x8, virtual true, abstract: false, final true
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetLastPenContactEvent, addr 0x6bbd174, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::PenData GetLastPenContactEvent();

  /// @brief Method GetMouseButtonDown, addr 0x6bbd18c, size 0x8, virtual true, abstract: false, final true
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0x6bbd194, size 0x8, virtual true, abstract: false, final true
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0x6bbd15c, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  static inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput* New_ctor();

  /// @brief Method .ctor, addr 0x6bbaa74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anyKey, addr 0x6bbd1b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_anyKey();

  /// @brief Method get_doubleClickTime, addr 0x6bbd1c4, size 0xc, virtual true, abstract: false, final true
  inline float_t get_doubleClickTime();

  /// @brief Method get_mouseButtonCount, addr 0x6bbd1ac, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_mouseButtonCount();

  /// @brief Method get_mousePosition, addr 0x6bbd19c, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePresent, addr 0x6bbd184, size 0x8, virtual true, abstract: false, final true
  inline bool get_mousePresent();

  /// @brief Method get_touchCount, addr 0x6bbd154, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_touchCount();

  /// @brief Method get_unscaledTime, addr 0x6bbd1bc, size 0x8, virtual true, abstract: false, final true
  inline float_t get_unscaledTime();

  /// @brief Convert to "::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput"
  constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* i___UnityEngine__UIElements__LegacyInputProcessor_DefaultEventSystem_IInput() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacyInputProcessor_DefaultEventSystem_NoInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacyInputProcessor_DefaultEventSystem_NoInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacyInputProcessor_DefaultEventSystem_NoInput(LegacyInputProcessor_DefaultEventSystem_NoInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacyInputProcessor_DefaultEventSystem_NoInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacyInputProcessor_DefaultEventSystem_NoInput(LegacyInputProcessor_DefaultEventSystem_NoInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultEventSystem/LegacyInputProcessor/<>c
class CORDL_TYPE LegacyInputProcessor_DefaultEventSystem___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Func_2<::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* __9__26_0;

  /// @brief Field <>9__26_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_1,
                      put = setStaticF___9__26_1)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>,
                                                                    ::UnityEngine::UIElements::EventBase*>* __9__26_1;

  /// @brief Field <>9__26_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_2,
                      put = setStaticF___9__26_2)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* __9__26_2;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::System::Func_4<
      ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>* __9__27_0;

  /// @brief Field <>9__27_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_1, put = setStaticF___9__27_1)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                                                ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                                                                                ::UnityEngine::UIElements::EventBase*>* __9__27_1;

  /// @brief Field <>9__27_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_2, put = setStaticF___9__27_2)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                                                ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                                                                                ::UnityEngine::UIElements::EventBase*>* __9__27_2;

  /// @brief Field <>9__28_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_0,
                      put = setStaticF___9__28_0)) ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* __9__28_0;

  /// @brief Field <>9__28_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_1,
                      put = setStaticF___9__28_1)) ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* __9__28_1;

  /// @brief Field <>9__28_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_2,
                      put = setStaticF___9__28_2)) ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* __9__28_2;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__29_0,
                      put = setStaticF___9__29_0)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::Touch, ::System::Nullable_1<int32_t>>,
                                                                    ::UnityEngine::UIElements::EventBase*>* __9__29_0;

  /// @brief Field <>9__30_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__30_0,
                      put = setStaticF___9__30_0)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>* __9__30_0;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0)) ::System::Func_2<
      ::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>,
      ::UnityEngine::UIElements::EventBase*>* __9__37_0;

  static inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c* New_ctor();

  /// @brief Method <ProcessMouseEvents>b__27_0, addr 0x6bbd3d0, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessMouseEvents_b__27_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>> t);

  /// @brief Method <ProcessMouseEvents>b__27_1, addr 0x6bbd48c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessMouseEvents_b__27_1(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>> t);

  /// @brief Method <ProcessMouseEvents>b__27_2, addr 0x6bbd520, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessMouseEvents_b__27_2(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>> t);

  /// @brief Method <ProcessPenEvents>b__30_0, addr 0x6bbd8e8, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessPenEvents_b__30_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::PenData _pen);

  /// @brief Method <ProcessTabEvent>b__37_0, addr 0x6bbd98c, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessTabEvent_b__37_0(
      ::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*> t);

  /// @brief Method <ProcessTouchEvents>b__29_0, addr 0x6bbd82c, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessTouchEvents_b__29_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_2<::UnityEngine::Touch, ::System::Nullable_1<int32_t>> t);

  /// @brief Method <SendIMGUIEvents>b__26_0, addr 0x6bbd228, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendIMGUIEvents_b__26_0(::UnityEngine::Event* e);

  /// @brief Method <SendIMGUIEvents>b__26_1, addr 0x6bbd284, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendIMGUIEvents_b__26_1(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 _,
                                                                        ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2> t);

  /// @brief Method <SendIMGUIEvents>b__26_2, addr 0x6bbd324, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendIMGUIEvents_b__26_2(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::Event* evt);

  /// @brief Method <SendInputEvents>b__28_0, addr 0x6bbd5b4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendInputEvents_b__28_0(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* self);

  /// @brief Method <SendInputEvents>b__28_1, addr 0x6bbd64c, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendInputEvents_b__28_1(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* self);

  /// @brief Method <SendInputEvents>b__28_2, addr 0x6bbd73c, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendInputEvents_b__28_2(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* self);

  /// @brief Method .ctor, addr 0x6bbd224, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__26_0();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__26_1();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__26_2();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                 ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__27_0();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                 ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__27_1();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                 ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__27_2();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__28_0();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__28_1();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__28_2();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::Touch, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__29_0();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__30_0();

  static inline ::System::Func_2<
      ::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>,
      ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__37_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__26_1(
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__26_2(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__27_0(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                                           ::UnityEngine::UIElements::EventBase*>* value);

  static inline void
  setStaticF___9__27_1(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                        ::UnityEngine::UIElements::EventBase*>* value);

  static inline void
  setStaticF___9__27_2(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                        ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__28_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__28_1(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__28_2(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__29_0(
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::Touch, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__30_0(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__37_0(::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers,
                                                                                  ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>,
                                                           ::UnityEngine::UIElements::EventBase*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacyInputProcessor_DefaultEventSystem___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacyInputProcessor_DefaultEventSystem___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacyInputProcessor_DefaultEventSystem___c(LegacyInputProcessor_DefaultEventSystem___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacyInputProcessor_DefaultEventSystem___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacyInputProcessor_DefaultEventSystem___c(LegacyInputProcessor_DefaultEventSystem___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4381 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.EventModifiers, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultEventSystem/LegacyInputProcessor
class CORDL_TYPE DefaultEventSystem_LegacyInputProcessor : public ::System::Object {
public:
  // Declarations
  using IInput = ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput;

  using Input = ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input;

  using NoInput = ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput;

  using __c = ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c;

  __declspec(property(get = get_input)) ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* input;

  /// @brief Field m_ConsecutiveMoveCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ConsecutiveMoveCount, put = __cordl_internal_set_m_ConsecutiveMoveCount)) int32_t m_ConsecutiveMoveCount;

  /// @brief Field m_CurrentModifiers, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentModifiers, put = __cordl_internal_set_m_CurrentModifiers)) ::UnityEngine::EventModifiers m_CurrentModifiers;

  __declspec(property(get = get_m_CurrentPointerModifiers)) ::UnityEngine::EventModifiers m_CurrentPointerModifiers;

  /// @brief Field m_Event, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Event, put = __cordl_internal_set_m_Event)) ::UnityEngine::Event* m_Event;

  /// @brief Field m_EventSystem, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventSystem, put = __cordl_internal_set_m_EventSystem)) ::UnityEngine::UIElements::DefaultEventSystem* m_EventSystem;

  /// @brief Field m_Input, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Input, put = __cordl_internal_set_m_Input)) ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* m_Input;

  /// @brief Field m_IsMoveFromKeyboard, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMoveFromKeyboard, put = __cordl_internal_set_m_IsMoveFromKeyboard)) bool m_IsMoveFromKeyboard;

  /// @brief Field m_LastMouseClickCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastMouseClickCount, put = __cordl_internal_set_m_LastMouseClickCount)) int32_t m_LastMouseClickCount;

  /// @brief Field m_LastMousePosition, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMousePosition, put = __cordl_internal_set_m_LastMousePosition)) ::UnityEngine::Vector2 m_LastMousePosition;

  /// @brief Field m_LastMousePressButton, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastMousePressButton, put = __cordl_internal_set_m_LastMousePressButton)) int32_t m_LastMousePressButton;

  /// @brief Field m_LastMoveVector, offset 0x4c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMoveVector, put = __cordl_internal_set_m_LastMoveVector)) ::UnityEngine::Vector2 m_LastMoveVector;

  /// @brief Field m_MouseProcessedAtLeastOnce, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MouseProcessedAtLeastOnce, put = __cordl_internal_set_m_MouseProcessedAtLeastOnce)) bool m_MouseProcessedAtLeastOnce;

  /// @brief Field m_NextMousePressTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextMousePressTime, put = __cordl_internal_set_m_NextMousePressTime)) float_t m_NextMousePressTime;

  /// @brief Field m_PrevActionTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevActionTime, put = __cordl_internal_set_m_PrevActionTime)) float_t m_PrevActionTime;

  /// @brief Field m_SendingPenEvent, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SendingPenEvent, put = __cordl_internal_set_m_SendingPenEvent)) bool m_SendingPenEvent;

  /// @brief Field m_SendingTouchEvents, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SendingTouchEvents, put = __cordl_internal_set_m_SendingTouchEvents)) bool m_SendingTouchEvents;

  /// @brief Method GetDefaultInput, addr 0x6bba8c8, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* GetDefaultInput();

  /// @brief Method GetRawMoveVector, addr 0x6bbcbe4, size 0x2f8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetRawMoveVector();

  static inline ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* New_ctor(::UnityEngine::UIElements::DefaultEventSystem* eventSystem);

  /// @brief Method ProcessLegacyInputEvents, addr 0x6bb80bc, size 0xec, virtual false, abstract: false, final false
  inline void ProcessLegacyInputEvents();

  /// @brief Method ProcessMouseEvents, addr 0x6bbb1a4, size 0x988, virtual false, abstract: false, final false
  inline void ProcessMouseEvents();

  /// @brief Method ProcessPenEvents, addr 0x6bbaa78, size 0x2e0, virtual false, abstract: false, final false
  inline bool ProcessPenEvents();

  /// @brief Method ProcessTabEvent, addr 0x6bbc628, size 0x18c, virtual false, abstract: false, final false
  inline void ProcessTabEvent(::UnityEngine::Event* e, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method ProcessTouchEvents, addr 0x6bbad58, size 0x44c, virtual false, abstract: false, final false
  inline bool ProcessTouchEvents();

  /// @brief Method SendIMGUIEvents, addr 0x6bbbb2c, size 0x73c, virtual false, abstract: false, final false
  inline void SendIMGUIEvents();

  /// @brief Method SendInputEvents, addr 0x6bbc268, size 0x3c0, virtual false, abstract: false, final false
  inline void SendInputEvents();

  /// @brief Method ShouldSendMoveFromInput, addr 0x6bbc7b4, size 0x430, virtual false, abstract: false, final false
  inline bool ShouldSendMoveFromInput();

  constexpr int32_t const& __cordl_internal_get_m_ConsecutiveMoveCount() const;

  constexpr int32_t& __cordl_internal_get_m_ConsecutiveMoveCount();

  constexpr ::UnityEngine::EventModifiers const& __cordl_internal_get_m_CurrentModifiers() const;

  constexpr ::UnityEngine::EventModifiers& __cordl_internal_get_m_CurrentModifiers();

  constexpr ::UnityEngine::Event* const& __cordl_internal_get_m_Event() const;

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_Event();

  constexpr ::UnityEngine::UIElements::DefaultEventSystem* const& __cordl_internal_get_m_EventSystem() const;

  constexpr ::UnityEngine::UIElements::DefaultEventSystem*& __cordl_internal_get_m_EventSystem();

  constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* const& __cordl_internal_get_m_Input() const;

  constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*& __cordl_internal_get_m_Input();

  constexpr bool const& __cordl_internal_get_m_IsMoveFromKeyboard() const;

  constexpr bool& __cordl_internal_get_m_IsMoveFromKeyboard();

  constexpr int32_t const& __cordl_internal_get_m_LastMouseClickCount() const;

  constexpr int32_t& __cordl_internal_get_m_LastMouseClickCount();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMousePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMousePosition();

  constexpr int32_t const& __cordl_internal_get_m_LastMousePressButton() const;

  constexpr int32_t& __cordl_internal_get_m_LastMousePressButton();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMoveVector() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMoveVector();

  constexpr bool const& __cordl_internal_get_m_MouseProcessedAtLeastOnce() const;

  constexpr bool& __cordl_internal_get_m_MouseProcessedAtLeastOnce();

  constexpr float_t const& __cordl_internal_get_m_NextMousePressTime() const;

  constexpr float_t& __cordl_internal_get_m_NextMousePressTime();

  constexpr float_t const& __cordl_internal_get_m_PrevActionTime() const;

  constexpr float_t& __cordl_internal_get_m_PrevActionTime();

  constexpr bool const& __cordl_internal_get_m_SendingPenEvent() const;

  constexpr bool& __cordl_internal_get_m_SendingPenEvent();

  constexpr bool const& __cordl_internal_get_m_SendingTouchEvents() const;

  constexpr bool& __cordl_internal_get_m_SendingTouchEvents();

  constexpr void __cordl_internal_set_m_ConsecutiveMoveCount(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentModifiers(::UnityEngine::EventModifiers value);

  constexpr void __cordl_internal_set_m_Event(::UnityEngine::Event* value);

  constexpr void __cordl_internal_set_m_EventSystem(::UnityEngine::UIElements::DefaultEventSystem* value);

  constexpr void __cordl_internal_set_m_Input(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* value);

  constexpr void __cordl_internal_set_m_IsMoveFromKeyboard(bool value);

  constexpr void __cordl_internal_set_m_LastMouseClickCount(int32_t value);

  constexpr void __cordl_internal_set_m_LastMousePosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_LastMousePressButton(int32_t value);

  constexpr void __cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_MouseProcessedAtLeastOnce(bool value);

  constexpr void __cordl_internal_set_m_NextMousePressTime(float_t value);

  constexpr void __cordl_internal_set_m_PrevActionTime(float_t value);

  constexpr void __cordl_internal_set_m_SendingPenEvent(bool value);

  constexpr void __cordl_internal_set_m_SendingTouchEvents(bool value);

  /// @brief Method .ctor, addr 0x6bb81a8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::DefaultEventSystem* eventSystem);

  /// @brief Method get_input, addr 0x6bba8a4, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* get_input();

  /// @brief Method get_m_CurrentPointerModifiers, addr 0x6bba898, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::EventModifiers get_m_CurrentPointerModifiers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEventSystem_LegacyInputProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem_LegacyInputProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEventSystem_LegacyInputProcessor(DefaultEventSystem_LegacyInputProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem_LegacyInputProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEventSystem_LegacyInputProcessor(DefaultEventSystem_LegacyInputProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4382 };

  /// @brief Field m_SendingTouchEvents, offset: 0x10, size: 0x1, def value: None
  bool ___m_SendingTouchEvents;

  /// @brief Field m_SendingPenEvent, offset: 0x11, size: 0x1, def value: None
  bool ___m_SendingPenEvent;

  /// @brief Field m_CurrentModifiers, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::EventModifiers ___m_CurrentModifiers;

  /// @brief Field m_LastMousePressButton, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_LastMousePressButton;

  /// @brief Field m_NextMousePressTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_NextMousePressTime;

  /// @brief Field m_LastMouseClickCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_LastMouseClickCount;

  /// @brief Field m_LastMousePosition, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMousePosition;

  /// @brief Field m_MouseProcessedAtLeastOnce, offset: 0x2c, size: 0x1, def value: None
  bool ___m_MouseProcessedAtLeastOnce;

  /// @brief Field m_Input, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* ___m_Input;

  /// @brief Field m_Event, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_Event;

  /// @brief Field m_EventSystem, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::DefaultEventSystem* ___m_EventSystem;

  /// @brief Field m_ConsecutiveMoveCount, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_ConsecutiveMoveCount;

  /// @brief Field m_LastMoveVector, offset: 0x4c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMoveVector;

  /// @brief Field m_PrevActionTime, offset: 0x54, size: 0x4, def value: None
  float_t ___m_PrevActionTime;

  /// @brief Field m_IsMoveFromKeyboard, offset: 0x58, size: 0x1, def value: None
  bool ___m_IsMoveFromKeyboard;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_SendingTouchEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_SendingPenEvent) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_CurrentModifiers) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_LastMousePressButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_NextMousePressTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_LastMouseClickCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_LastMousePosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_MouseProcessedAtLeastOnce) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_Input) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_Event) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_EventSystem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_ConsecutiveMoveCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_LastMoveVector) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_PrevActionTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, ___m_IsMoveFromKeyboard) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DefaultEventSystem/UpdateMode
struct CORDL_TYPE DefaultEventSystem_UpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DefaultEventSystem_UpdateMode_Unwrapped
  enum struct __DefaultEventSystem_UpdateMode_Unwrapped : int32_t {
    __E_Always = static_cast<int32_t>(0x0),
    __E_IgnoreIfAppNotFocused = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DefaultEventSystem_UpdateMode_Unwrapped() const noexcept {
    return static_cast<__DefaultEventSystem_UpdateMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEventSystem_UpdateMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DefaultEventSystem_UpdateMode(int32_t value__) noexcept;

  /// @brief Field Always value: I32(0)
  static ::UnityEngine::UIElements::DefaultEventSystem_UpdateMode const Always;

  /// @brief Field IgnoreIfAppNotFocused value: I32(1)
  static ::UnityEngine::UIElements::DefaultEventSystem_UpdateMode const IgnoreIfAppNotFocused;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_UpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultEventSystem_UpdateMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DefaultEventSystem/FocusBasedEventSequenceContext
struct CORDL_TYPE DefaultEventSystem_FocusBasedEventSequenceContext {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6bba230, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x6bb85b4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::DefaultEventSystem* es);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEventSystem_FocusBasedEventSequenceContext();

  // Ctor Parameters [CppParam { name: "es", ty: "::UnityEngine::UIElements::DefaultEventSystem*", modifiers: "", def_value: None }]
  constexpr DefaultEventSystem_FocusBasedEventSequenceContext(::UnityEngine::UIElements::DefaultEventSystem* es) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4384 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field es, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::DefaultEventSystem* es;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext, es) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultEventSystem/<>c
class CORDL_TYPE DefaultEventSystem___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::DefaultEventSystem___c* __9;

  static inline ::UnityEngine::UIElements::DefaultEventSystem___c* New_ctor();

  /// @brief Method <.cctor>b__48_0, addr 0x6bbdae0, size 0x8, virtual false, abstract: false, final false
  inline bool __cctor_b__48_0();

  /// @brief Method .ctor, addr 0x6bbdadc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::DefaultEventSystem___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::DefaultEventSystem___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEventSystem___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEventSystem___c(DefaultEventSystem___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEventSystem___c(DefaultEventSystem___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultEventSystem___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DefaultEventSystem
class CORDL_TYPE DefaultEventSystem : public ::System::Object {
public:
  // Declarations
  using FocusBasedEventSequenceContext = ::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext;

  using InputForUIProcessor = ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor;

  using LegacyInputProcessor = ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor;

  using UpdateMode = ::UnityEngine::UIElements::DefaultEventSystem_UpdateMode;

  using __c = ::UnityEngine::UIElements::DefaultEventSystem___c;

  /// @brief Field IsEditorRemoteConnected, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IsEditorRemoteConnected, put = setStaticF_IsEditorRemoteConnected)) ::System::Func_1<bool>* IsEditorRemoteConnected;

  __declspec(property(get = get_focusedPanel, put = set_focusedPanel)) ::UnityEngine::UIElements::BaseRuntimePanel* focusedPanel;

  __declspec(property(get = get_inputForUIProcessor)) ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* inputForUIProcessor;

  __declspec(property(get = get_isAppFocused)) bool isAppFocused;

  __declspec(property(put = set_isInputReady)) bool isInputReady;

  __declspec(property(get = get_legacyInputProcessor)) ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* legacyInputProcessor;

  /// @brief Field logToGameScreen, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_logToGameScreen, put = __cordl_internal_set_logToGameScreen)) bool logToGameScreen;

  /// @brief Field m_FocusedPanel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FocusedPanel, put = __cordl_internal_set_m_FocusedPanel)) ::UnityEngine::UIElements::BaseRuntimePanel* m_FocusedPanel;

  /// @brief Field m_InputForUIProcessor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputForUIProcessor,
                      put = __cordl_internal_set_m_InputForUIProcessor)) ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* m_InputForUIProcessor;

  /// @brief Field m_IsInputForUIActive, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsInputForUIActive, put = __cordl_internal_set_m_IsInputForUIActive)) bool m_IsInputForUIActive;

  /// @brief Field m_IsInputReady, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsInputReady, put = __cordl_internal_set_m_IsInputReady)) bool m_IsInputReady;

  /// @brief Field m_LegacyInputProcessor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LegacyInputProcessor,
                      put = __cordl_internal_set_m_LegacyInputProcessor)) ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* m_LegacyInputProcessor;

  /// @brief Field m_LogLabel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LogLabel, put = __cordl_internal_set_m_LogLabel)) ::UnityEngine::UIElements::Label* m_LogLabel;

  /// @brief Field m_LogLines, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LogLines, put = __cordl_internal_set_m_LogLines)) ::System::Collections::Generic::List_1<::StringW>* m_LogLines;

  /// @brief Field m_PreviousFocusedElement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousFocusedElement, put = __cordl_internal_set_m_PreviousFocusedElement)) ::UnityEngine::UIElements::Focusable* m_PreviousFocusedElement;

  /// @brief Field m_PreviousFocusedPanel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousFocusedPanel, put = __cordl_internal_set_m_PreviousFocusedPanel)) ::UnityEngine::UIElements::BaseRuntimePanel* m_PreviousFocusedPanel;

  /// @brief Field m_UseInputForUI, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseInputForUI, put = __cordl_internal_set_m_UseInputForUI)) bool m_UseInputForUI;

  /// @brief Field verbose, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get_verbose, put = __cordl_internal_set_verbose)) bool verbose;

  /// @brief Method FocusBasedEventSequence, addr 0x6bb8598, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext FocusBasedEventSequence();

  /// @brief Method InitInputProcessor, addr 0x6bb836c, size 0x158, virtual false, abstract: false, final false
  inline void InitInputProcessor();

  /// @brief Method Log, addr 0x6bb88bc, size 0xc8, virtual false, abstract: false, final false
  inline void Log(::System::Object* o);

  /// @brief Method LogToGameScreen, addr 0x6bb8984, size 0x3b8, virtual false, abstract: false, final false
  inline void LogToGameScreen(::StringW s);

  /// @brief Method LogWarning, addr 0x6bb8d3c, size 0xd4, virtual false, abstract: false, final false
  inline void LogWarning(::System::Object* o);

  /// @brief Method MakePenEvent, addr 0x6bb87c8, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* MakePenEvent(::UnityEngine::PenData pen, ::UnityEngine::EventModifiers modifiers, int32_t targetDisplay);

  /// @brief Method MakeTouchEvent, addr 0x6bb868c, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* MakeTouchEvent(::UnityEngine::Touch touch, ::UnityEngine::EventModifiers modifiers, int32_t targetDisplay);

  static inline ::UnityEngine::UIElements::DefaultEventSystem* New_ctor();

  /// @brief Method OnFocusEvent, addr 0x6bb85fc, size 0x4, virtual false, abstract: false, final false
  inline void OnFocusEvent(::UnityEngine::UIElements::RuntimePanel* panel, ::UnityEngine::UIElements::FocusEvent* evt);

  /// @brief Method RemoveInputProcessor, addr 0x6bb84c4, size 0xd4, virtual false, abstract: false, final false
  inline void RemoveInputProcessor();

  /// @brief Method SendFocusBasedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg> inline void SendFocusBasedEvent(::System::Func_2<TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg);

  /// @brief Method SendPositionBasedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg>
  inline void SendPositionBasedEvent(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 delta, int32_t pointerId, ::System::Nullable_1<int32_t> targetDisplay,
                                     ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg, bool deselectIfNoTarget);

  /// @brief Method ShouldIgnoreEventsOnAppNotFocused, addr 0x6bb7a98, size 0x38, virtual false, abstract: false, final false
  inline bool ShouldIgnoreEventsOnAppNotFocused();

  /// @brief Method Update, addr 0x6bb7b30, size 0x94, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::UIElements::DefaultEventSystem_UpdateMode updateMode);

  /// @brief Method UpdateFocusedPanel, addr 0x6bb8600, size 0x8c, virtual false, abstract: false, final false
  inline void UpdateFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* runtimePanel);

  constexpr bool const& __cordl_internal_get_logToGameScreen() const;

  constexpr bool& __cordl_internal_get_logToGameScreen();

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel* const& __cordl_internal_get_m_FocusedPanel() const;

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_FocusedPanel();

  constexpr ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* const& __cordl_internal_get_m_InputForUIProcessor() const;

  constexpr ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*& __cordl_internal_get_m_InputForUIProcessor();

  constexpr bool const& __cordl_internal_get_m_IsInputForUIActive() const;

  constexpr bool& __cordl_internal_get_m_IsInputForUIActive();

  constexpr bool const& __cordl_internal_get_m_IsInputReady() const;

  constexpr bool& __cordl_internal_get_m_IsInputReady();

  constexpr ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* const& __cordl_internal_get_m_LegacyInputProcessor() const;

  constexpr ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*& __cordl_internal_get_m_LegacyInputProcessor();

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get_m_LogLabel() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_LogLabel();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_LogLines() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_LogLines();

  constexpr ::UnityEngine::UIElements::Focusable* const& __cordl_internal_get_m_PreviousFocusedElement() const;

  constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get_m_PreviousFocusedElement();

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel* const& __cordl_internal_get_m_PreviousFocusedPanel() const;

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_PreviousFocusedPanel();

  constexpr bool const& __cordl_internal_get_m_UseInputForUI() const;

  constexpr bool& __cordl_internal_get_m_UseInputForUI();

  constexpr bool const& __cordl_internal_get_verbose() const;

  constexpr bool& __cordl_internal_get_verbose();

  constexpr void __cordl_internal_set_logToGameScreen(bool value);

  constexpr void __cordl_internal_set_m_FocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  constexpr void __cordl_internal_set_m_InputForUIProcessor(::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* value);

  constexpr void __cordl_internal_set_m_IsInputForUIActive(bool value);

  constexpr void __cordl_internal_set_m_IsInputReady(bool value);

  constexpr void __cordl_internal_set_m_LegacyInputProcessor(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* value);

  constexpr void __cordl_internal_set_m_LogLabel(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_LogLines(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_PreviousFocusedElement(::UnityEngine::UIElements::Focusable* value);

  constexpr void __cordl_internal_set_m_PreviousFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  constexpr void __cordl_internal_set_m_UseInputForUI(bool value);

  constexpr void __cordl_internal_set_verbose(bool value);

  /// @brief Method .ctor, addr 0x6bb8e10, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Func_1<bool>* getStaticF_IsEditorRemoteConnected();

  /// @brief Method get_focusedPanel, addr 0x6bb7ad0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* get_focusedPanel();

  /// @brief Method get_inputForUIProcessor, addr 0x6bb7bc4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* get_inputForUIProcessor();

  /// @brief Method get_isAppFocused, addr 0x6bb7a2c, size 0x6c, virtual false, abstract: false, final false
  inline bool get_isAppFocused();

  /// @brief Method get_legacyInputProcessor, addr 0x6bb8054, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* get_legacyInputProcessor();

  static inline void setStaticF_IsEditorRemoteConnected(::System::Func_1<bool>* value);

  /// @brief Method set_focusedPanel, addr 0x6bb7ad8, size 0x58, virtual false, abstract: false, final false
  inline void set_focusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  /// @brief Method set_isInputReady, addr 0x6bb8348, size 0x24, virtual false, abstract: false, final false
  inline void set_isInputReady(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEventSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEventSystem(DefaultEventSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEventSystem(DefaultEventSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4386 };

  /// @brief Field m_FocusedPanel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_FocusedPanel;

  /// @brief Field m_PreviousFocusedPanel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_PreviousFocusedPanel;

  /// @brief Field m_PreviousFocusedElement, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ___m_PreviousFocusedElement;

  /// @brief Field m_LegacyInputProcessor, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* ___m_LegacyInputProcessor;

  /// @brief Field m_InputForUIProcessor, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* ___m_InputForUIProcessor;

  /// @brief Field m_IsInputReady, offset: 0x38, size: 0x1, def value: None
  bool ___m_IsInputReady;

  /// @brief Field m_UseInputForUI, offset: 0x39, size: 0x1, def value: None
  bool ___m_UseInputForUI;

  /// @brief Field m_IsInputForUIActive, offset: 0x3a, size: 0x1, def value: None
  bool ___m_IsInputForUIActive;

  /// @brief Field verbose, offset: 0x3b, size: 0x1, def value: None
  bool ___verbose;

  /// @brief Field logToGameScreen, offset: 0x3c, size: 0x1, def value: None
  bool ___logToGameScreen;

  /// @brief Field m_LogLabel, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_LogLabel;

  /// @brief Field m_LogLines, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_LogLines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_FocusedPanel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_PreviousFocusedPanel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_PreviousFocusedElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_LegacyInputProcessor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_InputForUIProcessor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_IsInputReady) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_UseInputForUI) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_IsInputForUIActive) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___verbose) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___logToGameScreen) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_LogLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_LogLines) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultEventSystem, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultEventSystem_UpdateMode, "UnityEngine.UIElements", "DefaultEventSystem/UpdateMode");
NEED_NO_BOX(::UnityEngine::UIElements::DefaultEventSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultEventSystem*, "UnityEngine.UIElements", "DefaultEventSystem");
NEED_NO_BOX(::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*, "UnityEngine.UIElements", "DefaultEventSystem/InputForUIProcessor");
NEED_NO_BOX(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, "UnityEngine.UIElements", "DefaultEventSystem/LegacyInputProcessor");
NEED_NO_BOX(::UnityEngine::UIElements::DefaultEventSystem___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultEventSystem___c*, "UnityEngine.UIElements", "DefaultEventSystem/<>c");
NEED_NO_BOX(::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*, "UnityEngine.UIElements", "DefaultEventSystem/InputForUIProcessor/<>c");
NEED_NO_BOX(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*, "UnityEngine.UIElements", "DefaultEventSystem/LegacyInputProcessor/IInput");
NEED_NO_BOX(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*, "UnityEngine.UIElements", "DefaultEventSystem/LegacyInputProcessor/Input");
NEED_NO_BOX(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*, "UnityEngine.UIElements", "DefaultEventSystem/LegacyInputProcessor/NoInput");
NEED_NO_BOX(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*, "UnityEngine.UIElements", "DefaultEventSystem/LegacyInputProcessor/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext, "UnityEngine.UIElements", "DefaultEventSystem/FocusBasedEventSequenceContext");
