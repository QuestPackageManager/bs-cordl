#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureDesc.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__FastMemoryDesc_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureSizeMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FilterMode_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_impl.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_impl.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__DepthBits_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScaleFunc_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.get_depthBufferBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DepthBits (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::get_depthBufferBits)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65cbb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(),
                                                                               "get_depthBufferBits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.set_depthBufferBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::Rendering::DepthBits)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::set_depthBufferBits)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x65cbbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), "set_depthBufferBits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DepthBits>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.get_colorFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (
    ::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)()>(&::UnityEngine::Rendering::RenderGraphModule::TextureDesc::get_colorFormat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x65cbcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(),
                                                                               "get_colorFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.set_colorFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(
    ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::Rendering::RenderGraphModule::TextureDesc::set_colorFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65cbd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), "set_colorFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.InitDefaultValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(bool, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::InitDefaultValues)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65cbd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), "InitDefaultValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(int32_t, int32_t, bool, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x65cbe28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::Vector2, bool, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65cbe54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::Rendering::ScaleFunc*, bool, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65cbe94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScaleFunc*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureDesc)>(&::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65cbedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x65cbee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::RenderTexture*)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65c824c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::GetHashCode)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x65cc024;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.CalculateFinalDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::CalculateFinalDimensions)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x65c8abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(),
                                                                               "CalculateFinalDimensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::DepthBits UnityEngine::Rendering::RenderGraphModule::TextureDesc::get_depthBufferBits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(),
                                                                             "get_depthBufferBits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DepthBits, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::set_depthBufferBits(::UnityEngine::Rendering::DepthBits value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), "set_depthBufferBits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DepthBits>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::RenderGraphModule::TextureDesc::get_colorFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(),
                                                                             "get_colorFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::set_colorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), "set_colorFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::InitDefaultValues(bool dynamicResolution, bool xrReady) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), "InitDefaultValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dynamicResolution, xrReady);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(int32_t width, int32_t height, bool dynamicResolution, bool xrReady) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, dynamicResolution, xrReady);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::Vector2 scale, bool dynamicResolution, bool xrReady) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale, dynamicResolution, xrReady);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::Rendering::ScaleFunc* func, bool dynamicResolution, bool xrReady) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScaleFunc*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, func, dynamicResolution, xrReady);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::RenderTextureDescriptor input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::RenderTexture* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::TextureDesc::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RenderGraphModule::TextureDesc::CalculateFinalDimensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>::get(),
                                                                             "CalculateFinalDimensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sizeMode", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "slices", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "func", ty: "::UnityEngine::Rendering::ScaleFunc*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "filterMode", ty:
// "::UnityEngine::FilterMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "wrapMode", ty: "::UnityEngine::TextureWrapMode", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "dimension", ty: "::UnityEngine::Rendering::TextureDimension", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableRandomWrite", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "useMipMap", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "autoGenerateMips", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "isShadowMap", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "anisoLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mipMapBias", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "msaaSamples", ty: "::UnityEngine::Rendering::MSAASamples", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "bindTextureMS", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useDynamicScale", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "useDynamicScaleExplicit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "memoryless", ty: "::UnityEngine::RenderTextureMemoryless", modifiers: "", def_value: Some("{}") },
// CppParam { name: "vrUsage", ty: "::UnityEngine::VRTextureUsage", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "fastMemoryDesc", ty: "::UnityEngine::Rendering::RenderGraphModule::FastMemoryDesc", modifiers: "", def_value: Some("{}") }, CppParam { name: "fallBackToBlackTexture", ty: "bool", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "disableFallBackToImportedTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clearBuffer", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "clearColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "discardBuffer", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc::TextureDesc(::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode sizeMode, int32_t width, int32_t height, int32_t slices,
                                                                                ::UnityEngine::Vector2 scale, ::UnityEngine::Rendering::ScaleFunc* func,
                                                                                ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode,
                                                                                ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite,
                                                                                bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                                                ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                                                bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage,
                                                                                ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::FastMemoryDesc fastMemoryDesc, bool fallBackToBlackTexture,
                                                                                bool disableFallBackToImportedTexture, bool clearBuffer, ::UnityEngine::Color clearColor, bool discardBuffer) noexcept {
  this->sizeMode = sizeMode;
  this->width = width;
  this->height = height;
  this->slices = slices;
  this->scale = scale;
  this->func = func;
  this->format = format;
  this->filterMode = filterMode;
  this->wrapMode = wrapMode;
  this->dimension = dimension;
  this->enableRandomWrite = enableRandomWrite;
  this->useMipMap = useMipMap;
  this->autoGenerateMips = autoGenerateMips;
  this->isShadowMap = isShadowMap;
  this->anisoLevel = anisoLevel;
  this->mipMapBias = mipMapBias;
  this->msaaSamples = msaaSamples;
  this->bindTextureMS = bindTextureMS;
  this->useDynamicScale = useDynamicScale;
  this->useDynamicScaleExplicit = useDynamicScaleExplicit;
  this->memoryless = memoryless;
  this->vrUsage = vrUsage;
  this->name = name;
  this->fastMemoryDesc = fastMemoryDesc;
  this->fallBackToBlackTexture = fallBackToBlackTexture;
  this->disableFallBackToImportedTexture = disableFallBackToImportedTexture;
  this->clearBuffer = clearBuffer;
  this->clearColor = clearColor;
  this->discardBuffer = discardBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc::TextureDesc() {}
