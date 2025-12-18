#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/InputEventPartialProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_impl.hpp"
#include "UnityEngine/zzzz__OperatingSystemFamily_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__InputEventPartialProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProviderImpl_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__TextInputEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)()>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::Initialize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6990f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)()>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::Shutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69910dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(),
                                                                               "Shutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)()>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::Update)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x69910e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.OnFocusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)(bool)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::OnFocusChanged)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6991bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "OnFocusChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.RequestCurrentState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::UnityEngine::InputForUI::Event_Type)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::RequestCurrentState)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6991d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "RequestCurrentState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event_Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.GetTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IntegerTime::DiscreteTime (::UnityEngine::InputForUI::InputEventPartialProvider::*)(
    ::ByRef<::UnityEngine::Event*>)>(&::UnityEngine::InputForUI::InputEventPartialProvider::GetTimestamp)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6991e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "GetTimestamp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.UpdateEventModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::ByRef<::UnityEngine::Event*>)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::UpdateEventModifiers)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x69913c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "UpdateEventModifiers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.ToKeyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::KeyEvent (::UnityEngine::InputForUI::InputEventPartialProvider::*)(
    ::ByRef<::UnityEngine::Event*>)>(&::UnityEngine::InputForUI::InputEventPartialProvider::ToKeyEvent)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x69916b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "ToKeyEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.ToTextInputEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::TextInputEvent (::UnityEngine::InputForUI::InputEventPartialProvider::*)(
    ::ByRef<::UnityEngine::Event*>)>(&::UnityEngine::InputForUI::InputEventPartialProvider::ToTextInputEvent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6991988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "ToTextInputEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.SendNextOrPreviousNavigationEventOnTabKeyDownEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)(::ByRef<::UnityEngine::Event*>)>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::SendNextOrPreviousNavigationEventOnTabKeyDownEvent)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6991820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "SendNextOrPreviousNavigationEventOnTabKeyDownEvent",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider.ToCommandEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::CommandEvent (::UnityEngine::InputForUI::InputEventPartialProvider::*)(
    ::ByRef<::UnityEngine::Event*>)>(&::UnityEngine::InputForUI::InputEventPartialProvider::ToCommandEvent)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x69919f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "ToCommandEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::InputEventPartialProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::InputEventPartialProvider::*)()>(
    &::UnityEngine::InputForUI::InputEventPartialProvider::_ctor)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x6991e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Event*& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__ev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ev;
}
constexpr ::UnityEngine::Event* const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__ev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ev;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__ev(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::OperatingSystemFamily& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__operatingSystemFamily() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operatingSystemFamily;
}
constexpr ::UnityEngine::OperatingSystemFamily const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__operatingSystemFamily() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operatingSystemFamily;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__operatingSystemFamily(::UnityEngine::OperatingSystemFamily value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____operatingSystemFamily = value;
}
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__keyboardButtonsState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardButtonsState;
}
constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__keyboardButtonsState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardButtonsState;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__keyboardButtonsState(::UnityEngine::InputForUI::KeyEvent_ButtonsState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyboardButtonsState = value;
}
constexpr ::UnityEngine::InputForUI::EventModifiers& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__eventModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventModifiers;
}
constexpr ::UnityEngine::InputForUI::EventModifiers const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__eventModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventModifiers;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__eventModifiers(::UnityEngine::InputForUI::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventModifiers = value;
}
constexpr bool& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__sendNavigationEventOnTabKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendNavigationEventOnTabKey;
}
constexpr bool const& UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__sendNavigationEventOnTabKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendNavigationEventOnTabKey;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__sendNavigationEventOnTabKey(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sendNavigationEventOnTabKey = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>*&
UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__IMGUICommandToInputForUICommandType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IMGUICommandToInputForUICommandType;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>* const&
UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_get__IMGUICommandToInputForUICommandType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IMGUICommandToInputForUICommandType;
}
constexpr void UnityEngine::InputForUI::InputEventPartialProvider::__cordl_internal_set__IMGUICommandToInputForUICommandType(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IMGUICommandToInputForUICommandType)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(),
                                                                             "Shutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::OnFocusChanged(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "OnFocusChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focus);
}
inline bool UnityEngine::InputForUI::InputEventPartialProvider::RequestCurrentState(::UnityEngine::InputForUI::Event_Type type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "RequestCurrentState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::Event_Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline ::Unity::IntegerTime::DiscreteTime UnityEngine::InputForUI::InputEventPartialProvider::GetTimestamp(::ByRef<::UnityEngine::Event*> ev) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "GetTimestamp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime, false>(this, ___internal_method, ev);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::UpdateEventModifiers(::ByRef<::UnityEngine::Event*> ev) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "UpdateEventModifiers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ev);
}
inline ::UnityEngine::InputForUI::KeyEvent UnityEngine::InputForUI::InputEventPartialProvider::ToKeyEvent(::ByRef<::UnityEngine::Event*> ev) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "ToKeyEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::KeyEvent, false>(this, ___internal_method, ev);
}
inline ::UnityEngine::InputForUI::TextInputEvent UnityEngine::InputForUI::InputEventPartialProvider::ToTextInputEvent(::ByRef<::UnityEngine::Event*> ev) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "ToTextInputEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::TextInputEvent, false>(this, ___internal_method, ev);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::SendNextOrPreviousNavigationEventOnTabKeyDownEvent(::ByRef<::UnityEngine::Event*> ev) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "SendNextOrPreviousNavigationEventOnTabKeyDownEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ev);
}
inline ::UnityEngine::InputForUI::CommandEvent UnityEngine::InputForUI::InputEventPartialProvider::ToCommandEvent(::ByRef<::UnityEngine::Event*> ev) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(), "ToCommandEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Event*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::CommandEvent, false>(this, ___internal_method, ev);
}
inline void UnityEngine::InputForUI::InputEventPartialProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::InputEventPartialProvider*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::InputEventPartialProvider* UnityEngine::InputForUI::InputEventPartialProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputForUI::InputEventPartialProvider*>());
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProviderImpl"
constexpr UnityEngine::InputForUI::InputEventPartialProvider::operator ::UnityEngine::InputForUI::IEventProviderImpl*() noexcept {
  return static_cast<::UnityEngine::InputForUI::IEventProviderImpl*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProviderImpl"
constexpr ::UnityEngine::InputForUI::IEventProviderImpl* UnityEngine::InputForUI::InputEventPartialProvider::i___UnityEngine__InputForUI__IEventProviderImpl() noexcept {
  return static_cast<::UnityEngine::InputForUI::IEventProviderImpl*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::InputEventPartialProvider::InputEventPartialProvider() {}
