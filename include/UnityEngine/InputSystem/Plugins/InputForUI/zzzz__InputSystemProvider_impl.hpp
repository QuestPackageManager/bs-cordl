#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Plugins/InputForUI/InputSystemProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerState_impl.hpp"
#include "UnityEngine/InputSystem/Plugins/InputForUI/zzzz__InputSystemProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProviderImpl_def.hpp"
#include "UnityEngine/InputForUI/zzzz__InputEventPartialProvider_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEventRepeatHelper_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerState_def.hpp"
#include "UnityEngine/InputSystem/Plugins/InputForUI/zzzz__InputSystemProvider_def.hpp"
#include "UnityEngine/InputSystem/zzzz__DefaultInputActions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::setStaticF_PointAction(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PointAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::getStaticF_PointAction() {
  return ::cordl_internals::getStaticField<::StringW, "PointAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::setStaticF_MoveAction(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "MoveAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::getStaticF_MoveAction() {
  return ::cordl_internals::getStaticField<::StringW, "MoveAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::setStaticF_SubmitAction(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SubmitAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::getStaticF_SubmitAction() {
  return ::cordl_internals::getStaticField<::StringW, "SubmitAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::setStaticF_CancelAction(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "CancelAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::getStaticF_CancelAction() {
  return ::cordl_internals::getStaticField<::StringW, "CancelAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::setStaticF_LeftClickAction(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "LeftClickAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::getStaticF_LeftClickAction() {
  return ::cordl_internals::getStaticField<::StringW, "LeftClickAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::setStaticF_MiddleClickAction(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "MiddleClickAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::getStaticF_MiddleClickAction() {
  return ::cordl_internals::getStaticField<::StringW, "MiddleClickAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::setStaticF_RightClickAction(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "RightClickAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::getStaticF_RightClickAction() {
  return ::cordl_internals::getStaticField<::StringW, "RightClickAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::setStaticF_ScrollWheelAction(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ScrollWheelAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::getStaticF_ScrollWheelAction() {
  return ::cordl_internals::getStaticField<::StringW, "ScrollWheelAction", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions::InputSystemProvider_Actions() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69110a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c._Update_b__33_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::*)(
    ::UnityEngine::InputForUI::Event, ::UnityEngine::InputForUI::Event)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::_Update_b__33_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x69110ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>(),
                                                             { "<Update>b__33_0", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event>(), ::i2c::type_of<::UnityEngine::InputForUI::Event>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::setStaticF___9(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*, "<>9", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>(
      std::forward<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>(value));
}
inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*, "<>9",
                                           ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::setStaticF___9__33_0(::System::Comparison_1<::UnityEngine::InputForUI::Event>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::InputForUI::Event>*, "<>9__33_0", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::InputForUI::Event>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::InputForUI::Event>* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::InputForUI::Event>*, "<>9__33_0", ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::_Update_b__33_0(::UnityEngine::InputForUI::Event a, ::UnityEngine::InputForUI::Event b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>(),
                                                           { "<Update>b__33_0", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event>(), ::i2c::type_of<::UnityEngine::InputForUI::Event>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::InputSystemProvider___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.Bootstrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Bootstrap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x690d6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "Bootstrap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.get_m_EventModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_m_EventModifiers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x690d6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "get_m_EventModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.get_m_CurrentTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::DiscreteTime (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_m_CurrentTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x690d6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "get_m_CurrentTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Initialize)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x690d6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Shutdown)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x690dedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "Shutdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnActionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnActionsChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x690e410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "OnActionsChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Update)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x690e430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ResetSeenEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ResetSeenEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x690ea98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "ResetSeenEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ActionAssetIsNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ActionAssetIsNotNull)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x690eaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "ActionAssetIsNotNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.DirectionNavigation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::Unity::IntegerTime::DiscreteTime)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::DirectionNavigation)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x690e890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                           { "DirectionNavigation", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.GetActiveDeviceFromDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputForUI::NavigationEvent_Direction)>(
        &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetActiveDeviceFromDirection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x690ecc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "GetActiveDeviceFromDirection", {}, { ::i2c::type_of<::UnityEngine::InputForUI::NavigationEvent_Direction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ReadCurrentNavigationMoveVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector2, bool> (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ReadCurrentNavigationMoveVector)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x690eb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "ReadCurrentNavigationMoveVector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ReadNextPreviousDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::NavigationEvent_Direction (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ReadNextPreviousDirection)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x690ebb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "ReadNextPreviousDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.SortEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputForUI::Event, ::UnityEngine::InputForUI::Event)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SortEvents)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x690eee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "SortEvents", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event>(), ::i2c::type_of<::UnityEngine::InputForUI::Event>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnFocusChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(bool)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnFocusChanged)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x690efc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "OnFocusChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.RequestCurrentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputForUI::Event_Type)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RequestCurrentState)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x690f14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                           { "RequestCurrentState", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event_Type>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.get_playerCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_playerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690f598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "get_playerCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ScreenBottomLeftToPanelPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ScreenBottomLeftToPanelPosition)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x690f5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "ScreenBottomLeftToPanelPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ToPointerStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::PointerEvent (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::Unity::IntegerTime::DiscreteTime, ::by_ref<::UnityEngine::InputForUI::PointerState const>, ::UnityEngine::InputForUI::EventSource)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ToPointerStateEvent)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x690f488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "ToPointerStateEvent",
                                                               {},
                                                               { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::by_ref<::UnityEngine::InputForUI::PointerState const>>(),
                                                                 ::i2c::type_of<::UnityEngine::InputForUI::EventSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.GetEventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetEventSource)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x690f6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                           { "GetEventSource", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.GetEventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetEventSource)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x690ed50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                           { "GetEventSource", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.GetPointerStateForSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::InputForUI::PointerState> (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputForUI::EventSource)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetPointerStateForSource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x690f6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                           { "GetPointerStateForSource", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.DispatchFromCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::by_ref<::UnityEngine::InputForUI::Event const>)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::DispatchFromCallback)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x690f6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                           { "DispatchFromCallback", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputForUI::Event const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.FindTouchFingerIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Touchscreen*, ::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::FindTouchFingerIndex)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x690f814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                         { "FindTouchFingerIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnPointerPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnPointerPerformed)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x690fb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "OnPointerPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnSubmitPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnSubmitPerformed)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x691035c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "OnSubmitPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnCancelPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnCancelPerformed)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x691047c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "OnCancelPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnClickPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext, ::UnityEngine::InputForUI::EventSource, ::UnityEngine::InputForUI::PointerEvent_Button)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnClickPerformed)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x691059c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "OnClickPerformed",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), ::i2c::type_of<::UnityEngine::InputForUI::EventSource>(),
                                                                 ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnLeftClickPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnLeftClickPerformed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69109ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "OnLeftClickPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnMiddleClickPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnMiddleClickPerformed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69109e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "OnMiddleClickPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnRightClickPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnRightClickPerformed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6910a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "OnRightClickPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnScrollWheelPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnScrollWheelPerformed)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x6910a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "OnScrollWheelPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.RegisterFixedActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RegisterFixedActions)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x690ddf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "RegisterFixedActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.UnregisterFixedActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterFixedActions)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x690e3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "UnregisterFixedActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.FindActionAndRegisterCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (
    ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::StringW, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::FindActionAndRegisterCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6910e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                            { "FindActionAndRegisterCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.RegisterActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RegisterActions)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x690d9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "RegisterActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.UnregisterAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::by_ref<::UnityEngine::InputSystem::InputAction*>, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterAction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6910e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                           { "UnregisterAction",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>(),
                                                                                               ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.UnregisterActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterActions)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x690dffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "UnregisterActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.SelectInputActionAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SelectInputActionAsset)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x690d8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "SelectInputActionAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.SetOnRegisterActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SetOnRegisterActions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6910eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                             { "SetOnRegisterActions", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x690d5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputForUI::InputEventPartialProvider*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_InputEventPartialProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputEventPartialProvider;
}
constexpr ::UnityEngine::InputForUI::InputEventPartialProvider* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_InputEventPartialProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputEventPartialProvider;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_InputEventPartialProvider(::UnityEngine::InputForUI::InputEventPartialProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputEventPartialProvider = value;
}
constexpr ::UnityEngine::InputSystem::DefaultInputActions*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_DefaultInputActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultInputActions;
}
constexpr ::UnityEngine::InputSystem::DefaultInputActions* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_DefaultInputActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultInputActions;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_DefaultInputActions(::UnityEngine::InputSystem::DefaultInputActions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultInputActions = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_InputActionAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionAsset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_InputActionAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionAsset;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_InputActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputActionAsset = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_PointAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_PointAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_PointAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MoveAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MoveAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_MoveAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_SubmitAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_SubmitAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_SubmitAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubmitAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_CancelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_CancelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_CancelAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CancelAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_LeftClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftClickAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_LeftClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftClickAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_LeftClickAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LeftClickAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MiddleClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleClickAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MiddleClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleClickAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_MiddleClickAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MiddleClickAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_RightClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightClickAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_RightClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightClickAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_RightClickAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RightClickAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_ScrollWheelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_ScrollWheelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_ScrollWheelAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollWheelAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_NextPreviousAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextPreviousAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_NextPreviousAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextPreviousAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_NextPreviousAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextPreviousAction = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_Events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_Events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Events;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Events = value;
}
constexpr ::UnityEngine::InputForUI::PointerState& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MouseState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr ::UnityEngine::InputForUI::PointerState const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MouseState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_MouseState(::UnityEngine::InputForUI::PointerState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseState = value;
}
constexpr ::UnityEngine::InputForUI::PointerState& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_PenState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PenState;
}
constexpr ::UnityEngine::InputForUI::PointerState const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_PenState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PenState;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_PenState(::UnityEngine::InputForUI::PointerState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PenState = value;
}
constexpr bool& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_SeenPenEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SeenPenEvents;
}
constexpr bool const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_SeenPenEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SeenPenEvents;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_SeenPenEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SeenPenEvents = value;
}
constexpr ::UnityEngine::InputForUI::PointerState& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_TouchState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchState;
}
constexpr ::UnityEngine::InputForUI::PointerState const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_TouchState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchState;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_TouchState(::UnityEngine::InputForUI::PointerState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchState = value;
}
constexpr bool& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_SeenTouchEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SeenTouchEvents;
}
constexpr bool const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_SeenTouchEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SeenTouchEvents;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_SeenTouchEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SeenTouchEvents = value;
}
constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper*& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_RepeatHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepeatHelper;
}
constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper* const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_RepeatHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepeatHelper;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_RepeatHelper(::UnityEngine::InputForUI::NavigationEventRepeatHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RepeatHelper = value;
}
constexpr bool& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_ResetSeenEventsOnUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetSeenEventsOnUpdate;
}
constexpr bool const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_ResetSeenEventsOnUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetSeenEventsOnUpdate;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_ResetSeenEventsOnUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResetSeenEventsOnUpdate = value;
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::setStaticF_s_OnRegisterActions(::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*, "s_OnRegisterActions",
                                    ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::getStaticF_s_OnRegisterActions() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*, "s_OnRegisterActions",
                                           ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Bootstrap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "Bootstrap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_m_EventModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "get_m_EventModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers>(this, ___internal_method);
}
inline ::Unity::IntegerTime::DiscreteTime UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_m_CurrentTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "get_m_CurrentTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Shutdown() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "Shutdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnActionsChange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "OnActionsChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Update() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ResetSeenEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "ResetSeenEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ActionAssetIsNotNull() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "ActionAssetIsNotNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::DirectionNavigation(::Unity::IntegerTime::DiscreteTime currentTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "DirectionNavigation", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline ::UnityEngine::InputSystem::InputDevice*
UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetActiveDeviceFromDirection(::UnityEngine::InputForUI::NavigationEvent_Direction direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "GetActiveDeviceFromDirection", {}, { ::i2c::type_of<::UnityEngine::InputForUI::NavigationEvent_Direction>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method, direction);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector2, bool> UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ReadCurrentNavigationMoveVector() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "ReadCurrentNavigationMoveVector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector2, bool>>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ReadNextPreviousDirection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "ReadNextPreviousDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::NavigationEvent_Direction>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SortEvents(::UnityEngine::InputForUI::Event a, ::UnityEngine::InputForUI::Event b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "SortEvents", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event>(), ::i2c::type_of<::UnityEngine::InputForUI::Event>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnFocusChanged(bool focus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "OnFocusChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline bool UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RequestCurrentState(::UnityEngine::InputForUI::Event_Type type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "RequestCurrentState", {}, { ::i2c::type_of<::UnityEngine::InputForUI::Event_Type>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline uint32_t UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_playerCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "get_playerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2 position, int32_t targetDisplay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "ScreenBottomLeftToPanelPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, position, targetDisplay);
}
inline ::UnityEngine::InputForUI::PointerEvent UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ToPointerStateEvent(
    ::Unity::IntegerTime::DiscreteTime currentTime, /* [IsReadOnly] */ ::by_ref<::UnityEngine::InputForUI::PointerState const> state, ::UnityEngine::InputForUI::EventSource eventSource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "ToPointerStateEvent",
                                                             {},
                                                             { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::by_ref<::UnityEngine::InputForUI::PointerState const>>(),
                                                               ::i2c::type_of<::UnityEngine::InputForUI::EventSource>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::PointerEvent>(this, ___internal_method, currentTime, state, eventSource);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetEventSource(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "GetEventSource", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(this, ___internal_method, ctx);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetEventSource(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "GetEventSource", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(this, ___internal_method, device);
}
inline ::by_ref<::UnityEngine::InputForUI::PointerState>
UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetPointerStateForSource(::UnityEngine::InputForUI::EventSource eventSource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "GetPointerStateForSource", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventSource>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::InputForUI::PointerState>>(this, ___internal_method, eventSource);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::DispatchFromCallback(/* [IsReadOnly] */ ::by_ref<::UnityEngine::InputForUI::Event const> ev) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "DispatchFromCallback", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputForUI::Event const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline int32_t UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::FindTouchFingerIndex(::UnityEngine::InputSystem::Touchscreen* touchscreen,
                                                                                                        ::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                          { "FindTouchFingerIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, touchscreen, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnPointerPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "OnPointerPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnSubmitPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "OnSubmitPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnCancelPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "OnCancelPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx,
                                                                                                 ::UnityEngine::InputForUI::EventSource eventSource,
                                                                                                 ::UnityEngine::InputForUI::PointerEvent_Button button) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "OnClickPerformed",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), ::i2c::type_of<::UnityEngine::InputForUI::EventSource>(),
                                                               ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, eventSource, button);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnLeftClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "OnLeftClickPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnMiddleClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "OnMiddleClickPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnRightClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "OnRightClickPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnScrollWheelPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "OnScrollWheelPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RegisterFixedActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "RegisterFixedActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterFixedActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "UnregisterFixedActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction*
UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::FindActionAndRegisterCallback(::StringW actionNameOrId,
                                                                                                  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                          { "FindActionAndRegisterCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, actionNameOrId, callback);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RegisterActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "RegisterActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterAction(::by_ref<::UnityEngine::InputSystem::InputAction*> action,
                                                                                                 ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                                                         { "UnregisterAction",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>(),
                                                                                             ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, callback);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "UnregisterActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SelectInputActionAsset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { "SelectInputActionAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SetOnRegisterActions(::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(),
                                                           { "SetOnRegisterActions", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>());
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProviderImpl"
constexpr UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::operator ::UnityEngine::InputForUI::IEventProviderImpl*() noexcept {
  return static_cast<::UnityEngine::InputForUI::IEventProviderImpl*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProviderImpl"
constexpr ::UnityEngine::InputForUI::IEventProviderImpl* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::i___UnityEngine__InputForUI__IEventProviderImpl() noexcept {
  return static_cast<::UnityEngine::InputForUI::IEventProviderImpl*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::InputSystemProvider() {}
