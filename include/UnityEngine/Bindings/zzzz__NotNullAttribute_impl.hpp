#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NotNullAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NotNullAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NotNullAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NotNullAttribute::*)()>(&::UnityEngine::Bindings::NotNullAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69eafe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::NotNullAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::NotNullAttribute* UnityEngine::Bindings::NotNullAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::NotNullAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NotNullAttribute::NotNullAttribute() {}
