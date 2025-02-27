#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/VectorImageRenderInfo.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageRenderInfo.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageRenderInfo::*)()>(
    &::UnityEngine::UIElements::UIR::VectorImageRenderInfo::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x49c0ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageRenderInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageRenderInfo::*)()>(
    &::UnityEngine::UIElements::UIR::VectorImageRenderInfo::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x49c0e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firstGradientRemap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::VectorImageRenderInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* UnityEngine::UIElements::UIR::VectorImageRenderInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::VectorImageRenderInfo::VectorImageRenderInfo() {}
