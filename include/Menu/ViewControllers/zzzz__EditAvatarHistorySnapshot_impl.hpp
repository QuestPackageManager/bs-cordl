#pragma once
#include "GlobalNamespace/zzzz__EditAvatarViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Menu/ViewControllers/zzzz__EditAvatarHistorySnapshot_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "GlobalNamespace/zzzz__AvatarData_def.hpp"
//  Writing Method size for method: ::Menu::ViewControllers::EditAvatarHistorySnapshot.get_avatarEditPart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart (
    ::Menu::ViewControllers::EditAvatarHistorySnapshot::*)()>(&::Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarEditPart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e6320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Menu::ViewControllers::EditAvatarHistorySnapshot*>::get(),
                                                                               "get_avatarEditPart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Menu::ViewControllers::EditAvatarHistorySnapshot.get_avatarData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AvatarData* (::Menu::ViewControllers::EditAvatarHistorySnapshot::*)()>(
    &::Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e6328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Menu::ViewControllers::EditAvatarHistorySnapshot*>::get(),
                                                                               "get_avatarData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Menu::ViewControllers::EditAvatarHistorySnapshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Menu::ViewControllers::EditAvatarHistorySnapshot::*)(
    ::GlobalNamespace::AvatarData*, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart)>(&::Menu::ViewControllers::EditAvatarHistorySnapshot::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21e6330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Menu::ViewControllers::EditAvatarHistorySnapshot*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart& Menu::ViewControllers::EditAvatarHistorySnapshot::__get__avatarEditPart_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarEditPart_k__BackingField;
}
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const& Menu::ViewControllers::EditAvatarHistorySnapshot::__get__avatarEditPart_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarEditPart_k__BackingField;
}
constexpr void Menu::ViewControllers::EditAvatarHistorySnapshot::__set__avatarEditPart_k__BackingField(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarEditPart_k__BackingField = value;
}
constexpr ::GlobalNamespace::AvatarData*& Menu::ViewControllers::EditAvatarHistorySnapshot::__get__avatarData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarData_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarData*> const& Menu::ViewControllers::EditAvatarHistorySnapshot::__get__avatarData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarData_k__BackingField;
}
constexpr void Menu::ViewControllers::EditAvatarHistorySnapshot::__set__avatarData_k__BackingField(::GlobalNamespace::AvatarData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarEditPart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Menu::ViewControllers::EditAvatarHistorySnapshot*>::get(),
                                                                             "get_avatarEditPart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AvatarData* Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Menu::ViewControllers::EditAvatarHistorySnapshot*>::get(),
                                                                             "get_avatarData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AvatarData*, false>(this, ___internal_method);
}
inline ::Menu::ViewControllers::EditAvatarHistorySnapshot* Menu::ViewControllers::EditAvatarHistorySnapshot::New_ctor(::GlobalNamespace::AvatarData* avatarData,
                                                                                                                      ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart) {
  return THROW_UNLESS(::il2cpp_utils::New<::Menu::ViewControllers::EditAvatarHistorySnapshot*>(avatarData, avatarEditPart));
}
inline void Menu::ViewControllers::EditAvatarHistorySnapshot::_ctor(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Menu::ViewControllers::EditAvatarHistorySnapshot*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarData, avatarEditPart);
}
// Ctor Parameters []
constexpr ::Menu::ViewControllers::EditAvatarHistorySnapshot::EditAvatarHistorySnapshot() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
