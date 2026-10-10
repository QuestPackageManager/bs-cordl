#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CullContextData.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CullContextData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastersCullingInfos_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CullContextData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CullContextData::*)()>(&::UnityEngine::Rendering::Universal::CullContextData::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf1c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CullContextData.SetRenderContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CullContextData::*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const>)>(
    &::UnityEngine::Rendering::Universal::CullContextData::SetRenderContext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6bf1c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(),
                                                             { "SetRenderContext", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CullContextData.Cull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CullingResults (::UnityEngine::Rendering::Universal::CullContextData::*)(
    ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>)>(&::UnityEngine::Rendering::Universal::CullContextData::Cull)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6bf1cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(),
                                                                                           { "Cull", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CullContextData.CullShadowCasters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CullContextData::*)(
    ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::ShadowCastersCullingInfos)>(&::UnityEngine::Rendering::Universal::CullContextData::CullShadowCasters)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6bf1dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(),
                            { "CullShadowCasters", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastersCullingInfos>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CullContextData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CullContextData::*)()>(&::UnityEngine::Rendering::Universal::CullContextData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bf1ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::UnityEngine::Rendering::ScriptableRenderContext>& UnityEngine::Rendering::Universal::CullContextData::__cordl_internal_get_m_RenderContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderContext;
}
constexpr ::System::Nullable_1<::UnityEngine::Rendering::ScriptableRenderContext> const& UnityEngine::Rendering::Universal::CullContextData::__cordl_internal_get_m_RenderContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderContext;
}
constexpr void UnityEngine::Rendering::Universal::CullContextData::__cordl_internal_set_m_RenderContext(::System::Nullable_1<::UnityEngine::Rendering::ScriptableRenderContext> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderContext = value;
}
inline void UnityEngine::Rendering::Universal::CullContextData::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::CullContextData::SetRenderContext(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const> renderContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(),
                                                           { "SetRenderContext", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderContext);
}
inline ::UnityEngine::Rendering::CullingResults UnityEngine::Rendering::Universal::CullContextData::Cull(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(),
                                                                                         { "Cull", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CullingResults>(this, ___internal_method, parameters);
}
inline void UnityEngine::Rendering::Universal::CullContextData::CullShadowCasters(::UnityEngine::Rendering::CullingResults cullingResults,
                                                                                  ::UnityEngine::Rendering::ShadowCastersCullingInfos shadowCastersCullingInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(),
                          { "CullShadowCasters", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastersCullingInfos>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullingResults, shadowCastersCullingInfos);
}
inline void UnityEngine::Rendering::Universal::CullContextData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CullContextData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::CullContextData* UnityEngine::Rendering::Universal::CullContextData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::CullContextData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CullContextData::CullContextData() {}
