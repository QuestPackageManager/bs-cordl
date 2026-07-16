#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Interface.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Interface_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Cursor_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ProxyCameraRig_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ProxyInputModule_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.get_Cursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor> (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::get_Cursor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5cb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { "get_Cursor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.set_Cursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::set_Cursor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5cb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                             { "set_Cursor", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.get_Camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::get_Camera)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a5b11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { "get_Camera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.get_FollowOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::get_FollowOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5cb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.set_FollowOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::set_FollowOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5cb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.get_RotateOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::get_RotateOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5cb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.set_RotateOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::set_RotateOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5cb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5a5cb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.UpdateTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::UpdateTransform)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5a5ccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { "UpdateTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.UpdateCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::UpdateCulling)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a5ce18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { "UpdateCulling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, bool)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::SetBits)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a5ceec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                             { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::LateUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a5cf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface.RefreshLayoutPreChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::RefreshLayoutPreChildren)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a5cf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5cf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__proxyInputModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyInputModule;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule* const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__proxyInputModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyInputModule;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_set__proxyInputModule(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____proxyInputModule = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__proxyCameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyCameraRig;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig* const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__proxyCameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyCameraRig;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_set__proxyCameraRig(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____proxyCameraRig = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__Cursor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cursor_k__BackingField;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__Cursor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cursor_k__BackingField;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_set__Cursor_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Cursor_k__BackingField = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__FollowOverride_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FollowOverride_k__BackingField;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__FollowOverride_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FollowOverride_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_set__FollowOverride_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FollowOverride_k__BackingField = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__RotateOverride_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RotateOverride_k__BackingField;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__RotateOverride_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RotateOverride_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_set__RotateOverride_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RotateOverride_k__BackingField = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__positionHasBeenInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionHasBeenInitialized;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_get__positionHasBeenInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionHasBeenInitialized;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::__cordl_internal_set__positionHasBeenInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionHasBeenInitialized = value;
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::get_Cursor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { "get_Cursor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::set_Cursor(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                                                         { "set_Cursor", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::get_Camera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { "get_Camera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::get_FollowOverride() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::set_FollowOverride(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::get_RotateOverride() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::set_RotateOverride(bool value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::Awake() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::UpdateTransform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { "UpdateTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::UpdateCulling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { "UpdateCulling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::SetBits(int32_t cullingMask, int32_t bitPosition1, int32_t bitPosition2, bool state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(),
                                                           { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cullingMask, bitPosition1, bitPosition2, state);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::LateUpdate() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::RefreshLayoutPreChildren() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface::Interface() {}
