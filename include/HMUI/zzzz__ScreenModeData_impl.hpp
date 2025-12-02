#pragma once
// IWYU pragma private; include "HMUI/ScreenModeData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenModeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::ScreenModeData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, bool, float_t, float_t)>(&::HMUI::ScreenModeData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x31cf7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& HMUI::ScreenModeData::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector3 const& HMUI::ScreenModeData::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void HMUI::ScreenModeData::__cordl_internal_set_position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::UnityEngine::Vector3& HMUI::ScreenModeData::__cordl_internal_get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr ::UnityEngine::Vector3 const& HMUI::ScreenModeData::__cordl_internal_get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void HMUI::ScreenModeData::__cordl_internal_set_rotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
constexpr float_t& HMUI::ScreenModeData::__cordl_internal_get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr float_t const& HMUI::ScreenModeData::__cordl_internal_get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr void HMUI::ScreenModeData::__cordl_internal_set_scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scale = value;
}
constexpr float_t& HMUI::ScreenModeData::__cordl_internal_get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& HMUI::ScreenModeData::__cordl_internal_get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void HMUI::ScreenModeData::__cordl_internal_set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr bool& HMUI::ScreenModeData::__cordl_internal_get_offsetHeightByHeadPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetHeightByHeadPos;
}
constexpr bool const& HMUI::ScreenModeData::__cordl_internal_get_offsetHeightByHeadPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetHeightByHeadPos;
}
constexpr void HMUI::ScreenModeData::__cordl_internal_set_offsetHeightByHeadPos(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetHeightByHeadPos = value;
}
constexpr float_t& HMUI::ScreenModeData::__cordl_internal_get_yOffsetRelativeToHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yOffsetRelativeToHead;
}
constexpr float_t const& HMUI::ScreenModeData::__cordl_internal_get_yOffsetRelativeToHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yOffsetRelativeToHead;
}
constexpr void HMUI::ScreenModeData::__cordl_internal_set_yOffsetRelativeToHead(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yOffsetRelativeToHead = value;
}
constexpr float_t& HMUI::ScreenModeData::__cordl_internal_get_minYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minYPos;
}
constexpr float_t const& HMUI::ScreenModeData::__cordl_internal_get_minYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minYPos;
}
constexpr void HMUI::ScreenModeData::__cordl_internal_set_minYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minYPos = value;
}
inline void HMUI::ScreenModeData::_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos, float_t yOffsetRelativeToHead,
                                        float_t minYPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation, scale, radius, offsetHeightByHeadPos, yOffsetRelativeToHead, minYPos);
}
inline ::HMUI::ScreenModeData* HMUI::ScreenModeData::New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos,
                                                              float_t yOffsetRelativeToHead, float_t minYPos) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ScreenModeData*>(position, rotation, scale, radius, offsetHeightByHeadPos, yOffsetRelativeToHead, minYPos));
}
// Ctor Parameters []
constexpr ::HMUI::ScreenModeData::ScreenModeData() {}
