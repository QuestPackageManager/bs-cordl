#pragma once
// IWYU pragma private; include "UnityEngine/ExcludeFromObjectFactoryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ExcludeFromObjectFactoryAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ExcludeFromObjectFactoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ExcludeFromObjectFactoryAttribute::*)()>(
    &::UnityEngine::ExcludeFromObjectFactoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x344991c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExcludeFromObjectFactoryAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::ExcludeFromObjectFactoryAttribute* UnityEngine::ExcludeFromObjectFactoryAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ExcludeFromObjectFactoryAttribute*>());
}
inline void UnityEngine::ExcludeFromObjectFactoryAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExcludeFromObjectFactoryAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ExcludeFromObjectFactoryAttribute::ExcludeFromObjectFactoryAttribute() {}
