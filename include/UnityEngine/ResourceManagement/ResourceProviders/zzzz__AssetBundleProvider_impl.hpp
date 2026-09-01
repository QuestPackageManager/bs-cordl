#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceProviders\AssetBundleProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestResult_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/zzzz__AssetBundleUnloadOperation_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691cbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0._Release_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::_Release_b__0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x691cd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0*>(),
                                                             { "<Release>b__0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::__cordl_internal_get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::__cordl_internal_get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::__cordl_internal_set_location(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::_Release_b__0(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0*>(),
                                                           { "<Release>b__0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0*
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider___c__DisplayClass12_0::AssetBundleProvider___c__DisplayClass12_0() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x691c268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.get_UnloadingBundles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* (*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_UnloadingBundles)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x691c32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "get_UnloadingBundles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.set_UnloadingBundles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::set_UnloadingBundles)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x691c388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(),
                                         { "set_UnloadingBundles", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.get_UnloadingAssetBundleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_UnloadingAssetBundleCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x691c3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "get_UnloadingAssetBundleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.get_AssetBundleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_AssetBundleCount)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x691c46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "get_AssetBundleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.WaitForAllUnloadingBundlesToComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::WaitForAllUnloadingBundlesToComplete)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x691c50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "WaitForAllUnloadingBundlesToComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.Provide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Provide)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x691c608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.GetDefaultType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Type* (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::GetDefaultType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x691c7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Release)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x691c850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.ShouldRetryDownloadError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(
    ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::ShouldRetryDownloadError)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x691cbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.CreateCacheKeyForLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey* (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*,
                                                                                  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::CreateCacheKeyForLocation)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x691cbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691cc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::setStaticF_m_UnloadingBundles(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*, "m_UnloadingBundles",
                                    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::getStaticF_m_UnloadingBundles() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*, "m_UnloadingBundles",
                                           ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>();
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Init() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_UnloadingBundles() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "get_UnloadingBundles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::set_UnloadingBundles(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(),
                                       { "set_UnloadingBundles", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_UnloadingAssetBundleCount() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "get_UnloadingAssetBundleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_AssetBundleCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "get_AssetBundleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::WaitForAllUnloadingBundlesToComplete() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { "WaitForAllUnloadingBundlesToComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerInterface);
}
inline ::System::Type* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, location);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                             ::System::Object* asset) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, asset);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::ShouldRetryDownloadError(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uwrResult);
}
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::CreateCacheKeyForLocation(
    ::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(this, ___internal_method, rm, location, desiredType);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::AssetBundleProvider() {}
