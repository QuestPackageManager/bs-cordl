#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Texture2DParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DParameter_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Texture2DParameter::*)(::UnityEngine::Texture*, bool)>(
    &::UnityEngine::Rendering::Texture2DParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6616900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Texture2DParameter.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Texture2DParameter::*)()>(
    &::UnityEngine::Rendering::Texture2DParameter::GetHashCode)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6616964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DParameter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DParameter*>::get(), 2));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Texture2DParameter::_ctor(::UnityEngine::Texture* value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
inline int32_t UnityEngine::Rendering::Texture2DParameter::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Texture2DParameter*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Texture2DParameter* UnityEngine::Rendering::Texture2DParameter::New_ctor(::UnityEngine::Texture* value, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Texture2DParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Texture2DParameter::Texture2DParameter() {}
