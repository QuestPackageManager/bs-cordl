#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RankModelHelper_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RankModelHelper.MaxRankForGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RankModel__Rank (*)(
    ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::GameplayModifiersModelSO*, float_t)>(&::GlobalNamespace::RankModelHelper::MaxRankForGameplayModifiers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2373270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModelHelper*>::get(), "MaxRankForGameplayModifiers", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiersModelSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RankModel__Rank GlobalNamespace::RankModelHelper::MaxRankForGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                                                          ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, float_t energy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModelHelper*>::get(), "MaxRankForGameplayModifiers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiersModelSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RankModel__Rank, false>(nullptr, ___internal_method, gameplayModifiers, gameplayModifiersModel, energy);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankModelHelper::RankModelHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
