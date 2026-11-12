#pragma once
// IWYU pragma private; include "AddressablesInternalBridge/Runtime/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AddressablesInternalBridge/Runtime/zzzz__Extensions_def.hpp"
#include "AddressablesInternalBridge/Runtime/zzzz__CatalogLocationData_def.hpp"
#include "AddressablesInternalBridge/Runtime/zzzz__Extensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__ResourceLocatorInfo_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__ResourceLocationBase_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AddressablesInternalBridge::Runtime::Extensions___c::*)()>(&::AddressablesInternalBridge::Runtime::Extensions___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b0830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c._GetUpdateableCatalogLocationDatas_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::AddressablesInternalBridge::Runtime::Extensions___c::*)(::UnityEngine::AddressableAssets::ResourceLocatorInfo*)>(
    &::AddressablesInternalBridge::Runtime::Extensions___c::_GetUpdateableCatalogLocationDatas_b__1_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68b0834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(),
                                                             { "<GetUpdateableCatalogLocationDatas>b__1_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c._GetUpdateableCatalogLocationDatas_b__1_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::AddressablesInternalBridge::Runtime::CatalogLocationData* (::AddressablesInternalBridge::Runtime::Extensions___c::*)(::UnityEngine::AddressableAssets::ResourceLocatorInfo*)>(
        &::AddressablesInternalBridge::Runtime::Extensions___c::_GetUpdateableCatalogLocationDatas_b__1_1)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x68b09f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(),
                                                             { "<GetUpdateableCatalogLocationDatas>b__1_1", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
    return ___internal_method;
  }
};
inline void AddressablesInternalBridge::Runtime::Extensions___c::setStaticF___9(::AddressablesInternalBridge::Runtime::Extensions___c* value) {
  ::cordl_internals::setStaticField<::AddressablesInternalBridge::Runtime::Extensions___c*, "<>9", ::AddressablesInternalBridge::Runtime::Extensions___c*>(
      std::forward<::AddressablesInternalBridge::Runtime::Extensions___c*>(value));
}
inline ::AddressablesInternalBridge::Runtime::Extensions___c* AddressablesInternalBridge::Runtime::Extensions___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::AddressablesInternalBridge::Runtime::Extensions___c*, "<>9", ::AddressablesInternalBridge::Runtime::Extensions___c*>();
}
inline void AddressablesInternalBridge::Runtime::Extensions___c::setStaticF___9__1_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>*, "<>9__1_0", ::AddressablesInternalBridge::Runtime::Extensions___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* AddressablesInternalBridge::Runtime::Extensions___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>*, "<>9__1_0", ::AddressablesInternalBridge::Runtime::Extensions___c*>();
}
inline void AddressablesInternalBridge::Runtime::Extensions___c::setStaticF___9__1_1(
    ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>*, "<>9__1_1",
                                    ::AddressablesInternalBridge::Runtime::Extensions___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>*
AddressablesInternalBridge::Runtime::Extensions___c::getStaticF___9__1_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>*, "<>9__1_1",
                                           ::AddressablesInternalBridge::Runtime::Extensions___c*>();
}
inline void AddressablesInternalBridge::Runtime::Extensions___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool AddressablesInternalBridge::Runtime::Extensions___c::_GetUpdateableCatalogLocationDatas_b__1_0(::UnityEngine::AddressableAssets::ResourceLocatorInfo* locatorInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(),
                                                           { "<GetUpdateableCatalogLocationDatas>b__1_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, locatorInfo);
}
inline ::AddressablesInternalBridge::Runtime::CatalogLocationData*
AddressablesInternalBridge::Runtime::Extensions___c::_GetUpdateableCatalogLocationDatas_b__1_1(::UnityEngine::AddressableAssets::ResourceLocatorInfo* locatorInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c*>(),
                                                           { "<GetUpdateableCatalogLocationDatas>b__1_1", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::AddressablesInternalBridge::Runtime::CatalogLocationData*>(this, ___internal_method, locatorInfo);
}
inline ::AddressablesInternalBridge::Runtime::Extensions___c* AddressablesInternalBridge::Runtime::Extensions___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AddressablesInternalBridge::Runtime::Extensions___c*>());
}
// Ctor Parameters []
constexpr ::AddressablesInternalBridge::Runtime::Extensions___c::Extensions___c() {}
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::*)()>(
    &::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68aff34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0._WaitForUnloadingAssetBundlesAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::*)(::UnityEngine::AsyncOperation*)>(
    &::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::_WaitForUnloadingAssetBundlesAsync_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68b0c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0*>(),
                                                                                           { "<WaitForUnloadingAssetBundlesAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::__cordl_internal_get_taskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::__cordl_internal_get_taskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr void AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::__cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___taskSource = value;
}
inline void AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::_WaitForUnloadingAssetBundlesAsync_b__0(::UnityEngine::AsyncOperation* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0*>(),
                                                                                         { "<WaitForUnloadingAssetBundlesAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0* AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0::Extensions___c__DisplayClass2_0() {}
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::*)()>(
    &::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b0508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0._LoadCachedContentCatalogOrNull_g__LoadCatalog_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::*)()>(
    &::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::_LoadCachedContentCatalogOrNull_g__LoadCatalog_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68b05f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0*>(), { "<LoadCachedContentCatalogOrNull>g__LoadCatalog|0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0._LoadCachedContentCatalogOrNull_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (
        ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
        &::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::_LoadCachedContentCatalogOrNull_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68b0e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0*>(),
                                                { "<LoadCachedContentCatalogOrNull>b__1", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::__cordl_internal_get_addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::__cordl_internal_get_addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressables;
}
constexpr void AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::__cordl_internal_set_addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addressables = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*&
AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::__cordl_internal_get_cachedCatalogLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedCatalogLocation;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* const&
AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::__cordl_internal_get_cachedCatalogLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedCatalogLocation;
}
constexpr void
AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::__cordl_internal_set_cachedCatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedCatalogLocation = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::__cordl_internal_get_remoteHashLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::__cordl_internal_get_remoteHashLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteHashLocation;
}
constexpr void
AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::__cordl_internal_set_remoteHashLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___remoteHashLocation = value;
}
inline void AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::_LoadCachedContentCatalogOrNull_g__LoadCatalog_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0*>(), { "<LoadCachedContentCatalogOrNull>g__LoadCatalog|0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::_LoadCachedContentCatalogOrNull_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle _) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0*>(),
                                              { "<LoadCachedContentCatalogOrNull>b__1", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(
      this, ___internal_method, _);
}
inline ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0* AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0::Extensions___c__DisplayClass4_0() {}
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions.GetCatalogLocationData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::AddressablesInternalBridge::Runtime::CatalogLocationData* (*)(::StringW)>(
    &::AddressablesInternalBridge::Runtime::Extensions::GetCatalogLocationData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x68af668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "GetCatalogLocationData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions.GetUpdateableCatalogLocationDatas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::AddressablesInternalBridge::Runtime::CatalogLocationData*>* (*)()>(
    &::AddressablesInternalBridge::Runtime::Extensions::GetUpdateableCatalogLocationDatas)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x68af964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "GetUpdateableCatalogLocationDatas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions.WaitForUnloadingAssetBundlesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::AddressablesInternalBridge::Runtime::Extensions::WaitForUnloadingAssetBundlesAsync)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x68afb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "WaitForUnloadingAssetBundlesAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions.SetCatalogRequestsTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::AddressablesInternalBridge::Runtime::Extensions::SetCatalogRequestsTimeout)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68aff38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "SetCatalogRequestsTimeout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AddressablesInternalBridge::Runtime::Extensions.LoadCachedContentCatalogOrNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>> (*)(::StringW)>(
        &::AddressablesInternalBridge::Runtime::Extensions::LoadCachedContentCatalogOrNull)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x68aff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "LoadCachedContentCatalogOrNull", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::AddressablesInternalBridge::Runtime::CatalogLocationData* AddressablesInternalBridge::Runtime::Extensions::GetCatalogLocationData(::StringW locatorId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "GetCatalogLocationData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::AddressablesInternalBridge::Runtime::CatalogLocationData*>(nullptr, ___internal_method, locatorId);
}
inline ::System::Collections::Generic::IEnumerable_1<::AddressablesInternalBridge::Runtime::CatalogLocationData*>*
AddressablesInternalBridge::Runtime::Extensions::GetUpdateableCatalogLocationDatas() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "GetUpdateableCatalogLocationDatas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::AddressablesInternalBridge::Runtime::CatalogLocationData*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* AddressablesInternalBridge::Runtime::Extensions::WaitForUnloadingAssetBundlesAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "WaitForUnloadingAssetBundlesAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline void AddressablesInternalBridge::Runtime::Extensions::SetCatalogRequestsTimeout(int32_t timeoutInSeconds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "SetCatalogRequestsTimeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, timeoutInSeconds);
}
inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>
AddressablesInternalBridge::Runtime::Extensions::LoadCachedContentCatalogOrNull(::StringW catalogPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AddressablesInternalBridge::Runtime::Extensions*>(), { "LoadCachedContentCatalogOrNull", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>>(
      nullptr, ___internal_method, catalogPath);
}
// Ctor Parameters []
constexpr ::AddressablesInternalBridge::Runtime::Extensions::Extensions() {}
