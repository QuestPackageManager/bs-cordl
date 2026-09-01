#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\Switch.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithIcon_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Switch_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Tweak_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.get_Tweak
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::Tweak* (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::get_Tweak)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5e094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "get_Tweak", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.set_Tweak
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)(::Meta::XR::ImmersiveDebugger::Manager::Tweak*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::set_Tweak)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5e09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(),
                                                                                           { "set_Tweak", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.get_State
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::get_State)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a5e0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "get_State", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.set_State
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::set_State)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a5e150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "set_State", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.get_StateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<bool>* (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::get_StateChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5e1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "get_StateChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.set_StateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)(::System::Action_1<bool>*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::set_StateChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5e1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(),
                                                                                           { "set_StateChanged", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.OnStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::OnStateChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a5e18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "OnStateChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::Start)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a5e1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.SetToggleIcons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::SetToggleIcons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5e23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(),
                                                             { "SetToggleIcons", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch.UpdateIcon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::UpdateIcon)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5a5e244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5e3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_get__toggleIconOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleIconOn;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_get__toggleIconOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleIconOn;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_set__toggleIconOn(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleIconOn = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_get__toggleIconOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleIconOff;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_get__toggleIconOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleIconOff;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_set__toggleIconOff(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleIconOff = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Tweak*& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_get__Tweak_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tweak_k__BackingField;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Tweak* const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_get__Tweak_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tweak_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_set__Tweak_k__BackingField(::Meta::XR::ImmersiveDebugger::Manager::Tweak* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Tweak_k__BackingField = value;
}
constexpr ::System::Action_1<bool>*& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_get__StateChanged_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StateChanged_k__BackingField;
}
constexpr ::System::Action_1<bool>* const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_get__StateChanged_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StateChanged_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::__cordl_internal_set__StateChanged_k__BackingField(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StateChanged_k__BackingField = value;
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::get_Tweak() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "get_Tweak", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::set_Tweak(::Meta::XR::ImmersiveDebugger::Manager::Tweak* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(),
                                                                                         { "set_Tweak", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::get_State() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "get_State", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::set_State(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "set_State", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<bool>* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::get_StateChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "get_StateChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<bool>*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::set_StateChanged(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(),
                                                                                         { "set_StateChanged", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::OnStateChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "OnStateChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::SetToggleIcons(::UnityEngine::Texture2D* onState, ::UnityEngine::Texture2D* offState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(),
                                                           { "SetToggleIcons", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onState, offState);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::UpdateIcon() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch::Switch() {}
