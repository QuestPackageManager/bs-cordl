#pragma once
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_impl.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_impl.hpp"
#include "GlobalNamespace/zzzz__PS4PlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4PlatformAdditionalContentModel.GetLevelProductsModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PS4LevelProductsModelSO* (::GlobalNamespace::PS4PlatformAdditionalContentModel::*)()>(
    &::GlobalNamespace::PS4PlatformAdditionalContentModel::GetLevelProductsModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222e294;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PlatformAdditionalContentModel*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4PlatformAdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4PlatformAdditionalContentModel::*)()>(
    &::GlobalNamespace::PS4PlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x222e29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PlatformAdditionalContentModel*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PS4LevelProductsModelSO*& GlobalNamespace::PS4PlatformAdditionalContentModel::__get__ps4LevelProductsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LevelProductsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4LevelProductsModelSO*> const& GlobalNamespace::PS4PlatformAdditionalContentModel::__get__ps4LevelProductsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LevelProductsModel;
}
constexpr void GlobalNamespace::PS4PlatformAdditionalContentModel::__set__ps4LevelProductsModel(::GlobalNamespace::PS4LevelProductsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4LevelProductsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PS4LevelProductsModelSO* GlobalNamespace::PS4PlatformAdditionalContentModel::GetLevelProductsModel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PlatformAdditionalContentModel*>::get(),
                                                                             "GetLevelProductsModel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PS4LevelProductsModelSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS4PlatformAdditionalContentModel* GlobalNamespace::PS4PlatformAdditionalContentModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS4PlatformAdditionalContentModel*>());
}
inline void GlobalNamespace::PS4PlatformAdditionalContentModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PlatformAdditionalContentModel*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4PlatformAdditionalContentModel::PS4PlatformAdditionalContentModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
