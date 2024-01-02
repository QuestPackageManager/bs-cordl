#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SoloModeSelectionViewController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__SoloModeSelectionViewController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType::__SoloModeSelectionViewController__MenuType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType::__SoloModeSelectionViewController__MenuType() {}
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType GlobalNamespace::__SoloModeSelectionViewController__MenuType::FreePlayMode{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType GlobalNamespace::__SoloModeSelectionViewController__MenuType::NoArrowsMode{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType GlobalNamespace::__SoloModeSelectionViewController__MenuType::OneSaberMode{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType GlobalNamespace::__SoloModeSelectionViewController__MenuType::Back{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(
    ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*)>(
    &::GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22dbc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(
    ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*)>(
    &::GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22dbce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::SoloModeSelectionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22dbd98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.HandleMenuButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(
    ::GlobalNamespace::__SoloModeSelectionViewController__MenuType)>(&::GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22dbf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(), "HandleMenuButton", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SoloModeSelectionViewController__MenuType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(
    &::GlobalNamespace::SoloModeSelectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dbf70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(
    &::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22dbf78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                               "<DidActivate>b__8_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(
    &::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22dbf9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                               "<DidActivate>b__8_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(
    &::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22dbfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                               "<DidActivate>b__8_2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(
    &::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22dbfe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                               "<DidActivate>b__8_3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::SoloModeSelectionViewController::__get__freePlayModeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freePlayModeButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::SoloModeSelectionViewController::__get__freePlayModeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freePlayModeButton;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set__freePlayModeButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____freePlayModeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::SoloModeSelectionViewController::__get__oneSaberModeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oneSaberModeButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::SoloModeSelectionViewController::__get__oneSaberModeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oneSaberModeButton;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set__oneSaberModeButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oneSaberModeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::SoloModeSelectionViewController::__get__noArrowsModeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrowsModeButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::SoloModeSelectionViewController::__get__noArrowsModeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrowsModeButton;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set__noArrowsModeButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noArrowsModeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::SoloModeSelectionViewController::__get__dismissButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dismissButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::SoloModeSelectionViewController::__get__dismissButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dismissButton;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set__dismissButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dismissButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*&
GlobalNamespace::SoloModeSelectionViewController::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*> const&
GlobalNamespace::SoloModeSelectionViewController::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*, ::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SoloModeSelectionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton(::GlobalNamespace::__SoloModeSelectionViewController__MenuType subMenuType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(), "HandleMenuButton", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SoloModeSelectionViewController__MenuType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subMenuType);
}
inline ::GlobalNamespace::SoloModeSelectionViewController* GlobalNamespace::SoloModeSelectionViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SoloModeSelectionViewController*>());
}
inline void GlobalNamespace::SoloModeSelectionViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                             "<DidActivate>b__8_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                             "<DidActivate>b__8_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                             "<DidActivate>b__8_2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                                                             "<DidActivate>b__8_3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoloModeSelectionViewController::SoloModeSelectionViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
