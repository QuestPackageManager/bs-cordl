#pragma once
// IWYU pragma private; include "GlobalNamespace/DlcPromoPanelModel.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__PromoBannerInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType::PromoInfo_DlcPromoPanelModel_PromoType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType::PromoInfo_DlcPromoPanelModel_PromoType() {}
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType::Pack{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType::Level{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType::Store{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel_PromoInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel_PromoInfo::*)(
    ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType, ::StringW, ::StringW, ::GlobalNamespace::PromoBannerInfoSO*, ::GlobalNamespace::PlayerSensitivityFlag, int32_t, int32_t)>(
    &::GlobalNamespace::DlcPromoPanelModel_PromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3652ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel_PromoInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel_PromoInfo::*)(
    ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::GlobalNamespace::PlayerSensitivityFlag)>(&::GlobalNamespace::DlcPromoPanelModel_PromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3653024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel_PromoInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel_PromoInfo::*)(
    ::StringW, int32_t, int32_t, ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(&::GlobalNamespace::DlcPromoPanelModel_PromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x365306c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_promoType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoType;
}
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_promoType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoType;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_promoType(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___promoType = value;
}
constexpr ::StringW& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_promoId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoId;
}
constexpr ::StringW const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_promoId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoId;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_promoId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___promoId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::StringW const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_target(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr int32_t const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priority = value;
}
constexpr int32_t& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_maxDisplayCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDisplayCount;
}
constexpr int32_t const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_maxDisplayCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDisplayCount;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_maxDisplayCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxDisplayCount = value;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_contentRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_contentRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentRating = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_bannerImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_bannerImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerImage;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_bannerImage(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bannerImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_bannerPromoText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerPromoText;
}
constexpr ::StringW const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_bannerPromoText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerPromoText;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_bannerPromoText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bannerPromoText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_bannerPromoTextPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerPromoTextPosition;
}
constexpr float_t const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_bannerPromoTextPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerPromoTextPosition;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_bannerPromoTextPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bannerPromoTextPosition = value;
}
inline void GlobalNamespace::DlcPromoPanelModel_PromoInfo::_ctor(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType promoType, ::StringW promoId, ::StringW target,
                                                                 ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating, int32_t maxDisplayCount,
                                                                 int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, promoType, promoId, target, promoBannerInfo, contentRating, maxDisplayCount, priority);
}
inline void GlobalNamespace::DlcPromoPanelModel_PromoInfo::_ctor(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* levelPromoInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPromoInfo, contentRating);
}
inline void GlobalNamespace::DlcPromoPanelModel_PromoInfo::_ctor(::StringW promoId, int32_t priority, int32_t maxDisplayCount, ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* sourcePromoInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, promoId, priority, maxDisplayCount, sourcePromoInfo);
}
inline ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* GlobalNamespace::DlcPromoPanelModel_PromoInfo::New_ctor(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType promoType, ::StringW promoId,
                                                                                                                ::StringW target, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo,
                                                                                                                ::GlobalNamespace::PlayerSensitivityFlag contentRating, int32_t maxDisplayCount,
                                                                                                                int32_t priority) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(promoType, promoId, target, promoBannerInfo, contentRating, maxDisplayCount, priority));
}
inline ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* GlobalNamespace::DlcPromoPanelModel_PromoInfo::New_ctor(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* levelPromoInfo,
                                                                                                                ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(levelPromoInfo, contentRating));
}
inline ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* GlobalNamespace::DlcPromoPanelModel_PromoInfo::New_ctor(::StringW promoId, int32_t priority, int32_t maxDisplayCount,
                                                                                                                ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* sourcePromoInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(promoId, priority, maxDisplayCount, sourcePromoInfo));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo::DlcPromoPanelModel_PromoInfo() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c::*)()>(&::GlobalNamespace::DlcPromoPanelModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36530f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c.__ctor_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c::*)()>(&::GlobalNamespace::DlcPromoPanelModel___c::__ctor_b__27_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36530fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(),
                                                                               "<.ctor>b__27_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c.__ctor_b__27_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c::*)()>(&::GlobalNamespace::DlcPromoPanelModel___c::__ctor_b__27_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3653100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(),
                                                                               "<.ctor>b__27_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c._UpdatePromoInfosAsync_b__34_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c::*)(::GlobalNamespace::PackDefinitionSO*)>(
    &::GlobalNamespace::DlcPromoPanelModel___c::_UpdatePromoInfosAsync_b__34_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3653104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(), "<UpdatePromoInfosAsync>b__34_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c._UpdatePromoInfosAsync_b__34_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DlcPromoPanelModel___c::*)(
    ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(&::GlobalNamespace::DlcPromoPanelModel___c::_UpdatePromoInfosAsync_b__34_1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x365312c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(), "<UpdatePromoInfosAsync>b__34_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel___c::setStaticF___9(::GlobalNamespace::DlcPromoPanelModel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::DlcPromoPanelModel___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>(
      std::forward<::GlobalNamespace::DlcPromoPanelModel___c*>(value));
}
inline ::GlobalNamespace::DlcPromoPanelModel___c* GlobalNamespace::DlcPromoPanelModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::DlcPromoPanelModel___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>();
}
inline void GlobalNamespace::DlcPromoPanelModel___c::setStaticF___9__27_0(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::DlcPromoPanelModel___c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>();
}
inline void GlobalNamespace::DlcPromoPanelModel___c::setStaticF___9__27_1(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__27_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::DlcPromoPanelModel___c::getStaticF___9__27_1() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__27_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>();
}
inline void GlobalNamespace::DlcPromoPanelModel___c::setStaticF___9__34_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>*, "<>9__34_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* GlobalNamespace::DlcPromoPanelModel___c::getStaticF___9__34_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>*, "<>9__34_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>();
}
inline void GlobalNamespace::DlcPromoPanelModel___c::setStaticF___9__34_1(::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*, "<>9__34_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* GlobalNamespace::DlcPromoPanelModel___c::getStaticF___9__34_1() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*, "<>9__34_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get>();
}
inline void GlobalNamespace::DlcPromoPanelModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel___c::__ctor_b__27_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(),
                                                                             "<.ctor>b__27_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel___c::__ctor_b__27_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(),
                                                                             "<.ctor>b__27_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c::_UpdatePromoInfosAsync_b__34_0(::GlobalNamespace::PackDefinitionSO* packDefinition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(), "<UpdatePromoInfosAsync>b__34_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packDefinition);
}
inline int32_t GlobalNamespace::DlcPromoPanelModel___c::_UpdatePromoInfosAsync_b__34_1(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* a, ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c*>::get(), "<UpdatePromoInfosAsync>b__34_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::DlcPromoPanelModel___c* GlobalNamespace::DlcPromoPanelModel___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DlcPromoPanelModel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel___c::DlcPromoPanelModel___c() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3653158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0._UpdatePromoInfosAsync_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::*)(
    ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(&::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::_UpdatePromoInfosAsync_b__2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x365315c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0*>::get(), "<UpdatePromoInfosAsync>b__2",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::__cordl_internal_get_dlcPromoPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcPromoPanel;
}
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::__cordl_internal_get_dlcPromoPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcPromoPanel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::__cordl_internal_set_dlcPromoPanel(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dlcPromoPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::_UpdatePromoInfosAsync_b__2(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* promoInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0*>::get(), "<UpdatePromoInfosAsync>b__2",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, promoInfo);
}
inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0* GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass34_0::DlcPromoPanelModel___c__DisplayClass34_0() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3652024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0._GetPackDataForMainMenuPromoBannerInternal_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::*)(
    ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(&::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::_GetPackDataForMainMenuPromoBannerInternal_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3653180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0*>::get(),
                                    "<GetPackDataForMainMenuPromoBannerInternal>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0._GetPackDataForMainMenuPromoBannerInternal_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::*)(
    ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(&::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::_GetPackDataForMainMenuPromoBannerInternal_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36531a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0*>::get(),
                                    "<GetPackDataForMainMenuPromoBannerInternal>b__1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::__cordl_internal_get_sensitivityFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sensitivityFlag;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::__cordl_internal_get_sensitivityFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sensitivityFlag;
}
constexpr void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::__cordl_internal_set_sensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sensitivityFlag = value;
}
inline void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::_GetPackDataForMainMenuPromoBannerInternal_b__0(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0*>::get(), "<GetPackDataForMainMenuPromoBannerInternal>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::_GetPackDataForMainMenuPromoBannerInternal_b__1(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0*>::get(), "<GetPackDataForMainMenuPromoBannerInternal>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0* GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_0::DlcPromoPanelModel___c__DisplayClass37_0() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3652028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1._GetPackDataForMainMenuPromoBannerInternal_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::*)(
    ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(&::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::_GetPackDataForMainMenuPromoBannerInternal_b__2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36531c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1*>::get(),
                                    "<GetPackDataForMainMenuPromoBannerInternal>b__2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::__cordl_internal_get_priorityPromoInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityPromoInfo;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* const& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::__cordl_internal_get_priorityPromoInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityPromoInfo;
}
constexpr void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::__cordl_internal_set_priorityPromoInfo(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___priorityPromoInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::_GetPackDataForMainMenuPromoBannerInternal_b__2(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* pi) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1*>::get(), "<GetPackDataForMainMenuPromoBannerInternal>b__2",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pi);
}
inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1* GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass37_1::DlcPromoPanelModel___c__DisplayClass37_1() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x36531e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3653450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>> __t__builder,
    ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__36() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x36534d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3653714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51>::get(), "MoveNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__51() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x365371c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36539e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__32() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x36539f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3653c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::DlcPromoPanelModel__Initialize_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                        ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__Initialize_d__28::DlcPromoPanelModel__Initialize_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x3653c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36541ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::DlcPromoPanelModel__InitializeInternalAsync_d__30(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__30::DlcPromoPanelModel__InitializeInternalAsync_d__30() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x3654218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3654664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "pack", ty:
// "::UnityW<::GlobalNamespace::PackDefinitionSO>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __t__builder, ::UnityW<::GlobalNamespace::PackDefinitionSO> pack,
    ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->pack = pack;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__35() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x36546e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3654a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__33() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x3654abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3654de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::DlcPromoPanelModel__UpdateModelDataAsync_d__31(int32_t __1__state,
                                                                                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                                            ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__31::DlcPromoPanelModel__UpdateModelDataAsync_d__31() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0x3654e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36556d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_newOwnedMusicPackPromoInfos_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_allPromoInfos_5__4", ty: "::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus,::Array<::GlobalNamespace::EntitlementStatus>*>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2,
    ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* _newOwnedMusicPackPromoInfos_5__3,
    ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> _allPromoInfos_5__4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus, ::Array<::GlobalNamespace::EntitlementStatus>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_newNotOwnedMusicPackPromoInfos_5__2 = _newNotOwnedMusicPackPromoInfos_5__2;
  this->_newOwnedMusicPackPromoInfos_5__3 = _newOwnedMusicPackPromoInfos_5__3;
  this->_allPromoInfos_5__4 = _allPromoInfos_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__50() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0xf0c;
  constexpr static std::size_t addrs = 0x3655744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3656650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_validPackDefinitions_5__2", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>,::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _validPackDefinitions_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>, ::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_validPackDefinitions_5__2 = _validPackDefinitions_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34::DlcPromoPanelModel__UpdatePromoInfosAsync_d__34() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.add_hotReloadDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Action*)>(
    &::GlobalNamespace::DlcPromoPanelModel::add_hotReloadDidStart)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3651094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "add_hotReloadDidStart",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.remove_hotReloadDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Action*)>(
    &::GlobalNamespace::DlcPromoPanelModel::remove_hotReloadDidStart)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3651140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "remove_hotReloadDidStart",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.add_hotReloadDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Action*)>(
    &::GlobalNamespace::DlcPromoPanelModel::add_hotReloadDidFinish)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36511ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "add_hotReloadDidFinish",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.remove_hotReloadDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Action*)>(
    &::GlobalNamespace::DlcPromoPanelModel::remove_hotReloadDidFinish)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3651298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "remove_hotReloadDidFinish",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(
    ::GlobalNamespace::IAdditionalContentModel*, ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::IAnalyticsModel*,
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*, ::GlobalNamespace::PlayerDataModel*, ::Analytics::Model::TelemetryModel*,
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*)>(&::GlobalNamespace::DlcPromoPanelModel::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x3651344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnalyticsModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Analytics::Model::TelemetryModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::Initialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x36515b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::InitializeAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3651654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "InitializeAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.InitializeInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::InitializeInternalAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3651678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "InitializeInternalAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateModelDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdateModelDataAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3651728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "UpdateModelDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleDidCatalogLoadOrUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::HandleDidCatalogLoadOrUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x36517d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "HandleDidCatalogLoadOrUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateDlcPromoPanelDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdateDlcPromoPanelDataAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x365187c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "UpdateDlcPromoPanelDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdatePromoInfosAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdatePromoInfosAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x365192c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "UpdatePromoInfosAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.LoadPackPromoInfoAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* (
    ::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::PackDefinitionSO*)>(&::GlobalNamespace::DlcPromoPanelModel::LoadPackPromoInfoAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x36519e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "LoadPackPromoInfoAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetPackDataForMainMenuPromoBanner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>* (
    ::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3651ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetPackDataForMainMenuPromoBanner",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetPackDataForMainMenuPromoBannerInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool> (
    ::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBannerInternal)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x3651bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetPackDataForMainMenuPromoBannerInternal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.TryGetPromoGroupId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<::StringW>)>(&::GlobalNamespace::DlcPromoPanelModel::TryGetPromoGroupId)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x365202c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "TryGetPromoGroupId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasShown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x36520a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "MainMenuDlcPromoBannerWasShown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x365240c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "MainMenuDlcPromoBannerWasPressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(
    ::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x36525f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyLevelButtonWasPressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasShown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevel*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36528c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyLevelButtonWasShown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x36529c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyPackButtonWasPressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasShown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3652b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyPackButtonWasShown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.LevelPackWasPurchased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::DlcPromoPanelModel::LevelPackWasPurchased)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3652c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "LevelPackWasPurchased", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.LevelWasPurchased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::DlcPromoPanelModel::LevelWasPurchased)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3652de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "LevelWasPurchased", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleColdplayBuyClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::HandleColdplayBuyClicked)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3652770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "HandleColdplayBuyClicked",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleColdplayPurchased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::HandleColdplayPurchased)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3652c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "HandleColdplayPurchased",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetExperimentEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x365228c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetExperimentEventData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateOwnedPacksAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdateOwnedPacksAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3652e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "UpdateOwnedPacksAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleAdditionalContentModelDidInvalidateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3652f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "HandleAdditionalContentModelDidInvalidateData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::GlobalNamespace::IAdditionalContentModel* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalContentModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Analytics::Model::TelemetryModel*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__telemetryModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr ::Analytics::Model::TelemetryModel* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__telemetryModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____telemetryModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__metaRemoteAssetsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaRemoteAssetsManager;
}
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__metaRemoteAssetsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaRemoteAssetsManager;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__metaRemoteAssetsManager(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____metaRemoteAssetsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>, ::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__dlcPromoPanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanels;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>, ::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*> const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__dlcPromoPanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanels;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__dlcPromoPanels(
    ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>, ::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcPromoPanels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__notOwnedMusicPackPromoInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwnedMusicPackPromoInfos;
}
constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__notOwnedMusicPackPromoInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwnedMusicPackPromoInfos;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__notOwnedMusicPackPromoInfos(
    ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notOwnedMusicPackPromoInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__ownedMusicPackPromoInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownedMusicPackPromoInfos;
}
constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__ownedMusicPackPromoInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownedMusicPackPromoInfos;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__ownedMusicPackPromoInfos(
    ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ownedMusicPackPromoInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__updatingNotOwnedPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatingNotOwnedPacks;
}
constexpr bool const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__updatingNotOwnedPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatingNotOwnedPacks;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__updatingNotOwnedPacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updatingNotOwnedPacks = value;
}
constexpr bool& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::System::Random*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::System::Random* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__promoInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoInfos;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__promoInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoInfos;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__promoInfos(::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__priorityPromoInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priorityPromoInfos;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__priorityPromoInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priorityPromoInfos;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__priorityPromoInfos(::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____priorityPromoInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__initializationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__initializationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initializationTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__cacheUpdateModelDataTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheUpdateModelDataTask;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__cacheUpdateModelDataTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheUpdateModelDataTask;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__cacheUpdateModelDataTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheUpdateModelDataTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__loadDlcPromoPanelDataHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadDlcPromoPanelDataHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*> const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__loadDlcPromoPanelDataHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadDlcPromoPanelDataHandle;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__loadDlcPromoPanelDataHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadDlcPromoPanelDataHandle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>*&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__loadPackPromoInfoHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadPackPromoInfoHandles;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>* const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__loadPackPromoInfoHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadPackPromoInfoHandles;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__loadPackPromoInfoHandles(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadPackPromoInfoHandles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_hotReloadDidStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hotReloadDidStart;
}
constexpr ::System::Action* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_hotReloadDidStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hotReloadDidStart;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set_hotReloadDidStart(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hotReloadDidStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_hotReloadDidFinish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hotReloadDidFinish;
}
constexpr ::System::Action* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_hotReloadDidFinish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hotReloadDidFinish;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set_hotReloadDidFinish(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hotReloadDidFinish)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DlcPromoPanelModel::add_hotReloadDidStart(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "add_hotReloadDidStart",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DlcPromoPanelModel::remove_hotReloadDidStart(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "remove_hotReloadDidStart",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DlcPromoPanelModel::add_hotReloadDidFinish(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "add_hotReloadDidFinish",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DlcPromoPanelModel::remove_hotReloadDidFinish(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "remove_hotReloadDidFinish",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DlcPromoPanelModel::_ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                       ::GlobalNamespace::IAnalyticsModel* analyticsModel,
                                                       ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>* defaultDlcPromoPanels,
                                                       ::GlobalNamespace::PlayerDataModel* playerDataModel, ::Analytics::Model::TelemetryModel* telemetryModel,
                                                       ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 7>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnalyticsModel*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Analytics::Model::TelemetryModel*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, additionalContentModel, beatmapLevelsModel, analyticsModel, defaultDlcPromoPanels, playerDataModel, telemetryModel,
                                                          metaRemoteAssetsManager);
}
inline void GlobalNamespace::DlcPromoPanelModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::InitializeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "InitializeAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::InitializeInternalAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "InitializeInternalAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdateModelDataAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "UpdateModelDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleDidCatalogLoadOrUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "HandleDidCatalogLoadOrUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdateDlcPromoPanelDataAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "UpdateDlcPromoPanelDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdatePromoInfosAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "UpdatePromoInfosAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* GlobalNamespace::DlcPromoPanelModel::LoadPackPromoInfoAsync(::GlobalNamespace::PackDefinitionSO* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "LoadPackPromoInfoAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*, false>(this, ___internal_method, pack);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>* GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetPackDataForMainMenuPromoBanner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>*, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool> GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBannerInternal() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetPackDataForMainMenuPromoBannerInternal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>, false>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel::TryGetPromoGroupId(::StringW promoId, ::ByRef<::StringW> promoGroupId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "TryGetPromoGroupId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, promoId, promoGroupId);
}
inline void GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* promoInfo, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "MainMenuDlcPromoBannerWasShown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, promoInfo, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* promoInfo, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "MainMenuDlcPromoBannerWasPressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, promoInfo, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyLevelButtonWasPressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, level, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyLevelButtonWasShown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyPackButtonWasPressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyPackButtonWasShown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::LevelPackWasPurchased(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "LevelPackWasPurchased", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack);
}
inline void GlobalNamespace::DlcPromoPanelModel::LevelWasPurchased(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "LevelWasPurchased", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, level);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleColdplayBuyClicked(::StringW itemId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "HandleColdplayBuyClicked",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemId);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleColdplayPurchased(::StringW itemId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "HandleColdplayPurchased",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemId);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetExperimentEventData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(nullptr, ___internal_method, itemId, page, customText);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdateOwnedPacksAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "UpdateOwnedPacksAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "HandleAdditionalContentModelDidInvalidateData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DlcPromoPanelModel* GlobalNamespace::DlcPromoPanelModel::New_ctor(
    ::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IAnalyticsModel* analyticsModel,
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>* defaultDlcPromoPanels, ::GlobalNamespace::PlayerDataModel* playerDataModel,
    ::Analytics::Model::TelemetryModel* telemetryModel, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DlcPromoPanelModel*>(additionalContentModel, beatmapLevelsModel, analyticsModel, defaultDlcPromoPanels, playerDataModel,
                                                                                          telemetryModel, metaRemoteAssetsManager));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::DlcPromoPanelModel::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::DlcPromoPanelModel::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel::DlcPromoPanelModel() {}
