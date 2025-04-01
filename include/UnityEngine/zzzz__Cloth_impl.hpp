#pragma once
// IWYU pragma private; include "UnityEngine/Cloth.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__Cloth_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Cloth.set_externalAcceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Cloth::*)(::UnityEngine::Vector3)>(&::UnityEngine::Cloth::set_externalAcceleration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4859cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Cloth*>::get(), "set_externalAcceleration", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cloth.set_externalAcceleration_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Cloth::*)(::ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::Cloth::set_externalAcceleration_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4859d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Cloth*>::get(), "set_externalAcceleration_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Cloth::__cordl_internal_get__useContinuousCollision_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useContinuousCollision_k__BackingField;
}
constexpr float_t const& UnityEngine::Cloth::__cordl_internal_get__useContinuousCollision_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useContinuousCollision_k__BackingField;
}
constexpr void UnityEngine::Cloth::__cordl_internal_set__useContinuousCollision_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useContinuousCollision_k__BackingField = value;
}
constexpr bool& UnityEngine::Cloth::__cordl_internal_get__selfCollision_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selfCollision_k__BackingField;
}
constexpr bool const& UnityEngine::Cloth::__cordl_internal_get__selfCollision_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selfCollision_k__BackingField;
}
constexpr void UnityEngine::Cloth::__cordl_internal_set__selfCollision_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selfCollision_k__BackingField = value;
}
inline void UnityEngine::Cloth::set_externalAcceleration(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Cloth*>::get(), "set_externalAcceleration", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Cloth::set_externalAcceleration_Injected(::ByRef<::UnityEngine::Vector3> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Cloth*>::get(), "set_externalAcceleration_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Cloth::Cloth() {}
