#pragma once
// IWYU pragma private; include "System/Net/ExceptionHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ExceptionHelper_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/zzzz__NotImplementedException_def.hpp"
#include "System/zzzz__NotSupportedException_def.hpp"
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_MethodNotImplementedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::NotImplementedException* (*)()>(&::System::Net::ExceptionHelper::get_MethodNotImplementedException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x449eb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(), "get_MethodNotImplementedException",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_PropertyNotImplementedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::NotImplementedException* (*)()>(&::System::Net::ExceptionHelper::get_PropertyNotImplementedException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x449eaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(), "get_PropertyNotImplementedException",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_TimeoutException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException* (*)()>(&::System::Net::ExceptionHelper::get_TimeoutException)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4498300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(), "get_TimeoutException",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_PropertyNotSupportedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::NotSupportedException* (*)()>(&::System::Net::ExceptionHelper::get_PropertyNotSupportedException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x449d5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(), "get_PropertyNotSupportedException",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_RequestAbortedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException* (*)()>(&::System::Net::ExceptionHelper::get_RequestAbortedException)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x449d2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(),
                                                                               "get_RequestAbortedException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::NotImplementedException* System::Net::ExceptionHelper::get_MethodNotImplementedException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(), "get_MethodNotImplementedException",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::NotImplementedException*, false>(nullptr, ___internal_method);
}
inline ::System::NotImplementedException* System::Net::ExceptionHelper::get_PropertyNotImplementedException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(), "get_PropertyNotImplementedException",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::NotImplementedException*, false>(nullptr, ___internal_method);
}
inline ::System::Net::WebException* System::Net::ExceptionHelper::get_TimeoutException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(), "get_TimeoutException",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*, false>(nullptr, ___internal_method);
}
inline ::System::NotSupportedException* System::Net::ExceptionHelper::get_PropertyNotSupportedException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(), "get_PropertyNotSupportedException",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::NotSupportedException*, false>(nullptr, ___internal_method);
}
inline ::System::Net::WebException* System::Net::ExceptionHelper::get_RequestAbortedException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ExceptionHelper*>::get(),
                                                                             "get_RequestAbortedException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::ExceptionHelper::ExceptionHelper() {}
