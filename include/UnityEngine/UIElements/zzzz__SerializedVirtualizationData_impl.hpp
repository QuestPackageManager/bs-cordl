#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SerializedVirtualizationData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SerializedVirtualizationData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::SerializedVirtualizationData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SerializedVirtualizationData::*)()>(
    &::UnityEngine::UIElements::SerializedVirtualizationData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4985d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SerializedVirtualizationData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_scrollOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollOffset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_scrollOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollOffset;
}
constexpr void UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_set_scrollOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scrollOffset = value;
}
constexpr int32_t& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_firstVisibleIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstVisibleIndex;
}
constexpr int32_t const& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_firstVisibleIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstVisibleIndex;
}
constexpr void UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_set_firstVisibleIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstVisibleIndex = value;
}
constexpr float_t& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_contentPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentPadding;
}
constexpr float_t const& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_contentPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentPadding;
}
constexpr void UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_set_contentPadding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentPadding = value;
}
constexpr float_t& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_contentHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentHeight;
}
constexpr float_t const& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_contentHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentHeight;
}
constexpr void UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_set_contentHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentHeight = value;
}
constexpr int32_t& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_anchoredItemIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchoredItemIndex;
}
constexpr int32_t const& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_anchoredItemIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchoredItemIndex;
}
constexpr void UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_set_anchoredItemIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anchoredItemIndex = value;
}
constexpr float_t& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_anchorOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorOffset;
}
constexpr float_t const& UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_get_anchorOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorOffset;
}
constexpr void UnityEngine::UIElements::SerializedVirtualizationData::__cordl_internal_set_anchorOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anchorOffset = value;
}
inline void UnityEngine::UIElements::SerializedVirtualizationData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SerializedVirtualizationData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::SerializedVirtualizationData* UnityEngine::UIElements::SerializedVirtualizationData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::SerializedVirtualizationData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SerializedVirtualizationData::SerializedVirtualizationData() {}
