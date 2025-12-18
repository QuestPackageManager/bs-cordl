#pragma once
// IWYU pragma private; include "GlobalNamespace/SDFPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SDFPoint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SDFPoint.get_sqrtRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SDFPoint::*)()>(&::GlobalNamespace::SDFPoint::get_sqrtRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bf418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFPoint*>::get(), "get_sqrtRadius",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFPoint.set_sqrtRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SDFPoint::*)(float_t)>(&::GlobalNamespace::SDFPoint::set_sqrtRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bf420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFPoint*>::get(), "set_sqrtRadius", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFPoint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SDFPoint::*)()>(&::GlobalNamespace::SDFPoint::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56bf428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFPoint*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SDFPoint::__cordl_internal_get__radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr float_t const& GlobalNamespace::SDFPoint::__cordl_internal_get__radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr void GlobalNamespace::SDFPoint::__cordl_internal_set__radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius = value;
}
constexpr float_t& GlobalNamespace::SDFPoint::__cordl_internal_get__sqrtRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sqrtRadius;
}
constexpr float_t const& GlobalNamespace::SDFPoint::__cordl_internal_get__sqrtRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sqrtRadius;
}
constexpr void GlobalNamespace::SDFPoint::__cordl_internal_set__sqrtRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sqrtRadius = value;
}
inline float_t GlobalNamespace::SDFPoint::get_sqrtRadius() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFPoint*>::get(), "get_sqrtRadius",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SDFPoint::set_sqrtRadius(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFPoint*>::get(), "set_sqrtRadius", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SDFPoint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SDFPoint*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SDFPoint* GlobalNamespace::SDFPoint::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SDFPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SDFPoint::SDFPoint() {}
