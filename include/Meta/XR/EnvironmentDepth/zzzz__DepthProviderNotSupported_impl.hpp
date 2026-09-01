#pragma once
// IWYU pragma private; include "Meta\XR\EnvironmentDepth\DepthProviderNotSupported.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__DepthProviderNotSupported_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__DepthFrameDesc_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__IDepthProvider_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::DepthProviderNotSupported.Meta_XR_EnvironmentDepth_IDepthProvider_get_IsSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::*)()>(
    &::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::Meta_XR_EnvironmentDepth_IDepthProvider_get_IsSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3f32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(), { "Meta.XR.EnvironmentDepth.IDepthProvider.get_IsSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::DepthProviderNotSupported.Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::*)(bool)>(
    &::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a3f334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(),
                                                                                           { "Meta.XR.EnvironmentDepth.IDepthProvider.set_RemoveHands", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::DepthProviderNotSupported.Meta_XR_EnvironmentDepth_IDepthProvider_SetDepthEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::*)(bool, bool)>(
    &::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::Meta_XR_EnvironmentDepth_IDepthProvider_SetDepthEnabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a3f338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(),
                                                             { "Meta.XR.EnvironmentDepth.IDepthProvider.SetDepthEnabled", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::DepthProviderNotSupported.Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::*)(::by_ref<::UnityEngine::RenderTexture*>, ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc>)>(
        &::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a3f33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(),
                                                { "Meta.XR.EnvironmentDepth.IDepthProvider.TryGetUpdatedDepthTexture",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepth::DepthProviderNotSupported._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::*)()>(&::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a3caa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Meta::XR::EnvironmentDepth::DepthProviderNotSupported::Meta_XR_EnvironmentDepth_IDepthProvider_get_IsSupported() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(), { "Meta.XR.EnvironmentDepth.IDepthProvider.get_IsSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepth::DepthProviderNotSupported::Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(),
                                                                                         { "Meta.XR.EnvironmentDepth.IDepthProvider.set_RemoveHands", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::EnvironmentDepth::DepthProviderNotSupported::Meta_XR_EnvironmentDepth_IDepthProvider_SetDepthEnabled(bool isEnabled, bool removeHands) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(),
                                                           { "Meta.XR.EnvironmentDepth.IDepthProvider.SetDepthEnabled", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled, removeHands);
}
inline bool
Meta::XR::EnvironmentDepth::DepthProviderNotSupported::Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture(::by_ref<::UnityEngine::RenderTexture*> depthTexture,
                                                                                                                         ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc> frameDescriptors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(),
                                              { "Meta.XR.EnvironmentDepth.IDepthProvider.TryGetUpdatedDepthTexture",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, depthTexture, frameDescriptors);
}
inline void Meta::XR::EnvironmentDepth::DepthProviderNotSupported::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::EnvironmentDepth::DepthProviderNotSupported* Meta::XR::EnvironmentDepth::DepthProviderNotSupported::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*>());
}
/// @brief Convert operator to "::Meta::XR::EnvironmentDepth::IDepthProvider"
constexpr Meta::XR::EnvironmentDepth::DepthProviderNotSupported::operator ::Meta::XR::EnvironmentDepth::IDepthProvider*() noexcept {
  return static_cast<::Meta::XR::EnvironmentDepth::IDepthProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::EnvironmentDepth::IDepthProvider"
constexpr ::Meta::XR::EnvironmentDepth::IDepthProvider* Meta::XR::EnvironmentDepth::DepthProviderNotSupported::i___Meta__XR__EnvironmentDepth__IDepthProvider() noexcept {
  return static_cast<::Meta::XR::EnvironmentDepth::IDepthProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentDepth::DepthProviderNotSupported::DepthProviderNotSupported() {}
