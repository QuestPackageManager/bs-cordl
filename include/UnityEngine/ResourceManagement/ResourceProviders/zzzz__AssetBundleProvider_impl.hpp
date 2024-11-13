#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AssetBundleProvider.hpp"
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
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/zzzz__AssetBundleUnloadOperation_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4739580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0._Release_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::*)(
    ::UnityEngine::AsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::_Release_b__0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x47396a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0*>::get(), "<Release>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*&
UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::__cordl_internal_get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const&
UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::__cordl_internal_get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::__cordl_internal_set_location(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___location)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0*
UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::_Release_b__0(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0*>::get(), "<Release>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleProvider____c__DisplayClass12_0::__AssetBundleProvider____c__DisplayClass12_0() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Init)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4738d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), "Init",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.get_UnloadingBundles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* (*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_UnloadingBundles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4738df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                                 "get_UnloadingBundles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.set_UnloadingBundles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::set_UnloadingBundles)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4738e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), "set_UnloadingBundles",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.get_UnloadingAssetBundleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_UnloadingAssetBundleCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4738eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                                 "get_UnloadingAssetBundleCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.get_AssetBundleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_AssetBundleCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4738f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                                 "get_AssetBundleCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.WaitForAllUnloadingBundlesToComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::WaitForAllUnloadingBundlesToComplete)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x4738fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                                 "WaitForAllUnloadingBundlesToComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.Provide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Provide)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x47390a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.GetDefaultType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::GetDefaultType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4739228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Release)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x4739294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider.CreateCacheKeyForLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey* (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)(::UnityEngine::ResourceManagement::ResourceManager*,
                                                                                  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::CreateCacheKeyForLocation)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4739588;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4739604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::setStaticF_m_UnloadingBundles(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*, "m_UnloadingBundles",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::getStaticF_m_UnloadingBundles() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*, "m_UnloadingBundles",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get>();
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Init() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_UnloadingBundles() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                               "get_UnloadingBundles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::set_UnloadingBundles(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), "set_UnloadingBundles",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::AssetBundleUnloadOperation*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_UnloadingAssetBundleCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                               "get_UnloadingAssetBundleCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::get_AssetBundleCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                               "get_AssetBundleCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::WaitForAllUnloadingBundlesToComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(),
                                               "WaitForAllUnloadingBundlesToComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, providerInterface);
}
inline ::System::Type* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, location);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                             ::System::Object* asset) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, asset);
}
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::CreateCacheKeyForLocation(
    ::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, false>(this, ___internal_method, rm, location, desiredType);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::AssetBundleProvider() {}
