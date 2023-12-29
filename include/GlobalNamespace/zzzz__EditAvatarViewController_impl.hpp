#pragma once
#include "GlobalNamespace/zzzz__EditAvatarViewController_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__AvatarEditHistory_def.hpp"
#include "GlobalNamespace/zzzz__AvatarPartCollection_1_def.hpp"
#include "GlobalNamespace/zzzz__AvatarDataModel_def.hpp"
#include "GlobalNamespace/zzzz__NamedColorListController_def.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "HMUI/zzzz__ValueChangedBinder_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "GlobalNamespace/zzzz__SkinColorSO_def.hpp"
#include "GlobalNamespace/zzzz__AvatarPartsModel_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__ColorPickerButtonController_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EditAvatarViewController__FinishAction::__EditAvatarViewController__FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EditAvatarViewController__FinishAction::__EditAvatarViewController__FinishAction() {}
constexpr ::GlobalNamespace::__EditAvatarViewController__FinishAction GlobalNamespace::__EditAvatarViewController__FinishAction::Cancel{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__EditAvatarViewController__FinishAction GlobalNamespace::__EditAvatarViewController__FinishAction::Apply{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart::__EditAvatarViewController__AvatarEditPart(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart::__EditAvatarViewController__AvatarEditPart() {}
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::All{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::SkinColor{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::HeadTopModel{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::HeadTopPrimaryColor{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::HeadTopSecondaryColor{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::GlassesModel{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::GlassesColor{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::FacialHairModel{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::FacialHairColor{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::HandsModel{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::HandsColor{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::ClothesModel{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::ClothesModelPrimaryColor{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::ClothesModelSecondaryColor{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart GlobalNamespace::__EditAvatarViewController__AvatarEditPart::ClothesModelDetailColor{ static_cast<int32_t>(0xf) };
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::*)()>(
    &::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216c0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0._SetupColorButton_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::*)()>(
    &::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::_SetupColorButton_b__0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x216c390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0*>::get(),
                                                 "<SetupColorButton>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0._SetupColorButton_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::_SetupColorButton_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x216c460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0*>::get(), "<SetupColorButton>b__1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EditAvatarViewController*& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarViewController*> const& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__set___4__this(::GlobalNamespace::EditAvatarViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::Color>*& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get_colorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSetter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get_colorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSetter;
}
constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__set_colorSetter(::System::Action_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get_avatarEditPart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEditPart;
}
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get_avatarEditPart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEditPart;
}
constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__set_avatarEditPart(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarEditPart = value;
}
constexpr ::System::Func_1<::UnityEngine::Color>*& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get_currentColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentColor;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::Color>*> const& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get_currentColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentColor;
}
constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__set_currentColor(::System::Func_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get_uvSegment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvSegment;
}
constexpr int32_t const& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get_uvSegment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvSegment;
}
constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__set_uvSegment(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uvSegment = value;
}
constexpr ::System::Action_1<::UnityEngine::Color>*& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__set___9__1(::System::Action_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0* GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0*>());
}
inline void GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::_SetupColorButton_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0*>::get(),
                                               "<SetupColorButton>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::_SetupColorButton_b__1(::UnityEngine::Color c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0*>::get(), "<SetupColorButton>b__1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass60_0::__EditAvatarViewController____c__DisplayClass60_0() {}
template <typename T> constexpr ::System::Action_1<::StringW>*& GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__get_setIdAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIdAction;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__get_setIdAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIdAction;
}
template <typename T> constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__set_setIdAction(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setIdAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::AvatarPartCollection_1<T>*& GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__get_partCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partCollection;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartCollection_1<T>*> const&
GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__get_partCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partCollection;
}
template <typename T> constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__set_partCollection(::GlobalNamespace::AvatarPartCollection_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::EditAvatarViewController*& GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarViewController*> const& GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__set___4__this(::GlobalNamespace::EditAvatarViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart& GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__get_avatarEditPart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEditPart;
}
template <typename T>
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const& GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__get_avatarEditPart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEditPart;
}
template <typename T>
constexpr void GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__set_avatarEditPart(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarEditPart = value;
}
template <typename T> inline ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>* GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>*>());
}
template <typename T> inline void GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::_SetupValuePicker_b__0(int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>*>::get(), "<SetupValuePicker>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__EditAvatarViewController____c__DisplayClass61_0_1<T>::__EditAvatarViewController____c__DisplayClass61_0_1() {}
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(
    ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*)>(&::GlobalNamespace::EditAvatarViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x216a714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(
    ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*)>(&::GlobalNamespace::EditAvatarViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x216a7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.add_didRequestColorChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*)>(
    &::GlobalNamespace::EditAvatarViewController::add_didRequestColorChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x216a87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "add_didRequestColorChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.remove_didRequestColorChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*)>(
    &::GlobalNamespace::EditAvatarViewController::remove_didRequestColorChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x216a930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "remove_didRequestColorChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.add_randomizeAllButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action*)>(
    &::GlobalNamespace::EditAvatarViewController::add_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x216a9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "add_randomizeAllButtonWasPressedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.remove_randomizeAllButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action*)>(
    &::GlobalNamespace::EditAvatarViewController::remove_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x216aa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "remove_randomizeAllButtonWasPressedEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.add_didChangedAvatarPartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(
    ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*)>(&::GlobalNamespace::EditAvatarViewController::add_didChangedAvatarPartEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x216ab24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "add_didChangedAvatarPartEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.remove_didChangedAvatarPartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(
    ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*)>(&::GlobalNamespace::EditAvatarViewController::remove_didChangedAvatarPartEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x216abd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "remove_didChangedAvatarPartEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(bool)>(&::GlobalNamespace::EditAvatarViewController::Setup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x216ac8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.InitHistory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::InitHistory)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x216ad1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "InitHistory", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.DiscardLastEdit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::DiscardLastEdit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x216adb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "DiscardLastEdit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x216ade4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::EditAvatarViewController::DidActivate)> {
  constexpr static std::size_t size = 0x85c;
  constexpr static std::size_t addrs = 0x216af74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.RefreshUi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::RefreshUi)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x216b9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "RefreshUi",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.UpdateButtons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::UpdateButtons)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x216ad5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "UpdateButtons", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleSkinColorDidChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(int32_t)>(
    &::GlobalNamespace::EditAvatarViewController::HandleSkinColorDidChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x216bd0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "HandleSkinColorDidChanged",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.EyesValuePickerHasChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::StringW)>(
    &::GlobalNamespace::EditAvatarViewController::EyesValuePickerHasChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x216bda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "EyesValuePickerHasChanged",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleUndoButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::HandleUndoButtonWasPressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x216aec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "HandleUndoButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleRedoButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::HandleRedoButtonWasPressed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x216be38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "HandleRedoButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleRandomizeAllButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::HandleRandomizeAllButtonWasPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x216ae28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "HandleRandomizeAllButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleRandomizeModelsButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::HandleRandomizeModelsButtonWasPressed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x216bf30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "HandleRandomizeModelsButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleRandomizeColorsButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::HandleRandomizeColorsButtonWasPressed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x216bfa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "HandleRandomizeColorsButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.ReportAllChangedAndUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::ReportAllChangedAndUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x216bed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "ReportAllChangedAndUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleApplyButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::HandleApplyButtonWasPressed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x216c018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "HandleApplyButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.SaveAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::SaveAvatar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x216c04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "SaveAvatar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleCancelButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::HandleCancelButtonWasPressed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x216c094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "HandleCancelButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.CreateColorValuePairsForAvatarPartCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*, ::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*> (::GlobalNamespace::EditAvatarViewController::*)(
        ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*>)>(&::GlobalNamespace::EditAvatarViewController::CreateColorValuePairsForAvatarPartCollection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x216b8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "CreateColorValuePairsForAvatarPartCollection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.SetupColorButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(
    ::UnityEngine::UI::Button*, ::System::Action_1<::UnityEngine::Color>*, ::System::Func_1<::UnityEngine::Color>*, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t)>(
    &::GlobalNamespace::EditAvatarViewController::SetupColorButton)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x216b7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "SetupColorButton", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Button*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::Color>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x216c0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "<DidActivate>b__44_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_2)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_2",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_3)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "<DidActivate>b__44_3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_4)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_4",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_5)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "<DidActivate>b__44_5", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_6)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_6",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_7)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "<DidActivate>b__44_7", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_8)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_8",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_9)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "<DidActivate>b__44_9", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_10)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_10",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_11
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_11)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x216c2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                               "<DidActivate>b__44_11", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_12
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::StringW)>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_12)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x216c324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_12",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_13
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::StringW)>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_13)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x216c348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_13",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_14
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::StringW)>(
    &::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_14)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x216c36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_14",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NamedColorListController*& GlobalNamespace::EditAvatarViewController::__get__skinColorValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinColorValuePicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedColorListController*> const& GlobalNamespace::EditAvatarViewController::__get__skinColorValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinColorValuePicker;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__skinColorValuePicker(::GlobalNamespace::NamedColorListController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____skinColorValuePicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NamedIntListController*& GlobalNamespace::EditAvatarViewController::__get__headTopValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopValuePicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedIntListController*> const& GlobalNamespace::EditAvatarViewController::__get__headTopValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopValuePicker;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__headTopValuePicker(::GlobalNamespace::NamedIntListController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headTopValuePicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NamedIntListController*& GlobalNamespace::EditAvatarViewController::__get__eyesValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesValuePicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedIntListController*> const& GlobalNamespace::EditAvatarViewController::__get__eyesValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesValuePicker;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__eyesValuePicker(::GlobalNamespace::NamedIntListController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eyesValuePicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NamedIntListController*& GlobalNamespace::EditAvatarViewController::__get__handsValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsValuePicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedIntListController*> const& GlobalNamespace::EditAvatarViewController::__get__handsValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsValuePicker;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__handsValuePicker(::GlobalNamespace::NamedIntListController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handsValuePicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NamedIntListController*& GlobalNamespace::EditAvatarViewController::__get__clothesValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesValuePicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedIntListController*> const& GlobalNamespace::EditAvatarViewController::__get__clothesValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesValuePicker;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__clothesValuePicker(::GlobalNamespace::NamedIntListController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clothesValuePicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorPickerButtonController*& GlobalNamespace::EditAvatarViewController::__get__headTopPrimaryColorButtonController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopPrimaryColorButtonController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& GlobalNamespace::EditAvatarViewController::__get__headTopPrimaryColorButtonController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopPrimaryColorButtonController;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__headTopPrimaryColorButtonController(::GlobalNamespace::ColorPickerButtonController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headTopPrimaryColorButtonController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorPickerButtonController*& GlobalNamespace::EditAvatarViewController::__get__headTopSecondaryColorButtonController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopSecondaryColorButtonController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& GlobalNamespace::EditAvatarViewController::__get__headTopSecondaryColorButtonController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopSecondaryColorButtonController;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__headTopSecondaryColorButtonController(::GlobalNamespace::ColorPickerButtonController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headTopSecondaryColorButtonController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorPickerButtonController*& GlobalNamespace::EditAvatarViewController::__get__handsColorButtonController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsColorButtonController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& GlobalNamespace::EditAvatarViewController::__get__handsColorButtonController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsColorButtonController;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__handsColorButtonController(::GlobalNamespace::ColorPickerButtonController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handsColorButtonController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorPickerButtonController*& GlobalNamespace::EditAvatarViewController::__get__clothesColorButtonControllerPrimary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerPrimary;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& GlobalNamespace::EditAvatarViewController::__get__clothesColorButtonControllerPrimary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerPrimary;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__clothesColorButtonControllerPrimary(::GlobalNamespace::ColorPickerButtonController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clothesColorButtonControllerPrimary)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorPickerButtonController*& GlobalNamespace::EditAvatarViewController::__get__clothesColorButtonControllerSecondary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerSecondary;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& GlobalNamespace::EditAvatarViewController::__get__clothesColorButtonControllerSecondary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerSecondary;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__clothesColorButtonControllerSecondary(::GlobalNamespace::ColorPickerButtonController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clothesColorButtonControllerSecondary)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorPickerButtonController*& GlobalNamespace::EditAvatarViewController::__get__clothesColorButtonControllerDetail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerDetail;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorPickerButtonController*> const& GlobalNamespace::EditAvatarViewController::__get__clothesColorButtonControllerDetail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerDetail;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__clothesColorButtonControllerDetail(::GlobalNamespace::ColorPickerButtonController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clothesColorButtonControllerDetail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::EditAvatarViewController::__get__randomizeAllButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeAllButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::EditAvatarViewController::__get__randomizeAllButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeAllButton;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__randomizeAllButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomizeAllButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::EditAvatarViewController::__get__undoButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____undoButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::EditAvatarViewController::__get__undoButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____undoButton;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__undoButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____undoButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::EditAvatarViewController::__get__redoButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redoButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::EditAvatarViewController::__get__redoButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redoButton;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__redoButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____redoButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::EditAvatarViewController::__get__applyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::EditAvatarViewController::__get__applyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__applyButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____applyButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::EditAvatarViewController::__get__cancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::EditAvatarViewController::__get__cancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__cancelButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancelButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::EditAvatarViewController::__get__applyButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButtonText;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::EditAvatarViewController::__get__applyButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButtonText;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__applyButtonText(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____applyButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::EditAvatarViewController::__get__eyesPreviewImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesPreviewImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::EditAvatarViewController::__get__eyesPreviewImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesPreviewImage;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__eyesPreviewImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eyesPreviewImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AvatarPartsModel*& GlobalNamespace::EditAvatarViewController::__get__avatarPartsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartsModel*> const& GlobalNamespace::EditAvatarViewController::__get__avatarPartsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__avatarPartsModel(::GlobalNamespace::AvatarPartsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarPartsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AvatarDataModel*& GlobalNamespace::EditAvatarViewController::__get__avatarDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarDataModel*> const& GlobalNamespace::EditAvatarViewController::__get__avatarDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__avatarDataModel(::GlobalNamespace::AvatarDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::EditAvatarViewController::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::EditAvatarViewController::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*& GlobalNamespace::EditAvatarViewController::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*> const&
GlobalNamespace::EditAvatarViewController::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*&
GlobalNamespace::EditAvatarViewController::__get_didRequestColorChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestColorChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*> const&
GlobalNamespace::EditAvatarViewController::__get_didRequestColorChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestColorChangeEvent;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set_didRequestColorChangeEvent(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didRequestColorChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::EditAvatarViewController::__get_randomizeAllButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeAllButtonWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::EditAvatarViewController::__get_randomizeAllButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeAllButtonWasPressedEvent;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set_randomizeAllButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___randomizeAllButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*& GlobalNamespace::EditAvatarViewController::__get_didChangedAvatarPartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangedAvatarPartEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*> const&
GlobalNamespace::EditAvatarViewController::__get_didChangedAvatarPartEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangedAvatarPartEvent;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangedAvatarPartEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AvatarEditHistory*& GlobalNamespace::EditAvatarViewController::__get__avatarEditHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarEditHistory;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarEditHistory*> const& GlobalNamespace::EditAvatarViewController::__get__avatarEditHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarEditHistory;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__avatarEditHistory(::GlobalNamespace::AvatarEditHistory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarEditHistory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ValueChangedBinder_1<int32_t>*& GlobalNamespace::EditAvatarViewController::__get__intPickerBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intPickerBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ValueChangedBinder_1<int32_t>*> const& GlobalNamespace::EditAvatarViewController::__get__intPickerBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intPickerBinder;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__intPickerBinder(::HMUI::ValueChangedBinder_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intPickerBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart& GlobalNamespace::EditAvatarViewController::__get__lastEditedPart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEditedPart;
}
constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const& GlobalNamespace::EditAvatarViewController::__get__lastEditedPart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEditedPart;
}
constexpr void GlobalNamespace::EditAvatarViewController::__set__lastEditedPart(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastEditedPart = value;
}
inline void GlobalNamespace::EditAvatarViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarViewController::add_didRequestColorChangeEvent(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "add_didRequestColorChangeEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarViewController::remove_didRequestColorChangeEvent(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "remove_didRequestColorChangeEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarViewController::add_randomizeAllButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "add_randomizeAllButtonWasPressedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarViewController::remove_randomizeAllButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "remove_randomizeAllButtonWasPressedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarViewController::add_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "add_didChangedAvatarPartEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarViewController::remove_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "remove_didChangedAvatarPartEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarViewController::Setup(bool showAsCreateView) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showAsCreateView);
}
inline void GlobalNamespace::EditAvatarViewController::InitHistory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "InitHistory",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::DiscardLastEdit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "DiscardLastEdit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::EditAvatarViewController::RefreshUi() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "RefreshUi",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::UpdateButtons() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "UpdateButtons", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::HandleSkinColorDidChanged(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "HandleSkinColorDidChanged",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarViewController::EyesValuePickerHasChanged(::StringW eyesId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "EyesValuePickerHasChanged",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eyesId);
}
inline void GlobalNamespace::EditAvatarViewController::HandleUndoButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "HandleUndoButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::HandleRedoButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "HandleRedoButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::HandleRandomizeAllButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "HandleRandomizeAllButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::HandleRandomizeModelsButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "HandleRandomizeModelsButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::HandleRandomizeColorsButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "HandleRandomizeColorsButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::ReportAllChangedAndUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "ReportAllChangedAndUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::HandleApplyButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "HandleApplyButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::SaveAvatar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "SaveAvatar",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::HandleCancelButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "HandleCancelButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>
GlobalNamespace::EditAvatarViewController::CreateTextValuePairsForAvatarPartCollection(::GlobalNamespace::AvatarPartCollection_1<T>* partCollection) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                               "CreateTextValuePairsForAvatarPartCollection", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarPartCollection_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>, false>(
      nullptr, ___internal_method, partCollection);
}
inline ::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*, ::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*>
GlobalNamespace::EditAvatarViewController::CreateColorValuePairsForAvatarPartCollection(::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> colors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "CreateColorValuePairsForAvatarPartCollection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__NamedColorListController__ColorValuePair*, ::Array<::GlobalNamespace::__NamedColorListController__ColorValuePair*>*>, false>(
      this, ___internal_method, colors);
}
/// @param uvSegment: int32_t (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::EditAvatarViewController::SetupColorButton(::UnityEngine::UI::Button* button, ::System::Action_1<::UnityEngine::Color>* colorSetter,
                                                                        ::System::Func_1<::UnityEngine::Color>* currentColor,
                                                                        ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart, int32_t uvSegment) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "SetupColorButton", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Button*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::Color>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button, colorSetter, currentColor, avatarEditPart, uvSegment);
}
template <typename T>
inline void GlobalNamespace::EditAvatarViewController::SetupValuePicker(::GlobalNamespace::AvatarPartCollection_1<T>* partCollection, ::GlobalNamespace::NamedIntListController* valuePicker,
                                                                        ::System::Action_1<::StringW>* setIdAction, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "SetupValuePicker",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarPartCollection_1<T>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NamedIntListController*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, partCollection, valuePicker, setIdAction, avatarEditPart);
}
inline ::GlobalNamespace::EditAvatarViewController* GlobalNamespace::EditAvatarViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EditAvatarViewController*>());
}
inline void GlobalNamespace::EditAvatarViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_0(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::UnityEngine::Color GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "<DidActivate>b__44_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_2(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_2",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::UnityEngine::Color GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "<DidActivate>b__44_3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_4(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_4",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::UnityEngine::Color GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_5() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "<DidActivate>b__44_5", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_6(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_6",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::UnityEngine::Color GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_7() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "<DidActivate>b__44_7", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_8(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_8",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::UnityEngine::Color GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_9() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "<DidActivate>b__44_9", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_10(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_10",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::UnityEngine::Color GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_11() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(),
                                                                             "<DidActivate>b__44_11", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_12(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_12",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_13(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_13",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_14(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController*>::get(), "<DidActivate>b__44_14",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditAvatarViewController::EditAvatarViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
