#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Vector4Parameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Vector4Parameter_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Vector4Parameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Vector4Parameter::*)(::UnityEngine::Vector4, bool)>(
    &::UnityEngine::Rendering::Vector4Parameter::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x66164d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Vector4Parameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vector4Parameter.Interp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Vector4Parameter::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, float_t)>(
    &::UnityEngine::Rendering::Vector4Parameter::Interp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6616554;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Vector4Parameter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Vector4Parameter*>::get(), 16));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Vector4Parameter::_ctor(::UnityEngine::Vector4 value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Vector4Parameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::Vector4Parameter::Interp(::UnityEngine::Vector4 from, ::UnityEngine::Vector4 to, float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Vector4Parameter*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to, t);
}
inline ::UnityEngine::Rendering::Vector4Parameter* UnityEngine::Rendering::Vector4Parameter::New_ctor(::UnityEngine::Vector4 value, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Vector4Parameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Vector4Parameter::Vector4Parameter() {}
