#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeComponentMenuForRenderPipeline.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponentMenu_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponentMenuForRenderPipeline_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline.get_pipelineTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::*)()>(
    &::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::get_pipelineTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c597c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>(), { "get_pipelineTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::*)(::StringW, ::ArrayW<::System::Type*>)>(
    &::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x67c5984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::__cordl_internal_get__pipelineTypes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pipelineTypes_k__BackingField;
}
constexpr ::ArrayW<::System::Type*> const& UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::__cordl_internal_get__pipelineTypes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pipelineTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::__cordl_internal_set__pipelineTypes_k__BackingField(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pipelineTypes_k__BackingField = value;
}
inline ::ArrayW<::System::Type*> UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::get_pipelineTypes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>(), { "get_pipelineTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::_ctor(::StringW menu, ::ArrayW<::System::Type*> pipelineTypes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menu, pipelineTypes);
}
inline ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline* UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::New_ctor(::StringW menu, ::ArrayW<::System::Type*> pipelineTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*>(menu, pipelineTypes));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline::VolumeComponentMenuForRenderPipeline() {}
