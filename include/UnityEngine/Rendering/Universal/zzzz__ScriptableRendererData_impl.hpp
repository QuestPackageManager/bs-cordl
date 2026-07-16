#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRendererData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x686e6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::__cordl_internal_get_debugReplacementPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugReplacementPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::__cordl_internal_get_debugReplacementPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugReplacementPS;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::__cordl_internal_set_debugReplacementPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugReplacementPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::__cordl_internal_get_hdrDebugViewPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrDebugViewPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::__cordl_internal_get_hdrDebugViewPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrDebugViewPS;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::__cordl_internal_set_hdrDebugViewPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdrDebugViewPS = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources* UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources::ScriptableRendererData_DebugShaderResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x686e6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeDebugShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeDebugShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeDebugShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeDebugShader;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_set_probeVolumeDebugShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeVolumeDebugShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeFragmentationDebugShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeFragmentationDebugShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeFragmentationDebugShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeFragmentationDebugShader;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_set_probeVolumeFragmentationDebugShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeVolumeFragmentationDebugShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeOffsetDebugShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeOffsetDebugShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeOffsetDebugShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeOffsetDebugShader;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_set_probeVolumeOffsetDebugShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeVolumeOffsetDebugShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeSamplingDebugShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeSamplingDebugShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeSamplingDebugShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeSamplingDebugShader;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_set_probeVolumeSamplingDebugShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeVolumeSamplingDebugShader = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeSamplingDebugMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeSamplingDebugMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeSamplingDebugMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeSamplingDebugMesh;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_set_probeSamplingDebugMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeSamplingDebugMesh = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeSamplingDebugTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeSamplingDebugTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeSamplingDebugTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeSamplingDebugTexture;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_set_probeSamplingDebugTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeSamplingDebugTexture = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeBlendStatesCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeBlendStatesCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_get_probeVolumeBlendStatesCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeBlendStatesCS;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::__cordl_internal_set_probeVolumeBlendStatesCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeVolumeBlendStatesCS = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources* UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources::ScriptableRendererData_ProbeVolumeResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.get_isInvalidated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData::get_isInvalidated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686e5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "get_isInvalidated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.set_isInvalidated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData::set_isInvalidated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686e5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "set_isInvalidated", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.get_rendererFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* (
    ::UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRendererData::get_rendererFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686e5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "get_rendererFeatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData::SetDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x686e5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "SetDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.InternalCreateRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData::InternalCreateRenderer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686e5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "InternalCreateRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData::OnValidate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x686e5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x686e5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.get_useNativeRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData::get_useNativeRenderPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686e608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "get_useNativeRenderPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData.set_useNativeRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererData::set_useNativeRenderPass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686e610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "set_useNativeRenderPass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRendererData::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x686e620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources*& UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_debugShaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugShaders;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources* const&
UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_debugShaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugShaders;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_set_debugShaders(::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugShaders = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources*& UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_probeVolumeResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeResources;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources* const&
UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_probeVolumeResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeVolumeResources;
}
constexpr void
UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_set_probeVolumeResources(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeVolumeResources = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get__isInvalidated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInvalidated_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get__isInvalidated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInvalidated_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_set__isInvalidated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInvalidated_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*&
UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_m_RendererFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererFeatures;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* const&
UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_m_RendererFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererFeatures;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_set_m_RendererFeatures(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererFeatures = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_m_RendererFeatureMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererFeatureMap;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_m_RendererFeatureMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererFeatureMap;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_set_m_RendererFeatureMap(::System::Collections::Generic::List_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererFeatureMap = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_m_UseNativeRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseNativeRenderPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_get_m_UseNativeRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseNativeRenderPass;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererData::__cordl_internal_set_m_UseNativeRenderPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseNativeRenderPass = value;
}
inline bool UnityEngine::Rendering::Universal::ScriptableRendererData::get_isInvalidated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "get_isInvalidated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererData::set_isInvalidated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "set_isInvalidated", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::ScriptableRendererData::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*
UnityEngine::Rendering::Universal::ScriptableRendererData::get_rendererFeatures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "get_rendererFeatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererData::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "SetDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::ScriptableRendererData::InternalCreateRenderer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "InternalCreateRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererData::OnValidate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererData::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRendererData::get_useNativeRenderPass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "get_useNativeRenderPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererData::set_useNativeRenderPass(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { "set_useNativeRenderPass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::Rendering::Universal::ScriptableRendererData::TryGetRendererFeature(::by_ref<T> rendererFeature) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(),
                                                                                              { "TryGetRendererFeature", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rendererFeature);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRendererData* UnityEngine::Rendering::Universal::ScriptableRendererData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRendererData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData::ScriptableRendererData() {}
