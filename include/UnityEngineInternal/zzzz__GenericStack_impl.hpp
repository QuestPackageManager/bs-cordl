#pragma once
// IWYU pragma private; include "UnityEngineInternal/GenericStack.hpp"
#include "System/Collections/zzzz__Stack_impl.hpp"
#include "UnityEngineInternal/zzzz__GenericStack_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::GenericStack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngineInternal::GenericStack::*)()>(&::UnityEngineInternal::GenericStack::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x485fb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::GenericStack*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngineInternal::GenericStack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::GenericStack*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngineInternal::GenericStack* UnityEngineInternal::GenericStack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngineInternal::GenericStack*>());
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::GenericStack::GenericStack() {}
