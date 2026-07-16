#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Image.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Icon_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Image_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__WatchTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image.get_Texture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::get_Texture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a5a3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image.set_Texture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::*)(::UnityEngine::Texture2D*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::set_Texture)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a5a3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::*)(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::Setup)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a5a4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(),
                                                                                           { "Setup", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image.UpdateSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::UpdateSize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a5a460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), { "UpdateSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::Update)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a5a56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5a660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::__cordl_internal_get__watchTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____watchTexture;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::__cordl_internal_get__watchTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____watchTexture;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::__cordl_internal_set__watchTexture(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____watchTexture = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::__cordl_internal_get__defaultHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultHeight;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::__cordl_internal_get__defaultHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultHeight;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::__cordl_internal_set__defaultHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultHeight = value;
}
inline ::UnityW<::UnityEngine::Texture2D> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::get_Texture() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::set_Texture(::UnityEngine::Texture2D* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::Setup(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* watchTexture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(),
                                                                                         { "Setup", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, watchTexture);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::UpdateSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), { "UpdateSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Image::Image() {}
