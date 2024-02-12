#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FlexyFollow_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlexyFollow.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlexyFollow::*)()>(&::GlobalNamespace::FlexyFollow::Start)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2187274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlexyFollow.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlexyFollow::*)()>(&::GlobalNamespace::FlexyFollow::LateUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x21872f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlexyFollow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlexyFollow::*)()>(&::GlobalNamespace::FlexyFollow::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2187420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::FlexyFollow::__cordl_internal_get__followObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::FlexyFollow::__cordl_internal_get__followObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followObject;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__followObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____followObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FlexyFollow::__cordl_internal_get__followSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followSpeed;
}
constexpr float_t const& GlobalNamespace::FlexyFollow::__cordl_internal_get__followSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followSpeed;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__followSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____followSpeed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlexyFollow::__cordl_internal_get__offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlexyFollow::__cordl_internal_get__offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offset = value;
}
constexpr bool& GlobalNamespace::FlexyFollow::__cordl_internal_get__fixedXOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedXOffset;
}
constexpr bool const& GlobalNamespace::FlexyFollow::__cordl_internal_get__fixedXOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedXOffset;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__fixedXOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedXOffset = value;
}
constexpr bool& GlobalNamespace::FlexyFollow::__cordl_internal_get__fixedYOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedYOffset;
}
constexpr bool const& GlobalNamespace::FlexyFollow::__cordl_internal_get__fixedYOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedYOffset;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__fixedYOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedYOffset = value;
}
constexpr bool& GlobalNamespace::FlexyFollow::__cordl_internal_get__fixedZOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedZOffset;
}
constexpr bool const& GlobalNamespace::FlexyFollow::__cordl_internal_get__fixedZOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedZOffset;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__fixedZOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedZOffset = value;
}
constexpr bool& GlobalNamespace::FlexyFollow::__cordl_internal_get__useLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLocalPosition;
}
constexpr bool const& GlobalNamespace::FlexyFollow::__cordl_internal_get__useLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLocalPosition;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__useLocalPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useLocalPosition = value;
}
constexpr bool& GlobalNamespace::FlexyFollow::__cordl_internal_get__instant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instant;
}
constexpr bool const& GlobalNamespace::FlexyFollow::__cordl_internal_get__instant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instant;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__instant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instant = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FlexyFollow::__cordl_internal_get__followTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FlexyFollow::__cordl_internal_get__followTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followTransform;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__followTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____followTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FlexyFollow::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FlexyFollow::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::FlexyFollow::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FlexyFollow::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FlexyFollow::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FlexyFollow* GlobalNamespace::FlexyFollow::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FlexyFollow*>());
}
inline void GlobalNamespace::FlexyFollow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlexyFollow*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlexyFollow::FlexyFollow() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
