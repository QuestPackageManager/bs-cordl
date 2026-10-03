#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ExtraRenderData.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ExtraRenderData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::ExtraRenderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::ExtraRenderData::*)()>(&::UnityEngine::UIElements::UIR::ExtraRenderData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7176370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ExtraRenderData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& UnityEngine::UIElements::UIR::ExtraRenderData::__cordl_internal_get_extraMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraMesh;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const& UnityEngine::UIElements::UIR::ExtraRenderData::__cordl_internal_get_extraMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraMesh;
}
constexpr void UnityEngine::UIElements::UIR::ExtraRenderData::__cordl_internal_set_extraMesh(::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraMesh = value;
}
inline void UnityEngine::UIElements::UIR::ExtraRenderData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ExtraRenderData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::ExtraRenderData* UnityEngine::UIElements::UIR::ExtraRenderData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::ExtraRenderData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::ExtraRenderData::ExtraRenderData() {}
