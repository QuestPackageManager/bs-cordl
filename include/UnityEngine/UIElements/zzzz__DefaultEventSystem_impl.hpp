#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultEventSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__IMECompositionEvent_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IMECompositionEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__TextInputEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IScreenRaycaster_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationDeviceType_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PhysicsDocumentPicker_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScreenOverlayPanelPicker_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__PenData_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)()>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x723e4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessPointerEvent_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessPointerEvent_b__9_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x723e4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
            { "<ProcessPointerEvent>b__9_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessPointerEvent_b__9_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessPointerEvent_b__9_1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x723e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
            { "<ProcessPointerEvent>b__9_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessPointerEvent_b__9_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessPointerEvent_b__9_2)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x723e624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
            { "<ProcessPointerEvent>b__9_2", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessPointerEvent_b__9_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessPointerEvent_b__9_3)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x723e6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
            { "<ProcessPointerEvent>b__9_3", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessNavigationEvent_b__10_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType,
                                                                                                     ::UnityEngine::EventModifiers>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessNavigationEvent_b__10_2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x723e754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                                         { "<ProcessNavigationEvent>b__10_2",
                                           {},
                                           { ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessNavigationEvent_b__10_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction,
                                                                                                     ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessNavigationEvent_b__10_3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x723e7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                                                             { "<ProcessNavigationEvent>b__10_3",
                                                               {},
                                                               { ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction,
                                                                                                       ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessNavigationEvent_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessNavigationEvent_b__10_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x723e83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                            { "<ProcessNavigationEvent>b__10_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessNavigationEvent_b__10_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessNavigationEvent_b__10_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x723e88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                            { "<ProcessNavigationEvent>b__10_1", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessKeyEvent_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessKeyEvent_b__11_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x723e8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                                                             { "<ProcessKeyEvent>b__11_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessKeyEvent_b__11_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessKeyEvent_b__11_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x723e930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                                                             { "<ProcessKeyEvent>b__11_1", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c._ProcessTextInputEvent_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::*)(::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>)>(
        &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessTextInputEvent_b__12_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x723e984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                                                             { "<ProcessTextInputEvent>b__12_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9(::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*, "<>9", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(value));
}
inline ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*, "<>9", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__9_0(
    ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__9_0", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*, "<>9__9_0",
      ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__9_1(
    ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__9_1", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__9_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*, "<>9__9_1",
      ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__9_2(
    ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__9_2", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__9_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*, "<>9__9_2",
      ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__9_3(
    ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__9_3", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__9_3() {
  return ::cordl_internals::getStaticField<
      ::System::Func_3<::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>, ::UnityEngine::UIElements::EventBase*>*, "<>9__9_3",
      ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__10_2(
    ::System::Func_2<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*,
      "<>9__10_2", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<
          ::System::Func_2<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*>(
          value));
}
inline ::System::Func_2<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__10_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*,
      "<>9__10_2", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__10_3(
    ::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                     ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                       ::UnityEngine::UIElements::EventBase*>*,
      "<>9__10_3", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                                    ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                        ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__10_3() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>,
                       ::UnityEngine::UIElements::EventBase*>*,
      "<>9__10_3", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__10_0(
    ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__10_0", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*, "<>9__10_0",
      ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__10_1(
    ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__10_1", ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__10_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*, "<>9__10_1",
      ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__11_0(
    ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>*, "<>9__11_0",
                                    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>*, "<>9__11_0",
                                           ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__11_1(
    ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>*, "<>9__11_1",
                                    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>, ::UnityEngine::UIElements::EventBase*>*, "<>9__11_1",
                                           ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::setStaticF___9__12_0(
    ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>, ::UnityEngine::UIElements::EventBase*>*, "<>9__12_0",
                                    ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>, ::UnityEngine::UIElements::EventBase*>*, "<>9__12_0",
                                           ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessPointerEvent_b__9_0(
    ::UnityEngine::Vector3 panelPosition,
    /* [TupleElementNames(new[] { "pointerEvent", "pointerId", "deltaTime" })] */ ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
          { "<ProcessPointerEvent>b__9_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessPointerEvent_b__9_1(
    ::UnityEngine::Vector3 panelPosition,
    /* [TupleElementNames(new[] { "pointerEvent", "pointerId", "deltaTime" })] */ ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
          { "<ProcessPointerEvent>b__9_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessPointerEvent_b__9_2(
    ::UnityEngine::Vector3 panelPosition,
    /* [TupleElementNames(new[] { "pointerEvent", "pointerId", "deltaTime" })] */ ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
          { "<ProcessPointerEvent>b__9_2", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessPointerEvent_b__9_3(
    ::UnityEngine::Vector3 panelPosition,
    /* [TupleElementNames(new[] { "pointerEvent", "pointerId", "deltaTime" })] */ ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
          { "<ProcessPointerEvent>b__9_3", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessNavigationEvent_b__10_2(
    /* [TupleElementNames(new[] { "move", "deviceType", "mod" })] */ ::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                                       { "<ProcessNavigationEvent>b__10_2",
                                         {},
                                         { ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessNavigationEvent_b__10_3(
    /* [TupleElementNames(new[] { "direction", "deviceType", "mod" })] */ ::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction,
                                                                                                 ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>
        t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
          { "<ProcessNavigationEvent>b__10_3",
            {},
            { ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessNavigationEvent_b__10_0(
    /* [TupleElementNames(new[] { "deviceType", "mod" })] */ ::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                          { "<ProcessNavigationEvent>b__10_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessNavigationEvent_b__10_1(
    /* [TupleElementNames(new[] { "deviceType", "mod" })] */ ::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                          { "<ProcessNavigationEvent>b__10_1", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::UIElements::NavigationDeviceType, ::UnityEngine::EventModifiers>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessKeyEvent_b__11_0(
    /* [TupleElementNames(new[] { "modifiers", "keyCode" })] */ ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                                                           { "<ProcessKeyEvent>b__11_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessKeyEvent_b__11_1(
    /* [TupleElementNames(new[] { "modifiers", "keyCode" })] */ ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                                                           { "<ProcessKeyEvent>b__11_1", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::KeyCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::_ProcessTextInputEvent_b__12_0(
    /* [TupleElementNames(new[] { "modifiers", "character" })] */ ::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>(),
                                                           { "<ProcessTextInputEvent>b__12_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, t);
}
inline ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c::InputForUIProcessor_DefaultEventSystem___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::*)()>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x723e3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0._ProcessIMECompositionEvent_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::*)(int32_t)>(
    &::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::_ProcessIMECompositionEvent_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x723e9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0*>(),
                                                                                           { "<ProcessIMECompositionEvent>b__0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputForUI::IMECompositionEvent& UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::__cordl_internal_get_compositionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionEvent;
}
constexpr ::UnityEngine::InputForUI::IMECompositionEvent const& UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::__cordl_internal_get_compositionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionEvent;
}
constexpr void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::__cordl_internal_set_compositionEvent(::UnityEngine::InputForUI::IMECompositionEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositionEvent = value;
}
inline void UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::_ProcessIMECompositionEvent_b__0(int32_t _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0*>(),
                                                                                         { "<ProcessIMECompositionEvent>b__0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, _);
}
inline ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0* UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0::InputForUIProcessor_DefaultEventSystem___c__DisplayClass14_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x723c730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x723c7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.OnEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::by_ref<::UnityEngine::InputForUI::Event const>)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::OnEvent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x723c890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                           { "OnEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputForUI::Event const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.ProcessInputForUIEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessInputForUIEvents)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x723c948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(), { "ProcessInputForUIEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.GetModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventModifiers (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::UnityEngine::InputForUI::EventModifiers)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::GetModifiers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x723e3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                           { "GetModifiers", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.ProcessPointerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::UnityEngine::InputForUI::PointerEvent)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessPointerEvent)> {
  constexpr static std::size_t size = 0xad0;
  constexpr static std::size_t addrs = 0x723cd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                           { "ProcessPointerEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.ProcessNavigationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::UnityEngine::InputForUI::NavigationEvent)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessNavigationEvent)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x723de68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                           { "ProcessNavigationEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::NavigationEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.ProcessKeyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::UnityEngine::InputForUI::KeyEvent)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessKeyEvent)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x723d844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                           { "ProcessKeyEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::KeyEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.ProcessTextInputEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::UnityEngine::InputForUI::TextInputEvent)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessTextInputEvent)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x723dad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                           { "ProcessTextInputEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::TextInputEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.ProcessCommandEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::UnityEngine::InputForUI::CommandEvent)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessCommandEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x723ddd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                           { "ProcessCommandEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::CommandEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor.ProcessIMECompositionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::UnityEngine::InputForUI::IMECompositionEvent)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessIMECompositionEvent)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x723dc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                             { "ProcessIMECompositionEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::IMECompositionEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor._ProcessPointerEvent_b__9_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::*)(::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>)>(
    &::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::_ProcessPointerEvent_b__9_4)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x723e3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
            { "<ProcessPointerEvent>b__9_4", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::DefaultEventSystem*& UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_get_m_EventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr ::UnityEngine::UIElements::DefaultEventSystem* const& UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_get_m_EventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_set_m_EventSystem(::UnityEngine::UIElements::DefaultEventSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventSystem = value;
}
constexpr ::Unity::IntegerTime::DiscreteTime& UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_get_m_LastPointerTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPointerTimestamp;
}
constexpr ::Unity::IntegerTime::DiscreteTime const& UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_get_m_LastPointerTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPointerTimestamp;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_set_m_LastPointerTimestamp(::Unity::IntegerTime::DiscreteTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastPointerTimestamp = value;
}
constexpr ::Unity::IntegerTime::DiscreteTime& UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_get_m_NextPointerTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextPointerTimestamp;
}
constexpr ::Unity::IntegerTime::DiscreteTime const& UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_get_m_NextPointerTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextPointerTimestamp;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_set_m_NextPointerTimestamp(::Unity::IntegerTime::DiscreteTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextPointerTimestamp = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::InputForUI::Event>*& UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_get_m_EventList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventList;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::InputForUI::Event>* const& UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_get_m_EventList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventList;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::__cordl_internal_set_m_EventList(::System::Collections::Generic::Queue_1<::UnityEngine::InputForUI::Event>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventList = value;
}
inline void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::_ctor(::UnityEngine::UIElements::DefaultEventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::OnEvent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::InputForUI::Event const> ev) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                         { "OnEvent", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputForUI::Event const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ev);
}
inline void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessInputForUIEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(), { "ProcessInputForUIEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventModifiers UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::GetModifiers(::UnityEngine::InputForUI::EventModifiers eventModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                         { "GetModifiers", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers>(this, ___internal_method, eventModifiers);
}
inline void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessPointerEvent(::UnityEngine::InputForUI::PointerEvent pointerEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                         { "ProcessPointerEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessNavigationEvent(::UnityEngine::InputForUI::NavigationEvent navigationEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                         { "ProcessNavigationEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::NavigationEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, navigationEvent);
}
inline void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessKeyEvent(::UnityEngine::InputForUI::KeyEvent keyEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                         { "ProcessKeyEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::KeyEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyEvent);
}
inline void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessTextInputEvent(::UnityEngine::InputForUI::TextInputEvent textInputEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                         { "ProcessTextInputEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::TextInputEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textInputEvent);
}
inline void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessCommandEvent(::UnityEngine::InputForUI::CommandEvent commandEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                         { "ProcessCommandEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::CommandEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commandEvent);
}
inline void UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::ProcessIMECompositionEvent(::UnityEngine::InputForUI::IMECompositionEvent compositionEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
                                                                                         { "ProcessIMECompositionEvent", {}, { ::i2c::type_of<::UnityEngine::InputForUI::IMECompositionEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compositionEvent);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::_ProcessPointerEvent_b__9_4(
    ::UnityEngine::Vector3 panelPosition,
    /* [TupleElementNames(new[] { "pointerEvent", "pointerId", "deltaTime" })] */ ::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(),
          { "<ProcessPointerEvent>b__9_4", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::InputForUI::PointerEvent, int32_t, float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, t);
}
inline ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*
UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::New_ctor(::UnityEngine::UIElements::DefaultEventSystem* eventSystem) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(eventSystem));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor::DefaultEventSystem_InputForUIProcessor() {}
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.GetButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)(::StringW)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.GetAxisRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)(::StringW)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetAxisRaw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.ClearLastPenContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::ClearLastPenContactEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.GetLastPenContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PenData (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetLastPenContactEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.get_touchCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_touchCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.GetTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)(int32_t)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetTouch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.get_mousePresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_mousePresent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.GetMouseButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)(int32_t)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetMouseButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.GetMouseButtonUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)(int32_t)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetMouseButtonUp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.get_mousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_mousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.get_mouseButtonCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_mouseButtonCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.get_anyKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_anyKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.get_unscaledTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_unscaledTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput.get_doubleClickTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_doubleClickTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 13 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetButtonDown(::StringW button) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline float_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetAxisRaw(::StringW axis) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axis);
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::ClearLastPenContactEvent() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::PenData UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetLastPenContactEvent() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenData>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_touchCount() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetTouch(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch>(this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_mousePresent() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetMouseButtonDown(int32_t button) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::GetMouseButtonUp(int32_t button) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_mousePosition() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_mouseButtonCount() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_anyKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_unscaledTime() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput::get_doubleClickTime() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.GetButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)(::StringW)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72415fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetButtonDown", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.GetAxisRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)(::StringW)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetAxisRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7241604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetAxisRaw", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.ClearLastPenContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::ClearLastPenContactEvent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x724160c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "ClearLastPenContactEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.GetLastPenContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PenData (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetLastPenContactEvent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7241634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetLastPenContactEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.get_touchCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_touchCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x72416a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_touchCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.GetTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)(int32_t)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetTouch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x72416c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetTouch", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.get_mousePresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_mousePresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7241748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_mousePresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.GetMouseButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)(int32_t)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetMouseButtonDown)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7241750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetMouseButtonDown", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.GetMouseButtonUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)(int32_t)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetMouseButtonUp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x724178c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetMouseButtonUp", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.get_mousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_mousePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72417c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_mousePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.get_mouseButtonCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_mouseButtonCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72417d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_mouseButtonCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.get_anyKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_anyKey)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x72417d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_anyKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.get_unscaledTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_unscaledTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x7241800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_unscaledTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input.get_doubleClickTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_doubleClickTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7241828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_doubleClickTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x723ed5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetButtonDown(::StringW button) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetButtonDown", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline float_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetAxisRaw(::StringW axis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetAxisRaw", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axis);
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::ClearLastPenContactEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "ClearLastPenContactEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::PenData UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetLastPenContactEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetLastPenContactEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenData>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_touchCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_touchCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetTouch(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetTouch", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch>(this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_mousePresent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_mousePresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetMouseButtonDown(int32_t button) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetMouseButtonDown", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::GetMouseButtonUp(int32_t button) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "GetMouseButtonUp", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_mousePosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_mousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_mouseButtonCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_mouseButtonCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_anyKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_anyKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_unscaledTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_unscaledTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::get_doubleClickTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { "get_doubleClickTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput"
constexpr UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::operator ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*() noexcept {
  return static_cast<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput"
constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::i___UnityEngine__UIElements__LegacyInputProcessor_DefaultEventSystem_IInput() noexcept {
  return static_cast<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_Input::LegacyInputProcessor_DefaultEventSystem_Input() {}
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.GetButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)(::StringW)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7241864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetButtonDown", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.GetAxisRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)(::StringW)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetAxisRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x724186c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetAxisRaw", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.get_touchCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_touchCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7241874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_touchCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.GetTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)(int32_t)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetTouch)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x724187c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetTouch", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.ClearLastPenContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::ClearLastPenContactEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7241890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "ClearLastPenContactEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.GetLastPenContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PenData (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetLastPenContactEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7241894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetLastPenContactEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.get_mousePresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_mousePresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72418a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_mousePresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.GetMouseButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)(int32_t)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetMouseButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72418ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetMouseButtonDown", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.GetMouseButtonUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)(int32_t)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetMouseButtonUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72418b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetMouseButtonUp", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.get_mousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_mousePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x72418bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_mousePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.get_mouseButtonCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_mouseButtonCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72418cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_mouseButtonCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.get_anyKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_anyKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72418d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_anyKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.get_unscaledTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_unscaledTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72418dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_unscaledTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput.get_doubleClickTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_doubleClickTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x72418e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_doubleClickTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x723ed60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetButtonDown(::StringW button) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetButtonDown", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline float_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetAxisRaw(::StringW axis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetAxisRaw", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axis);
}
inline int32_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_touchCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_touchCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetTouch(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetTouch", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::ClearLastPenContactEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "ClearLastPenContactEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::PenData UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetLastPenContactEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetLastPenContactEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenData>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_mousePresent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_mousePresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetMouseButtonDown(int32_t button) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetMouseButtonDown", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::GetMouseButtonUp(int32_t button) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "GetMouseButtonUp", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_mousePosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_mousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_mouseButtonCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_mouseButtonCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_anyKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_anyKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_unscaledTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_unscaledTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::get_doubleClickTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { "get_doubleClickTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput"
constexpr UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::operator ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*() noexcept {
  return static_cast<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput"
constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::i___UnityEngine__UIElements__LegacyInputProcessor_DefaultEventSystem_IInput() noexcept {
  return static_cast<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_NoInput::LegacyInputProcessor_DefaultEventSystem_NoInput() {}
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)()>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7241944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._SendIMGUIEvents_b__28_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendIMGUIEvents_b__28_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x7241948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                                                           { "<SendIMGUIEvents>b__28_0", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._SendIMGUIEvents_b__28_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                               ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendIMGUIEvents_b__28_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x72419a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                                                           { "<SendIMGUIEvents>b__28_1",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._SendIMGUIEvents_b__28_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendIMGUIEvents_b__28_2)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x7241a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                            { "<SendIMGUIEvents>b__28_2", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._ProcessMouseEvents_b__29_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                               ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessMouseEvents_b__29_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x7241af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                             { "<ProcessMouseEvents>b__29_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._ProcessMouseEvents_b__29_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                               ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessMouseEvents_b__29_1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7241bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                             { "<ProcessMouseEvents>b__29_1",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._ProcessMouseEvents_b__29_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                               ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessMouseEvents_b__29_2)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7241c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                             { "<ProcessMouseEvents>b__29_2",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._SendInputEvents_b__30_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*)>(
        &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendInputEvents_b__30_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7241cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                             { "<SendInputEvents>b__30_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._SendInputEvents_b__30_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*)>(
        &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendInputEvents_b__30_1)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x7241d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                             { "<SendInputEvents>b__30_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._SendInputEvents_b__30_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*)>(
        &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendInputEvents_b__30_2)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x7241e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                             { "<SendInputEvents>b__30_2", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._ProcessTouchEvents_b__31_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                               ::System::ValueTuple_3<::UnityEngine::Touch, int32_t, ::System::Nullable_1<int32_t>>)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessTouchEvents_b__31_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7241f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                             { "<ProcessTouchEvents>b__31_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::Touch, int32_t, ::System::Nullable_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._ProcessPenEvents_b__32_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessPenEvents_b__32_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7241fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                            { "<ProcessPenEvents>b__32_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::PenData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c._ProcessTabEvent_b__39_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (
    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::*)(::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers,
                                                                                                      ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>)>(
    &::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessTabEvent_b__39_0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x724201c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                             { "<ProcessTabEvent>b__39_0",
                                                               {},
                                                               { ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers,
                                                                                                       ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*, "<>9", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(value));
}
inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*, "<>9", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__28_0(::System::Func_2<::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>*, "<>9__28_0",
                                    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__28_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>*, "<>9__28_0",
                                           ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__28_1(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>*,
      "<>9__28_1", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<
          ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>*>(
          value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__28_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>*,
      "<>9__28_1", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__28_2(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>*, "<>9__28_2",
                                    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__28_2() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>*, "<>9__28_2",
                                           ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__29_0(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*
        value) {
  ::cordl_internals::setStaticField<
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*,
      "<>9__29_0", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                    ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*,
      "<>9__29_0", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__29_1(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                     ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                     ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__29_1", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                    ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                        ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__29_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                       ::UnityEngine::UIElements::EventBase*>*,
      "<>9__29_1", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__29_2(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                     ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                     ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__29_2", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                                    ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                        ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__29_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>,
                       ::UnityEngine::UIElements::EventBase*>*,
      "<>9__29_2", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__30_0(
    ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*, "<>9__30_0",
                                    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__30_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*, "<>9__30_0",
                                           ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__30_1(
    ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*, "<>9__30_1",
                                    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__30_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*, "<>9__30_1",
                                           ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__30_2(
    ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*, "<>9__30_2",
                                    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__30_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*, ::UnityEngine::UIElements::EventBase*>*, "<>9__30_2",
                                           ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__31_0(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::Touch, int32_t, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*
        value) {
  ::cordl_internals::setStaticField<
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::Touch, int32_t, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*,
      "<>9__31_0", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::Touch, int32_t, ::System::Nullable_1<int32_t>>,
                                    ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::Touch, int32_t, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__31_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<::UnityEngine::Touch, int32_t, ::System::Nullable_1<int32_t>>, ::UnityEngine::UIElements::EventBase*>*,
      "<>9__31_0", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__32_0(
    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>*, "<>9__32_0",
                                    ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__32_0() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>*, "<>9__32_0",
                                           ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::setStaticF___9__39_0(
    ::System::Func_2<
        ::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>,
        ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers,
                                                                            ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>,
                                                     ::UnityEngine::UIElements::EventBase*>*,
                                    "<>9__39_0", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(
      std::forward<::System::Func_2<
          ::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>,
          ::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<
    ::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>,
    ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::getStaticF___9__39_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers,
                                                                                   ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>,
                                                            ::UnityEngine::UIElements::EventBase*>*,
                                           "<>9__39_0", ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendIMGUIEvents_b__28_0(::UnityEngine::Event* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                                                         { "<SendIMGUIEvents>b__28_0", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendIMGUIEvents_b__28_1(
    ::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 _,
    /* [TupleElementNames(new[] { "modifiers", "scrollDelta" })] */ ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2> t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                                                         { "<SendIMGUIEvents>b__28_1",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, _, t);
}
inline ::UnityEngine::UIElements::EventBase*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendIMGUIEvents_b__28_2(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::Event* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                          { "<SendIMGUIEvents>b__28_2", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, panelDelta, evt);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessMouseEvents_b__29_0(
    ::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
    /* [TupleElementNames(new[] { "modifiers", "targetDisplay" })] */ ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                           { "<ProcessMouseEvents>b__29_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, panelDelta, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessMouseEvents_b__29_1(
    ::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, /* [TupleElementNames(new[] { "button", "clickCount", "modifiers", "targetDisplay" })] */
    ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                           { "<ProcessMouseEvents>b__29_1",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, panelDelta, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessMouseEvents_b__29_2(
    ::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, /* [TupleElementNames(new[] { "button", "clickCount", "modifiers", "targetDisplay" })] */
    ::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                           { "<ProcessMouseEvents>b__29_2",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::System::ValueTuple_4<int32_t, int32_t, ::UnityEngine::EventModifiers, ::System::Nullable_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, panelDelta, t);
}
inline ::UnityEngine::UIElements::EventBase*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendInputEvents_b__30_0(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                           { "<SendInputEvents>b__30_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendInputEvents_b__30_1(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                           { "<SendInputEvents>b__30_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_SendInputEvents_b__30_2(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                           { "<SendInputEvents>b__30_2", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessTouchEvents_b__31_0(
    ::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
    /* [TupleElementNames(new[] { "touch", "pointerId", "targetDisplay" })] */ ::System::ValueTuple_3<::UnityEngine::Touch, int32_t, ::System::Nullable_1<int32_t>> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                           { "<ProcessTouchEvents>b__31_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::Touch, int32_t, ::System::Nullable_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, panelDelta, t);
}
inline ::UnityEngine::UIElements::EventBase*
UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessPenEvents_b__32_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::PenData _pen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                          { "<ProcessPenEvents>b__32_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::PenData>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, panelPosition, panelDelta, _pen);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::_ProcessTabEvent_b__39_0(
    /* [TupleElementNames(new[] { "direction", "modifiers", "input" })] */ ::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers,
                                                                                                  ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>
        t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>(),
                                                           { "<ProcessTabEvent>b__39_0",
                                                             {},
                                                             { ::i2c::type_of<::System::ValueTuple_3<::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::EventModifiers,
                                                                                                     ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, t);
}
inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c* UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem___c::LegacyInputProcessor_DefaultEventSystem___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.get_m_CurrentPointerModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventModifiers (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::get_m_CurrentPointerModifiers)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x723ea38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "get_m_CurrentPointerModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.get_input
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* (
    ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(&::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::get_input)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x723ea44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "get_input", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x723ec14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.GetDefaultInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* (
    ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(&::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::GetDefaultInput)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x723ea68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "GetDefaultInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.ProcessLegacyInputEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessLegacyInputEvents)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x723ed64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ProcessLegacyInputEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.SendIMGUIEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::SendIMGUIEvents)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x724000c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "SendIMGUIEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.ProcessMouseEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessMouseEvents)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x723f684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ProcessMouseEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.SendInputEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::SendInputEvents)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x7240748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "SendInputEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.ProcessTouchEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessTouchEvents)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x723f130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ProcessTouchEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.ProcessPenEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessPenEvents)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x723ee50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ProcessPenEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.GetRawMoveVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::GetRawMoveVector)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x72410c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "GetRawMoveVector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.ShouldSendMoveFromInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ShouldSendMoveFromInput)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x7240c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ShouldSendMoveFromInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.ProcessTabEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::*)(::UnityEngine::Event*, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessTabEvent)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x7240b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(),
                                                             { "ProcessTabEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.MakeTouchEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::Touch, int32_t, ::UnityEngine::EventModifiers, int32_t)>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::MakeTouchEvent)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x72413bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(),
                         { "MakeTouchEvent", {}, { ::i2c::type_of<::UnityEngine::Touch>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::EventModifiers>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor.MakePenEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::PenData, ::UnityEngine::EventModifiers, int32_t)>(
    &::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::MakePenEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x7241508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(),
                                                { "MakePenEvent", {}, { ::i2c::type_of<::UnityEngine::PenData>(), ::i2c::type_of<::UnityEngine::EventModifiers>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_SendingTouchEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SendingTouchEvents;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_SendingTouchEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SendingTouchEvents;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_SendingTouchEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SendingTouchEvents = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_SendingPenEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SendingPenEvent;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_SendingPenEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SendingPenEvent;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_SendingPenEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SendingPenEvent = value;
}
constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_CurrentModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentModifiers;
}
constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_CurrentModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentModifiers;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_CurrentModifiers(::UnityEngine::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentModifiers = value;
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_LastMousePressButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMousePressButton;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_LastMousePressButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMousePressButton;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_LastMousePressButton(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMousePressButton = value;
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_NextMousePressTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextMousePressTime;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_NextMousePressTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextMousePressTime;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_NextMousePressTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextMousePressTime = value;
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_LastMouseClickCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMouseClickCount;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_LastMouseClickCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMouseClickCount;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_LastMouseClickCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMouseClickCount = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_LastMousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_LastMousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMousePosition;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_LastMousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMousePosition = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_MouseProcessedAtLeastOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseProcessedAtLeastOnce;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_MouseProcessedAtLeastOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseProcessedAtLeastOnce;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_MouseProcessedAtLeastOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseProcessedAtLeastOnce = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_TouchFingerIdToFingerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchFingerIdToFingerIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const&
UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_TouchFingerIdToFingerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchFingerIdToFingerIndex;
}
constexpr void
UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_TouchFingerIdToFingerIndex(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchFingerIdToFingerIndex = value;
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_TouchNextFingerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchNextFingerIndex;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_TouchNextFingerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchNextFingerIndex;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_TouchNextFingerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchNextFingerIndex = value;
}
constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_Input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Input;
}
constexpr ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_Input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Input;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_Input(::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Input = value;
}
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr ::UnityEngine::Event* const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_Event(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Event = value;
}
constexpr ::UnityEngine::UIElements::DefaultEventSystem*& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_EventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr ::UnityEngine::UIElements::DefaultEventSystem* const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_EventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_EventSystem(::UnityEngine::UIElements::DefaultEventSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventSystem = value;
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_ConsecutiveMoveCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_ConsecutiveMoveCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_ConsecutiveMoveCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConsecutiveMoveCount = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_LastMoveVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMoveVector;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_LastMoveVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastMoveVector;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastMoveVector = value;
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_PrevActionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevActionTime;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_PrevActionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevActionTime;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_PrevActionTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevActionTime = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_IsMoveFromKeyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMoveFromKeyboard;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_get_m_IsMoveFromKeyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMoveFromKeyboard;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::__cordl_internal_set_m_IsMoveFromKeyboard(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsMoveFromKeyboard = value;
}
inline ::UnityEngine::EventModifiers UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::get_m_CurrentPointerModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "get_m_CurrentPointerModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::get_input() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "get_input", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::_ctor(::UnityEngine::UIElements::DefaultEventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline ::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput* UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::GetDefaultInput() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "GetDefaultInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::LegacyInputProcessor_DefaultEventSystem_IInput*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessLegacyInputEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ProcessLegacyInputEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::SendIMGUIEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "SendIMGUIEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessMouseEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ProcessMouseEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::SendInputEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "SendInputEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessTouchEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ProcessTouchEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessPenEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ProcessPenEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::GetRawMoveVector() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "GetRawMoveVector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ShouldSendMoveFromInput() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(), { "ShouldSendMoveFromInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::ProcessTabEvent(::UnityEngine::Event* e, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(),
                                                           { "ProcessTabEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, modifiers);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::MakeTouchEvent(::UnityEngine::Touch touch, int32_t pointerId,
                                                                                                                              ::UnityEngine::EventModifiers modifiers, int32_t targetDisplay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(),
                       { "MakeTouchEvent", {}, { ::i2c::type_of<::UnityEngine::Touch>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::EventModifiers>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(nullptr, ___internal_method, touch, pointerId, modifiers, targetDisplay);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::MakePenEvent(::UnityEngine::PenData pen, ::UnityEngine::EventModifiers modifiers,
                                                                                                                            int32_t targetDisplay) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(),
                                              { "MakePenEvent", {}, { ::i2c::type_of<::UnityEngine::PenData>(), ::i2c::type_of<::UnityEngine::EventModifiers>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(nullptr, ___internal_method, pen, modifiers, targetDisplay);
}
inline ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*
UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::New_ctor(::UnityEngine::UIElements::DefaultEventSystem* eventSystem) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(eventSystem));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor::DefaultEventSystem_LegacyInputProcessor() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::DefaultEventSystem_UpdateMode::DefaultEventSystem_UpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultEventSystem_UpdateMode::DefaultEventSystem_UpdateMode() {}
constexpr ::UnityEngine::UIElements::DefaultEventSystem_UpdateMode UnityEngine::UIElements::DefaultEventSystem_UpdateMode::Always{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::DefaultEventSystem_UpdateMode UnityEngine::UIElements::DefaultEventSystem_UpdateMode::IgnoreIfAppNotFocused{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(
    &::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x7242118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x723e388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::_ctor(::UnityEngine::UIElements::DefaultEventSystem* es) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, es);
}
inline void UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "es", ty: "::UnityEngine::UIElements::DefaultEventSystem*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::DefaultEventSystem_FocusBasedEventSequenceContext(::UnityEngine::UIElements::DefaultEventSystem* es) noexcept {
  this->es = es;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext::DefaultEventSystem_FocusBasedEventSequenceContext() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem___c::*)()>(&::UnityEngine::UIElements::DefaultEventSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x72421b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem___c.__cctor_b__62_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem___c::*)()>(&::UnityEngine::UIElements::DefaultEventSystem___c::__cctor_b__62_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72421b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem___c*>(), { "<.cctor>b__62_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DefaultEventSystem___c::setStaticF___9(::UnityEngine::UIElements::DefaultEventSystem___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::DefaultEventSystem___c*, "<>9", ::UnityEngine::UIElements::DefaultEventSystem___c*>(
      std::forward<::UnityEngine::UIElements::DefaultEventSystem___c*>(value));
}
inline ::UnityEngine::UIElements::DefaultEventSystem___c* UnityEngine::UIElements::DefaultEventSystem___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::DefaultEventSystem___c*, "<>9", ::UnityEngine::UIElements::DefaultEventSystem___c*>();
}
inline void UnityEngine::UIElements::DefaultEventSystem___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem___c::__cctor_b__62_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem___c*>(), { "<.cctor>b__62_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DefaultEventSystem___c* UnityEngine::UIElements::DefaultEventSystem___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DefaultEventSystem___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultEventSystem___c::DefaultEventSystem___c() {}
template <typename TArg> inline void UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>::setStaticF___9(::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*, "<>9", ::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*>(
      std::forward<::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*>(value));
}
template <typename TArg> inline ::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>* UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*, "<>9", ::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*>();
}
template <typename TArg>
inline void UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>::setStaticF___9__37_0(
    ::System::Func_3<::UnityEngine::Vector3,
                     ::System::ValueTuple_3<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*, ::UnityEngine::Vector3, TArg>,
                     ::UnityEngine::UIElements::EventBase*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_3<::UnityEngine::Vector3,
                       ::System::ValueTuple_3<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*, ::UnityEngine::Vector3, TArg>,
                       ::UnityEngine::UIElements::EventBase*>*,
      "<>9__37_0", ::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*>(
      std::forward<::System::Func_3<
          ::UnityEngine::Vector3, ::System::ValueTuple_3<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*, ::UnityEngine::Vector3, TArg>,
          ::UnityEngine::UIElements::EventBase*>*>(value));
}
template <typename TArg>
inline ::System::Func_3<::UnityEngine::Vector3,
                        ::System::ValueTuple_3<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*, ::UnityEngine::Vector3, TArg>,
                        ::UnityEngine::UIElements::EventBase*>*
UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>::getStaticF___9__37_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_3<::UnityEngine::Vector3,
                       ::System::ValueTuple_3<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*, ::UnityEngine::Vector3, TArg>,
                       ::UnityEngine::UIElements::EventBase*>*,
      "<>9__37_0", ::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*>();
}
template <typename TArg> inline void UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TArg>
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>::_SendPositionBasedEvent_b__37_0(
    ::UnityEngine::Vector3 p, /* [TupleElementNames(new[] { "evtFactory", "delta", "arg" })] */ ::System::ValueTuple_3<
        ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*, ::UnityEngine::Vector3, TArg>
        t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*>(),
                                              { "<SendPositionBasedEvent>b__37_0",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Vector3>(),
                                                  ::i2c::type_of<::System::ValueTuple_3<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*,
                                                                                        ::UnityEngine::Vector3, TArg>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(this, ___internal_method, p, t);
}
template <typename TArg> inline ::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>* UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>*>());
}
// Ctor Parameters []
template <typename TArg> constexpr ::UnityEngine::UIElements::DefaultEventSystem___c__37_1<TArg>::DefaultEventSystem___c__37_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_isAppFocused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::get_isAppFocused)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7239ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_isAppFocused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ShouldIgnoreEventsOnAppNotFocused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::ShouldIgnoreEventsOnAppNotFocused)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x7239e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "ShouldIgnoreEventsOnAppNotFocused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_focusedPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::RuntimePanel* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::get_focusedPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7239e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_focusedPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.set_focusedPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::RuntimePanel*)>(
    &::UnityEngine::UIElements::DefaultEventSystem::set_focusedPanel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x7239e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                                                           { "set_focusedPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::RuntimePanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::DefaultEventSystem_UpdateMode)>(
    &::UnityEngine::UIElements::DefaultEventSystem::Update)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x7239edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                                                           { "Update", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem_UpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_legacyInputProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::get_legacyInputProcessor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x723a08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_legacyInputProcessor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_inputForUIProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::get_inputForUIProcessor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x723a020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_inputForUIProcessor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.set_isInputReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(bool)>(&::UnityEngine::UIElements::DefaultEventSystem::set_isInputReady)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x723a548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "set_isInputReady", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.FocusBasedEventSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::FocusBasedEventSequence)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x723a7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "FocusBasedEventSequence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.RemoveInputProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::RemoveInputProcessor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x723a6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "RemoveInputProcessor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.InitInputProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::InitInputProcessor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x723a56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "InitInputProcessor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.OnFocusEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::RuntimePanel*, ::UnityEngine::UIElements::FocusEvent*)>(
    &::UnityEngine::UIElements::DefaultEventSystem::OnFocusEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x723a7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                { "OnFocusEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::RuntimePanel*>(), ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_raycaster
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IScreenRaycaster* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(
    &::UnityEngine::UIElements::DefaultEventSystem::get_raycaster)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x723a7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_raycaster", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.set_raycaster
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::IScreenRaycaster*)>(
    &::UnityEngine::UIElements::DefaultEventSystem::set_raycaster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x723a838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                                                           { "set_raycaster", {}, { ::i2c::type_of<::UnityEngine::UIElements::IScreenRaycaster*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.FindTargetAtPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, int32_t, ::System::Nullable_1<int32_t>, ::by_ref<::UnityEngine::UIElements::VisualElement*>, ::by_ref<::UnityEngine::UIElements::RuntimePanel*>,
    ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::UIElements::VisualElement*>, ::by_ref<::UnityEngine::Camera*>)>(&::UnityEngine::UIElements::DefaultEventSystem::FindTargetAtPosition)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0x723a840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                             { "FindTargetAtPosition",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::RuntimePanel*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.FindTargetAtRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(
    ::UnityEngine::Ray, float_t, int32_t, ::by_ref<::UnityEngine::UIElements::VisualElement*>, ::by_ref<::UnityEngine::UIElements::RuntimePanel*>, ::by_ref<::UnityEngine::Vector3>,
    ::by_ref<::UnityEngine::UIElements::VisualElement*>)>(&::UnityEngine::UIElements::DefaultEventSystem::FindTargetAtRay)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x723b120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                { "FindTargetAtRay",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::RuntimePanel*>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.GetPanelPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::DefaultEventSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIDocument*, ::UnityEngine::Ray)>(&::UnityEngine::UIElements::DefaultEventSystem::GetPanelPosition)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x723b044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                            { "GetPanelPosition",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.UpdateFocusedPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::RuntimePanel*)>(
    &::UnityEngine::UIElements::DefaultEventSystem::UpdateFocusedPanel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x723b470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                                                           { "UpdateFocusedPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::RuntimePanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.UpdateWorldSpacePointers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::UpdateWorldSpacePointers)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x723a0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "UpdateWorldSpacePointers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::System::Object*)>(&::UnityEngine::UIElements::DefaultEventSystem::Log)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x723b4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "Log", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::System::Object*)>(&::UnityEngine::UIElements::DefaultEventSystem::LogWarning)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x723b974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "LogWarning", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.LogToGameScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::StringW)>(&::UnityEngine::UIElements::DefaultEventSystem::LogToGameScreen)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x723b5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "LogToGameScreen", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x723ba48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::RuntimePanel*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_FocusedPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusedPanel;
}
constexpr ::UnityEngine::UIElements::RuntimePanel* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_FocusedPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusedPanel;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_FocusedPanel(::UnityEngine::UIElements::RuntimePanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FocusedPanel = value;
}
constexpr ::UnityEngine::UIElements::RuntimePanel*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PreviousFocusedPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousFocusedPanel;
}
constexpr ::UnityEngine::UIElements::RuntimePanel* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PreviousFocusedPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousFocusedPanel;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_PreviousFocusedPanel(::UnityEngine::UIElements::RuntimePanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousFocusedPanel = value;
}
constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PreviousFocusedElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousFocusedElement;
}
constexpr ::UnityEngine::UIElements::Focusable* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PreviousFocusedElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousFocusedElement;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_PreviousFocusedElement(::UnityEngine::UIElements::Focusable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousFocusedElement = value;
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_UpdateFrameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateFrameCount;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_UpdateFrameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateFrameCount;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_UpdateFrameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateFrameCount = value;
}
constexpr ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LegacyInputProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LegacyInputProcessor;
}
constexpr ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LegacyInputProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LegacyInputProcessor;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_LegacyInputProcessor(::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LegacyInputProcessor = value;
}
constexpr ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_InputForUIProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputForUIProcessor;
}
constexpr ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_InputForUIProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputForUIProcessor;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_InputForUIProcessor(::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputForUIProcessor = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_IsInputReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInputReady;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_IsInputReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInputReady;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_IsInputReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsInputReady = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_UseInputForUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseInputForUI;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_UseInputForUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseInputForUI;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_UseInputForUI(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseInputForUI = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_IsInputForUIActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInputForUIActive;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_IsInputForUIActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInputForUIActive;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_IsInputForUIActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsInputForUIActive = value;
}
constexpr ::UnityEngine::UIElements::IScreenRaycaster*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Raycaster() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Raycaster;
}
constexpr ::UnityEngine::UIElements::IScreenRaycaster* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Raycaster() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Raycaster;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_Raycaster(::UnityEngine::UIElements::IScreenRaycaster* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Raycaster = value;
}
constexpr ::UnityEngine::UIElements::PhysicsDocumentPicker*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_WorldSpacePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpacePicker;
}
constexpr ::UnityEngine::UIElements::PhysicsDocumentPicker* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_WorldSpacePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpacePicker;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_WorldSpacePicker(::UnityEngine::UIElements::PhysicsDocumentPicker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldSpacePicker = value;
}
constexpr ::UnityEngine::UIElements::ScreenOverlayPanelPicker*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_ScreenOverlayPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenOverlayPicker;
}
constexpr ::UnityEngine::UIElements::ScreenOverlayPanelPicker* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_ScreenOverlayPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenOverlayPicker;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_ScreenOverlayPicker(::UnityEngine::UIElements::ScreenOverlayPanelPicker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenOverlayPicker = value;
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_worldSpaceMaxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceMaxDistance;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_worldSpaceMaxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceMaxDistance;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_worldSpaceMaxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldSpaceMaxDistance = value;
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_worldSpaceLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceLayers;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_worldSpaceLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceLayers;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_worldSpaceLayers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldSpaceLayers = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_verbose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verbose;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_verbose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verbose;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_verbose(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___verbose = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_logToGameScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logToGameScreen;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_logToGameScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logToGameScreen;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_logToGameScreen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logToGameScreen = value;
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LogLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogLabel;
}
constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LogLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogLabel;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_LogLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LogLabel = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LogLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogLines;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LogLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogLines;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_LogLines(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LogLines = value;
}
inline void UnityEngine::UIElements::DefaultEventSystem::setStaticF_IsEditorRemoteConnected(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "IsEditorRemoteConnected", ::UnityEngine::UIElements::DefaultEventSystem*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::UIElements::DefaultEventSystem::getStaticF_IsEditorRemoteConnected() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "IsEditorRemoteConnected", ::UnityEngine::UIElements::DefaultEventSystem*>();
}
inline void UnityEngine::UIElements::DefaultEventSystem::setStaticF_s_InvalidPanelCoordinates(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "s_InvalidPanelCoordinates", ::UnityEngine::UIElements::DefaultEventSystem*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::DefaultEventSystem::getStaticF_s_InvalidPanelCoordinates() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "s_InvalidPanelCoordinates", ::UnityEngine::UIElements::DefaultEventSystem*>();
}
inline bool UnityEngine::UIElements::DefaultEventSystem::get_isAppFocused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_isAppFocused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem::ShouldIgnoreEventsOnAppNotFocused() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "ShouldIgnoreEventsOnAppNotFocused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RuntimePanel* UnityEngine::UIElements::DefaultEventSystem::get_focusedPanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_focusedPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RuntimePanel*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::set_focusedPanel(::UnityEngine::UIElements::RuntimePanel* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "set_focusedPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::RuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DefaultEventSystem::Update(::UnityEngine::UIElements::DefaultEventSystem_UpdateMode updateMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                                                         { "Update", {}, { ::i2c::type_of<::UnityEngine::UIElements::DefaultEventSystem_UpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode);
}
inline ::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor* UnityEngine::UIElements::DefaultEventSystem::get_legacyInputProcessor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_legacyInputProcessor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DefaultEventSystem_LegacyInputProcessor*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor* UnityEngine::UIElements::DefaultEventSystem::get_inputForUIProcessor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_inputForUIProcessor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DefaultEventSystem_InputForUIProcessor*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::set_isInputReady(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "set_isInputReady", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext UnityEngine::UIElements::DefaultEventSystem::FocusBasedEventSequence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "FocusBasedEventSequence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DefaultEventSystem_FocusBasedEventSequenceContext>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::RemoveInputProcessor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "RemoveInputProcessor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::InitInputProcessor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "InitInputProcessor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::OnFocusEvent(::UnityEngine::UIElements::RuntimePanel* panel, ::UnityEngine::UIElements::FocusEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                              { "OnFocusEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::RuntimePanel*>(), ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel, evt);
}
template <typename TArg> inline void UnityEngine::UIElements::DefaultEventSystem::SendFocusBasedEvent(::System::Func_2<TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                          { "SendFocusBasedEvent", { ::i2c::class_of<TArg>() }, { ::i2c::type_of<::System::Func_2<TArg, ::UnityEngine::UIElements::EventBase*>*>(), ::i2c::type_of<TArg>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TArg>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evtFactory, arg);
}
template <typename TArg>
inline void
UnityEngine::UIElements::DefaultEventSystem::SendPositionBasedEvent(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 delta, int32_t pointerId, ::System::Nullable_1<int32_t> targetDisplay,
                                                                    ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg,
                                                                    bool deselectIfNoTarget) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
          { "SendPositionBasedEvent",
            { ::i2c::class_of<TArg>() },
            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(),
              ::i2c::type_of<::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*>(), ::i2c::type_of<TArg>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TArg>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mousePosition, delta, pointerId, targetDisplay, evtFactory, arg, deselectIfNoTarget);
}
template <typename TArg>
inline void UnityEngine::UIElements::DefaultEventSystem::SendPositionBasedEvent(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 delta, int32_t pointerId,
                                                                                ::System::Nullable_1<int32_t> targetDisplay,
                                                                                ::System::Func_3<::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg,
                                                                                bool deselectIfNoTarget) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                          { "SendPositionBasedEvent",
                            { ::i2c::class_of<TArg>() },
                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(),
                              ::i2c::type_of<::System::Func_3<::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*>(), ::i2c::type_of<TArg>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TArg>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mousePosition, delta, pointerId, targetDisplay, evtFactory, arg, deselectIfNoTarget);
}
template <typename TArg>
inline void UnityEngine::UIElements::DefaultEventSystem::SendRayBasedEvent(::UnityEngine::Ray worldRay, float_t maxDistance, int32_t pointerId,
                                                                           ::System::Func_3<::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg,
                                                                           bool deselectIfNoTarget) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                          { "SendRayBasedEvent",
                            { ::i2c::class_of<TArg>() },
                            { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::System::Func_3<::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>*>(), ::i2c::type_of<TArg>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TArg>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldRay, maxDistance, pointerId, evtFactory, arg, deselectIfNoTarget);
}
inline ::UnityEngine::UIElements::IScreenRaycaster* UnityEngine::UIElements::DefaultEventSystem::get_raycaster() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "get_raycaster", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IScreenRaycaster*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::set_raycaster(::UnityEngine::UIElements::IScreenRaycaster* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                                                         { "set_raycaster", {}, { ::i2c::type_of<::UnityEngine::UIElements::IScreenRaycaster*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DefaultEventSystem::FindTargetAtPosition(::UnityEngine::Vector2 mousePosition, ::UnityEngine::Vector2 delta, int32_t pointerId,
                                                                              ::System::Nullable_1<int32_t> targetDisplay, ::by_ref<::UnityEngine::UIElements::VisualElement*> target,
                                                                              ::by_ref<::UnityEngine::UIElements::RuntimePanel*> targetPanel, ::by_ref<::UnityEngine::Vector3> targetPanelPosition,
                                                                              ::by_ref<::UnityEngine::UIElements::VisualElement*> elementUnderPointer, ::by_ref<::UnityEngine::Camera*> camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                           { "FindTargetAtPosition",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::RuntimePanel*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mousePosition, delta, pointerId, targetDisplay, target, targetPanel, targetPanelPosition, elementUnderPointer, camera);
}
inline void UnityEngine::UIElements::DefaultEventSystem::FindTargetAtRay(::UnityEngine::Ray worldRay, float_t maxDistance, int32_t pointerId,
                                                                         ::by_ref<::UnityEngine::UIElements::VisualElement*> target, ::by_ref<::UnityEngine::UIElements::RuntimePanel*> targetPanel,
                                                                         ::by_ref<::UnityEngine::Vector3> targetPanelPosition,
                                                                         ::by_ref<::UnityEngine::UIElements::VisualElement*> elementUnderPointer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                              { "FindTargetAtRay",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::RuntimePanel*>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldRay, maxDistance, pointerId, target, targetPanel, targetPanelPosition, elementUnderPointer);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::DefaultEventSystem::GetPanelPosition(::UnityEngine::UIElements::VisualElement* pickedElement, ::UnityEngine::UIElements::UIDocument* document,
                                                                                            ::UnityEngine::Ray worldRay) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                          { "GetPanelPosition",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pickedElement, document, worldRay);
}
inline void UnityEngine::UIElements::DefaultEventSystem::UpdateFocusedPanel(::UnityEngine::UIElements::RuntimePanel* runtimePanel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(),
                                                                                         { "UpdateFocusedPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::RuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runtimePanel);
}
inline void UnityEngine::UIElements::DefaultEventSystem::UpdateWorldSpacePointers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "UpdateWorldSpacePointers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::Log(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "Log", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void UnityEngine::UIElements::DefaultEventSystem::LogWarning(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "LogWarning", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void UnityEngine::UIElements::DefaultEventSystem::LogToGameScreen(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { "LogToGameScreen", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void UnityEngine::UIElements::DefaultEventSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultEventSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DefaultEventSystem* UnityEngine::UIElements::DefaultEventSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DefaultEventSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultEventSystem::DefaultEventSystem() {}
