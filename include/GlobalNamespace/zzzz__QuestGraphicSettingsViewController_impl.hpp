#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestGraphicSettingsViewController.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_impl.hpp"
#include "GlobalNamespace/zzzz__QuestGraphicSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__PresetsSettingsController_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::QuestGraphicSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x3af985c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)(bool, bool)>(
    &::GlobalNamespace::QuestGraphicSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3af9aa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController.HandleMirrorChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)(int32_t)>(
    &::GlobalNamespace::QuestGraphicSettingsViewController::HandleMirrorChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3af9bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(), "HandleMirrorChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController.Handle120HzToggleValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)(bool)>(
    &::GlobalNamespace::QuestGraphicSettingsViewController::Handle120HzToggleValueChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3af9bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(), "Handle120HzToggleValueChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)()>(
    &::GlobalNamespace::QuestGraphicSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3af9c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController>& GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_get__mirror() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirror;
}
constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController> const& GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_get__mirror() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirror;
}
constexpr void GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_set__mirror(::UnityW<::GlobalNamespace::PresetsSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirror)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_get__120HzMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____120HzMode;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_get__120HzMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____120HzMode;
}
constexpr void GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_set__120HzMode(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____120HzMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>&
GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_get__stinsonOnlyEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stinsonOnlyEntries;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_get__stinsonOnlyEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stinsonOnlyEntries;
}
constexpr void
GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_set__stinsonOnlyEntries(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stinsonOnlyEntries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::HandleMirrorChanged(int32_t newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(), "HandleMirrorChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::Handle120HzToggleValueChanged(bool newState) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(), "Handle120HzToggleValueChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newState);
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestGraphicSettingsViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::QuestGraphicSettingsViewController* GlobalNamespace::QuestGraphicSettingsViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuestGraphicSettingsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestGraphicSettingsViewController::QuestGraphicSettingsViewController() {}
