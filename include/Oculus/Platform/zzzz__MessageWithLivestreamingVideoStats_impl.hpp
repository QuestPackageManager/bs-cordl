#pragma once
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLivestreamingVideoStats_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingVideoStats._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithLivestreamingVideoStats::*)(void*)>(
    &::Oculus::Platform::MessageWithLivestreamingVideoStats::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27e4128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingVideoStats*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingVideoStats.GetLivestreamingVideoStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingVideoStats* (::Oculus::Platform::MessageWithLivestreamingVideoStats::*)()>(
    &::Oculus::Platform::MessageWithLivestreamingVideoStats::GetLivestreamingVideoStats)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e4180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingVideoStats*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingVideoStats*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingVideoStats.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingVideoStats* (
    ::Oculus::Platform::MessageWithLivestreamingVideoStats::*)(void*)>(&::Oculus::Platform::MessageWithLivestreamingVideoStats::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27e41bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingVideoStats*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingVideoStats*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithLivestreamingVideoStats* Oculus::Platform::MessageWithLivestreamingVideoStats::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithLivestreamingVideoStats*>(c_message));
}
inline void Oculus::Platform::MessageWithLivestreamingVideoStats::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingVideoStats*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LivestreamingVideoStats* Oculus::Platform::MessageWithLivestreamingVideoStats::GetLivestreamingVideoStats() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingVideoStats*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingVideoStats*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingVideoStats* Oculus::Platform::MessageWithLivestreamingVideoStats::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLivestreamingVideoStats*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingVideoStats*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLivestreamingVideoStats::MessageWithLivestreamingVideoStats() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
