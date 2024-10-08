#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5PlatformAdditionalContentModel.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__PS5PlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductCollectionModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5PlatformAdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5PlatformAdditionalContentModel::*)(
    ::GlobalNamespace::ISonyCommerceHelper*, ::GlobalNamespace::SonyLevelProductCollectionModel*)>(&::GlobalNamespace::PS5PlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26a6a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5PlatformAdditionalContentModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLevelProductCollectionModel*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PS5PlatformAdditionalContentModel*
GlobalNamespace::PS5PlatformAdditionalContentModel::New_ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                             ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PS5PlatformAdditionalContentModel*>(sonyCommerceHelper, sonyLevelProductCollectionModel));
}
inline void GlobalNamespace::PS5PlatformAdditionalContentModel::_ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                      ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5PlatformAdditionalContentModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLevelProductCollectionModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sonyCommerceHelper, sonyLevelProductCollectionModel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5PlatformAdditionalContentModel::PS5PlatformAdditionalContentModel() {}
