#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MinIntParameter.hpp"
#include "UnityEngine/Rendering/zzzz__IntParameter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MinIntParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::MinIntParameter.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::MinIntParameter::*)()>(&::UnityEngine::Rendering::MinIntParameter::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6615800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MinIntParameter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MinIntParameter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MinIntParameter.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::MinIntParameter::*)(int32_t)>(
    &::UnityEngine::Rendering::MinIntParameter::set_value)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6615808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MinIntParameter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MinIntParameter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MinIntParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::MinIntParameter::*)(int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::MinIntParameter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x661581c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MinIntParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::MinIntParameter::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr int32_t const& UnityEngine::Rendering::MinIntParameter::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::MinIntParameter::__cordl_internal_set_min(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
inline int32_t UnityEngine::Rendering::MinIntParameter::get_value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MinIntParameter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::MinIntParameter::set_value(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MinIntParameter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::MinIntParameter::_ctor(int32_t value, int32_t min, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MinIntParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, min, overrideState);
}
inline ::UnityEngine::Rendering::MinIntParameter* UnityEngine::Rendering::MinIntParameter::New_ctor(int32_t value, int32_t min, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::MinIntParameter*>(value, min, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MinIntParameter::MinIntParameter() {}
