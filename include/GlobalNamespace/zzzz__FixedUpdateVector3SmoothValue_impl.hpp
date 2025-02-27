#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedUpdateVector3SmoothValue.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateVector3SmoothValue_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateVector3SmoothValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FixedUpdateVector3SmoothValue::*)(float_t)>(
    &::GlobalNamespace::FixedUpdateVector3SmoothValue::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x39cd3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateVector3SmoothValue.Interpolate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::FixedUpdateVector3SmoothValue::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::FixedUpdateVector3SmoothValue::Interpolate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x39cd410;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(), 4));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FixedUpdateVector3SmoothValue::_ctor(float_t smooth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, smooth);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FixedUpdateVector3SmoothValue::Interpolate(::UnityEngine::Vector3 value0, ::UnityEngine::Vector3 value1, float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateVector3SmoothValue*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, value0, value1, t);
}
inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* GlobalNamespace::FixedUpdateVector3SmoothValue::New_ctor(float_t smooth) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FixedUpdateVector3SmoothValue*>(smooth));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue::FixedUpdateVector3SmoothValue() {}
