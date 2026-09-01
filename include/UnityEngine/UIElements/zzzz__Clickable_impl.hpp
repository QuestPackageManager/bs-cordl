#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Clickable.hpp"
#include "UnityEngine/UIElements/zzzz__PointerManipulator_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Clickable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimerState_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.add_clickedWithEventInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::System::Action_1<::UnityEngine::UIElements::EventBase*>*)>(
    &::UnityEngine::UIElements::Clickable::add_clickedWithEventInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c49e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(),
                                                             { "add_clickedWithEventInfo", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::EventBase*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.remove_clickedWithEventInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::System::Action_1<::UnityEngine::UIElements::EventBase*>*)>(
    &::UnityEngine::UIElements::Clickable::remove_clickedWithEventInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c49f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(),
                                                             { "remove_clickedWithEventInfo", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::EventBase*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.add_clicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::System::Action*)>(&::UnityEngine::UIElements::Clickable::add_clicked)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c4a014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "add_clicked", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.remove_clicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::System::Action*)>(&::UnityEngine::UIElements::Clickable::remove_clicked)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c4a0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "remove_clicked", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Clickable::*)()>(&::UnityEngine::UIElements::Clickable::get_active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4a16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.set_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(bool)>(&::UnityEngine::UIElements::Clickable::set_active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4a174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.get_lastMousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::Clickable::*)()>(&::UnityEngine::UIElements::Clickable::get_lastMousePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4a17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "get_lastMousePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.set_lastMousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::Clickable::set_lastMousePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4a184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "set_lastMousePosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.get_acceptClicksIfDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Clickable::*)()>(&::UnityEngine::UIElements::Clickable::get_acceptClicksIfDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4a18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "get_acceptClicksIfDisabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.set_acceptClicksIfDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(bool)>(&::UnityEngine::UIElements::Clickable::set_acceptClicksIfDisabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c4a194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "set_acceptClicksIfDisabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.get_invokePolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::InvokePolicy (::UnityEngine::UIElements::Clickable::*)()>(&::UnityEngine::UIElements::Clickable::get_invokePolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4a1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "get_invokePolicy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::System::Action*, int64_t, int64_t)>(&::UnityEngine::UIElements::Clickable::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c4a204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::System::Action_1<::UnityEngine::UIElements::EventBase*>*)>(
    &::UnityEngine::UIElements::Clickable::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6c4a300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::EventBase*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::System::Action*)>(&::UnityEngine::UIElements::Clickable::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6c4a230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.OnTimer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::TimerState)>(&::UnityEngine::UIElements::Clickable::OnTimer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c4a3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnTimer", {}, { ::i2c::type_of<::UnityEngine::UIElements::TimerState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.IsRepeatable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Clickable::*)()>(&::UnityEngine::UIElements::Clickable::IsRepeatable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c4a478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "IsRepeatable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.RegisterCallbacksOnTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)()>(&::UnityEngine::UIElements::Clickable::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6c4a56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)()>(&::UnityEngine::UIElements::Clickable::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6c4a82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::Clickable::OnPointerDown)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c4ab18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.OnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::Clickable::OnPointerMove)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c4abbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::Clickable::OnPointerUp)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c4ac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.OnPointerCancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::PointerCancelEvent*)>(
    &::UnityEngine::UIElements::Clickable::OnPointerCancel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c4ace8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnPointerCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.OnPointerCaptureOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::PointerCaptureOutEvent*)>(
    &::UnityEngine::UIElements::Clickable::OnPointerCaptureOut)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c4ad7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(),
                                                                                           { "OnPointerCaptureOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.ContainsPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Clickable::*)(int32_t)>(&::UnityEngine::UIElements::Clickable::ContainsPointer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c4a49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "ContainsPointer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::Clickable::Invoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c4a514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "Invoke", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.SimulateSingleClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::EventBase*, int32_t)>(
    &::UnityEngine::UIElements::Clickable::SimulateSingleClick)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6c4adfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(),
                                                             { "SimulateSingleClick", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.ResetActivePseudoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)()>(&::UnityEngine::UIElements::Clickable::ResetActivePseudoState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6c4aae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "ResetActivePseudoState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.ProcessDownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::UIElements::Clickable::ProcessDownEvent)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x6c4afac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.ProcessMoveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::Clickable::ProcessMoveEvent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c4b33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.ProcessUpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::UIElements::Clickable::ProcessUpEvent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6c4b3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Clickable.ProcessCancelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Clickable::*)(::UnityEngine::UIElements::EventBase*, int32_t)>(
    &::UnityEngine::UIElements::Clickable::ProcessCancelEvent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6c4b538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::UIElements::EventBase*>*& UnityEngine::UIElements::Clickable::__cordl_internal_get_clickedWithEventInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clickedWithEventInfo;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::EventBase*>* const& UnityEngine::UIElements::Clickable::__cordl_internal_get_clickedWithEventInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clickedWithEventInfo;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set_clickedWithEventInfo(::System::Action_1<::UnityEngine::UIElements::EventBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clickedWithEventInfo = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::Clickable::__cordl_internal_get_clicked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clicked;
}
constexpr ::System::Action* const& UnityEngine::UIElements::Clickable::__cordl_internal_get_clicked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clicked;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set_clicked(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clicked = value;
}
constexpr int64_t& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_Delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delay;
}
constexpr int64_t const& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_Delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delay;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set_m_Delay(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Delay = value;
}
constexpr int64_t& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_Interval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interval;
}
constexpr int64_t const& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_Interval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interval;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set_m_Interval(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Interval = value;
}
constexpr bool& UnityEngine::UIElements::Clickable::__cordl_internal_get__active_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____active_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::Clickable::__cordl_internal_get__active_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____active_k__BackingField;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set__active_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____active_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::Clickable::__cordl_internal_get__lastMousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastMousePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::Clickable::__cordl_internal_get__lastMousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastMousePosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set__lastMousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastMousePosition_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_ActivePointerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivePointerId;
}
constexpr int32_t const& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_ActivePointerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivePointerId;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set_m_ActivePointerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActivePointerId = value;
}
constexpr bool& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_AcceptClicksIfDisabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AcceptClicksIfDisabled;
}
constexpr bool const& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_AcceptClicksIfDisabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AcceptClicksIfDisabled;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set_m_AcceptClicksIfDisabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AcceptClicksIfDisabled = value;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_Repeater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Repeater;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_Repeater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Repeater;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set_m_Repeater(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Repeater = value;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_PendingActivePseudoStateReset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingActivePseudoStateReset;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::Clickable::__cordl_internal_get_m_PendingActivePseudoStateReset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingActivePseudoStateReset;
}
constexpr void UnityEngine::UIElements::Clickable::__cordl_internal_set_m_PendingActivePseudoStateReset(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PendingActivePseudoStateReset = value;
}
inline void UnityEngine::UIElements::Clickable::add_clickedWithEventInfo(::System::Action_1<::UnityEngine::UIElements::EventBase*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(),
                                                           { "add_clickedWithEventInfo", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::EventBase*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Clickable::remove_clickedWithEventInfo(::System::Action_1<::UnityEngine::UIElements::EventBase*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(),
                                                           { "remove_clickedWithEventInfo", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::EventBase*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Clickable::add_clicked(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "add_clicked", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Clickable::remove_clicked(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "remove_clicked", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Clickable::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Clickable::set_active(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::Clickable::get_lastMousePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "get_lastMousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Clickable::set_lastMousePosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "set_lastMousePosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Clickable::get_acceptClicksIfDisabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "get_acceptClicksIfDisabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Clickable::set_acceptClicksIfDisabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "set_acceptClicksIfDisabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::InvokePolicy UnityEngine::UIElements::Clickable::get_invokePolicy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "get_invokePolicy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::InvokePolicy>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Clickable::_ctor(::System::Action* handler, int64_t delay, int64_t interval) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler, delay, interval);
}
inline void UnityEngine::UIElements::Clickable::_ctor(::System::Action_1<::UnityEngine::UIElements::EventBase*>* handler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::EventBase*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void UnityEngine::UIElements::Clickable::_ctor(::System::Action* handler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void UnityEngine::UIElements::Clickable::OnTimer(::UnityEngine::UIElements::TimerState timerState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnTimer", {}, { ::i2c::type_of<::UnityEngine::UIElements::TimerState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timerState);
}
inline bool UnityEngine::UIElements::Clickable::IsRepeatable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "IsRepeatable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Clickable::RegisterCallbacksOnTarget() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Clickable::UnregisterCallbacksFromTarget() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Clickable::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Clickable::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Clickable::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Clickable::OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "OnPointerCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Clickable::OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(),
                                                                                         { "OnPointerCaptureOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::Clickable::ContainsPointer(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "ContainsPointer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId);
}
inline void UnityEngine::UIElements::Clickable::Invoke(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "Invoke", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Clickable::SimulateSingleClick(::UnityEngine::UIElements::EventBase* evt, int32_t delayMs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(),
                                                           { "SimulateSingleClick", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, delayMs);
}
inline void UnityEngine::UIElements::Clickable::ResetActivePseudoState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), { "ResetActivePseudoState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Clickable::ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition, pointerId);
}
inline void UnityEngine::UIElements::Clickable::ProcessMoveEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition);
}
inline void UnityEngine::UIElements::Clickable::ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition, pointerId);
}
inline void UnityEngine::UIElements::Clickable::ProcessCancelEvent(::UnityEngine::UIElements::EventBase* evt, int32_t pointerId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Clickable*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, pointerId);
}
inline ::UnityEngine::UIElements::Clickable* UnityEngine::UIElements::Clickable::New_ctor(::System::Action* handler, int64_t delay, int64_t interval) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Clickable*>(handler, delay, interval));
}
inline ::UnityEngine::UIElements::Clickable* UnityEngine::UIElements::Clickable::New_ctor(::System::Action_1<::UnityEngine::UIElements::EventBase*>* handler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Clickable*>(handler));
}
inline ::UnityEngine::UIElements::Clickable* UnityEngine::UIElements::Clickable::New_ctor(::System::Action* handler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Clickable*>(handler));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Clickable::Clickable() {}
