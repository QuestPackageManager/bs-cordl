#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarSDK\BeatAvatarVisualController.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarVisualController_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartsModel_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPropertyBlockColorSetter_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarVisualController_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__MulticolorAvatarPartPropertyBlockSetter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x327d6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::*)(bool, int32_t)>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x327e1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::*)(bool, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x327e20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::*)(::System::IAsyncResult*)>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x327e284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::Invoke(bool highlighted, int32_t uvSegmentNumber) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, highlighted, uvSegmentNumber);
}
inline ::System::IAsyncResult* BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::BeginInvoke(bool highlighted, int32_t uvSegmentNumber, ::System::AsyncCallback* callback,
                                                                                                                     ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, highlighted, uvSegmentNumber, callback, object);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate* BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate::BeatAvatarVisualController_HighlighterDelegate() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::*)()>(&::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::Awake)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x327d388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController.UpdateAvatarVisual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::*)(::BeatSaber::BeatAvatarSDK::AvatarData*)>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::UpdateAvatarVisual)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x327d75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(),
                                                                                           { "UpdateAvatarVisual", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController.SetLightColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::SetLightColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x327deac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { "SetLightColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController.UpdateAvatarColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::*)()>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::UpdateAvatarColors)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x327dc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { "UpdateAvatarColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController.HighlightEditedPart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::*)(::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t)>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::HighlightEditedPart)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x327e0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(),
                                                             { "HighlightEditedPart", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController.DisableEditedPartHighlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::*)()>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::DisableEditedPartHighlight)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x327e164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { "DisableEditedPartHighlight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController.SetHandsHighlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::*)(bool, int32_t)>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::SetHandsHighlight)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x327e198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(),
                                                                                           { "SetHandsHighlight", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::*)()>(&::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x327e1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__headTopMeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__headTopMeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopMeshFilter;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__headTopMeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTopMeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__glassesMeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glassesMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__glassesMeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glassesMeshFilter;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__glassesMeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____glassesMeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__facialHairMeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____facialHairMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__facialHairMeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____facialHairMeshFilter;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__facialHairMeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____facialHairMeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__leftHandsHairMeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandsHairMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__leftHandsHairMeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandsHairMeshFilter;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__leftHandsHairMeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandsHairMeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__rightHandsHairMeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandsHairMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__rightHandsHairMeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandsHairMeshFilter;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__rightHandsHairMeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandsHairMeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__eyesSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__eyesSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesSprite;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__eyesSprite(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eyesSprite = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__mouthSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouthSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__mouthSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouthSprite;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__mouthSprite(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mouthSprite = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__bodyMeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__bodyMeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyMeshFilter;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__bodyMeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bodyMeshFilter = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__headTopPropertyBlockColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopPropertyBlockColorSetter;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> const&
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__headTopPropertyBlockColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopPropertyBlockColorSetter;
}
constexpr void
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__headTopPropertyBlockColorSetter(::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTopPropertyBlockColorSetter = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__glassesPropertyBlockColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glassesPropertyBlockColorSetter;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> const&
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__glassesPropertyBlockColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glassesPropertyBlockColorSetter;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__glassesPropertyBlockColorSetter(::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____glassesPropertyBlockColorSetter = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__facialHairPropertyBlockColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____facialHairPropertyBlockColorSetter;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> const&
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__facialHairPropertyBlockColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____facialHairPropertyBlockColorSetter;
}
constexpr void
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__facialHairPropertyBlockColorSetter(::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____facialHairPropertyBlockColorSetter = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__skinPropertyBlockColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinPropertyBlockColorSetter;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__skinPropertyBlockColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinPropertyBlockColorSetter;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__skinPropertyBlockColorSetter(::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skinPropertyBlockColorSetter = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__clothesPropertyBlockSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesPropertyBlockSetter;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> const&
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__clothesPropertyBlockSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesPropertyBlockSetter;
}
constexpr void
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__clothesPropertyBlockSetter(::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clothesPropertyBlockSetter = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__leftHandPropertyBlockSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandPropertyBlockSetter;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> const&
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__leftHandPropertyBlockSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandPropertyBlockSetter;
}
constexpr void
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__leftHandPropertyBlockSetter(::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandPropertyBlockSetter = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter>& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__rightHandPropertyBlockSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandPropertyBlockSetter;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> const&
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__rightHandPropertyBlockSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandPropertyBlockSetter;
}
constexpr void
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__rightHandPropertyBlockSetter(::UnityW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandPropertyBlockSetter = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__avatarPartsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__avatarPartsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarPartsModel = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>*&
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__avatarPartHighlightSetters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartHighlightSetters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>* const&
BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__avatarPartHighlightSetters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartHighlightSetters;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__avatarPartHighlightSetters(
    ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarPartHighlightSetters = value;
}
constexpr ::UnityEngine::Color& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__lightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr ::UnityEngine::Color const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__lightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__lightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColor = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarData*& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__avatarData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarData;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarData* const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__avatarData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarData;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__avatarData(::BeatSaber::BeatAvatarSDK::AvatarData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarData = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate*& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__currentHighlighter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentHighlighter;
}
constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate* const& BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_get__currentHighlighter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentHighlighter;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::__cordl_internal_set__currentHighlighter(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController_HighlighterDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentHighlighter = value;
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::UpdateAvatarVisual(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(),
                                                                                         { "UpdateAvatarVisual", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarData);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::SetLightColor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { "SetLightColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::UpdateAvatarColors() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { "UpdateAvatarColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::HighlightEditedPart(::BeatSaber::BeatAvatarSDK::AvatarPart editPart, int32_t uvSegment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(),
                                                           { "HighlightEditedPart", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editPart, uvSegment);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::DisableEditedPartHighlight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { "DisableEditedPartHighlight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::SetHandsHighlight(bool highlighted, int32_t uvSegment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(),
                                                                                         { "SetHandsHighlight", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, highlighted, uvSegment);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController* BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController::BeatAvatarVisualController() {}
