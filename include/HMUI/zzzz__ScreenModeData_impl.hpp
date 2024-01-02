#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenModeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::ScreenModeData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, bool, float_t, float_t)>(&::HMUI::ScreenModeData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x212c3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& HMUI::ScreenModeData::__get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector3 const& HMUI::ScreenModeData::__get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void HMUI::ScreenModeData::__set_position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::UnityEngine::Vector3& HMUI::ScreenModeData::__get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr ::UnityEngine::Vector3 const& HMUI::ScreenModeData::__get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void HMUI::ScreenModeData::__set_rotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
constexpr float_t& HMUI::ScreenModeData::__get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr float_t const& HMUI::ScreenModeData::__get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr void HMUI::ScreenModeData::__set_scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scale = value;
}
constexpr float_t& HMUI::ScreenModeData::__get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& HMUI::ScreenModeData::__get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void HMUI::ScreenModeData::__set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr bool& HMUI::ScreenModeData::__get_offsetHeightByHeadPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetHeightByHeadPos;
}
constexpr bool const& HMUI::ScreenModeData::__get_offsetHeightByHeadPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetHeightByHeadPos;
}
constexpr void HMUI::ScreenModeData::__set_offsetHeightByHeadPos(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetHeightByHeadPos = value;
}
constexpr float_t& HMUI::ScreenModeData::__get_yOffsetRelativeToHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yOffsetRelativeToHead;
}
constexpr float_t const& HMUI::ScreenModeData::__get_yOffsetRelativeToHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yOffsetRelativeToHead;
}
constexpr void HMUI::ScreenModeData::__set_yOffsetRelativeToHead(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yOffsetRelativeToHead = value;
}
constexpr float_t& HMUI::ScreenModeData::__get_minYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minYPos;
}
constexpr float_t const& HMUI::ScreenModeData::__get_minYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minYPos;
}
constexpr void HMUI::ScreenModeData::__set_minYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minYPos = value;
}
inline ::HMUI::ScreenModeData* HMUI::ScreenModeData::New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos,
                                                              float_t yOffsetRelativeToHead, float_t minYPos) {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::ScreenModeData*>(position, rotation, scale, radius, offsetHeightByHeadPos, yOffsetRelativeToHead, minYPos));
}
inline void HMUI::ScreenModeData::_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos, float_t yOffsetRelativeToHead,
                                        float_t minYPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation, scale, radius, offsetHeightByHeadPos, yOffsetRelativeToHead, minYPos);
}
// Ctor Parameters []
constexpr ::HMUI::ScreenModeData::ScreenModeData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
