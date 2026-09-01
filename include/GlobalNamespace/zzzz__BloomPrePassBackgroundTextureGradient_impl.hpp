#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassBackgroundTextureGradient.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient.get_tintColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundTextureGradient::get_tintColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5861888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "get_tintColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient.set_tintColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::BloomPrePassBackgroundTextureGradient::set_tintColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5861894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "set_tintColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient.InitIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundTextureGradient::InitIfNeeded)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x58618a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "InitIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundTextureGradient::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5861adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnDestroy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5861b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient.UpdatePixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, int32_t)>(
    &::GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdatePixels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnValidate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5861b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient.UpdateGradientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdateGradientTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5861ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "UpdateGradientTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*,
                                                                                                                          ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::BloomPrePassBackgroundTextureGradient::Render)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5861c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundTextureGradient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundTextureGradient::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x585fe0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::BloomPrePassBackgroundTextureGradient::__cordl_internal_get__tintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BloomPrePassBackgroundTextureGradient::__cordl_internal_get__tintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintColor;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundTextureGradient::__cordl_internal_set__tintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tintColor = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BloomPrePassBackgroundTextureGradient::__cordl_internal_get__texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BloomPrePassBackgroundTextureGradient::__cordl_internal_get__texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texture;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundTextureGradient::__cordl_internal_set__texture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____texture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BloomPrePassBackgroundTextureGradient::__cordl_internal_get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BloomPrePassBackgroundTextureGradient::__cordl_internal_get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundTextureGradient::__cordl_internal_set__material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____material = value;
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::setStaticF__gradientTexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_gradientTexID", ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassBackgroundTextureGradient::getStaticF__gradientTexID() {
  return ::cordl_internals::getStaticField<int32_t, "_gradientTexID", ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>();
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::setStaticF__inverseProjectionMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_inverseProjectionMatrixID", ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassBackgroundTextureGradient::getStaticF__inverseProjectionMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "_inverseProjectionMatrixID", ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>();
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::setStaticF__cameraToWorldMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cameraToWorldMatrixID", ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassBackgroundTextureGradient::getStaticF__cameraToWorldMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "_cameraToWorldMatrixID", ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>();
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::setStaticF__colorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorID", ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassBackgroundTextureGradient::getStaticF__colorID() {
  return ::cordl_internals::getStaticField<int32_t, "_colorID", ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>();
}
inline ::UnityEngine::Color GlobalNamespace::BloomPrePassBackgroundTextureGradient::get_tintColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "get_tintColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::set_tintColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "set_tintColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::InitIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "InitIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pixels, numberOfPixels);
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnValidate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdateGradientTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { "UpdateGradientTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* dest, ::UnityEngine::Matrix4x4 viewMatrix,
                                                                           ::UnityEngine::Matrix4x4 projectionMatrix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, dest, viewMatrix, projectionMatrix);
}
inline void GlobalNamespace::BloomPrePassBackgroundTextureGradient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* GlobalNamespace::BloomPrePassBackgroundTextureGradient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundTextureGradient::BloomPrePassBackgroundTextureGradient() {}
