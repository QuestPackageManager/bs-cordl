#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ExtraRenderChainVEData.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ExtraRenderChainVEData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::ExtraRenderChainVEData::*)()>(&::UnityEngine::UIElements::UIR::ExtraRenderChainVEData::Reset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ce8f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::ExtraRenderChainVEData::*)()>(&::UnityEngine::UIElements::UIR::ExtraRenderChainVEData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ce8edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& UnityEngine::UIElements::UIR::ExtraRenderChainVEData::__cordl_internal_get_extraMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraMesh;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const&
UnityEngine::UIElements::UIR::ExtraRenderChainVEData::__cordl_internal_get_extraMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraMesh;
}
constexpr void UnityEngine::UIElements::UIR::ExtraRenderChainVEData::__cordl_internal_set_extraMesh(::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraMesh = value;
}
inline void UnityEngine::UIElements::UIR::ExtraRenderChainVEData::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::ExtraRenderChainVEData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* UnityEngine::UIElements::UIR::ExtraRenderChainVEData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData::ExtraRenderChainVEData() {}
