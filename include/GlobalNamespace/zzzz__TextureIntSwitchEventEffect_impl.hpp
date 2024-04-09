#pragma once
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
// Some("nullptr") }]
constexpr ::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple::__TextureIntSwitchEventEffect__TextureValueTuple(int32_t value, ::UnityW<::UnityEngine::Texture> texture) noexcept {
  this->value = value;
  this->texture = texture;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple::__TextureIntSwitchEventEffect__TextureValueTuple() {}
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)()>(&::GlobalNamespace::TextureIntSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x25cca58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)()>(
    &::GlobalNamespace::TextureIntSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25cccd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect.HandleBasicBeatmapEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::TextureIntSwitchEventEffect::HandleBasicBeatmapEventData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25cccf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(), "HandleBasicBeatmapEventData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect.SetTextureByIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)(int32_t)>(
    &::GlobalNamespace::TextureIntSwitchEventEffect::SetTextureByIndex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x25ccc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(), "SetTextureByIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureIntSwitchEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureIntSwitchEventEffect::*)()>(&::GlobalNamespace::TextureIntSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ccd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____texturePropertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, ::Array<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple>*>&
GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__textureValueTuples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureValueTuples;
}
constexpr ::ArrayW<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, ::Array<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple>*> const&
GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__textureValueTuples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureValueTuples;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__textureValueTuples(
    ::ArrayW<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple, ::Array<::GlobalNamespace::__TextureIntSwitchEventEffect__TextureValueTuple>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textureValueTuples)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>*> const&
GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_get__valueToTextureMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToTextureMap;
}
constexpr void GlobalNamespace::TextureIntSwitchEventEffect::__cordl_internal_set__valueToTextureMap(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____valueToTextureMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::HandleBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(), "HandleBasicBeatmapEventData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::SetTextureByIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(), "SetTextureByIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextureIntSwitchEventEffect* GlobalNamespace::TextureIntSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TextureIntSwitchEventEffect*>());
}
inline void GlobalNamespace::TextureIntSwitchEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureIntSwitchEventEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureIntSwitchEventEffect::TextureIntSwitchEventEffect() {}
