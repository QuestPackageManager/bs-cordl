#pragma once
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Threading/zzzz__AbandonedMutexException_def.hpp"
#include "System/Threading/zzzz__Mutex_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)()>(&::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24b4ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)(int32_t, ::System::Threading::WaitHandle*)>(
    &::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24b4b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24b4c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException.SetupException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::AbandonedMutexException::*)(int32_t, ::System::Threading::WaitHandle*)>(
    &::System::Threading::AbandonedMutexException::SetupException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24b4bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), "SetupException", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::AbandonedMutexException::__get__mutexIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutexIndex;
}
constexpr int32_t const& System::Threading::AbandonedMutexException::__get__mutexIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutexIndex;
}
constexpr void System::Threading::AbandonedMutexException::__set__mutexIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mutexIndex = value;
}
constexpr ::System::Threading::Mutex*& System::Threading::AbandonedMutexException::__get__mutex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutex;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Mutex*> const& System::Threading::AbandonedMutexException::__get__mutex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutex;
}
constexpr void System::Threading::AbandonedMutexException::__set__mutex(::System::Threading::Mutex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mutex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::AbandonedMutexException*>());
}
inline void System::Threading::AbandonedMutexException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(int32_t location, ::System::Threading::WaitHandle* handle) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::AbandonedMutexException*>(location, handle));
}
inline void System::Threading::AbandonedMutexException::_ctor(int32_t location, ::System::Threading::WaitHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, handle);
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::AbandonedMutexException*>(info, context));
}
inline void System::Threading::AbandonedMutexException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Threading::AbandonedMutexException::SetupException(int32_t location, ::System::Threading::WaitHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AbandonedMutexException*>::get(), "SetupException", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, handle);
}
// Ctor Parameters []
constexpr ::System::Threading::AbandonedMutexException::AbandonedMutexException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
