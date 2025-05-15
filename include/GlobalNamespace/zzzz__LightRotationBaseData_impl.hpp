#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationBaseData.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBaseData::*)(
    float_t, bool, ::GlobalNamespace::EaseType, float_t, int32_t, ::GlobalNamespace::LightRotationDirection)>(&::GlobalNamespace::LightRotationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26c0114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationDirection>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_beat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr float_t const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_beat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_beat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beat = value;
}
constexpr bool& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_usePreviousEventRotationValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventRotationValue;
}
constexpr bool const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_usePreviousEventRotationValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventRotationValue;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_usePreviousEventRotationValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePreviousEventRotationValue = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr float_t& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr float_t const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
constexpr int32_t& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_loopsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopsCount;
}
constexpr int32_t const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_loopsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopsCount;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_loopsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loopsCount = value;
}
constexpr ::GlobalNamespace::LightRotationDirection& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_rotationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDirection;
}
constexpr ::GlobalNamespace::LightRotationDirection const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_rotationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDirection;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_rotationDirection(::GlobalNamespace::LightRotationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationDirection = value;
}
inline void GlobalNamespace::LightRotationBaseData::_ctor(float_t beat, bool usePreviousEventRotationValue, ::GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount,
                                                          ::GlobalNamespace::LightRotationDirection rotationDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousEventRotationValue, easeType, rotation, loopsCount, rotationDirection);
}
inline ::GlobalNamespace::LightRotationBaseData* GlobalNamespace::LightRotationBaseData::New_ctor(float_t beat, bool usePreviousEventRotationValue, ::GlobalNamespace::EaseType easeType,
                                                                                                  float_t rotation, int32_t loopsCount, ::GlobalNamespace::LightRotationDirection rotationDirection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightRotationBaseData*>(beat, usePreviousEventRotationValue, easeType, rotation, loopsCount, rotationDirection));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationBaseData::LightRotationBaseData() {}
