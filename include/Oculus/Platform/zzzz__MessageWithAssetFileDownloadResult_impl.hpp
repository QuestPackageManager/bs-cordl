#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetFileDownloadResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithAssetFileDownloadResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAssetFileDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f1a578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadResult*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadResult.GetAssetFileDownloadResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadResult* (::Oculus::Platform::MessageWithAssetFileDownloadResult::*)()>(
    &::Oculus::Platform::MessageWithAssetFileDownloadResult::GetAssetFileDownloadResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3f1c9a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadResult*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadResult* (
    ::Oculus::Platform::MessageWithAssetFileDownloadResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithAssetFileDownloadResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3f1c9e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadResult*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithAssetFileDownloadResult* Oculus::Platform::MessageWithAssetFileDownloadResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(c_message));
}
inline void Oculus::Platform::MessageWithAssetFileDownloadResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadResult*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::MessageWithAssetFileDownloadResult::GetAssetFileDownloadResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadResult*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::MessageWithAssetFileDownloadResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadResult*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAssetFileDownloadResult::MessageWithAssetFileDownloadResult() {}
