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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::*)()>(
    &::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595be74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>(), { ".ctor", {}, {} })));
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
  this->___missionHelp = value;
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
  this->___gameObject = value;
}
inline void GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair* GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair::MissionHelpViewController_MissionHelpGameObjectPair() {}
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*)>(
    &::GlobalNamespace::MissionHelpViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595bb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(),
                                                             { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*)>(
    &::GlobalNamespace::MissionHelpViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595bbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(),
                                                             { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(::GlobalNamespace::MissionHelpSO*)>(
    &::GlobalNamespace::MissionHelpViewController::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x595bc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::MissionHelpSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(bool, bool, bool)>(&::GlobalNamespace::MissionHelpViewController::DidActivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x595bda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), { ::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.RefreshContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)()>(&::GlobalNamespace::MissionHelpViewController::RefreshContent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x595bcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), { "RefreshContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.OkButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)()>(&::GlobalNamespace::MissionHelpViewController::OkButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x595be50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), { "OkButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)()>(&::GlobalNamespace::MissionHelpViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595be70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), { ".ctor", {}, {} })));
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
  this->____okButton = value;
}
constexpr ::ArrayW<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*>& GlobalNamespace::MissionHelpViewController::__cordl_internal_get__missionHelpGameObjectPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelpGameObjectPairs;
}
constexpr ::ArrayW<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*> const&
GlobalNamespace::MissionHelpViewController::__cordl_internal_get__missionHelpGameObjectPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelpGameObjectPairs;
}
constexpr void GlobalNamespace::MissionHelpViewController::__cordl_internal_set__missionHelpGameObjectPairs(::ArrayW<::GlobalNamespace::MissionHelpViewController_MissionHelpGameObjectPair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionHelpGameObjectPairs = value;
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
  this->___didFinishEvent = value;
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
  this->____missionHelp = value;
}
inline void GlobalNamespace::MissionHelpViewController::add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionHelpViewController::remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(),
                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionHelpViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionHelpViewController::Setup(::GlobalNamespace::MissionHelpSO* missionHelp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::MissionHelpSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionHelp);
}
inline void GlobalNamespace::MissionHelpViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionHelpViewController::RefreshContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), { "RefreshContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionHelpViewController::OkButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), { "OkButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionHelpViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionHelpViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionHelpViewController* GlobalNamespace::MissionHelpViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionHelpViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionHelpViewController::MissionHelpViewController() {}
