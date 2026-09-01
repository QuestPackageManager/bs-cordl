#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ConstantBuffer_1.hpp"
#include "UnityEngine/Rendering/zzzz__ConstantBufferBase_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ConstantBuffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
template <typename CBType> constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_get_m_GlobalBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalBindings;
}
template <typename CBType> constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_get_m_GlobalBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalBindings;
}
template <typename CBType> constexpr void UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_set_m_GlobalBindings(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlobalBindings = value;
}
template <typename CBType> constexpr ::ArrayW<CBType>& UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
template <typename CBType> constexpr ::ArrayW<CBType> const& UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
template <typename CBType> constexpr void UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_set_m_Data(::ArrayW<CBType> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Data = value;
}
template <typename CBType> constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_get_m_GPUConstantBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GPUConstantBuffer;
}
template <typename CBType> constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_get_m_GPUConstantBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GPUConstantBuffer;
}
template <typename CBType> constexpr void UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_set_m_GPUConstantBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GPUConstantBuffer = value;
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::UpdateData(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<CBType> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(),
                                                           { "UpdateData", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<CBType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, data);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::UpdateData(::by_ref<CBType> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(), { "UpdateData", {}, { ::i2c::type_of<::by_ref<CBType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::SetGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t shaderId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(),
                                                           { "SetGlobal", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::SetGlobal(int32_t shaderId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(), { "SetGlobal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Set(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, int32_t shaderId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(),
                                       { "Set", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cs, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Set(::UnityEngine::ComputeShader* cs, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(),
                                                                                         { "Set", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cs, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Set(::UnityEngine::Material* mat, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(),
                                                                                         { "Set", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Set(::UnityEngine::MaterialPropertyBlock* mpb, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(),
                                                                                         { "Set", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mpb, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::PushGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<CBType> data, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(),
                                              { "PushGlobal", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<CBType>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, data, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::PushGlobal(::by_ref<CBType> data, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(),
                                                                                         { "PushGlobal", {}, { ::i2c::type_of<::by_ref<CBType>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Release() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename CBType> inline ::UnityEngine::Rendering::ConstantBuffer_1<CBType>* UnityEngine::Rendering::ConstantBuffer_1<CBType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>());
}
// Ctor Parameters []
template <typename CBType> constexpr ::UnityEngine::Rendering::ConstantBuffer_1<CBType>::ConstantBuffer_1() {}
