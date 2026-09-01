#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\VectorImageRenderInfo.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageRenderInfo.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageRenderInfo::*)()>(&::UnityEngine::UIElements::UIR::VectorImageRenderInfo::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cf5e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageRenderInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageRenderInfo::*)()>(&::UnityEngine::UIElements::UIR::VectorImageRenderInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cf5ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__cordl_internal_get_useCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCount;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__cordl_internal_get_useCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCount;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageRenderInfo::__cordl_internal_set_useCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useCount = value;
}
constexpr ::UnityEngine::UIElements::UIR::GradientRemap*& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__cordl_internal_get_firstGradientRemap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstGradientRemap;
}
constexpr ::UnityEngine::UIElements::UIR::GradientRemap* const& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__cordl_internal_get_firstGradientRemap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstGradientRemap;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageRenderInfo::__cordl_internal_set_firstGradientRemap(::UnityEngine::UIElements::UIR::GradientRemap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstGradientRemap = value;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__cordl_internal_get_gradientSettingsAlloc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gradientSettingsAlloc;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc const& UnityEngine::UIElements::UIR::VectorImageRenderInfo::__cordl_internal_get_gradientSettingsAlloc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gradientSettingsAlloc;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageRenderInfo::__cordl_internal_set_gradientSettingsAlloc(::UnityEngine::UIElements::UIR::Alloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gradientSettingsAlloc = value;
}
inline void UnityEngine::UIElements::UIR::VectorImageRenderInfo::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::VectorImageRenderInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* UnityEngine::UIElements::UIR::VectorImageRenderInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::VectorImageRenderInfo::VectorImageRenderInfo() {}
