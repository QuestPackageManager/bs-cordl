#pragma once
// IWYU pragma private; include "System/Threading/AbandonedMutexException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Threading/zzzz__AbandonedMutexException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__Mutex_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)()>(&::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3e5a6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)(int32_t, ::System::Threading::WaitHandle*)>(
    &::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3e5a70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e5a830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException.SetupException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)(int32_t, ::System::Threading::WaitHandle*)>(
    &::System::Threading::AbandonedMutexException::SetupException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3e5a7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), "SetupException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::AbandonedMutexException::__cordl_internal_get__mutexIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutexIndex;
}
constexpr int32_t const& System::Threading::AbandonedMutexException::__cordl_internal_get__mutexIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutexIndex;
}
constexpr void System::Threading::AbandonedMutexException::__cordl_internal_set__mutexIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mutexIndex = value;
}
constexpr ::System::Threading::Mutex*& System::Threading::AbandonedMutexException::__cordl_internal_get__mutex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutex;
}
constexpr ::System::Threading::Mutex* const& System::Threading::AbandonedMutexException::__cordl_internal_get__mutex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutex;
}
constexpr void System::Threading::AbandonedMutexException::__cordl_internal_set__mutex(::System::Threading::Mutex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mutex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::AbandonedMutexException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::AbandonedMutexException::_ctor(int32_t location, ::System::Threading::WaitHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, handle);
}
inline void System::Threading::AbandonedMutexException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Threading::AbandonedMutexException::SetupException(int32_t location, ::System::Threading::WaitHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), "SetupException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, handle);
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::AbandonedMutexException*>());
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(int32_t location, ::System::Threading::WaitHandle* handle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::AbandonedMutexException*>(location, handle));
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::AbandonedMutexException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Threading::AbandonedMutexException::AbandonedMutexException() {}
