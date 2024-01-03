#pragma once
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_impl.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_impl.hpp"
#include "GlobalNamespace/zzzz__PS5PlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5PlatformAdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5PlatformAdditionalContentModel::*)(
    ::GlobalNamespace::PS5LevelProductsModelSO*, ::GlobalNamespace::ISonyCommerceHelper*, ::GlobalNamespace::AlwaysOwnedContentContainerSO*)>(
    &::GlobalNamespace::PS5PlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23682c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5PlatformAdditionalContentModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS5LevelProductsModelSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PS5PlatformAdditionalContentModel*
GlobalNamespace::PS5PlatformAdditionalContentModel::New_ctor(::GlobalNamespace::PS5LevelProductsModelSO* ps5LevelProductsModel, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                             ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS5PlatformAdditionalContentModel*>(ps5LevelProductsModel, sonyCommerceHelper, alwaysOwnedContentContainer));
}
inline void GlobalNamespace::PS5PlatformAdditionalContentModel::_ctor(::GlobalNamespace::PS5LevelProductsModelSO* ps5LevelProductsModel, ::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                      ::GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5PlatformAdditionalContentModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS5LevelProductsModelSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ps5LevelProductsModel, sonyCommerceHelper, alwaysOwnedContentContainer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5PlatformAdditionalContentModel::PS5PlatformAdditionalContentModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
