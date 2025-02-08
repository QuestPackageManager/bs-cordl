#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionHelpViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionHelpViewController_def.hpp"
#include "GlobalNamespace/zzzz__MissionHelpSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionHelpViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::*)()>(
    &::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c217c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionHelpSO>& GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::__cordl_internal_get_missionHelp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionHelp;
}
constexpr ::UnityW<::GlobalNamespace::MissionHelpSO> const& GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::__cordl_internal_get_missionHelp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionHelp;
}
constexpr void GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::__cordl_internal_set_missionHelp(::UnityW<::GlobalNamespace::MissionHelpSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionHelp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair* GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::MissionHelpViewController_MissionHelpGameObjectPair() {}
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*)>(&::GlobalNamespace::MissionHelpViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c21494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*)>(&::GlobalNamespace::MissionHelpViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c21544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(::GlobalNamespace::MissionHelpSO*)>(
    &::GlobalNamespace::MissionHelpViewController::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3c215f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MissionHelpViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3c216f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.RefreshContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)()>(
    &::GlobalNamespace::MissionHelpViewController::RefreshContent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3c21620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                                                                               "RefreshContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.OkButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)()>(
    &::GlobalNamespace::MissionHelpViewController::OkButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c21798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                                                                               "OkButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)()>(&::GlobalNamespace::MissionHelpViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c217b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MissionHelpViewController::__cordl_internal_get__okButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MissionHelpViewController::__cordl_internal_get__okButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr void GlobalNamespace::MissionHelpViewController::__cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____okButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>*>&
GlobalNamespace::MissionHelpViewController::__cordl_internal_get__missionHelpGameObjectPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelpGameObjectPairs;
}
constexpr ::ArrayW<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>*> const&
GlobalNamespace::MissionHelpViewController::__cordl_internal_get__missionHelpGameObjectPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelpGameObjectPairs;
}
constexpr void GlobalNamespace::MissionHelpViewController::__cordl_internal_set__missionHelpGameObjectPairs(
    ::ArrayW<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*, ::Array<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionHelpGameObjectPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*& GlobalNamespace::MissionHelpViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* const& GlobalNamespace::MissionHelpViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::MissionHelpViewController::__cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionHelpSO>& GlobalNamespace::MissionHelpViewController::__cordl_internal_get__missionHelp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelp;
}
constexpr ::UnityW<::GlobalNamespace::MissionHelpSO> const& GlobalNamespace::MissionHelpViewController::__cordl_internal_get__missionHelp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelp;
}
constexpr void GlobalNamespace::MissionHelpViewController::__cordl_internal_set__missionHelp(::UnityW<::GlobalNamespace::MissionHelpSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionHelp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionHelpViewController::add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionHelpViewController::remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionHelpViewController::Setup(::GlobalNamespace::MissionHelpSO* missionHelp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionHelp);
}
inline void GlobalNamespace::MissionHelpViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionHelpViewController::RefreshContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                                                                             "RefreshContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionHelpViewController::OkButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                                                                             "OkButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionHelpViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionHelpViewController* GlobalNamespace::MissionHelpViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionHelpViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionHelpViewController::MissionHelpViewController() {}
