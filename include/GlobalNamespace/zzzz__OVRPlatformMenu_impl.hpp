#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlatformMenu.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlatformMenu_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlatformMenu_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler::OVRPlatformMenu_eHandler(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler::OVRPlatformMenu_eHandler() {}
constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler GlobalNamespace::OVRPlatformMenu_eHandler::ShowConfirmQuit{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler GlobalNamespace::OVRPlatformMenu_eHandler::RetreatOneLevel{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction::OVRPlatformMenu_eBackButtonAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction::OVRPlatformMenu_eBackButtonAction() {}
constexpr ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction GlobalNamespace::OVRPlatformMenu_eBackButtonAction::NONE{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction GlobalNamespace::OVRPlatformMenu_eBackButtonAction::SHORT_PRESS{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.HandleBackButtonState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlatformMenu_eBackButtonAction (::GlobalNamespace::OVRPlatformMenu::*)()>(
    &::GlobalNamespace::OVRPlatformMenu::HandleBackButtonState)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cf3c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                                                                               "HandleBackButtonState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPlatformMenu::*)()>(&::GlobalNamespace::OVRPlatformMenu::Awake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5cf3cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.ShowConfirmQuitMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPlatformMenu::*)()>(&::GlobalNamespace::OVRPlatformMenu::ShowConfirmQuitMenu)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5cf3e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                                                                               "ShowConfirmQuitMenu", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.RetreatOneLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRPlatformMenu::RetreatOneLevel)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cf3f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(), "RetreatOneLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPlatformMenu::*)()>(&::GlobalNamespace::OVRPlatformMenu::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cf4030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPlatformMenu::*)()>(&::GlobalNamespace::OVRPlatformMenu::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cf406c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRPlatformMenu::__cordl_internal_get_inputCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputCode;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRPlatformMenu::__cordl_internal_get_inputCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputCode;
}
constexpr void GlobalNamespace::OVRPlatformMenu::__cordl_internal_set_inputCode(::GlobalNamespace::OVRInput_RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputCode = value;
}
constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler& GlobalNamespace::OVRPlatformMenu::__cordl_internal_get_shortPressHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortPressHandler;
}
constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler const& GlobalNamespace::OVRPlatformMenu::__cordl_internal_get_shortPressHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortPressHandler;
}
constexpr void GlobalNamespace::OVRPlatformMenu::__cordl_internal_set_shortPressHandler(::GlobalNamespace::OVRPlatformMenu_eHandler value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shortPressHandler = value;
}
constexpr ::System::Func_1<bool>*& GlobalNamespace::OVRPlatformMenu::__cordl_internal_get_OnShortPress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnShortPress;
}
constexpr ::System::Func_1<bool>* const& GlobalNamespace::OVRPlatformMenu::__cordl_internal_get_OnShortPress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnShortPress;
}
constexpr void GlobalNamespace::OVRPlatformMenu::__cordl_internal_set_OnShortPress(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnShortPress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRPlatformMenu::setStaticF_sceneStack(::System::Collections::Generic::Stack_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<::StringW>*, "sceneStack",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get>(
      std::forward<::System::Collections::Generic::Stack_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::Stack_1<::StringW>* GlobalNamespace::OVRPlatformMenu::getStaticF_sceneStack() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<::StringW>*, "sceneStack",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get>();
}
inline ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction GlobalNamespace::OVRPlatformMenu::HandleBackButtonState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                                                                             "HandleBackButtonState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlatformMenu_eBackButtonAction, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlatformMenu::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlatformMenu::ShowConfirmQuitMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(), "ShowConfirmQuitMenu",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRPlatformMenu::RetreatOneLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(), "RetreatOneLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRPlatformMenu::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlatformMenu::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlatformMenu* GlobalNamespace::OVRPlatformMenu::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPlatformMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlatformMenu::OVRPlatformMenu() {}
