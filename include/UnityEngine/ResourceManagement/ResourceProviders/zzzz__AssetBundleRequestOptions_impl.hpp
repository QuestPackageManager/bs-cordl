#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceProviders\AssetBundleRequestOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetLoadMode_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleRequestOptions_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__ILocationSizeData_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetLoadMode_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6919154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_Hash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691915c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "set_Hash", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_Crc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Crc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6919164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_Crc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_Crc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(uint32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Crc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691916c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "set_Crc", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6919174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_Timeout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691917c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "set_Timeout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_ChunkedTransfer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_ChunkedTransfer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6919184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_ChunkedTransfer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_ChunkedTransfer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(bool)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_ChunkedTransfer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691918c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                           { "set_ChunkedTransfer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_RedirectLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_RedirectLimit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6919194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_RedirectLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_RedirectLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_RedirectLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                           { "set_RedirectLimit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_RetryCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_RetryCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_RetryCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_RetryCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_RetryCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                           { "set_RetryCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_BundleName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_BundleName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_BundleName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_BundleName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_BundleName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                           { "set_BundleName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_AssetLoadMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode (
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_AssetLoadMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_AssetLoadMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_AssetLoadMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_AssetLoadMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                             { "set_AssetLoadMode", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_BundleSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_BundleSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_BundleSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_BundleSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(int64_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_BundleSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                           { "set_BundleSize", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_UseCrcForCachedBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_UseCrcForCachedBundle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_UseCrcForCachedBundle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_UseCrcForCachedBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(bool)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_UseCrcForCachedBundle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69191f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                           { "set_UseCrcForCachedBundle", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_UseUnityWebRequestForLocalBundles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_UseUnityWebRequestForLocalBundles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6919200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_UseUnityWebRequestForLocalBundles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_UseUnityWebRequestForLocalBundles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(bool)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_UseUnityWebRequestForLocalBundles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6919208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                           { "set_UseUnityWebRequestForLocalBundles", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.get_ClearOtherCachedVersionsWhenLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_ClearOtherCachedVersionsWhenLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6919210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_ClearOtherCachedVersionsWhenLoaded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.set_ClearOtherCachedVersionsWhenLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(bool)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_ClearOtherCachedVersionsWhenLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6919218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                           { "set_ClearOtherCachedVersionsWhenLoaded", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions.ComputeSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceManager*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::ComputeSize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6919220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x691933c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_Hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hash;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_Hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hash;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_Hash(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Hash = value;
}
constexpr uint32_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_Crc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Crc;
}
constexpr uint32_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_Crc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Crc;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_Crc(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Crc = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_Timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_Timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_Timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Timeout = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_ChunkedTransfer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkedTransfer;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_ChunkedTransfer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChunkedTransfer;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_ChunkedTransfer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChunkedTransfer = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_RedirectLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RedirectLimit;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_RedirectLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RedirectLimit;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_RedirectLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RedirectLimit = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_RetryCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RetryCount;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_RetryCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RetryCount;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_RetryCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RetryCount = value;
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_BundleName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundleName;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_BundleName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundleName;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_BundleName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BundleName = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_AssetLoadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetLoadMode;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode const&
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_AssetLoadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetLoadMode;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_AssetLoadMode(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetLoadMode = value;
}
constexpr int64_t& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_BundleSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundleSize;
}
constexpr int64_t const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_BundleSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BundleSize;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_BundleSize(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BundleSize = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_UseCrcForCachedBundles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseCrcForCachedBundles;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_UseCrcForCachedBundles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseCrcForCachedBundles;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_UseCrcForCachedBundles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseCrcForCachedBundles = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_UseUWRForLocalBundles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseUWRForLocalBundles;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_UseUWRForLocalBundles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseUWRForLocalBundles;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_UseUWRForLocalBundles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseUWRForLocalBundles = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_ClearOtherCachedVersionsWhenLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearOtherCachedVersionsWhenLoaded;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_get_m_ClearOtherCachedVersionsWhenLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearOtherCachedVersionsWhenLoaded;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::__cordl_internal_set_m_ClearOtherCachedVersionsWhenLoaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearOtherCachedVersionsWhenLoaded = value;
}
inline ::StringW UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Hash() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_Hash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Hash(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "set_Hash", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Crc() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_Crc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Crc(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "set_Crc", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_Timeout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_Timeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_Timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "set_Timeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_ChunkedTransfer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_ChunkedTransfer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_ChunkedTransfer(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                         { "set_ChunkedTransfer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_RedirectLimit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_RedirectLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_RedirectLimit(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                         { "set_RedirectLimit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_RetryCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_RetryCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_RetryCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "set_RetryCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_BundleName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_BundleName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_BundleName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                         { "set_BundleName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_AssetLoadMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_AssetLoadMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_AssetLoadMode(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                           { "set_AssetLoadMode", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_BundleSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_BundleSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_BundleSize(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "set_BundleSize", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_UseCrcForCachedBundle() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_UseCrcForCachedBundle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_UseCrcForCachedBundle(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                         { "set_UseCrcForCachedBundle", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_UseUnityWebRequestForLocalBundles() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_UseUnityWebRequestForLocalBundles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_UseUnityWebRequestForLocalBundles(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                         { "set_UseUnityWebRequestForLocalBundles", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::get_ClearOtherCachedVersionsWhenLoaded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { "get_ClearOtherCachedVersionsWhenLoaded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::set_ClearOtherCachedVersionsWhenLoaded(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(),
                                                                                         { "set_ClearOtherCachedVersionsWhenLoaded", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                          ::UnityEngine::ResourceManagement::ResourceManager* resourceManager) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, location, resourceManager);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData"
constexpr UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::operator ::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData"
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*
UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::i___UnityEngine__ResourceManagement__ResourceLocations__ILocationSizeData() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions::AssetBundleRequestOptions() {}
