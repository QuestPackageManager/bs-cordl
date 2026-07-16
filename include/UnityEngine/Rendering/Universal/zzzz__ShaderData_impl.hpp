#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShaderData::*)()>(&::UnityEngine::Rendering::Universal::ShaderData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b4ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderData.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ShaderData* (*)()>(&::UnityEngine::Rendering::Universal::ShaderData::get_instance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b5000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderData.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShaderData::*)()>(&::UnityEngine::Rendering::Universal::ShaderData::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68b5070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderData.GetLightDataBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ComputeBuffer* (::UnityEngine::Rendering::Universal::ShaderData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ShaderData::GetLightDataBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68b50f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "GetLightDataBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderData.GetLightIndicesBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ComputeBuffer* (::UnityEngine::Rendering::Universal::ShaderData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ShaderData::GetLightIndicesBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68b5154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "GetLightIndicesBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderData.GetAdditionalLightShadowParamsStructuredBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ComputeBuffer* (::UnityEngine::Rendering::Universal::ShaderData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ShaderData::GetAdditionalLightShadowParamsStructuredBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68b51b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(),
                                                                                           { "GetAdditionalLightShadowParamsStructuredBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderData.GetAdditionalLightShadowSliceMatricesStructuredBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ComputeBuffer* (::UnityEngine::Rendering::Universal::ShaderData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ShaderData::GetAdditionalLightShadowSliceMatricesStructuredBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68b5214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(),
                                                                                           { "GetAdditionalLightShadowSliceMatricesStructuredBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderData.DisposeBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShaderData::*)(::by_ref<::UnityEngine::ComputeBuffer*>)>(
    &::UnityEngine::Rendering::Universal::ShaderData::DisposeBuffer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68b50d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "DisposeBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ComputeBuffer*>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_get_m_LightDataBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightDataBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_get_m_LightDataBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightDataBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_set_m_LightDataBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightDataBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_get_m_LightIndicesBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightIndicesBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_get_m_LightIndicesBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightIndicesBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_set_m_LightIndicesBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightIndicesBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_get_m_AdditionalLightShadowParamsStructuredBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowParamsStructuredBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_get_m_AdditionalLightShadowParamsStructuredBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowParamsStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_set_m_AdditionalLightShadowParamsStructuredBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightShadowParamsStructuredBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_get_m_AdditionalLightShadowSliceMatricesStructuredBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowSliceMatricesStructuredBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_get_m_AdditionalLightShadowSliceMatricesStructuredBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowSliceMatricesStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ShaderData::__cordl_internal_set_m_AdditionalLightShadowSliceMatricesStructuredBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightShadowSliceMatricesStructuredBuffer = value;
}
inline void UnityEngine::Rendering::Universal::ShaderData::setStaticF_m_Instance(::UnityEngine::Rendering::Universal::ShaderData* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ShaderData*, "m_Instance", ::UnityEngine::Rendering::Universal::ShaderData*>(
      std::forward<::UnityEngine::Rendering::Universal::ShaderData*>(value));
}
inline ::UnityEngine::Rendering::Universal::ShaderData* UnityEngine::Rendering::Universal::ShaderData::getStaticF_m_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ShaderData*, "m_Instance", ::UnityEngine::Rendering::Universal::ShaderData*>();
}
inline void UnityEngine::Rendering::Universal::ShaderData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ShaderData* UnityEngine::Rendering::Universal::ShaderData::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ShaderData*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShaderData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::Universal::ShaderData::GetLightDataBuffer(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "GetLightDataBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(this, ___internal_method, size);
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::Universal::ShaderData::GetLightIndicesBuffer(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "GetLightIndicesBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(this, ___internal_method, size);
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::Universal::ShaderData::GetAdditionalLightShadowParamsStructuredBuffer(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "GetAdditionalLightShadowParamsStructuredBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(this, ___internal_method, size);
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::Universal::ShaderData::GetAdditionalLightShadowSliceMatricesStructuredBuffer(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(),
                                                                                         { "GetAdditionalLightShadowSliceMatricesStructuredBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(this, ___internal_method, size);
}
template <typename T> inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::Universal::ShaderData::GetOrUpdateBuffer(::by_ref<::UnityEngine::ComputeBuffer*> buffer, int32_t size) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(),
                                              { "GetOrUpdateBuffer", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::UnityEngine::ComputeBuffer*>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(this, ___internal_method, buffer, size);
}
inline void UnityEngine::Rendering::Universal::ShaderData::DisposeBuffer(::by_ref<::UnityEngine::ComputeBuffer*> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderData*>(), { "DisposeBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ComputeBuffer*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::UnityEngine::Rendering::Universal::ShaderData* UnityEngine::Rendering::Universal::ShaderData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ShaderData*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::ShaderData::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::ShaderData::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShaderData::ShaderData() {}
