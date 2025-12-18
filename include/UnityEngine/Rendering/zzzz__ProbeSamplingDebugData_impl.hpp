#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeSamplingDebugData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeSamplingDebugUpdate_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeSamplingDebugData_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeSamplingDebugData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeSamplingDebugData::*)()>(
    &::UnityEngine::Rendering::ProbeSamplingDebugData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65da890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeSamplingDebugData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ProbeSamplingDebugUpdate& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_update() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___update;
}
constexpr ::UnityEngine::Rendering::ProbeSamplingDebugUpdate const& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_update() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___update;
}
constexpr void UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_set_update(::UnityEngine::Rendering::ProbeSamplingDebugUpdate value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___update = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_coordinates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coordinates;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_coordinates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coordinates;
}
constexpr void UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_set_coordinates(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coordinates = value;
}
constexpr bool& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_forceScreenCenterCoordinates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceScreenCenterCoordinates;
}
constexpr bool const& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_forceScreenCenterCoordinates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceScreenCenterCoordinates;
}
constexpr void UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_set_forceScreenCenterCoordinates(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceScreenCenterCoordinates = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr void UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_shortcutPressed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortcutPressed;
}
constexpr bool const& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_shortcutPressed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortcutPressed;
}
constexpr void UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_set_shortcutPressed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shortcutPressed = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_positionNormalBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionNormalBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_get_positionNormalBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionNormalBuffer;
}
constexpr void UnityEngine::Rendering::ProbeSamplingDebugData::__cordl_internal_set_positionNormalBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positionNormalBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::ProbeSamplingDebugData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeSamplingDebugData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeSamplingDebugData* UnityEngine::Rendering::ProbeSamplingDebugData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeSamplingDebugData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeSamplingDebugData::ProbeSamplingDebugData() {}
