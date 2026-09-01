#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\TextureXR.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureXR_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.set_maxViews
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Rendering::TextureXR::set_maxViews)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67b3db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "set_maxViews", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.get_slices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::TextureXR::get_slices)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67b3e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "get_slices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.get_useTexArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::TextureXR::get_useTexArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67b3e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "get_useTexArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.get_dimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::TextureDimension (*)()>(&::UnityEngine::Rendering::TextureXR::get_dimension)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b3ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "get_dimension", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetBlackUIntTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetBlackUIntTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67b3f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetBlackUIntTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetClearTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetClearTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67b3fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetClearTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetMagentaTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetMagentaTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67b407c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetMagentaTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetBlackTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetBlackTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67b4110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetBlackTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetBlackTextureArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetBlackTextureArray)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67b41a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetBlackTextureArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetBlackTexture3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetBlackTexture3D)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67b4200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetBlackTexture3D", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetWhiteTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetWhiteTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67b425c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetWhiteTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*)>(&::UnityEngine::Rendering::TextureXR::Initialize)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x67b42f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(),
                                                             { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.CreateTexture2DArrayFromTexture2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2DArray> (*)(::UnityEngine::Texture2D*, ::StringW)>(
    &::UnityEngine::Rendering::TextureXR::CreateTexture2DArrayFromTexture2D)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x67b4c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(),
                                                             { "CreateTexture2DArrayFromTexture2D", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.CreateBlackUIntTextureArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::TextureXR::CreateBlackUIntTextureArray)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x67b485c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(),
                                         { "CreateBlackUIntTextureArray", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.CreateBlackUintTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::TextureXR::CreateBlackUintTexture)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x67b4ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(),
                                                { "CreateBlackUintTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.CreateBlackTexture3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)(::StringW)>(&::UnityEngine::Rendering::TextureXR::CreateBlackTexture3D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67b4e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "CreateBlackTexture3D", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MaxViews(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_MaxViews", ::UnityEngine::Rendering::TextureXR*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::TextureXR::getStaticF_m_MaxViews() {
  return ::cordl_internals::getStaticField<int32_t, "m_MaxViews", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackUIntTexture2DArray(::UnityW<::UnityEngine::Texture> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture>, "m_BlackUIntTexture2DArray", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityW<::UnityEngine::Texture>>(value));
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackUIntTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture>, "m_BlackUIntTexture2DArray", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackUIntTexture(::UnityW<::UnityEngine::Texture> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture>, "m_BlackUIntTexture", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityW<::UnityEngine::Texture>>(value));
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackUIntTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture>, "m_BlackUIntTexture", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackUIntTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackUIntTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackUIntTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackUIntTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackUIntTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackUIntTextureRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackUIntTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackUIntTextureRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_ClearTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_ClearTexture2DArray", ::UnityEngine::Rendering::TextureXR*>(
      std::forward<::UnityW<::UnityEngine::Texture2DArray>>(value));
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::getStaticF_m_ClearTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_ClearTexture2DArray", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_ClearTexture(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "m_ClearTexture", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::TextureXR::getStaticF_m_ClearTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "m_ClearTexture", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_ClearTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_ClearTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_ClearTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_ClearTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_ClearTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_ClearTextureRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_ClearTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_ClearTextureRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MagentaTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_MagentaTexture2DArray", ::UnityEngine::Rendering::TextureXR*>(
      std::forward<::UnityW<::UnityEngine::Texture2DArray>>(value));
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::getStaticF_m_MagentaTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_MagentaTexture2DArray", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MagentaTexture(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "m_MagentaTexture", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::TextureXR::getStaticF_m_MagentaTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "m_MagentaTexture", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MagentaTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_MagentaTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_MagentaTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_MagentaTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MagentaTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_MagentaTextureRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_MagentaTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_MagentaTextureRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "m_BlackTexture", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "m_BlackTexture", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture3D(::UnityW<::UnityEngine::Texture3D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackTexture3D", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture3D() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackTexture3D", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_BlackTexture2DArray", ::UnityEngine::Rendering::TextureXR*>(
      std::forward<::UnityW<::UnityEngine::Texture2DArray>>(value));
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_BlackTexture2DArray", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTextureRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTextureRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture3DRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTexture3DRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture3DRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTexture3DRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_WhiteTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_WhiteTexture2DArray", ::UnityEngine::Rendering::TextureXR*>(
      std::forward<::UnityW<::UnityEngine::Texture2DArray>>(value));
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::getStaticF_m_WhiteTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_WhiteTexture2DArray", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_WhiteTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_WhiteTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_WhiteTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_WhiteTexture2DArrayRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_WhiteTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_WhiteTextureRTH", ::UnityEngine::Rendering::TextureXR*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_WhiteTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_WhiteTextureRTH", ::UnityEngine::Rendering::TextureXR*>();
}
inline void UnityEngine::Rendering::TextureXR::set_maxViews(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "set_maxViews", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::TextureXR::get_slices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "get_slices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::TextureXR::get_useTexArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "get_useTexArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::Rendering::TextureXR::get_dimension() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "get_dimension", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetBlackUIntTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetBlackUIntTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetClearTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetClearTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetMagentaTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetMagentaTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetBlackTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetBlackTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetBlackTextureArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetBlackTextureArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetBlackTexture3D() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetBlackTexture3D", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetWhiteTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "GetWhiteTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::TextureXR::Initialize(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(),
                                                           { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, clearR32_UIntShader);
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::CreateTexture2DArrayFromTexture2D(::UnityEngine::Texture2D* source, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(),
                                                           { "CreateTexture2DArrayFromTexture2D", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2DArray>>(nullptr, ___internal_method, source, name);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::TextureXR::CreateBlackUIntTextureArray(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                       ::UnityEngine::ComputeShader* clearR32_UIntShader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(),
                                              { "CreateBlackUIntTextureArray", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, cmd, clearR32_UIntShader);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::TextureXR::CreateBlackUintTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(),
                                              { "CreateBlackUintTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, cmd, clearR32_UIntShader);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::TextureXR::CreateBlackTexture3D(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureXR*>(), { "CreateBlackTexture3D", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TextureXR::TextureXR() {}
