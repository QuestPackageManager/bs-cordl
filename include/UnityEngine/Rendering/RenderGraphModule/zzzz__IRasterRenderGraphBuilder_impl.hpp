#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRasterRenderGraphBuilder.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRasterRenderGraphBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ExtendedFeatureFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderAttachmentRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombinerStage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombiner_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder.SetInputAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetInputAttachment)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c02d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder.SetInputAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetInputAttachment)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder.SetShadingRateImageAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetShadingRateImageAttachment)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder.SetShadingRateFragmentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::*)(::UnityEngine::Rendering::ShadingRateFragmentSize)>(
    &::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetShadingRateFragmentSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder.SetShadingRateCombiner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::*)(::UnityEngine::Rendering::ShadingRateCombinerStage, ::UnityEngine::Rendering::ShadingRateCombiner)>(
        &::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetShadingRateCombiner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder.SetExtendedFeatureFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::*)(
    ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags)>(&::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetExtendedFeatureFlags)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 5 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetInputAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex, index, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetInputAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                                                                                     int32_t depthSlice) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex, index, flags, mipLevel, depthSlice);
}
inline void
UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetShadingRateImageAttachment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tex) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex);
}
inline void UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shadingRateFragmentSize);
}
inline void UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage stage,
                                                                                                         ::UnityEngine::Rendering::ShadingRateCombiner combiner) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage, combiner);
}
inline void UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetExtendedFeatureFlags(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extendedFeatureFlags);
}
template <typename PassData>
  requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
inline void UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::SetRenderFunc(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* renderFunc) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(), 6 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderFunc);
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder"
constexpr UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::operator ::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::i___UnityEngine__Rendering__RenderGraphModule__IRenderAttachmentRenderGraphBuilder() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
constexpr UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::operator ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
