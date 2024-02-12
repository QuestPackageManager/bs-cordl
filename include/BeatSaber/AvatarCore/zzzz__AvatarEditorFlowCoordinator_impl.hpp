#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::__AvatarEditorFlowCoordinator__FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::__AvatarEditorFlowCoordinator__FinishAction() {}
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::Cancel{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction::Apply{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::__AvatarEditorFlowCoordinator__EditMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::__AvatarEditorFlowCoordinator__EditMode() {}
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::Create{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode::Edit{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(
    ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                       ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe16a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                                                                                     ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(
    ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                       ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe16b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                                                                                     ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.add_didSetupEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_didSetupEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe16bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "add_didSetupEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.remove_didSetupEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_didSetupEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe16ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "remove_didSetupEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.add_randomizeAllButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::System::Action*)>(
    &::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe16d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "add_randomizeAllButtonWasPressedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.remove_randomizeAllButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::System::Action*)>(
    &::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe16df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "remove_randomizeAllButtonWasPressedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(
    ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe16e90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.SetAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::SetAvatarSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe16ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "SetAvatarSystem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.OneTimeInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)()>(
    &::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::OneTimeInitialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)(
    ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction)>(&::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::Finish)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe16ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator.HandleBeatAvatarEditorRandomizeAllButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)()>(
    &::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::HandleBeatAvatarEditorRandomizeAllButtonWasPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe16f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                                 "HandleBeatAvatarEditorRandomizeAllButtonWasPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::*)()>(
    &::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe16f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                             ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*&
BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                                                                 ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*> const&
BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_set_didFinishEvent(
    ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                       ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*& BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get_didSetupEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetupEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*> const&
BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get_didSetupEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetupEvent;
}
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_set_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSetupEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get_randomizeAllButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeAllButtonWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get_randomizeAllButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeAllButtonWasPressedEvent;
}
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_set_randomizeAllButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___randomizeAllButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get__selectedAvatarSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystem;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> const&
BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get__selectedAvatarSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystem;
}
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_set__selectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedAvatarSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_didFinishEvent(
    ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                       ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                                                                                   ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_didFinishEvent(
    ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                       ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                                                                                   ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "add_didSetupEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "remove_didSetupEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::add_randomizeAllButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "add_randomizeAllButtonWasPressedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::remove_randomizeAllButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "remove_randomizeAllButtonWasPressedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::Setup(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode editMode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, editMode);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::SetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "SetAvatarSystem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarSystem);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::OneTimeInitialize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::Finish(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishAction);
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::HandleBeatAvatarEditorRandomizeAllButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                               "HandleBeatAvatarEditorRandomizeAllButtonWasPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>());
}
inline void BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator::AvatarEditorFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
