#pragma once
// IWYU pragma private; include "GlobalNamespace/LightTranslationGroupEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect_InitData::*)(
    int32_t, int32_t, bool, bool, bool, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2,
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::LightTranslationGroupEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3b93ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 14>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr bool& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xMirrored;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_xMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xMirrored = value;
}
constexpr bool& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMirrored;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_yMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yMirrored = value;
}
constexpr bool& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zMirrored;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_zMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zMirrored = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTransform;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_xTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTransform;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_yTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___yTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTransform;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_zTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___zTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_xTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_xDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_yTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_yDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_zTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_zDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zDistributionLimits = value;
}
inline void GlobalNamespace::LightTranslationGroupEffect_InitData::_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform,
                                                                         ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits,
                                                                         ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits,
                                                                         ::UnityEngine::Vector2 yDistributionLimits, ::UnityEngine::Vector2 zTranslationLimits,
                                                                         ::UnityEngine::Vector2 zDistributionLimits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 14>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform, xTranslationLimits,
                                                          xDistributionLimits, yTranslationLimits, yDistributionLimits, zTranslationLimits, zDistributionLimits);
}
inline ::GlobalNamespace::LightTranslationGroupEffect_InitData*
GlobalNamespace::LightTranslationGroupEffect_InitData::New_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform,
                                                                ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits,
                                                                ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits,
                                                                ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightTranslationGroupEffect_InitData*>(groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform,
                                                                                                            xTranslationLimits, xDistributionLimits, yTranslationLimits, yDistributionLimits,
                                                                                                            zTranslationLimits, zDistributionLimits));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationGroupEffect_InitData::LightTranslationGroupEffect_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::*)()>(
    &::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9388c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0._GetTranslationEventHandler_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::*)(
    ::GlobalNamespace::LightTranslationBeatmapEventData*)>(&::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::_GetTranslationEventHandler_b__0)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3b93bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0*>::get(),
                                    "<GetTranslationEventHandler>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightTranslationBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get_translationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get_translationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translationTween;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_set_translationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___translationTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get_translationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get_translationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translationLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_set_translationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___translationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get_distributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get_distributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distributionLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_set_distributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distributionLimits = value;
}
constexpr bool& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get_mirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get_mirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrored;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_set_mirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrored = value;
}
constexpr ::GlobalNamespace::LightTranslationGroupEffect*& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::LightTranslationGroupEffect* const& GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::__cordl_internal_set___4__this(::GlobalNamespace::LightTranslationGroupEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::_GetTranslationEventHandler_b__0(::GlobalNamespace::LightTranslationBeatmapEventData* currentEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0*>::get(),
                                  "<GetTranslationEventHandler>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightTranslationBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentEventData);
}
inline ::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0* GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationGroupEffect___c__DisplayClass12_0::LightTranslationGroupEffect___c__DisplayClass12_0() {}
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)(
    ::GlobalNamespace::LightTranslationGroupEffect_InitData*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::LightTranslationGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0xbd4;
  constexpr static std::size_t addrs = 0x3b92b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightTranslationGroupEffect_InitData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)()>(
    &::GlobalNamespace::LightTranslationGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3b93824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.GetTranslationEventHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>* (
    ::GlobalNamespace::LightTranslationGroupEffect::*)(::Tweening::FloatTween*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, bool)>(
    &::GlobalNamespace::LightTranslationGroupEffect::GetTranslationEventHandler)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3b93738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "GetTranslationEventHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.SetTranslation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)(float_t)>(
    &::GlobalNamespace::LightTranslationGroupEffect::SetTranslation)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3b93894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "SetTranslation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.SetTweenData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Tweening::FloatTween*, float_t, float_t, float_t, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::LightTranslationGroupEffect::SetTweenData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3b93a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "SetTweenData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.ComputeTranslation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2, bool)>(
    &::GlobalNamespace::LightTranslationGroupEffect::ComputeTranslation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3b93a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "ComputeTranslation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>*&
GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__transformMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformMask;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* const&
GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__transformMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformMask;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__transformMask(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformMask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__xTranslationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xTranslationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__xTranslationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xTranslationTween;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__xTranslationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xTranslationTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__yTranslationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yTranslationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__yTranslationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yTranslationTween;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__yTranslationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____yTranslationTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__zTranslationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zTranslationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__zTranslationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zTranslationTween;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__zTranslationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____zTranslationTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationXBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationXBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationXBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationXBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__lightTranslationXBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightTranslationXBeatmapEventCallbackWrapper)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationYBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationYBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationYBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationYBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__lightTranslationYBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightTranslationYBeatmapEventCallbackWrapper)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationZBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationZBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationZBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationZBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__lightTranslationZBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightTranslationZBeatmapEventCallbackWrapper)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LightTranslationGroupEffect::_ctor(::GlobalNamespace::LightTranslationGroupEffect_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightTranslationGroupEffect_InitData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
inline void GlobalNamespace::LightTranslationGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>*
GlobalNamespace::LightTranslationGroupEffect::GetTranslationEventHandler(::Tweening::FloatTween* translationTween, ::UnityEngine::Vector2 translationLimits, ::UnityEngine::Vector2 distributionLimits,
                                                                         bool mirrored) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "GetTranslationEventHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>*, false>(this, ___internal_method, translationTween,
                                                                                                                                                     translationLimits, distributionLimits, mirrored);
}
inline void GlobalNamespace::LightTranslationGroupEffect::SetTranslation(float_t _) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "SetTranslation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline void GlobalNamespace::LightTranslationGroupEffect::SetTweenData(::Tweening::FloatTween* tween, float_t from, float_t to, float_t startTime, float_t endTime,
                                                                       ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "SetTweenData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tween, from, to, startTime, endTime, easeType);
}
inline float_t GlobalNamespace::LightTranslationGroupEffect::ComputeTranslation(float_t translation, ::UnityEngine::Vector2 translationLimits, float_t distribution,
                                                                                ::UnityEngine::Vector2 distributionLimits, bool mirrored) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "ComputeTranslation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, translation, translationLimits, distribution, distributionLimits, mirrored);
}
inline ::GlobalNamespace::LightTranslationGroupEffect* GlobalNamespace::LightTranslationGroupEffect::New_ctor(::GlobalNamespace::LightTranslationGroupEffect_InitData* initData,
                                                                                                              ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                                              ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightTranslationGroupEffect*>(initData, tweeningManager, beatmapCallbacksController));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationGroupEffect::LightTranslationGroupEffect() {}
