#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetFileDownloadCancelResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f89488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult.GetAssetFileDownloadCancelResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult* (
    ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)()>(&::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetAssetFileDownloadCancelResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3f8b840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult* (
    ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3f8b87c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), 72));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAssetFileDownloadCancelResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetAssetFileDownloadCancelResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult* Oculus::Platform::MessageWithAssetFileDownloadCancelResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::MessageWithAssetFileDownloadCancelResult() {}
