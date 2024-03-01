#pragma once
#include "Oculus/Platform/Models/zzzz__AssetDetails_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetails._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithAssetDetails::*)(void*)>(&::Oculus::Platform::MessageWithAssetDetails::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27e0468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetails.GetAssetDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetDetails* (::Oculus::Platform::MessageWithAssetDetails::*)()>(
    &::Oculus::Platform::MessageWithAssetDetails::GetAssetDetails)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e2778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetails.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetDetails* (::Oculus::Platform::MessageWithAssetDetails::*)(void*)>(
    &::Oculus::Platform::MessageWithAssetDetails::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27e27b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithAssetDetails* Oculus::Platform::MessageWithAssetDetails::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithAssetDetails*>(c_message));
}
inline void Oculus::Platform::MessageWithAssetDetails::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::MessageWithAssetDetails::GetAssetDetails() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::MessageWithAssetDetails::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAssetDetails::MessageWithAssetDetails() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
