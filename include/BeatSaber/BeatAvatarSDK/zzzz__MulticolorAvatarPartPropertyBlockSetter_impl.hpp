#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarSDK\MulticolorAvatarPartPropertyBlockSetter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__MulticolorAvatarPartPropertyBlockSetter_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__MulticolorAvatarPartPropertyBlockSetter_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData.get_defaultColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::*)()>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::get_defaultColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x327e6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>(), { "get_defaultColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData.get_darkerColorMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::*)()>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::get_darkerColorMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327e6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>(), { "get_darkerColorMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData.get_whiteBoost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::*)()>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::get_whiteBoost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327e6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>(), { "get_whiteBoost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::*)()>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x327e6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::__cordl_internal_get__defaultColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColor;
}
constexpr ::UnityEngine::Color const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::__cordl_internal_get__defaultColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColor;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::__cordl_internal_set__defaultColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultColor = value;
}
constexpr float_t& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::__cordl_internal_get__darkerColorMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkerColorMultiplier;
}
constexpr float_t const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::__cordl_internal_get__darkerColorMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkerColorMultiplier;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::__cordl_internal_set__darkerColorMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____darkerColorMultiplier = value;
}
constexpr float_t& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::__cordl_internal_get__whiteBoost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteBoost;
}
constexpr float_t const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::__cordl_internal_get__whiteBoost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteBoost;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::__cordl_internal_set__whiteBoost(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____whiteBoost = value;
}
inline ::UnityEngine::Color BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::get_defaultColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>(), { "get_defaultColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline float_t BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::get_darkerColorMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>(), { "get_darkerColorMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::get_whiteBoost() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>(), { "get_whiteBoost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData* BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData::MulticolorAvatarPartPropertyBlockSetter_ColorData() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::*)()>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x327e728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c._OnValidate_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::*)(
    ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*)>(&::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::_OnValidate_b__10_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x327e72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>(),
                                                             { "<OnValidate>b__10_0", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::setStaticF___9(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*, "<>9", ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>(
      std::forward<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>(value));
}
inline ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c* BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*, "<>9", ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>();
}
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::setStaticF___9__10_0(
    ::System::Func_2<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::UnityEngine::Color>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::UnityEngine::Color>*, "<>9__10_0",
                                    ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>(
      std::forward<::System::Func_2<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::UnityEngine::Color>*>(value));
}
inline ::System::Func_2<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::UnityEngine::Color>*
BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::UnityEngine::Color>*, "<>9__10_0",
                                           ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>();
}
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color
BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::_OnValidate_b__10_0(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>(),
                                                           { "<OnValidate>b__10_0", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, x);
}
inline ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c* BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c::MulticolorAvatarPartPropertyBlockSetter___c() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::*)()>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::OnValidate)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x327e2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::*)(::ArrayW<::UnityEngine::Color>)>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::SetColors)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x327deb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(),
                                                                                           { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter.SetHighlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::*)(bool, int32_t)>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::SetHighlight)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x327e1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(),
                                                                                           { "SetHighlight", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter.UpdateRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::*)()>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::UpdateRenderer)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x327e490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(), { "UpdateRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::*)()>(
    &::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x327e630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>&
BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__colorDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorDataList;
}
constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*> const&
BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__colorDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorDataList;
}
constexpr void
BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_set__colorDataList(::ArrayW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorDataList = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderer = value;
}
constexpr bool& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__editInPlayMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editInPlayMode;
}
constexpr bool const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__editInPlayMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editInPlayMode;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_set__editInPlayMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editInPlayMode = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colors = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__rimLightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightColors;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__rimLightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightColors;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_set__rimLightColors(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rimLightColors = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__boostColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostColors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__boostColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostColors;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_set__boostColors(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boostColors = value;
}
constexpr bool& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__highlighted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlighted;
}
constexpr bool const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__highlighted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlighted;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_set__highlighted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlighted = value;
}
constexpr int32_t& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__uvSegment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uvSegment;
}
constexpr int32_t const& BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_get__uvSegment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uvSegment;
}
constexpr void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::__cordl_internal_set__uvSegment(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uvSegment = value;
}
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(
      std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>();
}
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::OnValidate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::SetColors(::ArrayW<::UnityEngine::Color> colors) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(),
                                                                                         { "SetColors", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::SetHighlight(bool highlighted, int32_t uvSegment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(),
                                                                                         { "SetHighlight", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, highlighted, uvSegment);
}
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::UpdateRenderer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(), { "UpdateRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter::MulticolorAvatarPartPropertyBlockSetter() {}
