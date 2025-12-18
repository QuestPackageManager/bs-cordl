#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpFloatRangeParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpFloatRangeParameter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpFloatRangeParameter.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::NoInterpFloatRangeParameter::*)()>(
    &::UnityEngine::Rendering::NoInterpFloatRangeParameter::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6615f04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpFloatRangeParameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpFloatRangeParameter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpFloatRangeParameter.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::NoInterpFloatRangeParameter::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::NoInterpFloatRangeParameter::set_value)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6615f0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpFloatRangeParameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpFloatRangeParameter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpFloatRangeParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::NoInterpFloatRangeParameter::*)(::UnityEngine::Vector2, float_t, float_t, bool)>(
    &::UnityEngine::Rendering::NoInterpFloatRangeParameter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6615f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpFloatRangeParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::NoInterpFloatRangeParameter::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& UnityEngine::Rendering::NoInterpFloatRangeParameter::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::NoInterpFloatRangeParameter::__cordl_internal_set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr float_t& UnityEngine::Rendering::NoInterpFloatRangeParameter::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& UnityEngine::Rendering::NoInterpFloatRangeParameter::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::NoInterpFloatRangeParameter::__cordl_internal_set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::NoInterpFloatRangeParameter::get_value() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpFloatRangeParameter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::NoInterpFloatRangeParameter::set_value(::UnityEngine::Vector2 value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpFloatRangeParameter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::NoInterpFloatRangeParameter::_ctor(::UnityEngine::Vector2 value, float_t min, float_t max, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpFloatRangeParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, min, max, overrideState);
}
inline ::UnityEngine::Rendering::NoInterpFloatRangeParameter* UnityEngine::Rendering::NoInterpFloatRangeParameter::New_ctor(::UnityEngine::Vector2 value, float_t min, float_t max,
                                                                                                                            bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::NoInterpFloatRangeParameter*>(value, min, max, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpFloatRangeParameter::NoInterpFloatRangeParameter() {}
