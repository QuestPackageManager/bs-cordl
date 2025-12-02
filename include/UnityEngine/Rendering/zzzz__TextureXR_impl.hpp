#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureXR.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::Rendering::TextureXR::set_maxViews)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65950c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "set_maxViews", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.get_slices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::TextureXR::get_slices)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6595120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "get_slices",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.get_useTexArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::TextureXR::get_useTexArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x659517c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "get_useTexArray",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.get_dimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::TextureDimension (*)()>(&::UnityEngine::Rendering::TextureXR::get_dimension)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65951fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "get_dimension",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetBlackUIntTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetBlackUIntTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6595260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(),
                                                                               "GetBlackUIntTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetClearTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetClearTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x65952f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetClearTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetMagentaTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetMagentaTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6595388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetMagentaTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetBlackTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetBlackTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x659541c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetBlackTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetBlackTextureArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetBlackTextureArray)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65954b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(),
                                                                               "GetBlackTextureArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetBlackTexture3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetBlackTexture3D)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659550c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetBlackTexture3D",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.GetWhiteTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)()>(&::UnityEngine::Rendering::TextureXR::GetWhiteTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6595568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetWhiteTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::TextureXR::Initialize)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x65955fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.CreateTexture2DArrayFromTexture2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2DArray> (*)(::UnityEngine::Texture2D*, ::StringW)>(
    &::UnityEngine::Rendering::TextureXR::CreateTexture2DArrayFromTexture2D)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6595fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "CreateTexture2DArrayFromTexture2D", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.CreateBlackUIntTextureArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::TextureXR::CreateBlackUIntTextureArray)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6595b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "CreateBlackUIntTextureArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.CreateBlackUintTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::TextureXR::CreateBlackUintTexture)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6595ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "CreateBlackUintTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureXR.CreateBlackTexture3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)(::StringW)>(&::UnityEngine::Rendering::TextureXR::CreateBlackTexture3D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65961a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "CreateBlackTexture3D",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MaxViews(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_MaxViews", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::TextureXR::getStaticF_m_MaxViews() {
  return ::cordl_internals::getStaticField<int32_t, "m_MaxViews", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackUIntTexture2DArray(::UnityW<::UnityEngine::Texture> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture>, "m_BlackUIntTexture2DArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture>>(value));
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackUIntTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture>, "m_BlackUIntTexture2DArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackUIntTexture(::UnityW<::UnityEngine::Texture> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture>, "m_BlackUIntTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture>>(value));
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackUIntTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture>, "m_BlackUIntTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackUIntTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackUIntTexture2DArrayRTH",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackUIntTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackUIntTexture2DArrayRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackUIntTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackUIntTextureRTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackUIntTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackUIntTextureRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_ClearTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_ClearTexture2DArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(std::forward<::UnityW<::UnityEngine::Texture2DArray>>(value));
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::getStaticF_m_ClearTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_ClearTexture2DArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_ClearTexture(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "m_ClearTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::TextureXR::getStaticF_m_ClearTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "m_ClearTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_ClearTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_ClearTexture2DArrayRTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_ClearTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_ClearTexture2DArrayRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_ClearTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_ClearTextureRTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_ClearTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_ClearTextureRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MagentaTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_MagentaTexture2DArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(std::forward<::UnityW<::UnityEngine::Texture2DArray>>(value));
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::getStaticF_m_MagentaTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_MagentaTexture2DArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MagentaTexture(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "m_MagentaTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::TextureXR::getStaticF_m_MagentaTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "m_MagentaTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MagentaTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_MagentaTexture2DArrayRTH",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_MagentaTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_MagentaTexture2DArrayRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_MagentaTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_MagentaTextureRTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_MagentaTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_MagentaTextureRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "m_BlackTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "m_BlackTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture3D(::UnityW<::UnityEngine::Texture3D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackTexture3D", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture3D() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackTexture3D", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_BlackTexture2DArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(std::forward<::UnityW<::UnityEngine::Texture2DArray>>(value));
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_BlackTexture2DArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTexture2DArrayRTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTexture2DArrayRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTextureRTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTextureRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_BlackTexture3DRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTexture3DRTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_BlackTexture3DRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_BlackTexture3DRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_WhiteTexture2DArray(::UnityW<::UnityEngine::Texture2DArray> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_WhiteTexture2DArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(std::forward<::UnityW<::UnityEngine::Texture2DArray>>(value));
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::getStaticF_m_WhiteTexture2DArray() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2DArray>, "m_WhiteTexture2DArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_WhiteTexture2DArrayRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_WhiteTexture2DArrayRTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_WhiteTexture2DArrayRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_WhiteTexture2DArrayRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::setStaticF_m_WhiteTextureRTH(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_WhiteTextureRTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::getStaticF_m_WhiteTextureRTH() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_WhiteTextureRTH",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get>();
}
inline void UnityEngine::Rendering::TextureXR::set_maxViews(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "set_maxViews",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::TextureXR::get_slices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "get_slices",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::TextureXR::get_useTexArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "get_useTexArray",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::TextureDimension UnityEngine::Rendering::TextureXR::get_dimension() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "get_dimension",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::TextureDimension, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetBlackUIntTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetBlackUIntTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetClearTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetClearTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetMagentaTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetMagentaTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetBlackTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetBlackTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetBlackTextureArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(),
                                                                             "GetBlackTextureArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetBlackTexture3D() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetBlackTexture3D",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::TextureXR::GetWhiteTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "GetWhiteTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::TextureXR::Initialize(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, clearR32_UIntShader);
}
inline ::UnityW<::UnityEngine::Texture2DArray> UnityEngine::Rendering::TextureXR::CreateTexture2DArrayFromTexture2D(::UnityEngine::Texture2D* source, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "CreateTexture2DArrayFromTexture2D", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2DArray>, false>(nullptr, ___internal_method, source, name);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::TextureXR::CreateBlackUIntTextureArray(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                       ::UnityEngine::ComputeShader* clearR32_UIntShader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "CreateBlackUIntTextureArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(nullptr, ___internal_method, cmd, clearR32_UIntShader);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::TextureXR::CreateBlackUintTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* clearR32_UIntShader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "CreateBlackUintTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(nullptr, ___internal_method, cmd, clearR32_UIntShader);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::TextureXR::CreateBlackTexture3D(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TextureXR*>::get(), "CreateBlackTexture3D", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>, false>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TextureXR::TextureXR() {}
