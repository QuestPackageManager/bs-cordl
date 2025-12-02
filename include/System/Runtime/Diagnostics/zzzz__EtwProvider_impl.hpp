#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EtwProvider.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticsEventProvider_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwProvider_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventTraceActivity_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwProvider::*)(::System::Guid)>(
    &::System::Runtime::Diagnostics::EtwProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f72908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.get_ControllerCallBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::System::Runtime::Diagnostics::EtwProvider::*)()>(
    &::System::Runtime::Diagnostics::EtwProvider::get_ControllerCallBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f74b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(),
                                                                               "get_ControllerCallBack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.set_ControllerCallBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwProvider::*)(::System::Action*)>(
    &::System::Runtime::Diagnostics::EtwProvider::set_ControllerCallBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f74b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "set_ControllerCallBack",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.OnControllerCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwProvider::*)()>(
    &::System::Runtime::Diagnostics::EtwProvider::OnControllerCommand)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f74b34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.SetEnd2EndActivityTracingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwProvider::*)(bool)>(
    &::System::Runtime::Diagnostics::EtwProvider::SetEnd2EndActivityTracingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f74b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "SetEnd2EndActivityTracingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EtwProvider::*)(
    ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW)>(&::System::Runtime::Diagnostics::EtwProvider::WriteEvent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f6dbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EtwProvider::*)(
    ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Diagnostics::EtwProvider::WriteEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f6da70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EtwProvider::*)(
    ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Diagnostics::EtwProvider::WriteEvent)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5f6d8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& System::Runtime::Diagnostics::EtwProvider::__cordl_internal_get_invokeControllerCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invokeControllerCallback;
}
constexpr ::System::Action* const& System::Runtime::Diagnostics::EtwProvider::__cordl_internal_get_invokeControllerCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invokeControllerCallback;
}
constexpr void System::Runtime::Diagnostics::EtwProvider::__cordl_internal_set_invokeControllerCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___invokeControllerCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Diagnostics::EtwProvider::__cordl_internal_get_end2EndActivityTracingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end2EndActivityTracingEnabled;
}
constexpr bool const& System::Runtime::Diagnostics::EtwProvider::__cordl_internal_get_end2EndActivityTracingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end2EndActivityTracingEnabled;
}
constexpr void System::Runtime::Diagnostics::EtwProvider::__cordl_internal_set_end2EndActivityTracingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___end2EndActivityTracingEnabled = value;
}
inline void System::Runtime::Diagnostics::EtwProvider::_ctor(::System::Guid id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::System::Action* System::Runtime::Diagnostics::EtwProvider::get_ControllerCallBack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(),
                                                                             "get_ControllerCallBack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwProvider::set_ControllerCallBack(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "set_ControllerCallBack",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Runtime::Diagnostics::EtwProvider::OnControllerCommand() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwProvider::SetEnd2EndActivityTracingEnabled(bool isEnd2EndActivityTracingEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "SetEnd2EndActivityTracingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEnd2EndActivityTracingEnabled);
}
inline bool System::Runtime::Diagnostics::EtwProvider::WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                  ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW value1, ::StringW value2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventDescriptor, eventTraceActivity, value1, value2);
}
inline bool System::Runtime::Diagnostics::EtwProvider::WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                  ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW value1, ::StringW value2, ::StringW value3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventDescriptor, eventTraceActivity, value1, value2, value3);
}
inline bool System::Runtime::Diagnostics::EtwProvider::WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                  ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW value1, ::StringW value2, ::StringW value3,
                                                                  ::StringW value4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwProvider*>::get(), "WriteEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventDescriptor, eventTraceActivity, value1, value2, value3, value4);
}
inline ::System::Runtime::Diagnostics::EtwProvider* System::Runtime::Diagnostics::EtwProvider::New_ctor(::System::Guid id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Diagnostics::EtwProvider*>(id));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EtwProvider::EtwProvider() {}
