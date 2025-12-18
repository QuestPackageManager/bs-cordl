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
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration.GetDefaultConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration (*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration::GetDefaultConfiguration)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x632d9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration>::get(),
                                                 "GetDefaultConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration::GetDefaultConfiguration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration>::get(),
                                               "GetDefaultConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ActionAsset", ty: "::UnityW<::UnityEngine::InputSystem::InputActionAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "PointAction", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "MoveAction", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "SubmitAction", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "CancelAction", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "LeftClickAction", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "MiddleClickAction", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "RightClickAction", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "ScrollWheelAction", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration::InputSystemProvider_Configuration(::UnityW<::UnityEngine::InputSystem::InputActionAsset> ActionAsset,
                                                                                                                                ::StringW PointAction, ::StringW MoveAction, ::StringW SubmitAction,
                                                                                                                                ::StringW CancelAction, ::StringW LeftClickAction,
                                                                                                                                ::StringW MiddleClickAction, ::StringW RightClickAction,
                                                                                                                                ::StringW ScrollWheelAction) noexcept {
  this->ActionAsset = ActionAsset;
  this->PointAction = PointAction;
  this->MoveAction = MoveAction;
  this->SubmitAction = SubmitAction;
  this->CancelAction = CancelAction;
  this->LeftClickAction = LeftClickAction;
  this->MiddleClickAction = MiddleClickAction;
  this->RightClickAction = RightClickAction;
  this->ScrollWheelAction = ScrollWheelAction;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration::InputSystemProvider_Configuration() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63318ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c._Update_b__33_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::*)(
    ::UnityEngine::InputForUI::Event, ::UnityEngine::InputForUI::Event)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::_Update_b__33_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x63318b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>::get(),
                                                 "<Update>b__33_0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::setStaticF___9(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>::get>(
      std::forward<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>(value));
}
inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>::get>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::setStaticF___9__33_0(::System::Comparison_1<::UnityEngine::InputForUI::Event>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::InputForUI::Event>*, "<>9__33_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::InputForUI::Event>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::InputForUI::Event>* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::InputForUI::Event>*, "<>9__33_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>::get>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::_Update_b__33_0(::UnityEngine::InputForUI::Event a, ::UnityEngine::InputForUI::Event b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>::get(),
                                               "<Update>b__33_0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c::InputSystemProvider___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.Bootstrap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Bootstrap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x632d790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "Bootstrap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.get_m_EventModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::EventModifiers (
    ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_m_EventModifiers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x632d794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "get_m_EventModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.get_m_CurrentTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IntegerTime::DiscreteTime (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_m_CurrentTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x632d7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "get_m_CurrentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Initialize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x632d7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "Initialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Shutdown)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x632e458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "Shutdown",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnActionsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnActionsChange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x632ebf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "OnActionsChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Update)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x632ec30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ResetSeenEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ResetSeenEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x632f2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "ResetSeenEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ActionAssetIsNotNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ActionAssetIsNotNull)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x632f2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "ActionAssetIsNotNull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.DirectionNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::Unity::IntegerTime::DiscreteTime)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::DirectionNavigation)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x632f09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "DirectionNavigation",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.GetActiveDeviceFromDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputForUI::NavigationEvent_Direction)>(
        &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetActiveDeviceFromDirection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x632f524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                    "GetActiveDeviceFromDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::NavigationEvent_Direction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ReadCurrentNavigationMoveVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector2, bool> (
    ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ReadCurrentNavigationMoveVector)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x632f310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "ReadCurrentNavigationMoveVector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ReadNextPreviousDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::NavigationEvent_Direction (
    ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ReadNextPreviousDirection)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x632f414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "ReadNextPreviousDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.SortEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputForUI::Event, ::UnityEngine::InputForUI::Event)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SortEvents)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x632f7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "SortEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnFocusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(bool)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnFocusChanged)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x632f894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnFocusChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.RequestCurrentState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputForUI::Event_Type)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RequestCurrentState)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x632fa20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "RequestCurrentState",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event_Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.get_playerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_playerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x632fe64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "get_playerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ScreenBottomLeftToPanelPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ScreenBottomLeftToPanelPosition)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x632fe6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "ScreenBottomLeftToPanelPosition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.ToPointerStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::PointerEvent (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::Unity::IntegerTime::DiscreteTime, ::ByRef<::UnityEngine::InputForUI::PointerState>, ::UnityEngine::InputForUI::EventSource)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ToPointerStateEvent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x632fd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "ToPointerStateEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputForUI::PointerState>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.GetEventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetEventSource)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x632ff6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "GetEventSource",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.GetEventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetEventSource)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x632f624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "GetEventSource",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.GetPointerStateForSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ByRef<::UnityEngine::InputForUI::PointerState> (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(::UnityEngine::InputForUI::EventSource)>(
        &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetPointerStateForSource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x632ff9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "GetPointerStateForSource",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.DispatchFromCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::ByRef<::UnityEngine::InputForUI::Event>)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::DispatchFromCallback)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x632ffbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "DispatchFromCallback",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputForUI::Event>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.FindTouchFingerIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Touchscreen*, ::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::FindTouchFingerIndex)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x63300e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "FindTouchFingerIndex",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnPointerPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnPointerPerformed)> {
  constexpr static std::size_t size = 0x834;
  constexpr static std::size_t addrs = 0x63303f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnPointerPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnSubmitPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnSubmitPerformed)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6330c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnSubmitPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnCancelPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnCancelPerformed)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6330d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnCancelPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnClickPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext, ::UnityEngine::InputForUI::EventSource, ::UnityEngine::InputForUI::PointerEvent_Button)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnClickPerformed)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x6330e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnClickPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::PointerEvent_Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnLeftClickPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnLeftClickPerformed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6331268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnLeftClickPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnMiddleClickPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnMiddleClickPerformed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x63312a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnMiddleClickPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnRightClickPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnRightClickPerformed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x63312d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnRightClickPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.OnScrollWheelPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnScrollWheelPerformed)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6331310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnScrollWheelPerformed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.RegisterNextPreviousAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RegisterNextPreviousAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x63316ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "RegisterNextPreviousAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.UnregisterFixedActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterFixedActions)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63317d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "UnregisterFixedActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.RegisterActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RegisterActions)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x632dbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "RegisterActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.UnregisterActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterActions)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x632e550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                                 "UnregisterActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider.SetOnRegisterActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*)>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SetOnRegisterActions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63317f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "SetOnRegisterActions",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::*)()>(
    &::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x632d6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_Cfg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cfg;
}
constexpr ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration const&
UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_Cfg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cfg;
}
constexpr void
UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_Cfg(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Configuration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cfg = value;
}
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InputEventPartialProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InputActionAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_PointAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_PointAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PointAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MoveAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MoveAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_MoveAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MoveAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_SubmitAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_SubmitAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SubmitAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_CancelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_CancelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CancelAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_LeftClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_LeftClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftClickAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LeftClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MiddleClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_MiddleClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleClickAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MiddleClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_RightClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_RightClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightClickAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RightClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_ScrollWheelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_get_m_ScrollWheelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::__cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScrollWheelAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NextPreviousAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Events)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RepeatHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::getStaticF_s_OnRegisterActions() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*, "s_OnRegisterActions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get>();
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Bootstrap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "Bootstrap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_m_EventModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "get_m_EventModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers, false>(this, ___internal_method);
}
inline ::Unity::IntegerTime::DiscreteTime UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_m_CurrentTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "get_m_CurrentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "Initialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Shutdown() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "Shutdown",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnActionsChange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnActionsChange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ResetSeenEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "ResetSeenEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ActionAssetIsNotNull() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "ActionAssetIsNotNull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::DirectionNavigation(::Unity::IntegerTime::DiscreteTime currentTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "DirectionNavigation",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTime);
}
inline ::UnityEngine::InputSystem::InputDevice*
UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetActiveDeviceFromDirection(::UnityEngine::InputForUI::NavigationEvent_Direction direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "GetActiveDeviceFromDirection",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::NavigationEvent_Direction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method, direction);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector2, bool> UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ReadCurrentNavigationMoveVector() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "ReadCurrentNavigationMoveVector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector2, bool>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::NavigationEvent_Direction UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ReadNextPreviousDirection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "ReadNextPreviousDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::NavigationEvent_Direction, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SortEvents(::UnityEngine::InputForUI::Event a, ::UnityEngine::InputForUI::Event b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "SortEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnFocusChanged(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnFocusChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focus);
}
inline bool UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RequestCurrentState(::UnityEngine::InputForUI::Event_Type type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "RequestCurrentState",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event_Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline uint32_t UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::get_playerCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "get_playerCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2 position, int32_t targetDisplay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "ScreenBottomLeftToPanelPosition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, position, targetDisplay);
}
inline ::UnityEngine::InputForUI::PointerEvent UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::ToPointerStateEvent(::Unity::IntegerTime::DiscreteTime currentTime,
                                                                                                                                       ::ByRef<::UnityEngine::InputForUI::PointerState> state,
                                                                                                                                       ::UnityEngine::InputForUI::EventSource eventSource) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "ToPointerStateEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputForUI::PointerState>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::PointerEvent, false>(this, ___internal_method, currentTime, state, eventSource);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetEventSource(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "GetEventSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource, false>(this, ___internal_method, ctx);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetEventSource(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "GetEventSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource, false>(this, ___internal_method, device);
}
inline ::ByRef<::UnityEngine::InputForUI::PointerState>
UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::GetPointerStateForSource(::UnityEngine::InputForUI::EventSource eventSource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "GetPointerStateForSource",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::InputForUI::PointerState>, false>(this, ___internal_method, eventSource);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::DispatchFromCallback(::ByRef<::UnityEngine::InputForUI::Event> ev) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "DispatchFromCallback",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputForUI::Event>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ev);
}
inline int32_t UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::FindTouchFingerIndex(::UnityEngine::InputSystem::Touchscreen* touchscreen,
                                                                                                        ::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "FindTouchFingerIndex",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, touchscreen, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnPointerPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnPointerPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnSubmitPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnSubmitPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnCancelPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnCancelPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx,
                                                                                                 ::UnityEngine::InputForUI::EventSource eventSource,
                                                                                                 ::UnityEngine::InputForUI::PointerEvent_Button button) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnClickPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::PointerEvent_Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, eventSource, button);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnLeftClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnLeftClickPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnMiddleClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnMiddleClickPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnRightClickPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnRightClickPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::OnScrollWheelPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "OnScrollWheelPerformed",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RegisterNextPreviousAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "RegisterNextPreviousAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterFixedActions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "UnregisterFixedActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::RegisterActions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "RegisterActions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::UnregisterActions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(),
                                               "UnregisterActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::SetOnRegisterActions(::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), "SetOnRegisterActions",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider* UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*>());
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
