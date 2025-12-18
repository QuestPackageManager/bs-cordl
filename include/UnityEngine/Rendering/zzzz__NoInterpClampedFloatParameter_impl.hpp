#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpClampedFloatParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpClampedFloatParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpClampedFloatParameter.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::NoInterpClampedFloatParameter::*)()>(
    &::UnityEngine::Rendering::NoInterpClampedFloatParameter::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6615d80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedFloatParameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedFloatParameter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpClampedFloatParameter.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::NoInterpClampedFloatParameter::*)(float_t)>(
    &::UnityEngine::Rendering::NoInterpClampedFloatParameter::set_value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6615d88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedFloatParameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedFloatParameter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpClampedFloatParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::NoInterpClampedFloatParameter::*)(float_t, float_t, float_t, bool)>(
    &::UnityEngine::Rendering::NoInterpClampedFloatParameter::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6615da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedFloatParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::NoInterpClampedFloatParameter::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& UnityEngine::Rendering::NoInterpClampedFloatParameter::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::NoInterpClampedFloatParameter::__cordl_internal_set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr float_t& UnityEngine::Rendering::NoInterpClampedFloatParameter::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& UnityEngine::Rendering::NoInterpClampedFloatParameter::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::NoInterpClampedFloatParameter::__cordl_internal_set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline float_t UnityEngine::Rendering::NoInterpClampedFloatParameter::get_value() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedFloatParameter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::NoInterpClampedFloatParameter::set_value(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedFloatParameter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::NoInterpClampedFloatParameter::_ctor(float_t value, float_t min, float_t max, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedFloatParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, min, max, overrideState);
}
inline ::UnityEngine::Rendering::NoInterpClampedFloatParameter* UnityEngine::Rendering::NoInterpClampedFloatParameter::New_ctor(float_t value, float_t min, float_t max, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::NoInterpClampedFloatParameter*>(value, min, max, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpClampedFloatParameter::NoInterpClampedFloatParameter() {}
