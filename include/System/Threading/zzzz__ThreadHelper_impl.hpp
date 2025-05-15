#pragma once
// IWYU pragma private; include "System/Threading/ThreadHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadHelper_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::ThreadHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Delegate*)>(&::System::Threading::ThreadHelper::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3e56e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.SetExecutionContextHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Threading::ExecutionContext*)>(
    &::System::Threading::ThreadHelper::SetExecutionContextHelper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e56e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), "SetExecutionContextHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::ThreadHelper::ThreadStart_Context)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3e56e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), "ThreadStart_Context", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Object*)>(&::System::Threading::ThreadHelper::ThreadStart)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3e56f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), "ThreadStart", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)()>(&::System::Threading::ThreadHelper::ThreadStart)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3e57090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), "ThreadStart",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Delegate*& System::Threading::ThreadHelper::__cordl_internal_get__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr ::System::Delegate* const& System::Threading::ThreadHelper::__cordl_internal_get__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr void System::Threading::ThreadHelper::__cordl_internal_set__start(::System::Delegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____start)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::ThreadHelper::__cordl_internal_get__startArg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startArg;
}
constexpr ::System::Object* const& System::Threading::ThreadHelper::__cordl_internal_get__startArg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startArg;
}
constexpr void System::Threading::ThreadHelper::__cordl_internal_set__startArg(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startArg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::ThreadHelper::__cordl_internal_get__executionContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionContext;
}
constexpr ::System::Threading::ExecutionContext* const& System::Threading::ThreadHelper::__cordl_internal_get__executionContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionContext;
}
constexpr void System::Threading::ThreadHelper::__cordl_internal_set__executionContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____executionContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::ThreadHelper::setStaticF__ccb(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "_ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::ThreadHelper::getStaticF__ccb() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "_ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get>();
}
inline void System::Threading::ThreadHelper::_ctor(::System::Delegate* start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start);
}
inline void System::Threading::ThreadHelper::SetExecutionContextHelper(::System::Threading::ExecutionContext* ec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), "SetExecutionContextHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ec);
}
inline void System::Threading::ThreadHelper::ThreadStart_Context(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), "ThreadStart_Context", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
inline void System::Threading::ThreadHelper::ThreadStart(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), "ThreadStart", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void System::Threading::ThreadHelper::ThreadStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(), "ThreadStart",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::ThreadHelper* System::Threading::ThreadHelper::New_ctor(::System::Delegate* start) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ThreadHelper*>(start));
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadHelper::ThreadHelper() {}
