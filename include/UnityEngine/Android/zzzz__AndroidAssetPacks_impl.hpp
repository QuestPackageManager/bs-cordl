#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPacks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPacks_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackInfo_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackState_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackUseMobileDataRequestResult_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPacks_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::*)()>(
    &::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a2e2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c.__ctor_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::*)(::StringW)>(
    &::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::__ctor_b__2_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a2e2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(),
                                                                                           { "<.ctor>b__2_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c.__ctor_b__2_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Android::AndroidAssetPackStatus (::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::*)(
    ::StringW)>(&::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::__ctor_b__2_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a2e2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(),
                                                                                           { "<.ctor>b__2_1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::setStaticF___9(::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*, "<>9",
                                    ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(
      std::forward<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(value));
}
inline ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c* UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*, "<>9",
                                           ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>();
}
inline void UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::setStaticF___9__2_0(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__2_0", ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(
      std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__2_0", ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>();
}
inline void
UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::setStaticF___9__2_1(::System::Func_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>*, "<>9__2_1",
                                    ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>*, "<>9__2_1",
                                           ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>();
}
inline void UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::__ctor_b__2_0(::StringW ap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(),
                                                                                         { "<.ctor>b__2_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ap);
}
inline ::UnityEngine::Android::AndroidAssetPackStatus UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::__ctor_b__2_1(::StringW ap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>(),
                                                                                         { "<.ctor>b__2_1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Android::AndroidAssetPackStatus>(this, ___internal_method, ap);
}
inline ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c* UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c() {}
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::*)(
    ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*, ::ArrayW<::StringW>)>(&::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6a2dda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback.onStatusUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::*)(
    ::StringW, int32_t, int64_t, int64_t, int32_t, int32_t)>(&::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::onStatusUpdate)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6a2df9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>(),
                                                                                           { "onStatusUpdate",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(),
                                                                                               ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
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
  this->___m_Callback = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>*&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::__cordl_internal_get_m_AssetPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetPacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* const&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::__cordl_internal_get_m_AssetPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetPacks;
}
constexpr void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::__cordl_internal_set_m_AssetPacks(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetPacks = value;
}
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* callback,
                                                                                                  ::ArrayW<::StringW> assetPacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, assetPacks);
}
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::onStatusUpdate(::StringW assetPackName, int32_t assetPackStatus, int64_t assetPackSize,
                                                                                                           int64_t assetPackBytesDownloaded, int32_t assetPackTransferProgress,
                                                                                                           int32_t assetPackErrorCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>(),
                          { "onStatusUpdate",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assetPackName, assetPackStatus, assetPackSize, assetPackBytesDownloaded, assetPackTransferProgress, assetPackErrorCode);
}
inline ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* callback, ::ArrayW<::StringW> assetPacks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*>(callback, assetPacks));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback() {}
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::*)(
    ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*)>(&::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a2e2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback.onMobileDataConfirmationResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::*)(bool)>(
    &::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::onMobileDataConfirmationResult)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a2e33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>(),
                                                                                           { "onMobileDataConfirmationResult", {}, { ::i2c::type_of<bool>() } })));
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
  this->___m_Callback = value;
}
inline void
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::onMobileDataConfirmationResult(bool allowed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>(),
                                                                                         { "onMobileDataConfirmationResult", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowed);
}
inline ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* callback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*>(callback));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback() {}
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::*)(
    ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>*, ::ArrayW<::StringW>)>(
    &::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6a2e3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback.onStatusResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::*)(
    int64_t, ::ArrayW<::StringW>, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::onStatusResult)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6a2e4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>(),
                            { "onStatusResult", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>*&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>* const&
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::__cordl_internal_set_m_Callback(
    ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Callback = value;
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
  this->___m_AssetPackNames = value;
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
  this->___m_States = value;
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
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::_ctor(::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>* callback,
                                                                                               ::ArrayW<::StringW> assetPacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, assetPacks);
}
inline void UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::onStatusResult(int64_t totalBytes, ::ArrayW<::StringW> assetPackNames, ::ArrayW<int32_t> assetPackStatuses,
                                                                                                        ::ArrayW<int32_t> assetPackErrorCodes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>(),
                          { "onStatusResult", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalBytes, assetPackNames, assetPackStatuses, assetPackErrorCodes);
}
inline ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*
UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::New_ctor(::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>* callback,
                                                                                      ::ArrayW<::StringW> assetPacks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*>(callback, assetPacks));
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback::AndroidAssetPacks_AssetPackManagerStatusQueryCallback() {}
//  Writing Method size for method: ::UnityEngine::Android::AndroidAssetPacks.GetAssetPackManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::UnityEngine::Android::AndroidAssetPacks::GetAssetPackManager)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x6a2da24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks*>(), { "GetAssetPackManager", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Android::AndroidAssetPacks::setStaticF_s_JavaPlayAssetDeliveryWrapper(::UnityEngine::AndroidJavaObject* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject*, "s_JavaPlayAssetDeliveryWrapper", ::UnityEngine::Android::AndroidAssetPacks*>(
      std::forward<::UnityEngine::AndroidJavaObject*>(value));
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidAssetPacks::getStaticF_s_JavaPlayAssetDeliveryWrapper() {
  return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject*, "s_JavaPlayAssetDeliveryWrapper", ::UnityEngine::Android::AndroidAssetPacks*>();
}
inline void UnityEngine::Android::AndroidAssetPacks::setStaticF_s_ApiMissing(bool value) {
  ::cordl_internals::setStaticField<bool, "s_ApiMissing", ::UnityEngine::Android::AndroidAssetPacks*>(std::forward<bool>(value));
}
inline bool UnityEngine::Android::AndroidAssetPacks::getStaticF_s_ApiMissing() {
  return ::cordl_internals::getStaticField<bool, "s_ApiMissing", ::UnityEngine::Android::AndroidAssetPacks*>();
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidAssetPacks::GetAssetPackManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidAssetPacks*>(), { "GetAssetPackManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidAssetPacks::AndroidAssetPacks() {}
