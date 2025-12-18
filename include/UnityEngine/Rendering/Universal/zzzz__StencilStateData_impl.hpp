#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/StencilStateData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StencilStateData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StencilStateData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::StencilStateData::*)()>(
    &::UnityEngine::Rendering::Universal::StencilStateData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66849c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StencilStateData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_overrideStencilState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideStencilState;
}
constexpr bool const& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_overrideStencilState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideStencilState;
}
constexpr void UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_set_overrideStencilState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideStencilState = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_stencilReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilReference;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_stencilReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilReference;
}
constexpr void UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_set_stencilReference(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilReference = value;
}
constexpr ::UnityEngine::Rendering::CompareFunction& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_stencilCompareFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilCompareFunction;
}
constexpr ::UnityEngine::Rendering::CompareFunction const& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_stencilCompareFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilCompareFunction;
}
constexpr void UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_set_stencilCompareFunction(::UnityEngine::Rendering::CompareFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilCompareFunction = value;
}
constexpr ::UnityEngine::Rendering::StencilOp& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_passOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passOperation;
}
constexpr ::UnityEngine::Rendering::StencilOp const& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_passOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passOperation;
}
constexpr void UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_set_passOperation(::UnityEngine::Rendering::StencilOp value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passOperation = value;
}
constexpr ::UnityEngine::Rendering::StencilOp& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_failOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOperation;
}
constexpr ::UnityEngine::Rendering::StencilOp const& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_failOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOperation;
}
constexpr void UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_set_failOperation(::UnityEngine::Rendering::StencilOp value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failOperation = value;
}
constexpr ::UnityEngine::Rendering::StencilOp& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_zFailOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zFailOperation;
}
constexpr ::UnityEngine::Rendering::StencilOp const& UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_get_zFailOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zFailOperation;
}
constexpr void UnityEngine::Rendering::Universal::StencilStateData::__cordl_internal_set_zFailOperation(::UnityEngine::Rendering::StencilOp value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zFailOperation = value;
}
inline void UnityEngine::Rendering::Universal::StencilStateData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StencilStateData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::StencilStateData* UnityEngine::Rendering::Universal::StencilStateData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::StencilStateData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::StencilStateData::StencilStateData() {}
