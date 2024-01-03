#pragma once
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAppDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAppDownloadResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithAppDownloadResult::*)(void*)>(
    &::Oculus::Platform::MessageWithAppDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26eea58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAppDownloadResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAppDownloadResult.GetAppDownloadResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AppDownloadResult* (::Oculus::Platform::MessageWithAppDownloadResult::*)()>(
    &::Oculus::Platform::MessageWithAppDownloadResult::GetAppDownloadResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f0be8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAppDownloadResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAppDownloadResult*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAppDownloadResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AppDownloadResult* (::Oculus::Platform::MessageWithAppDownloadResult::*)(void*)>(
    &::Oculus::Platform::MessageWithAppDownloadResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f0c24;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAppDownloadResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAppDownloadResult*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithAppDownloadResult* Oculus::Platform::MessageWithAppDownloadResult::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithAppDownloadResult*>(c_message));
}
inline void Oculus::Platform::MessageWithAppDownloadResult::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAppDownloadResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::MessageWithAppDownloadResult::GetAppDownloadResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAppDownloadResult*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::MessageWithAppDownloadResult::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAppDownloadResult*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAppDownloadResult::MessageWithAppDownloadResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
