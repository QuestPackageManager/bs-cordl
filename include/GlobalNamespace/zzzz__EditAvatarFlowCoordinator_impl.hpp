#pragma once
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinator_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__AvatarVisualController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__AvatarTweenController_def.hpp"
#include "GlobalNamespace/zzzz__AvatarDataModel_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__EditColorController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType::__EditAvatarFlowCoordinator__EditAvatarType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType::__EditAvatarFlowCoordinator__EditAvatarType() {}
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType::Create{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType::Edit{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(
    ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*)>(
    &::GlobalNamespace::EditAvatarFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21444d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(
    ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*)>(
    &::GlobalNamespace::EditAvatarFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2144588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.add_wasSetupEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*)>(&::GlobalNamespace::EditAvatarFlowCoordinator::add_wasSetupEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2144638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "add_wasSetupEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.remove_wasSetupEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*)>(&::GlobalNamespace::EditAvatarFlowCoordinator::remove_wasSetupEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21446e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "remove_wasSetupEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType)>(&::GlobalNamespace::EditAvatarFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2144798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::EditAvatarFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x21447e8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::EditAvatarFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2144c8c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.HandleEditAvatarViewControllerDidRequestColorChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(
    ::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, int32_t)>(
    &::GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidRequestColorChange)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2144eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditAvatarViewControllerDidRequestColorChange",
                                    std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.HandleEditAvatarViewControllerChangedAvatarPart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(
    ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart)>(&::GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerChangedAvatarPart)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2144f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditAvatarViewControllerChangedAvatarPart", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.HandleEditAvatarViewControllerDidFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(::GlobalNamespace::__EditAvatarViewController__FinishAction)>(
    &::GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidFinished)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2144fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditAvatarViewControllerDidFinished", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.HandleEditColorViewControllerDidChangedColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidChangedColor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2144fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditColorViewControllerDidChangedColor",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator.HandleEditColorViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2145014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditColorViewControllerDidFinish",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinator::*)()>(&::GlobalNamespace::EditAvatarFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214507c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AvatarVisualController*& GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarVisualController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarVisualController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarVisualController*> const& GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarVisualController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarVisualController;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__avatarVisualController(::GlobalNamespace::AvatarVisualController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarVisualController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AvatarTweenController*& GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarTweenController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTweenController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarTweenController*> const& GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarTweenController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTweenController;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__avatarTweenController(::GlobalNamespace::AvatarTweenController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarTweenController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarContainerGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarContainerGameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarContainerGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarContainerGameObject;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__avatarContainerGameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarContainerGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EditAvatarViewController*& GlobalNamespace::EditAvatarFlowCoordinator::__get__editAvatarViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarViewController*> const& GlobalNamespace::EditAvatarFlowCoordinator::__get__editAvatarViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarViewController;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__editAvatarViewController(::GlobalNamespace::EditAvatarViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____editAvatarViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EditColorController*& GlobalNamespace::EditAvatarFlowCoordinator::__get__editColorViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editColorViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditColorController*> const& GlobalNamespace::EditAvatarFlowCoordinator::__get__editColorViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editColorViewController;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__editColorViewController(::GlobalNamespace::EditColorController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____editColorViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AvatarDataModel*& GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarDataModel*> const& GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__avatarDataModel(::GlobalNamespace::AvatarDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::System::Action*>*&
GlobalNamespace::EditAvatarFlowCoordinator::__get__parameterChangedAnimationCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterChangedAnimationCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::System::Action*>*> const&
GlobalNamespace::EditAvatarFlowCoordinator::__get__parameterChangedAnimationCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterChangedAnimationCallbacks;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__parameterChangedAnimationCallbacks(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parameterChangedAnimationCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType& GlobalNamespace::EditAvatarFlowCoordinator::__get__editAvatarType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarType;
}
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType const& GlobalNamespace::EditAvatarFlowCoordinator::__get__editAvatarType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarType;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__editAvatarType(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editAvatarType = value;
}
constexpr ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*&
GlobalNamespace::EditAvatarFlowCoordinator::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*> const&
GlobalNamespace::EditAvatarFlowCoordinator::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*& GlobalNamespace::EditAvatarFlowCoordinator::__get_wasSetupEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasSetupEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*> const&
GlobalNamespace::EditAvatarFlowCoordinator::__get_wasSetupEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasSetupEvent;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set_wasSetupEvent(::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wasSetupEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::add_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::remove_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::add_wasSetupEvent(::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "add_wasSetupEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::remove_wasSetupEvent(::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "remove_wasSetupEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::Setup(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType editAvatarType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, editAvatarType);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "DidDeactivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidRequestColorChange(::System::Action_1<::UnityEngine::Color>* colorCallback, ::UnityEngine::Color currentColor,
                                                                                                            ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart editPart, int32_t uvSegment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditAvatarViewControllerDidRequestColorChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorCallback, currentColor, editPart, uvSegment);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerChangedAvatarPart(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarPart) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditAvatarViewControllerChangedAvatarPart", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarPart);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidFinished(::GlobalNamespace::__EditAvatarViewController__FinishAction _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditAvatarViewControllerDidFinished", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarViewController__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidChangedColor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditColorViewControllerDidChangedColor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidFinish(bool apply) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), "HandleEditColorViewControllerDidFinish",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, apply);
}
inline ::GlobalNamespace::EditAvatarFlowCoordinator* GlobalNamespace::EditAvatarFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EditAvatarFlowCoordinator*>());
}
inline void GlobalNamespace::EditAvatarFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
