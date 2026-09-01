#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DebugOverlay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugOverlay_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay.get_x
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugOverlay::*)()>(&::UnityEngine::Rendering::DebugOverlay::get_x)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6767a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "get_x", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay.set_x
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugOverlay::*)(int32_t)>(&::UnityEngine::Rendering::DebugOverlay::set_x)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6767a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "set_x", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay.get_y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugOverlay::*)()>(&::UnityEngine::Rendering::DebugOverlay::get_y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6767a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "get_y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay.set_y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugOverlay::*)(int32_t)>(&::UnityEngine::Rendering::DebugOverlay::set_y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6767a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "set_y", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay.get_overlaySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugOverlay::*)()>(&::UnityEngine::Rendering::DebugOverlay::get_overlaySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6767a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "get_overlaySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay.set_overlaySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugOverlay::*)(int32_t)>(&::UnityEngine::Rendering::DebugOverlay::set_overlaySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6767a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "set_overlaySize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay.StartOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugOverlay::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::DebugOverlay::StartOverlay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6767a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(),
                                                             { "StartOverlay", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Rendering::DebugOverlay::*)(float_t)>(&::UnityEngine::Rendering::DebugOverlay::Next)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6767a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "Next", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay.SetViewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugOverlay::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::DebugOverlay::SetViewport)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6767aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "SetViewport", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugOverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugOverlay::*)()>(&::UnityEngine::Rendering::DebugOverlay::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6767b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get__x_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get__x_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugOverlay::__cordl_internal_set__x_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____x_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get__y_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____y_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get__y_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____y_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugOverlay::__cordl_internal_set__y_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____y_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get__overlaySize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overlaySize_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get__overlaySize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overlaySize_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugOverlay::__cordl_internal_set__overlaySize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overlaySize_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get_m_InitialPositionX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialPositionX;
}
constexpr int32_t const& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get_m_InitialPositionX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialPositionX;
}
constexpr void UnityEngine::Rendering::DebugOverlay::__cordl_internal_set_m_InitialPositionX(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitialPositionX = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get_m_ScreenWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenWidth;
}
constexpr int32_t const& UnityEngine::Rendering::DebugOverlay::__cordl_internal_get_m_ScreenWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenWidth;
}
constexpr void UnityEngine::Rendering::DebugOverlay::__cordl_internal_set_m_ScreenWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenWidth = value;
}
inline int32_t UnityEngine::Rendering::DebugOverlay::get_x() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "get_x", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugOverlay::set_x(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "set_x", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::DebugOverlay::get_y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "get_y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugOverlay::set_y(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "set_y", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::DebugOverlay::get_overlaySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "get_overlaySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugOverlay::set_overlaySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "set_overlaySize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugOverlay::StartOverlay(int32_t initialX, int32_t initialY, int32_t overlaySize, int32_t screenWidth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(),
                                                           { "StartOverlay", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialX, initialY, overlaySize, screenWidth);
}
inline ::UnityEngine::Rect UnityEngine::Rendering::DebugOverlay::Next(float_t aspect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "Next", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, aspect);
}
inline void UnityEngine::Rendering::DebugOverlay::SetViewport(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { "SetViewport", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::DebugOverlay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugOverlay*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugOverlay* UnityEngine::Rendering::DebugOverlay::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugOverlay*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugOverlay::DebugOverlay() {}
