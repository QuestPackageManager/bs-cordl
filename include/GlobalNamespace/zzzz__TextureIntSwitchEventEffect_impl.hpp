#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureIntSwitchEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextureIntSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__TextureIntSwitchEventEffect_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::TextureIntSwitchEventEffect_TextureValueTuple::TextureIntSwitchEventEffect_TextureValueTuple(int32_t value, ::UnityW<::UnityEngine::Texture> texture) noexcept {
  this->value = value;
  this->texture = texture;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureIntSwitchEventEffect_TextureValueTuple::TextureIntSwitchEventEffect_TextureValueTuple() {}
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::TextureIntSwitchEventEffect::Initialize)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x599c040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)()>(&::GlobalNamespace::TextureIntSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x599c318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect.HandleBasicBeatmapEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::TextureIntSwitchEventEffect::HandleBasicBeatmapEventData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x599c334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(),
                                                                                           { "HandleBasicBeatmapEventData", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect.SetTextureByIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)(int32_t)>(&::GlobalNamespace::TextureIntSwitchEventEffect::SetTextureByIndex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x599c248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(), { "SetTextureByIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)()>(&::GlobalNamespace::TextureIntSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599c348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr ::StringW& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__texturePropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturePropertyName;
}
constexpr ::StringW const& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__texturePropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturePropertyName;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__texturePropertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____texturePropertyName = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventType = value;
}
constexpr int32_t& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__defaultIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultIndex;
}
constexpr int32_t const& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__defaultIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultIndex;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__defaultIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultIndex = value;
}
constexpr ::ArrayW<::GlobalNamespace::TextureIntSwitchEventEffect_TextureValueTuple>& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__textureValueTuples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureValueTuples;
}
constexpr ::ArrayW<::GlobalNamespace::TextureIntSwitchEventEffect_TextureValueTuple> const& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__textureValueTuples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureValueTuples;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__textureValueTuples(::ArrayW<::GlobalNamespace::TextureIntSwitchEventEffect_TextureValueTuple> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureValueTuples = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
constexpr int32_t& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__texturePropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturePropertyId;
}
constexpr int32_t const& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__texturePropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturePropertyId;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__texturePropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____texturePropertyId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>*& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__valueToTextureMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToTextureMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>* const&
GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__valueToTextureMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToTextureMap;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__valueToTextureMap(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueToTextureMap = value;
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::Initialize(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController);
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::HandleBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(),
                                                                                         { "HandleBasicBeatmapEventData", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::SetTextureByIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(), { "SetTextureByIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureIntSwitchEventEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextureIntSwitchEventEffect* GlobalNamespace::TextureIntSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextureIntSwitchEventEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureIntSwitchEventEffect::TextureIntSwitchEventEffect() {}
