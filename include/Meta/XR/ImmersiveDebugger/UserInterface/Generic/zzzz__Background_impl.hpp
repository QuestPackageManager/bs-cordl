#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\Background.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Background_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background.set_Sprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::*)(::UnityEngine::Sprite*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::set_Sprite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a594a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { "set_Sprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background.set_Color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::*)(::UnityEngine::Color)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::set_Color)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a594b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { "set_Color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background.set_PixelDensityMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::*)(float_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::set_PixelDensityMultiplier)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a594d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { "set_PixelDensityMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background.set_RaycastTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::set_RaycastTarget)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a5950c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { "set_RaycastTarget", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::Setup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a59530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a595d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::__cordl_internal_get__image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::__cordl_internal_get__image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____image;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::__cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____image = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::set_Sprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { "set_Sprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::set_Color(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { "set_Color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::set_PixelDensityMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { "set_PixelDensityMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::set_RaycastTarget(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { "set_RaycastTarget", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background::Background() {}
