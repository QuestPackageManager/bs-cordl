#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RuntimeUIElementsBridge.hpp"
#include "UnityEngine/UIElements/zzzz__UIElementsBridge_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimeUIElementsBridge_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimeUIElementsBridge.SetWantsMouseJumping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RuntimeUIElementsBridge::*)(int32_t)>(
    &::UnityEngine::UIElements::RuntimeUIElementsBridge::SetWantsMouseJumping)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4a9b590;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimeUIElementsBridge*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimeUIElementsBridge*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimeUIElementsBridge._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RuntimeUIElementsBridge::*)()>(
    &::UnityEngine::UIElements::RuntimeUIElementsBridge::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a9b594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimeUIElementsBridge*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RuntimeUIElementsBridge::SetWantsMouseJumping(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimeUIElementsBridge*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::RuntimeUIElementsBridge::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimeUIElementsBridge*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RuntimeUIElementsBridge* UnityEngine::UIElements::RuntimeUIElementsBridge::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::RuntimeUIElementsBridge*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RuntimeUIElementsBridge::RuntimeUIElementsBridge() {}
