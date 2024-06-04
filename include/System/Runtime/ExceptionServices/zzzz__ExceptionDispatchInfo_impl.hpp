#pragma once
// IWYU pragma private; include "System/Runtime/ExceptionServices/ExceptionDispatchInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)(::System::Exception*)>(
    &::System::Runtime::ExceptionServices::ExceptionDispatchInfo::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2874980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.get_BinaryStackTraceArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(
    &::System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2874aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                                                 "get_BinaryStackTraceArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.Capture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (*)(::System::Exception*)>(
    &::System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2874ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), "Capture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.get_SourceException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(
    &::System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2874b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), "get_SourceException",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(
    &::System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2874b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), "Throw",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&::System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2874bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_get_m_Exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Exception;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_get_m_Exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Exception;
}
constexpr void System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_set_m_Exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_get_m_stackTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stackTrace;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_get_m_stackTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stackTrace;
}
constexpr void System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_set_m_stackTrace(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_stackTrace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Runtime::ExceptionServices::ExceptionDispatchInfo::New_ctor(::System::Exception* exception) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(exception));
}
inline void System::Runtime::ExceptionServices::ExceptionDispatchInfo::_ctor(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline ::System::Object* System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), "get_BinaryStackTraceArray",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture(::System::Exception* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), "Capture",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, false>(nullptr, ___internal_method, source);
}
inline ::System::Exception* System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), "get_SourceException",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline void System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), "Throw",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw(::System::Exception* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(), "Throw",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo::ExceptionDispatchInfo() {}
