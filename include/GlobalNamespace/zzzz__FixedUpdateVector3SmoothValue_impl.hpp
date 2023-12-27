#pragma once
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateVector3SmoothValue_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateVector3SmoothValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FixedUpdateVector3SmoothValue::*)(float_t)>(
    &::GlobalNamespace::FixedUpdateVector3SmoothValue::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20ef5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateVector3SmoothValue.Interpolate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::FixedUpdateVector3SmoothValue::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::FixedUpdateVector3SmoothValue::Interpolate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20ef63c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(), 4));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* GlobalNamespace::FixedUpdateVector3SmoothValue::New_ctor(float_t smooth) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FixedUpdateVector3SmoothValue*>(smooth));
}
inline void GlobalNamespace::FixedUpdateVector3SmoothValue::_ctor(float_t smooth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, smooth);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FixedUpdateVector3SmoothValue::Interpolate(::UnityEngine::Vector3 value0, ::UnityEngine::Vector3 value1, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(), "Interpolate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, value0, value1, t);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue::FixedUpdateVector3SmoothValue() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
