#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ConstantBuffer_1.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___m_GlobalBindings, value);
}
template <typename CBType> constexpr ::ArrayW<CBType, ::Array<CBType>*>& UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
template <typename CBType> constexpr ::ArrayW<CBType, ::Array<CBType>*> const& UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
template <typename CBType> constexpr void UnityEngine::Rendering::ConstantBuffer_1<CBType>::__cordl_internal_set_m_Data(::ArrayW<CBType, ::Array<CBType>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Data, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_GPUConstantBuffer, value);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::UpdateData(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<CBType> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "UpdateData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<CBType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, data);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::UpdateData(::ByRef<CBType> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "UpdateData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<CBType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::SetGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "SetGlobal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::SetGlobal(int32_t shaderId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "SetGlobal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Set(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cs, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Set(::UnityEngine::ComputeShader* cs, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cs, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Set(::UnityEngine::Material* mat, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mat, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Set(::UnityEngine::MaterialPropertyBlock* mpb, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mpb, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::PushGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<CBType> data, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "PushGlobal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<CBType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, data, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::PushGlobal(::ByRef<CBType> data, int32_t shaderId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), "PushGlobal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<CBType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, shaderId);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBuffer_1<CBType>::Release() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename CBType> inline ::UnityEngine::Rendering::ConstantBuffer_1<CBType>* UnityEngine::Rendering::ConstantBuffer_1<CBType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ConstantBuffer_1<CBType>*>());
}
// Ctor Parameters []
template <typename CBType> constexpr ::UnityEngine::Rendering::ConstantBuffer_1<CBType>::ConstantBuffer_1() {}
