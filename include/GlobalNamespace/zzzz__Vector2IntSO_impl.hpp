#pragma once
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "GlobalNamespace/zzzz__Vector2IntSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Vector2IntSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Vector2IntSO::*)()>(&::GlobalNamespace::Vector2IntSO::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe98d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Vector2IntSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::Vector2IntSO* GlobalNamespace::Vector2IntSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Vector2IntSO*>());
}
inline void GlobalNamespace::Vector2IntSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Vector2IntSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector2IntSO::Vector2IntSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
