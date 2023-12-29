#pragma once
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_impl.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_impl.hpp"
#include "GlobalNamespace/zzzz__PS5PlatformAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5PlatformAdditionalContentModel.GetLevelProductsModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PS5LevelProductsModelSO* (::GlobalNamespace::PS5PlatformAdditionalContentModel::*)()>(
    &::GlobalNamespace::PS5PlatformAdditionalContentModel::GetLevelProductsModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222e3a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5PlatformAdditionalContentModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5PlatformAdditionalContentModel*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5PlatformAdditionalContentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5PlatformAdditionalContentModel::*)()>(
    &::GlobalNamespace::PS5PlatformAdditionalContentModel::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x222e3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5PlatformAdditionalContentModel*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PS5LevelProductsModelSO*& GlobalNamespace::PS5PlatformAdditionalContentModel::__get__ps5LevelProductsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LevelProductsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5LevelProductsModelSO*> const& GlobalNamespace::PS5PlatformAdditionalContentModel::__get__ps5LevelProductsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LevelProductsModel;
}
constexpr void GlobalNamespace::PS5PlatformAdditionalContentModel::__set__ps5LevelProductsModel(::GlobalNamespace::PS5LevelProductsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5LevelProductsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PS5LevelProductsModelSO* GlobalNamespace::PS5PlatformAdditionalContentModel::GetLevelProductsModel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5PlatformAdditionalContentModel*>::get(),
                                                                             "GetLevelProductsModel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PS5LevelProductsModelSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS5PlatformAdditionalContentModel* GlobalNamespace::PS5PlatformAdditionalContentModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS5PlatformAdditionalContentModel*>());
}
inline void GlobalNamespace::PS5PlatformAdditionalContentModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5PlatformAdditionalContentModel*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5PlatformAdditionalContentModel::PS5PlatformAdditionalContentModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
