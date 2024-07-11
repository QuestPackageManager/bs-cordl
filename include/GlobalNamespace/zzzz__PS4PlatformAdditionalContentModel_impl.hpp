#pragma once
// IWYU pragma private; include "GlobalNamespace/PS4PlatformAdditionalContentModel.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__PS4PlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductCollectionModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4PlatformAdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4PlatformAdditionalContentModel::*)(
    ::GlobalNamespace::ISonyCommerceHelper*, ::GlobalNamespace::SonyLevelProductCollectionModel*)>(&::GlobalNamespace::PS4PlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ed42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PlatformAdditionalContentModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLevelProductCollectionModel*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PS4PlatformAdditionalContentModel*
GlobalNamespace::PS4PlatformAdditionalContentModel::New_ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                             ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PS4PlatformAdditionalContentModel*>(sonyCommerceHelper, sonyLevelProductCollectionModel));
}
inline void GlobalNamespace::PS4PlatformAdditionalContentModel::_ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                      ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PlatformAdditionalContentModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISonyCommerceHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLevelProductCollectionModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sonyCommerceHelper, sonyLevelProductCollectionModel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4PlatformAdditionalContentModel::PS4PlatformAdditionalContentModel() {}
