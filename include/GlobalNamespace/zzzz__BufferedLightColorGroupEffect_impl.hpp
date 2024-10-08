#pragma once
// IWYU pragma private; include "GlobalNamespace/BufferedLightColorGroupEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BufferedLightColorGroupEffect__InitData::*)(
    ::GlobalNamespace::LightGroup*, ::GlobalNamespace::MaterialPropertyBlockController*)>(&::GlobalNamespace::__BufferedLightColorGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3b1524c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MaterialPropertyBlockController*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightGroup>& GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__cordl_internal_get_lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroup> const& GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__cordl_internal_get_lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr void GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__cordl_internal_set_lightGroup(::UnityW<::GlobalNamespace::LightGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__cordl_internal_get_materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__cordl_internal_get_materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialPropertyBlockController;
}
constexpr void GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__cordl_internal_set_materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*
GlobalNamespace::__BufferedLightColorGroupEffect__InitData::New_ctor(::GlobalNamespace::LightGroup* lightGroup, ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>(lightGroup, materialPropertyBlockController));
}
inline void GlobalNamespace::__BufferedLightColorGroupEffect__InitData::_ctor(::GlobalNamespace::LightGroup* lightGroup,
                                                                              ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MaterialPropertyBlockController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroup, materialPropertyBlockController);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__BufferedLightColorGroupEffect__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(
    ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*, ::GlobalNamespace::ColorManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x3b14afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)()>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3b14e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleColorBoostBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorBoostBeatmapEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b14f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(), "HandleColorBoostBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleColorChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3b14f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(), "HandleColorChangeBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightColorBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)()>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3b15048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                                    "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.GetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::BufferedLightColorGroupEffect::*)(
    ::GlobalNamespace::EnvironmentColorType, bool, float_t)>(&::GlobalNamespace::BufferedLightColorGroupEffect::GetColor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3b15150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostBeatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostBeatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorBoostBeatmapDataCallbackWrapper)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>&
GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__lightColorBeatmapEventCallbackWrappers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorBeatmapEventCallbackWrappers;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> const&
GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__lightColorBeatmapEventCallbackWrappers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorBeatmapEventCallbackWrappers;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__lightColorBeatmapEventCallbackWrappers(
    ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*, ::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightColorBeatmapEventCallbackWrappers)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__lastIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastIndex;
}
constexpr int32_t const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__lastIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastIndex;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__lastIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastIndex = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__timesBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timesBuffer;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__timesBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timesBuffer;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__timesBuffer(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timesBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorsBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsBuffer;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorsBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsBuffer;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__colorsBuffer(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorsBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__elementIdsBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementIdsBuffer;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__elementIdsBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementIdsBuffer;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__elementIdsBuffer(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementIdsBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__useBoostColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBoostColors;
}
constexpr bool const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__useBoostColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBoostColors;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__useBoostColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useBoostColors = value;
}
constexpr bool& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__didReceiveEventThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didReceiveEventThisFrame;
}
constexpr bool const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__didReceiveEventThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didReceiveEventThisFrame;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__didReceiveEventThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didReceiveEventThisFrame = value;
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::setStaticF__timesBufferPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_timesBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BufferedLightColorGroupEffect::getStaticF__timesBufferPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_timesBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>();
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::setStaticF__colorBufferPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BufferedLightColorGroupEffect::getStaticF__colorBufferPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_colorBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>();
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::setStaticF__elementIdBufferPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_elementIdBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BufferedLightColorGroupEffect::getStaticF__elementIdBufferPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_elementIdBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>();
}
inline ::GlobalNamespace::BufferedLightColorGroupEffect* GlobalNamespace::BufferedLightColorGroupEffect::New_ctor(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData* initData,
                                                                                                                  ::GlobalNamespace::ColorManager* colorManager,
                                                                                                                  ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BufferedLightColorGroupEffect*>(initData, colorManager, beatmapCallbacksController));
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::_ctor(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData* initData, ::GlobalNamespace::ColorManager* colorManager,
                                                                  ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData, colorManager, beatmapCallbacksController);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* colorBoost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(), "HandleColorBoostBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorBoost);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* currentEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(), "HandleColorChangeBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightColorBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentEvent);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                                  "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BufferedLightColorGroupEffect::GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorType, colorBoost, brightness);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BufferedLightColorGroupEffect::BufferedLightColorGroupEffect() {}
