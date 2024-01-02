#pragma once
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLivestreamingStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithLivestreamingStatus::*)(void*)>(
    &::Oculus::Platform::MessageWithLivestreamingStatus::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26ef3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingStatus*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingStatus.GetLivestreamingStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStatus* (::Oculus::Platform::MessageWithLivestreamingStatus::*)()>(
    &::Oculus::Platform::MessageWithLivestreamingStatus::GetLivestreamingStatus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f2748;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingStatus*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingStatus*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingStatus.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStatus* (::Oculus::Platform::MessageWithLivestreamingStatus::*)(void*)>(
    &::Oculus::Platform::MessageWithLivestreamingStatus::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f2784;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingStatus*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingStatus*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithLivestreamingStatus* Oculus::Platform::MessageWithLivestreamingStatus::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithLivestreamingStatus*>(c_message));
}
inline void Oculus::Platform::MessageWithLivestreamingStatus::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingStatus*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::MessageWithLivestreamingStatus::GetLivestreamingStatus() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingStatus*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStatus*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::MessageWithLivestreamingStatus::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingStatus*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStatus*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLivestreamingStatus::MessageWithLivestreamingStatus() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
