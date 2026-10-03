#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandleAllocInfo.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_impl.hpp"
#include "UnityEngine/zzzz__FilterMode_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_impl.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_impl.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleAllocInfo_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_slices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_slices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_slices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_slices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(int32_t)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_slices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc824c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_slices", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::get_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::set_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc825c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(),
                                                                                           { "set_format", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_filterMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FilterMode (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_filterMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_filterMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_filterMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::UnityEngine::FilterMode)>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::set_filterMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc826c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_filterMode", {}, { ::i2c::type_of<::UnityEngine::FilterMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_wrapModeU
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureWrapMode (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::get_wrapModeU)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_wrapModeU", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_wrapModeU
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::UnityEngine::TextureWrapMode)>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::set_wrapModeU)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc827c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_wrapModeU", {}, { ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_wrapModeV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureWrapMode (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::get_wrapModeV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_wrapModeV", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_wrapModeV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::UnityEngine::TextureWrapMode)>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::set_wrapModeV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc828c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_wrapModeV", {}, { ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_wrapModeW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureWrapMode (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::get_wrapModeW)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_wrapModeW", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_wrapModeW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::UnityEngine::TextureWrapMode)>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::set_wrapModeW)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc829c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_wrapModeW", {}, { ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_dimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::TextureDimension (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::get_dimension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_dimension", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_dimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::UnityEngine::Rendering::TextureDimension)>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::set_dimension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_dimension", {}, { ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_enableRandomWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_enableRandomWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_enableRandomWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_enableRandomWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(bool)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_enableRandomWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_enableRandomWrite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_useMipMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_useMipMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_useMipMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_useMipMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(bool)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_useMipMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_useMipMap", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_autoGenerateMips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_autoGenerateMips)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_autoGenerateMips", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_autoGenerateMips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(bool)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_autoGenerateMips)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_autoGenerateMips", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_isShadowMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_isShadowMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_isShadowMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_isShadowMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(bool)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_isShadowMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_isShadowMap", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_anisoLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_anisoLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_anisoLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_anisoLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(int32_t)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_anisoLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc82fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_anisoLevel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_mipMapBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_mipMapBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_mipMapBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_mipMapBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(float_t)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_mipMapBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc830c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_mipMapBias", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_msaaSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::MSAASamples (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::get_msaaSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_msaaSamples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_msaaSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::UnityEngine::Rendering::MSAASamples)>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::set_msaaSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc831c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_msaaSamples", {}, { ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_bindTextureMS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_bindTextureMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_bindTextureMS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_bindTextureMS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(bool)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_bindTextureMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc832c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_bindTextureMS", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_useDynamicScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_useDynamicScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_useDynamicScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_useDynamicScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(bool)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_useDynamicScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc833c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_useDynamicScale", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_useDynamicScaleExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_useDynamicScaleExplicit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_useDynamicScaleExplicit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_useDynamicScaleExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(bool)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_useDynamicScaleExplicit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc834c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_useDynamicScaleExplicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_memoryless
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureMemoryless (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::get_memoryless)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_memoryless", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_memoryless
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::UnityEngine::RenderTextureMemoryless)>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::set_memoryless)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc835c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_memoryless", {}, { ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_vrUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VRTextureUsage (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_vrUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_vrUsage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_vrUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::UnityEngine::VRTextureUsage)>(
    &::UnityEngine::Rendering::RTHandleAllocInfo::set_vrUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc836c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_vrUsage", {}, { ::i2c::type_of<::UnityEngine::VRTextureUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_enableShadingRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_enableShadingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_enableShadingRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_enableShadingRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(bool)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_enableShadingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc837c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_enableShadingRate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RTHandleAllocInfo::*)()>(&::UnityEngine::Rendering::RTHandleAllocInfo::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc8384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::StringW)>(&::UnityEngine::Rendering::RTHandleAllocInfo::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc838c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleAllocInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleAllocInfo::*)(::StringW)>(&::UnityEngine::Rendering::RTHandleAllocInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bc8394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::RTHandleAllocInfo::get_slices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_slices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_slices(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_slices", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::RTHandleAllocInfo::get_format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_format(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(),
                                                                                         { "set_format", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::FilterMode UnityEngine::Rendering::RTHandleAllocInfo::get_filterMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_filterMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FilterMode>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_filterMode(::UnityEngine::FilterMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_filterMode", {}, { ::i2c::type_of<::UnityEngine::FilterMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::TextureWrapMode UnityEngine::Rendering::RTHandleAllocInfo::get_wrapModeU() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_wrapModeU", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureWrapMode>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_wrapModeU(::UnityEngine::TextureWrapMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_wrapModeU", {}, { ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::TextureWrapMode UnityEngine::Rendering::RTHandleAllocInfo::get_wrapModeV() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_wrapModeV", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureWrapMode>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_wrapModeV(::UnityEngine::TextureWrapMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_wrapModeV", {}, { ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::TextureWrapMode UnityEngine::Rendering::RTHandleAllocInfo::get_wrapModeW() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_wrapModeW", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureWrapMode>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_wrapModeW(::UnityEngine::TextureWrapMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_wrapModeW", {}, { ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::Rendering::RTHandleAllocInfo::get_dimension() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_dimension", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_dimension(::UnityEngine::Rendering::TextureDimension value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_dimension", {}, { ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RTHandleAllocInfo::get_enableRandomWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_enableRandomWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_enableRandomWrite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_enableRandomWrite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RTHandleAllocInfo::get_useMipMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_useMipMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_useMipMap(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_useMipMap", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RTHandleAllocInfo::get_autoGenerateMips() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_autoGenerateMips", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_autoGenerateMips(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_autoGenerateMips", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RTHandleAllocInfo::get_isShadowMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_isShadowMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_isShadowMap(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_isShadowMap", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RTHandleAllocInfo::get_anisoLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_anisoLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_anisoLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_anisoLevel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::RTHandleAllocInfo::get_mipMapBias() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_mipMapBias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_mipMapBias(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_mipMapBias", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::MSAASamples UnityEngine::Rendering::RTHandleAllocInfo::get_msaaSamples() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_msaaSamples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::MSAASamples>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_msaaSamples(::UnityEngine::Rendering::MSAASamples value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_msaaSamples", {}, { ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RTHandleAllocInfo::get_bindTextureMS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_bindTextureMS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_bindTextureMS(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_bindTextureMS", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RTHandleAllocInfo::get_useDynamicScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_useDynamicScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_useDynamicScale(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_useDynamicScale", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RTHandleAllocInfo::get_useDynamicScaleExplicit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_useDynamicScaleExplicit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_useDynamicScaleExplicit(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_useDynamicScaleExplicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureMemoryless UnityEngine::Rendering::RTHandleAllocInfo::get_memoryless() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_memoryless", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureMemoryless>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_memoryless(::UnityEngine::RenderTextureMemoryless value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_memoryless", {}, { ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::VRTextureUsage UnityEngine::Rendering::RTHandleAllocInfo::get_vrUsage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_vrUsage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VRTextureUsage>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_vrUsage(::UnityEngine::VRTextureUsage value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_vrUsage", {}, { ::i2c::type_of<::UnityEngine::VRTextureUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RTHandleAllocInfo::get_enableShadingRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_enableShadingRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_enableShadingRate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_enableShadingRate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::RTHandleAllocInfo::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RTHandleAllocInfo::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleAllocInfo>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
// Ctor Parameters [CppParam { name: "_slices_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_format_k__BackingField", ty:
// "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_filterMode_k__BackingField", ty: "::UnityEngine::FilterMode",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_wrapModeU_k__BackingField", ty: "::UnityEngine::TextureWrapMode", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "_wrapModeV_k__BackingField", ty: "::UnityEngine::TextureWrapMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_wrapModeW_k__BackingField", ty:
// "::UnityEngine::TextureWrapMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dimension_k__BackingField", ty: "::UnityEngine::Rendering::TextureDimension", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "_enableRandomWrite_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_useMipMap_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_autoGenerateMips_k__BackingField", ty: "bool", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "_isShadowMap_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_anisoLevel_k__BackingField", ty:
// "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_mipMapBias_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "_msaaSamples_k__BackingField", ty: "::UnityEngine::Rendering::MSAASamples", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bindTextureMS_k__BackingField", ty:
// "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_useDynamicScale_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "_useDynamicScaleExplicit_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_memoryless_k__BackingField", ty:
// "::UnityEngine::RenderTextureMemoryless", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_vrUsage_k__BackingField", ty: "::UnityEngine::VRTextureUsage", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "_enableShadingRate_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RTHandleAllocInfo::RTHandleAllocInfo(
    int32_t _slices_k__BackingField, ::UnityEngine::Experimental::Rendering::GraphicsFormat _format_k__BackingField, ::UnityEngine::FilterMode _filterMode_k__BackingField,
    ::UnityEngine::TextureWrapMode _wrapModeU_k__BackingField, ::UnityEngine::TextureWrapMode _wrapModeV_k__BackingField, ::UnityEngine::TextureWrapMode _wrapModeW_k__BackingField,
    ::UnityEngine::Rendering::TextureDimension _dimension_k__BackingField, bool _enableRandomWrite_k__BackingField, bool _useMipMap_k__BackingField, bool _autoGenerateMips_k__BackingField,
    bool _isShadowMap_k__BackingField, int32_t _anisoLevel_k__BackingField, float_t _mipMapBias_k__BackingField, ::UnityEngine::Rendering::MSAASamples _msaaSamples_k__BackingField,
    bool _bindTextureMS_k__BackingField, bool _useDynamicScale_k__BackingField, bool _useDynamicScaleExplicit_k__BackingField, ::UnityEngine::RenderTextureMemoryless _memoryless_k__BackingField,
    ::UnityEngine::VRTextureUsage _vrUsage_k__BackingField, bool _enableShadingRate_k__BackingField, ::StringW _name_k__BackingField) noexcept {
  this->_slices_k__BackingField = _slices_k__BackingField;
  this->_format_k__BackingField = _format_k__BackingField;
  this->_filterMode_k__BackingField = _filterMode_k__BackingField;
  this->_wrapModeU_k__BackingField = _wrapModeU_k__BackingField;
  this->_wrapModeV_k__BackingField = _wrapModeV_k__BackingField;
  this->_wrapModeW_k__BackingField = _wrapModeW_k__BackingField;
  this->_dimension_k__BackingField = _dimension_k__BackingField;
  this->_enableRandomWrite_k__BackingField = _enableRandomWrite_k__BackingField;
  this->_useMipMap_k__BackingField = _useMipMap_k__BackingField;
  this->_autoGenerateMips_k__BackingField = _autoGenerateMips_k__BackingField;
  this->_isShadowMap_k__BackingField = _isShadowMap_k__BackingField;
  this->_anisoLevel_k__BackingField = _anisoLevel_k__BackingField;
  this->_mipMapBias_k__BackingField = _mipMapBias_k__BackingField;
  this->_msaaSamples_k__BackingField = _msaaSamples_k__BackingField;
  this->_bindTextureMS_k__BackingField = _bindTextureMS_k__BackingField;
  this->_useDynamicScale_k__BackingField = _useDynamicScale_k__BackingField;
  this->_useDynamicScaleExplicit_k__BackingField = _useDynamicScaleExplicit_k__BackingField;
  this->_memoryless_k__BackingField = _memoryless_k__BackingField;
  this->_vrUsage_k__BackingField = _vrUsage_k__BackingField;
  this->_enableShadingRate_k__BackingField = _enableShadingRate_k__BackingField;
  this->_name_k__BackingField = _name_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandleAllocInfo::RTHandleAllocInfo() {}
