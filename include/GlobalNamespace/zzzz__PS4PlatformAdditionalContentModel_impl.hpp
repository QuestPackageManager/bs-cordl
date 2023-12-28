#pragma once
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_impl.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_impl.hpp"
#include "GlobalNamespace/zzzz__PS4PlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4PlatformAdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4PlatformAdditionalContentModel::*)(
    ::GlobalNamespace::PS4LevelProductsModelSO*, ::GlobalNamespace::ISonyCommerceHelper*, ::GlobalNamespace::AlwaysOwnedContentContainerSO*)>(
    &::GlobalNamespace::PS4PlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23681a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PlatformAdditionalContentModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS4LevelProductsModelSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PS4PlatformAdditionalContentModel*
GlobalNamespace::PS4PlatformAdditionalContentModel::New_ctor(::GlobalNamespace::PS4LevelProductsModelSO* ps4LevelProductsModel, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                             ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS4PlatformAdditionalContentModel*>(ps4LevelProductsModel, sonyCommerceHelper, alwaysOwnedContentContainer));
}
inline void GlobalNamespace::PS4PlatformAdditionalContentModel::_ctor(::GlobalNamespace::PS4LevelProductsModelSO* ps4LevelProductsModel, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                      ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PlatformAdditionalContentModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS4LevelProductsModelSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ps4LevelProductsModel, sonyCommerceHelper, alwaysOwnedContentContainer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4PlatformAdditionalContentModel::PS4PlatformAdditionalContentModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
