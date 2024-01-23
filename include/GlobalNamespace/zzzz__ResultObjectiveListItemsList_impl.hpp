#pragma once
#include "GlobalNamespace/zzzz__ResultObjectiveListItem_impl.hpp"
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__ResultObjectiveListItemsList_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResultObjectiveListItemsList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultObjectiveListItemsList::*)()>(
    &::GlobalNamespace::ResultObjectiveListItemsList::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22e8100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultObjectiveListItemsList*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ResultObjectiveListItemsList* GlobalNamespace::ResultObjectiveListItemsList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ResultObjectiveListItemsList*>());
}
inline void GlobalNamespace::ResultObjectiveListItemsList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultObjectiveListItemsList*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResultObjectiveListItemsList::ResultObjectiveListItemsList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
