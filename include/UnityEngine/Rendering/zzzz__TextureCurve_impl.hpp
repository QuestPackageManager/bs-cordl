#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureCurve.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureCurve_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::TextureCurve::*)()>(&::UnityEngine::Rendering::TextureCurve::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c292c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "get_length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.set_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurve::*)(int32_t)>(&::UnityEngine::Rendering::TextureCurve::set_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c2934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "set_length", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (::UnityEngine::Rendering::TextureCurve::*)(int32_t)>(&::UnityEngine::Rendering::TextureCurve::get_Item)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67c293c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurve::*)(::UnityEngine::AnimationCurve*, float_t, bool, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::Rendering::TextureCurve::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x67c2978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurve::*)(::ArrayW<::UnityEngine::Keyframe>, float_t, bool, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::Rendering::TextureCurve::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67c29c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(),
            { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurve::*)()>(&::UnityEngine::Rendering::TextureCurve::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c2ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurve::*)()>(&::UnityEngine::Rendering::TextureCurve::Release)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67c2acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurve::*)()>(&::UnityEngine::Rendering::TextureCurve::SetDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67c2b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "SetDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.GetTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(&::UnityEngine::Rendering::TextureCurve::GetTextureFormat)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67c2b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "GetTextureFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.GetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Rendering::TextureCurve::*)()>(&::UnityEngine::Rendering::TextureCurve::GetTexture)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x67c2c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "GetTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::TextureCurve::*)(float_t)>(&::UnityEngine::Rendering::TextureCurve::Evaluate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x67c2df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.AddKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::TextureCurve::*)(float_t, float_t)>(&::UnityEngine::Rendering::TextureCurve::AddKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67c2fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "AddKey", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.MoveKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::TextureCurve::*)(int32_t, ::by_ref<::UnityEngine::Keyframe>)>(
    &::UnityEngine::Rendering::TextureCurve::MoveKey)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67c301c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(),
                                                                                           { "MoveKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.RemoveKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurve::*)(int32_t)>(&::UnityEngine::Rendering::TextureCurve::RemoveKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67c3064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "RemoveKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurve.SmoothTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurve::*)(int32_t, float_t)>(&::UnityEngine::Rendering::TextureCurve::SmoothTangents)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67c3090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "SmoothTangents", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::TextureCurve::__cordl_internal_get__length_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::TextureCurve::__cordl_internal_get__length_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length_k__BackingField;
}
constexpr void UnityEngine::Rendering::TextureCurve::__cordl_internal_set__length_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_Loop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Loop;
}
constexpr bool const& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_Loop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Loop;
}
constexpr void UnityEngine::Rendering::TextureCurve::__cordl_internal_set_m_Loop(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Loop = value;
}
constexpr float_t& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_ZeroValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZeroValue;
}
constexpr float_t const& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_ZeroValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZeroValue;
}
constexpr void UnityEngine::Rendering::TextureCurve::__cordl_internal_set_m_ZeroValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZeroValue = value;
}
constexpr float_t& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_Range() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Range;
}
constexpr float_t const& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_Range() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Range;
}
constexpr void UnityEngine::Rendering::TextureCurve::__cordl_internal_set_m_Range(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Range = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_Curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Curve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_Curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Curve;
}
constexpr void UnityEngine::Rendering::TextureCurve::__cordl_internal_set_m_Curve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Curve = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_LoopingCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoopingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_LoopingCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoopingCurve;
}
constexpr void UnityEngine::Rendering::TextureCurve::__cordl_internal_set_m_LoopingCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoopingCurve = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_Texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_Texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
constexpr void UnityEngine::Rendering::TextureCurve::__cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Texture = value;
}
constexpr bool& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_IsCurveDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCurveDirty;
}
constexpr bool const& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_IsCurveDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCurveDirty;
}
constexpr void UnityEngine::Rendering::TextureCurve::__cordl_internal_set_m_IsCurveDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsCurveDirty = value;
}
constexpr bool& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_IsTextureDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTextureDirty;
}
constexpr bool const& UnityEngine::Rendering::TextureCurve::__cordl_internal_get_m_IsTextureDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTextureDirty;
}
constexpr void UnityEngine::Rendering::TextureCurve::__cordl_internal_set_m_IsTextureDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsTextureDirty = value;
}
inline int32_t UnityEngine::Rendering::TextureCurve::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::TextureCurve::set_length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "set_length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Keyframe UnityEngine::Rendering::TextureCurve::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(this, ___internal_method, index);
}
inline void UnityEngine::Rendering::TextureCurve::_ctor(::UnityEngine::AnimationCurve* baseCurve, float_t zeroValue, bool loop, ::by_ref<::UnityEngine::Vector2> bounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(),
                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseCurve, zeroValue, loop, bounds);
}
inline void UnityEngine::Rendering::TextureCurve::_ctor(::ArrayW<::UnityEngine::Keyframe> keys, float_t zeroValue, bool loop, ::by_ref<::UnityEngine::Vector2> bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(),
          { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys, zeroValue, loop, bounds);
}
inline void UnityEngine::Rendering::TextureCurve::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::TextureCurve::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::TextureCurve::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "SetDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::TextureCurve::GetTextureFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "GetTextureFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::TextureCurve::GetTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "GetTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::TextureCurve::Evaluate(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, time);
}
inline int32_t UnityEngine::Rendering::TextureCurve::AddKey(float_t time, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "AddKey", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time, value);
}
inline int32_t UnityEngine::Rendering::TextureCurve::MoveKey(int32_t index, ::by_ref<::UnityEngine::Keyframe> key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(),
                                                                                         { "MoveKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, key);
}
inline void UnityEngine::Rendering::TextureCurve::RemoveKey(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "RemoveKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::Rendering::TextureCurve::SmoothTangents(int32_t index, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurve*>(), { "SmoothTangents", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, weight);
}
inline ::UnityEngine::Rendering::TextureCurve* UnityEngine::Rendering::TextureCurve::New_ctor(::UnityEngine::AnimationCurve* baseCurve, float_t zeroValue, bool loop,
                                                                                              ::by_ref<::UnityEngine::Vector2> bounds) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::TextureCurve*>(baseCurve, zeroValue, loop, bounds));
}
inline ::UnityEngine::Rendering::TextureCurve* UnityEngine::Rendering::TextureCurve::New_ctor(::ArrayW<::UnityEngine::Keyframe> keys, float_t zeroValue, bool loop,
                                                                                              ::by_ref<::UnityEngine::Vector2> bounds) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::TextureCurve*>(keys, zeroValue, loop, bounds));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::TextureCurve::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::TextureCurve::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TextureCurve::TextureCurve() {}
