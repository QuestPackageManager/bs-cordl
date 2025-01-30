#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPacks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPacks_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackInfo_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackState_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackUseMobileDataRequestResult_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPacks_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::*)(
    ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x484ce78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>::get(), ".ctor",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback.onStatusUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::*)(
    ::StringW, int32_t, int64_t, int64_t, int32_t, int32_t)>(&::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::onStatusUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x484cefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>::get(), "onStatusUpdate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*& UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* const&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr void
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::__cordl_internal_set_m_Callback(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::__cordl_internal_get_m_AssetPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetPacks;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::__cordl_internal_get_m_AssetPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetPacks;
}
constexpr void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::__cordl_internal_set_m_AssetPacks(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AssetPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* callback,
                                                                                                  ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, assetPacks);
}
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::onStatusUpdate(::StringW assetPackName, int32_t assetPackStatus, int64_t assetPackSize,
                                                                                                           int64_t assetPackBytesDownloaded, int32_t assetPackTransferProgress,
                                                                                                           int32_t assetPackErrorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>::get(), "onStatusUpdate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetPackName, assetPackStatus, assetPackSize, assetPackBytesDownloaded, assetPackTransferProgress,
                                                          assetPackErrorCode);
}
inline ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* callback,
                                                                                         ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>(callback, assetPacks));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback() {}
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::*)(
    ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*)>(&::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x484d008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback.onMobileDataConfirmationResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::*)(bool)>(
    &::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::onMobileDataConfirmationResult)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x484d088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>::get(), "onMobileDataConfirmationResult",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* const&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::__cordl_internal_set_m_Callback(
    ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::onMobileDataConfirmationResult(bool allowed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>::get(), "onMobileDataConfirmationResult",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowed);
}
inline ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* callback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>(callback));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback() {}
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::*)(
    ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x484d10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback.onStatusResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::*)(
    int64_t, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::onStatusResult)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x484d1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>::get(),
                                                 "onStatusResult", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* const&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_set_m_Callback(
    ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_AssetPackNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetPackNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_AssetPackNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetPackNames;
}
constexpr void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_set_m_AssetPackNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AssetPackNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>*&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_States() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_States;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* const&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_States() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_States;
}
constexpr void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_set_m_States(
    ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_States)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr int64_t const& UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_set_m_Size(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Size = value;
}
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::_ctor(
    ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* callback,
    ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, assetPacks);
}
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::onStatusResult(int64_t totalBytes, ::ArrayW<::StringW, ::Array<::StringW>*> assetPackNames,
                                                                                                        ::ArrayW<int32_t, ::Array<int32_t>*> assetPackStatuses,
                                                                                                        ::ArrayW<int32_t, ::Array<int32_t>*> assetPackErrorCodes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>::get(),
                                               "onStatusResult", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, totalBytes, assetPackNames, assetPackStatuses, assetPackErrorCodes);
}
inline ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback* UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::New_ctor(
    ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* callback,
    ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>(callback, assetPacks));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::AndroidAssetPacks_AssetPackManagerStatusQueryCallback() {}
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks.GetAssetPackManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::UnityEngine::Android::AndroidAssetPacks::GetAssetPackManager)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x484cad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks*>::get(),
                                                                               "GetAssetPackManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Android::AndroidAssetPacks::setStaticF_s_JavaPlayAssetDeliveryWrapper(::UnityEngine::AndroidJavaObject* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject*, "s_JavaPlayAssetDeliveryWrapper",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks*>::get>(std::forward<::UnityEngine::AndroidJavaObject*>(value));
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidAssetPacks::getStaticF_s_JavaPlayAssetDeliveryWrapper() {
  return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject*, "s_JavaPlayAssetDeliveryWrapper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks*>::get>();
}
inline void UnityEngine::Android::AndroidAssetPacks::setStaticF_s_ApiMissing(bool value) {
  ::cordl_internals::setStaticField<bool, "s_ApiMissing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::Android::AndroidAssetPacks::getStaticF_s_ApiMissing() {
  return ::cordl_internals::getStaticField<bool, "s_ApiMissing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks*>::get>();
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidAssetPacks::GetAssetPackManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidAssetPacks*>::get(),
                                                                             "GetAssetPackManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPacks::AndroidAssetPacks() {}
