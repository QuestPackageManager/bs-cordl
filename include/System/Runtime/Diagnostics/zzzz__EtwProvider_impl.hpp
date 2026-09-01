#pragma once
// IWYU pragma private; include "System\Runtime\Diagnostics\EtwProvider.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticsEventProvider_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwProvider_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventTraceActivity_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwProvider::*)(::System::Guid)>(&::System::Runtime::Diagnostics::EtwProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x618efec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.get_ControllerCallBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::System::Runtime::Diagnostics::EtwProvider::*)()>(&::System::Runtime::Diagnostics::EtwProvider::get_ControllerCallBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6191208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), { "get_ControllerCallBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.set_ControllerCallBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwProvider::*)(::System::Action*)>(
    &::System::Runtime::Diagnostics::EtwProvider::set_ControllerCallBack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6191210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), { "set_ControllerCallBack", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.OnControllerCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwProvider::*)()>(&::System::Runtime::Diagnostics::EtwProvider::OnControllerCommand)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6191218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), { ::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.SetEnd2EndActivityTracingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwProvider::*)(bool)>(&::System::Runtime::Diagnostics::EtwProvider::SetEnd2EndActivityTracingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6191238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), { "SetEnd2EndActivityTracingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EtwProvider::*)(
    ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW)>(&::System::Runtime::Diagnostics::EtwProvider::WriteEvent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x618a294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(),
                                                             { "WriteEvent",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(),
                                                                 ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EtwProvider::*)(::by_ref<::System::Runtime::Diagnostics::EventDescriptor>,
                                                                                                             ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Diagnostics::EtwProvider::WriteEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x618a154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(),
                                                { "WriteEvent",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwProvider.WriteEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EtwProvider::*)(
    ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Diagnostics::EtwProvider::WriteEvent)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6189fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(),
                                                { "WriteEvent",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
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
  this->___invokeControllerCallback = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::System::Action* System::Runtime::Diagnostics::EtwProvider::get_ControllerCallBack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), { "get_ControllerCallBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwProvider::set_ControllerCallBack(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), { "set_ControllerCallBack", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Diagnostics::EtwProvider::OnControllerCommand() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwProvider::SetEnd2EndActivityTracingEnabled(bool isEnd2EndActivityTracingEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(), { "SetEnd2EndActivityTracingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnd2EndActivityTracingEnabled);
}
inline bool System::Runtime::Diagnostics::EtwProvider::WriteEvent(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                  ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW value1, ::StringW value2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(),
                                                           { "WriteEvent",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(),
                                                               ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventDescriptor, eventTraceActivity, value1, value2);
}
inline bool System::Runtime::Diagnostics::EtwProvider::WriteEvent(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                  ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW value1, ::StringW value2, ::StringW value3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(),
                                              { "WriteEvent",
                                                {},
                                                { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventDescriptor, eventTraceActivity, value1, value2, value3);
}
inline bool System::Runtime::Diagnostics::EtwProvider::WriteEvent(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                  ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW value1, ::StringW value2, ::StringW value3,
                                                                  ::StringW value4) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwProvider*>(),
                                              { "WriteEvent",
                                                {},
                                                { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventDescriptor, eventTraceActivity, value1, value2, value3, value4);
}
inline ::System::Runtime::Diagnostics::EtwProvider* System::Runtime::Diagnostics::EtwProvider::New_ctor(::System::Guid id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Diagnostics::EtwProvider*>(id));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EtwProvider::EtwProvider() {}
