#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpClampedIntParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpClampedIntParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpClampedIntParameter.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::NoInterpClampedIntParameter::*)()>(
    &::UnityEngine::Rendering::NoInterpClampedIntParameter::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6615a00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedIntParameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedIntParameter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpClampedIntParameter.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::NoInterpClampedIntParameter::*)(int32_t)>(
    &::UnityEngine::Rendering::NoInterpClampedIntParameter::set_value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6615a08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedIntParameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedIntParameter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpClampedIntParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::NoInterpClampedIntParameter::*)(int32_t, int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::NoInterpClampedIntParameter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6615a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedIntParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr int32_t const& UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_set_min(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr int32_t& UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr int32_t const& UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_set_max(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline int32_t UnityEngine::Rendering::NoInterpClampedIntParameter::get_value() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedIntParameter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::NoInterpClampedIntParameter::set_value(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedIntParameter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::NoInterpClampedIntParameter::_ctor(int32_t value, int32_t min, int32_t max, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::NoInterpClampedIntParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, min, max, overrideState);
}
inline ::UnityEngine::Rendering::NoInterpClampedIntParameter* UnityEngine::Rendering::NoInterpClampedIntParameter::New_ctor(int32_t value, int32_t min, int32_t max, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(value, min, max, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpClampedIntParameter::NoInterpClampedIntParameter() {}
