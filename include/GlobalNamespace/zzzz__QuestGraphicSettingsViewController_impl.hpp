#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestGraphicSettingsViewController.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__QuestGraphicSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__PresetsSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__QuestGraphicSettingsViewController_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController___c::*)()>(&::GlobalNamespace::QuestGraphicSettingsViewController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1a4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController___c._ShouldShowStinsonEntries_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::QuestGraphicSettingsViewController___c::*)(float_t)>(
    &::GlobalNamespace::QuestGraphicSettingsViewController___c::_ShouldShowStinsonEntries_b__7_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1a4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController___c*>(), { "<ShouldShowStinsonEntries>b__7_0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuestGraphicSettingsViewController___c::setStaticF___9(::GlobalNamespace::QuestGraphicSettingsViewController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::QuestGraphicSettingsViewController___c*, "<>9", ::GlobalNamespace::QuestGraphicSettingsViewController___c*>(
      std::forward<::GlobalNamespace::QuestGraphicSettingsViewController___c*>(value));
}
inline ::GlobalNamespace::QuestGraphicSettingsViewController___c* GlobalNamespace::QuestGraphicSettingsViewController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::QuestGraphicSettingsViewController___c*, "<>9", ::GlobalNamespace::QuestGraphicSettingsViewController___c*>();
}
inline void GlobalNamespace::QuestGraphicSettingsViewController___c::setStaticF___9__7_0(::System::Func_2<float_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<float_t, bool>*, "<>9__7_0", ::GlobalNamespace::QuestGraphicSettingsViewController___c*>(std::forward<::System::Func_2<float_t, bool>*>(value));
}
inline ::System::Func_2<float_t, bool>* GlobalNamespace::QuestGraphicSettingsViewController___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<float_t, bool>*, "<>9__7_0", ::GlobalNamespace::QuestGraphicSettingsViewController___c*>();
}
inline void GlobalNamespace::QuestGraphicSettingsViewController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::QuestGraphicSettingsViewController___c::_ShouldShowStinsonEntries_b__7_0(float_t freq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController___c*>(), { "<ShouldShowStinsonEntries>b__7_0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, freq);
}
inline ::GlobalNamespace::QuestGraphicSettingsViewController___c* GlobalNamespace::QuestGraphicSettingsViewController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuestGraphicSettingsViewController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestGraphicSettingsViewController___c::QuestGraphicSettingsViewController___c() {}
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::QuestGraphicSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5a19f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)(bool, bool)>(
    &::GlobalNamespace::QuestGraphicSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5a1a2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController.HandleMirrorChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)(int32_t)>(
    &::GlobalNamespace::QuestGraphicSettingsViewController::HandleMirrorChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a1a414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), { "HandleMirrorChanged", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController.Handle120HzToggleValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)(bool)>(
    &::GlobalNamespace::QuestGraphicSettingsViewController::Handle120HzToggleValueChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a1a42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), { "Handle120HzToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController.ShouldShowStinsonEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::QuestGraphicSettingsViewController::ShouldShowStinsonEntries)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a1a140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), { "ShouldShowStinsonEntries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestGraphicSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestGraphicSettingsViewController::*)()>(&::GlobalNamespace::QuestGraphicSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1a46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), { ".ctor", {}, {} })));
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
  this->____mirror = value;
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
  this->____120HzMode = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_get__stinsonOnlyEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stinsonOnlyEntries;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_get__stinsonOnlyEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stinsonOnlyEntries;
}
constexpr void GlobalNamespace::QuestGraphicSettingsViewController::__cordl_internal_set__stinsonOnlyEntries(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stinsonOnlyEntries = value;
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::HandleMirrorChanged(int32_t newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), { "HandleMirrorChanged", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::Handle120HzToggleValueChanged(bool newState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), { "Handle120HzToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::QuestGraphicSettingsViewController::ShouldShowStinsonEntries() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), { "ShouldShowStinsonEntries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::QuestGraphicSettingsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestGraphicSettingsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuestGraphicSettingsViewController* GlobalNamespace::QuestGraphicSettingsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuestGraphicSettingsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestGraphicSettingsViewController::QuestGraphicSettingsViewController() {}
