#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Constraints_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::Constraints.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Constraints::*)()>(&::RootMotion::FinalIK::Constraints::IsValid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1242b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(), "IsValid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Constraints.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Constraints::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::Constraints::Initiate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1241dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(), "Initiate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Constraints.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Constraints::*)()>(&::RootMotion::FinalIK::Constraints::Update)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x1241f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Constraints._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Constraints::*)()>(&::RootMotion::FinalIK::Constraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1242684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::Constraints::__get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::Constraints::__get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___transform;
}
constexpr void RootMotion::FinalIK::Constraints::__set_transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::Constraints::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::Constraints::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___target;
}
constexpr void RootMotion::FinalIK::Constraints::__set_target(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Constraints::__get_positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positionOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Constraints::__get_positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positionOffset;
}
constexpr void RootMotion::FinalIK::Constraints::__set_positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___positionOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Constraints::__get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Constraints::__get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___position;
}
constexpr void RootMotion::FinalIK::Constraints::__set_position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___position = value;
}
constexpr float_t& RootMotion::FinalIK::Constraints::__get_positionWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positionWeight;
}
constexpr float_t const& RootMotion::FinalIK::Constraints::__get_positionWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positionWeight;
}
constexpr void RootMotion::FinalIK::Constraints::__set_positionWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___positionWeight = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Constraints::__get_rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotationOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Constraints::__get_rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotationOffset;
}
constexpr void RootMotion::FinalIK::Constraints::__set_rotationOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Constraints::__get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotation;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Constraints::__get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotation;
}
constexpr void RootMotion::FinalIK::Constraints::__set_rotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___rotation = value;
}
constexpr float_t& RootMotion::FinalIK::Constraints::__get_rotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::Constraints::__get_rotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotationWeight;
}
constexpr void RootMotion::FinalIK::Constraints::__set_rotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___rotationWeight = value;
}
inline bool RootMotion::FinalIK::Constraints::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(), "IsValid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Constraints::Initiate(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(), "Initiate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
inline void RootMotion::FinalIK::Constraints::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::Constraints* RootMotion::FinalIK::Constraints::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::Constraints*>());
}
inline void RootMotion::FinalIK::Constraints::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Constraints*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::Constraints::Constraints() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
