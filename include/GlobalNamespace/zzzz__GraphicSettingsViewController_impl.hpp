#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GraphicSettingsViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::GraphicSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23d8810;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GraphicSettingsViewController::*)()>(
    &::GlobalNamespace::GraphicSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d8814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& GlobalNamespace::GraphicSettingsViewController::__cordl_internal_get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& GlobalNamespace::GraphicSettingsViewController::__cordl_internal_get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::GraphicSettingsViewController::__cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GraphicSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::GraphicSettingsViewController* GlobalNamespace::GraphicSettingsViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GraphicSettingsViewController*>());
}
inline void GlobalNamespace::GraphicSettingsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphicSettingsViewController::GraphicSettingsViewController() {}
