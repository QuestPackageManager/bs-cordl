#pragma once
// IWYU pragma private; include "UnityEngine/RenderTexture.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSamplingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
#include "UnityEngine/zzzz__RenderTextureReadWrite_def.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_def.hpp"
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_width)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f58f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t)>(&::UnityEngine::RenderTexture::set_width)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f58fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_height)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f59098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t)>(&::UnityEngine::RenderTexture::set_height)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f59154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_dimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::TextureDimension (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_dimension)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f59228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_dimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(::UnityEngine::Rendering::TextureDimension)>(&::UnityEngine::RenderTexture::set_dimension)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f592e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetColorFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::RenderTexture::*)(bool)>(&::UnityEngine::RenderTexture::GetColorFormat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f593b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetColorFormat", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetColorFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::RenderTexture::SetColorFormat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f5948c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetColorFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_graphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_graphicsFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f59560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_graphicsFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_graphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::RenderTexture::set_graphicsFormat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f59568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_graphicsFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_useMipMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_useMipMap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5956c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useMipMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_useMipMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(bool)>(&::UnityEngine::RenderTexture::set_useMipMap)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f59628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_useMipMap", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_sRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_sRGB)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f596fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_sRGB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_format)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6f597b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::RenderTexture::set_format)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6f5994c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_format", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_depthStencilFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::RenderTexture::*)()>(
    &::UnityEngine::RenderTexture::get_depthStencilFormat)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f59a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_depthStencilFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_depthStencilFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::RenderTexture::set_depthStencilFormat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f59b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_depthStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_autoGenerateMips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(bool)>(&::UnityEngine::RenderTexture::set_autoGenerateMips)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f59d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_autoGenerateMips", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_volumeDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_volumeDepth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f59dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_volumeDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_volumeDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t)>(&::UnityEngine::RenderTexture::set_volumeDepth)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f59ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_volumeDepth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_antiAliasing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_antiAliasing)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f59f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_antiAliasing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_antiAliasing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t)>(&::UnityEngine::RenderTexture::set_antiAliasing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f5a038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_antiAliasing", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_bindTextureMS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_bindTextureMS)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5a10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_bindTextureMS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_enableRandomWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(bool)>(&::UnityEngine::RenderTexture::set_enableRandomWrite)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f5a1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_enableRandomWrite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_useDynamicScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_useDynamicScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5a29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useDynamicScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_useDynamicScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(bool)>(&::UnityEngine::RenderTexture::set_useDynamicScale)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f5a358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_useDynamicScale", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_useDynamicScaleExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_useDynamicScaleExplicit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5a42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useDynamicScaleExplicit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_enableShadingRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_enableShadingRate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5a4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_enableShadingRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.ApplyDynamicScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::ApplyDynamicScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5a5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ApplyDynamicScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)()>(&::UnityEngine::RenderTexture::GetActive)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f5a660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::RenderTexture::SetActive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5a79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetActive", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)()>(&::UnityEngine::RenderTexture::get_active)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f5a858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::RenderTexture::set_active)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f5a85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_active", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetColorBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderBuffer (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::GetColorBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f5a860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetColorBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDepthBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderBuffer (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::GetDepthBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f5a93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetDepthBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetMipMapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t)>(&::UnityEngine::RenderTexture::SetMipMapCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f5aa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetMipMapCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetShadowSamplingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(::UnityEngine::Rendering::ShadowSamplingMode)>(&::UnityEngine::RenderTexture::SetShadowSamplingMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f59c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetShadowSamplingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_colorBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderBuffer (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_colorBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f5ab30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_colorBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_depthBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderBuffer (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_depthBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f5ab34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_depthBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.DiscardContents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(bool, bool)>(&::UnityEngine::RenderTexture::DiscardContents)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f5ab38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "DiscardContents", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::Create)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5ac24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5ace0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::IsCreated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5ad9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetSRGBReadWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(bool)>(&::UnityEngine::RenderTexture::SetSRGBReadWrite)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f5ae58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetSRGBReadWrite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::RenderTexture::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5af2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetRenderTextureDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::RenderTexture::SetRenderTextureDescriptor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f5af68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetRenderTextureDescriptor", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::GetDescriptor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6f59888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetDescriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::RenderTexture::GetTemporary_Internal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6f5b080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary_Internal", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.ReleaseTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::RenderTexture::ReleaseTemporary)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f5b1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ReleaseTemporary", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t)>(&::UnityEngine::RenderTexture::set_depth)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f5b298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_depth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f5b36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6f5b3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6f5b8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat)>(
    &::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6f5ba64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::RenderTexture*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6f5be24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::RenderTexture*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t)>(
    &::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6f5beb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor",
                                                                                {},
                                                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                  ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t)>(&::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6f5bc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6f5c07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite)>(
    &::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f5c110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor",
                                                                                {},
                                                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                  ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat)>(&::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6f5c354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f5c490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, int32_t)>(
    &::UnityEngine::RenderTexture::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f5c3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::RenderTexture*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderTexture::*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite,
                                                                                              int32_t)>(&::UnityEngine::RenderTexture::Initialize)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6f5c1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { "Initialize",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDepthStencilFormatLegacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::RenderTexture::GetDepthStencilFormatLegacy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f5c074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDepthStencilFormatLegacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(int32_t, ::UnityEngine::RenderTextureFormat, bool)>(
    &::UnityEngine::RenderTexture::GetDepthStencilFormatLegacy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5c634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDepthStencilFormatLegacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat)>(
    &::UnityEngine::RenderTexture::GetDepthStencilFormatLegacy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f5c7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDepthStencilFormatLegacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(int32_t, ::UnityEngine::Rendering::ShadowSamplingMode)>(
    &::UnityEngine::RenderTexture::GetDepthStencilFormatLegacy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f5c7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDepthStencilFormatLegacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(int32_t, bool)>(&::UnityEngine::RenderTexture::GetDepthStencilFormatLegacy)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6f5c680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_descriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::RenderTexture::*)()>(&::UnityEngine::RenderTexture::get_descriptor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5ba28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_descriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.ValidateRenderTextureDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTextureDescriptor>)>(&::UnityEngine::RenderTexture::ValidateRenderTextureDesc)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x6f5b490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ValidateRenderTextureDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDefaultColorFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::DefaultFormat)>(
    &::UnityEngine::RenderTexture::GetDefaultColorFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f5bbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetDefaultColorFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDefaultDepthStencilFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::DefaultFormat, int32_t)>(
    &::UnityEngine::RenderTexture::GetDefaultDepthStencilFormat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f5bc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "GetDefaultDepthStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetShadowSamplingModeForFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShadowSamplingMode (*)(::UnityEngine::RenderTextureFormat)>(
    &::UnityEngine::RenderTexture::GetShadowSamplingModeForFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6f5c670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetShadowSamplingModeForFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetShadowSamplingModeForFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShadowSamplingMode (*)(::UnityEngine::Experimental::Rendering::DefaultFormat)>(
    &::UnityEngine::RenderTexture::GetShadowSamplingModeForFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6f5be14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetShadowSamplingModeForFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.WarnAboutFallbackTo16BitsDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::RenderTexture::WarnAboutFallbackTo16BitsDepth)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f59a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "WarnAboutFallbackTo16BitsDepth", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetCompatibleFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite)>(
    &::UnityEngine::RenderTexture::GetCompatibleFormat)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6f5c498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "GetCompatibleFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::RenderTexture::GetTemporary)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5c888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporaryImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::UnityEngine::RenderTextureMemoryless,
    ::UnityEngine::VRTextureUsage, bool, ::UnityEngine::Rendering::ShadowSamplingMode)>(&::UnityEngine::RenderTexture::GetTemporaryImpl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6f5c8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                            { "GetTemporaryImpl",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite,
                                                                                                  int32_t, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, bool)>(
    &::UnityEngine::RenderTexture::GetTemporary)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f5ca7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "GetTemporary",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                    ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                    ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite,
                                                                                                  int32_t, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage)>(
    &::UnityEngine::RenderTexture::GetTemporary)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6f5cb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { "GetTemporary",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite,
                                                                                                  int32_t, ::UnityEngine::RenderTextureMemoryless)>(&::UnityEngine::RenderTexture::GetTemporary)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6f5cb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "GetTemporary",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                    ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite,
                                                                                                  int32_t)>(&::UnityEngine::RenderTexture::GetTemporary)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6f5cb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { "GetTemporary",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat,
                                                                                                  ::UnityEngine::RenderTextureReadWrite)>(&::UnityEngine::RenderTexture::GetTemporary)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f5cb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary",
                                                                                {},
                                                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                  ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat)>(
    &::UnityEngine::RenderTexture::GetTemporary)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6f5cba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                            { "GetTemporary", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t)>(&::UnityEngine::RenderTexture::GetTemporary)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6f5cbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t)>(&::UnityEngine::RenderTexture::GetTemporary)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6f5cc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_width_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_width_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f58f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_width_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_width_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::RenderTexture::set_width_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f59054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_width_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_height_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_height_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f59118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_height_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_height_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::RenderTexture::set_height_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f591e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_height_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_dimension_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::TextureDimension (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_dimension_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f592a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_dimension_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_dimension_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::TextureDimension)>(&::UnityEngine::RenderTexture::set_dimension_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f59374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { "set_dimension_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetColorFormat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::System::IntPtr, bool)>(&::UnityEngine::RenderTexture::GetColorFormat_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f59448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetColorFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetColorFormat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::RenderTexture::SetColorFormat_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5951c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "SetColorFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_useMipMap_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_useMipMap_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f595ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useMipMap_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_useMipMap_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::RenderTexture::set_useMipMap_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f596b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_useMipMap_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_sRGB_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_sRGB_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5977c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_sRGB_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_depthStencilFormat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_depthStencilFormat_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f59c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_depthStencilFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_depthStencilFormat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::RenderTexture::set_depthStencilFormat_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f59cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                         { "set_depthStencilFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_autoGenerateMips_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::RenderTexture::set_autoGenerateMips_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f59da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_autoGenerateMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_volumeDepth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_volumeDepth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f59e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_volumeDepth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_volumeDepth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::RenderTexture::set_volumeDepth_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f59f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_volumeDepth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_antiAliasing_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_antiAliasing_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f59ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_antiAliasing_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_antiAliasing_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::RenderTexture::set_antiAliasing_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5a0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_antiAliasing_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_bindTextureMS_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_bindTextureMS_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5a18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_bindTextureMS_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_enableRandomWrite_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::RenderTexture::set_enableRandomWrite_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5a258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_enableRandomWrite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_useDynamicScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_useDynamicScale_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5a31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useDynamicScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_useDynamicScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::RenderTexture::set_useDynamicScale_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5a3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_useDynamicScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_useDynamicScaleExplicit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_useDynamicScaleExplicit_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5a4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useDynamicScaleExplicit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.get_enableShadingRate_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::get_enableShadingRate_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5a568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_enableShadingRate_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.ApplyDynamicScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::ApplyDynamicScale_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5a624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ApplyDynamicScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetActive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::RenderTexture::GetActive_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f5a774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetActive_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetActive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::SetActive_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5a81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetActive_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetColorBuffer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::RenderBuffer>)>(&::UnityEngine::RenderTexture::GetColorBuffer_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5a8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { "GetColorBuffer_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDepthBuffer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::RenderBuffer>)>(&::UnityEngine::RenderTexture::GetDepthBuffer_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5a9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { "GetDepthBuffer_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetMipMapCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::RenderTexture::SetMipMapCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5aaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetMipMapCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetShadowSamplingMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::ShadowSamplingMode)>(&::UnityEngine::RenderTexture::SetShadowSamplingMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5aaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "SetShadowSamplingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.DiscardContents_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, bool)>(&::UnityEngine::RenderTexture::DiscardContents_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f5abd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                             { "DiscardContents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::Create_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5aca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Create_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.Release_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::Release_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5ad60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Release_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.IsCreated_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::IsCreated_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5ae1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "IsCreated_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetSRGBReadWrite_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::RenderTexture::SetSRGBReadWrite_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5aee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetSRGBReadWrite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.SetRenderTextureDescriptor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::RenderTextureDescriptor const>)>(
    &::UnityEngine::RenderTexture::SetRenderTextureDescriptor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5aff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                            { "SetRenderTextureDescriptor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetDescriptor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::RenderTextureDescriptor>)>(&::UnityEngine::RenderTexture::GetDescriptor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5b03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                { "GetDescriptor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.GetTemporary_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::RenderTextureDescriptor const>)>(&::UnityEngine::RenderTexture::GetTemporary_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5b1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.ReleaseTemporary_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::RenderTexture::ReleaseTemporary_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f5b25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ReleaseTemporary_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderTexture.set_depth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::RenderTexture::set_depth_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f5b328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_depth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::RenderTexture::get_width() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_width(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::RenderTexture::get_height() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_height(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::RenderTexture::get_dimension() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_dimension(::UnityEngine::Rendering::TextureDimension value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RenderTexture*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetColorFormat(bool suppressWarnings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetColorFormat", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method, suppressWarnings);
}
inline void UnityEngine::RenderTexture::SetColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetColorFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::get_graphicsFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_graphicsFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_graphicsFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::RenderTexture::get_useMipMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useMipMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_useMipMap(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_useMipMap", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::RenderTexture::get_sRGB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_sRGB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::RenderTexture::get_format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_format(::UnityEngine::RenderTextureFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_format", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::get_depthStencilFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_depthStencilFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_depthStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::RenderTexture::set_autoGenerateMips(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_autoGenerateMips", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::RenderTexture::get_volumeDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_volumeDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_volumeDepth(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_volumeDepth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::RenderTexture::get_antiAliasing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_antiAliasing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_antiAliasing(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_antiAliasing", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::RenderTexture::get_bindTextureMS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_bindTextureMS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_enableRandomWrite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_enableRandomWrite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::RenderTexture::get_useDynamicScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useDynamicScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_useDynamicScale(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_useDynamicScale", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::RenderTexture::get_useDynamicScaleExplicit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useDynamicScaleExplicit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::RenderTexture::get_enableShadingRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_enableShadingRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::ApplyDynamicScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ApplyDynamicScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method);
}
inline void UnityEngine::RenderTexture::SetActive(::UnityEngine::RenderTexture* rt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetActive", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method);
}
inline void UnityEngine::RenderTexture::set_active(::UnityEngine::RenderTexture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_active", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::RenderBuffer UnityEngine::RenderTexture::GetColorBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetColorBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderBuffer>(this, ___internal_method);
}
inline ::UnityEngine::RenderBuffer UnityEngine::RenderTexture::GetDepthBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetDepthBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderBuffer>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::SetMipMapCount(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetMipMapCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void UnityEngine::RenderTexture::SetShadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode samplingMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetShadowSamplingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingMode);
}
inline ::UnityEngine::RenderBuffer UnityEngine::RenderTexture::get_colorBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_colorBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderBuffer>(this, ___internal_method);
}
inline ::UnityEngine::RenderBuffer UnityEngine::RenderTexture::get_depthBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_depthBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderBuffer>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::DiscardContents(bool discardColor, bool discardDepth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "DiscardContents", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, discardColor, discardDepth);
}
inline bool UnityEngine::RenderTexture::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::RenderTexture::IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::SetSRGBReadWrite(bool srgb) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetSRGBReadWrite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srgb);
}
inline void UnityEngine::RenderTexture::Internal_Create(/* [Writable] */ ::UnityEngine::RenderTexture* rt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt);
}
inline void UnityEngine::RenderTexture::SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor desc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetRenderTextureDescriptor", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::RenderTexture::GetDescriptor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetDescriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor desc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary_Internal", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, desc);
}
inline void UnityEngine::RenderTexture::ReleaseTemporary(::UnityEngine::RenderTexture* temp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ReleaseTemporary", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, temp);
}
inline void UnityEngine::RenderTexture::set_depth(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_depth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::RenderTexture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::_ctor(::UnityEngine::RenderTextureDescriptor desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline void UnityEngine::RenderTexture::_ctor(::UnityEngine::RenderTexture* textureToCopy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textureToCopy);
}
inline void UnityEngine::RenderTexture::_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::RenderTexture*>(),
                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format);
}
inline void UnityEngine::RenderTexture::_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::RenderTexture*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format);
}
inline void UnityEngine::RenderTexture::_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, mipCount);
}
inline void UnityEngine::RenderTexture::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, colorFormat, depthStencilFormat, mipCount);
}
inline void UnityEngine::RenderTexture::_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, colorFormat, depthStencilFormat);
}
inline void UnityEngine::RenderTexture::_ctor(int32_t width, int32_t height, int32_t depth, /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat format,
                                              /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite readWrite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor",
                                                                              {},
                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, readWrite);
}
inline void UnityEngine::RenderTexture::_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format);
}
inline void UnityEngine::RenderTexture::_ctor(int32_t width, int32_t height, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth);
}
inline void UnityEngine::RenderTexture::_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, int32_t mipCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::RenderTexture*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, mipCount);
}
inline void UnityEngine::RenderTexture::Initialize(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite,
                                                   int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { "Initialize",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                               ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, readWrite, mipCount);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetDepthStencilFormatLegacy(int32_t depthBits,
                                                                                                                      ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                              { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, depthBits, colorFormat);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::RenderTextureFormat format,
                                                                                                                      bool disableFallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                              { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, depthBits, format, disableFallback);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Experimental::Rendering::DefaultFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                              { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, depthBits, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetDepthStencilFormatLegacy(int32_t depthBits,
                                                                                                                      ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, depthBits, shadowSamplingMode);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetDepthStencilFormatLegacy(int32_t depthBits, bool requestedShadowMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetDepthStencilFormatLegacy", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, depthBits, requestedShadowMap);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::RenderTexture::get_descriptor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_descriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void UnityEngine::RenderTexture::ValidateRenderTextureDesc(::by_ref<::UnityEngine::RenderTextureDescriptor> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ValidateRenderTextureDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, desc);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetDefaultColorFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetDefaultColorFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetDefaultDepthStencilFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                              { "GetDefaultDepthStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format, depth);
}
inline ::UnityEngine::Rendering::ShadowSamplingMode UnityEngine::RenderTexture::GetShadowSamplingModeForFormat(::UnityEngine::RenderTextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetShadowSamplingModeForFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShadowSamplingMode>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Rendering::ShadowSamplingMode UnityEngine::RenderTexture::GetShadowSamplingModeForFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetShadowSamplingModeForFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShadowSamplingMode>(nullptr, ___internal_method, format);
}
inline void UnityEngine::RenderTexture::WarnAboutFallbackTo16BitsDepth(::UnityEngine::RenderTextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "WarnAboutFallbackTo16BitsDepth", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetCompatibleFormat(::UnityEngine::RenderTextureFormat renderTextureFormat,
                                                                                                              ::UnityEngine::RenderTextureReadWrite readWrite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                              { "GetCompatibleFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, renderTextureFormat, readWrite);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary(::UnityEngine::RenderTextureDescriptor desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, desc);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporaryImpl(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                                                                           ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t antiAliasing,
                                                                                           ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage,
                                                                                           bool useDynamicScale, ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                          { "GetTemporaryImpl",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                              ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                              ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height, depthStencilFormat, colorFormat, antiAliasing, memorylessMode, vrUsage,
                                                                                     useDynamicScale, shadowSamplingMode);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary(int32_t width, int32_t height, /* [DefaultValue("0")] */ int32_t depthBuffer,
                                                                                       /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat format,
                                                                                       /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite readWrite,
                                                                                       /* [DefaultValue("1")] */ int32_t antiAliasing,
                                                                                       /* [DefaultValue("RenderTextureMemoryless.None")] */ ::UnityEngine::RenderTextureMemoryless memorylessMode,
                                                                                       /* [DefaultValue("VRTextureUsage.None")] */ ::UnityEngine::VRTextureUsage vrUsage,
                                                                                       /* [DefaultValue("false")] */ bool useDynamicScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { "GetTemporary",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                               ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode, vrUsage,
                                                                                     useDynamicScale);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                                       ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing,
                                                                                       ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { "GetTemporary",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                               ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode, vrUsage);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                                       ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing,
                                                                                       ::UnityEngine::RenderTextureMemoryless memorylessMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                              { "GetTemporary",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                  ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                                       ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { "GetTemporary",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(),
                                                               ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height, depthBuffer, format, readWrite, antiAliasing);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                                       ::UnityEngine::RenderTextureReadWrite readWrite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary",
                                                                              {},
                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height, depthBuffer, format, readWrite);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                          { "GetTemporary", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height, depthBuffer, format);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary(int32_t width, int32_t height, int32_t depthBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height, depthBuffer);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::RenderTexture::GetTemporary(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height);
}
inline int32_t UnityEngine::RenderTexture::get_width_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_width_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::set_width_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_width_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::RenderTexture::get_height_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_height_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::set_height_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_height_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::RenderTexture::get_dimension_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_dimension_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::set_dimension_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::TextureDimension value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { "set_dimension_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::GetColorFormat_Injected(::System::IntPtr _unity_self, bool suppressWarnings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetColorFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, _unity_self, suppressWarnings);
}
inline void UnityEngine::RenderTexture::SetColorFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                              { "SetColorFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, format);
}
inline bool UnityEngine::RenderTexture::get_useMipMap_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useMipMap_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::set_useMipMap_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_useMipMap_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::RenderTexture::get_sRGB_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_sRGB_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::RenderTexture::get_depthStencilFormat_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_depthStencilFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::set_depthStencilFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                       { "set_depthStencilFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::RenderTexture::set_autoGenerateMips_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_autoGenerateMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::RenderTexture::get_volumeDepth_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_volumeDepth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::set_volumeDepth_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_volumeDepth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::RenderTexture::get_antiAliasing_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_antiAliasing_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::set_antiAliasing_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_antiAliasing_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::RenderTexture::get_bindTextureMS_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_bindTextureMS_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::set_enableRandomWrite_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_enableRandomWrite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::RenderTexture::get_useDynamicScale_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useDynamicScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::set_useDynamicScale_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_useDynamicScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::RenderTexture::get_useDynamicScaleExplicit_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_useDynamicScaleExplicit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::RenderTexture::get_enableShadingRate_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "get_enableShadingRate_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::ApplyDynamicScale_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ApplyDynamicScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::RenderTexture::GetActive_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetActive_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::RenderTexture::SetActive_Injected(::System::IntPtr rt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetActive_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt);
}
inline void UnityEngine::RenderTexture::GetColorBuffer_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { "GetColorBuffer_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::RenderTexture::GetDepthBuffer_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { "GetDepthBuffer_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::RenderTexture::SetMipMapCount_Injected(::System::IntPtr _unity_self, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetMipMapCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, count);
}
inline void UnityEngine::RenderTexture::SetShadowSamplingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShadowSamplingMode samplingMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                              { "SetShadowSamplingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, samplingMode);
}
inline void UnityEngine::RenderTexture::DiscardContents_Injected(::System::IntPtr _unity_self, bool discardColor, bool discardDepth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                                           { "DiscardContents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, discardColor, discardDepth);
}
inline bool UnityEngine::RenderTexture::Create_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Create_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::Release_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "Release_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::RenderTexture::IsCreated_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "IsCreated_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::RenderTexture::SetSRGBReadWrite_Injected(::System::IntPtr _unity_self, bool srgb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "SetSRGBReadWrite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, srgb);
}
inline void UnityEngine::RenderTexture::SetRenderTextureDescriptor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor const> desc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                          { "SetRenderTextureDescriptor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, desc);
}
inline void UnityEngine::RenderTexture::GetDescriptor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(),
                                              { "GetDescriptor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::System::IntPtr UnityEngine::RenderTexture::GetTemporary_Internal_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor const> desc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "GetTemporary_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, desc);
}
inline void UnityEngine::RenderTexture::ReleaseTemporary_Injected(::System::IntPtr temp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "ReleaseTemporary_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, temp);
}
inline void UnityEngine::RenderTexture::set_depth_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderTexture*>(), { "set_depth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
/// @brief [RequiredByNativeCode]
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>());
}
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(::UnityEngine::RenderTextureDescriptor desc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(desc));
}
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(::UnityEngine::RenderTexture* textureToCopy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(textureToCopy));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(width, height, depth, format));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(width, height, depth, format));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                          int32_t mipCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(width, height, depth, format, mipCount));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t mipCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(width, height, colorFormat, depthStencilFormat, mipCount));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(width, height, colorFormat, depthStencilFormat));
}
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(int32_t width, int32_t height, int32_t depth,
                                                                          /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat format,
                                                                          /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite readWrite) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(width, height, depth, format, readWrite));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(width, height, depth, format));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(int32_t width, int32_t height, int32_t depth) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(width, height, depth));
}
/// @brief [ExcludeFromDocs]
inline ::UnityEngine::RenderTexture* UnityEngine::RenderTexture::New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, int32_t mipCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RenderTexture*>(width, height, depth, format, mipCount));
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderTexture::RenderTexture() {}
