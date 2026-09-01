#pragma once
// IWYU pragma private; include "GlobalNamespace\DlcPromoPanelModel.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
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
#include "GlobalNamespace/zzzz__ObservableVariable_1_def.hpp"
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
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData::*)(::UnityEngine::Sprite*, ::StringW, float_t)>(
    &::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x374f81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData::*)(::GlobalNamespace::PromoBannerInfoSO*)>(
    &::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x374f828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData::_ctor(::UnityEngine::Sprite* image, ::StringW promoText, float_t promoTextPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, image, promoText, promoTextPosition);
}
inline void GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData::_ctor(::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, promoBannerInfo);
}
// Ctor Parameters [CppParam { name: "image", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "promoText", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "promoTextPosition", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData::PromoInfo_DlcPromoPanelModel_BannerData(::UnityW<::UnityEngine::Sprite> image, ::StringW promoText,
                                                                                                              float_t promoTextPosition) noexcept {
  this->image = image;
  this->promoText = promoText;
  this->promoTextPosition = promoTextPosition;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData::PromoInfo_DlcPromoPanelModel_BannerData() {}
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel_PromoInfo::*)(
    ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType, ::StringW, ::StringW, ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData, ::GlobalNamespace::PlayerSensitivityFlag, int32_t,
    int32_t)>(&::GlobalNamespace::DlcPromoPanelModel_PromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x375075c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
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
  this->___promoId = value;
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
  this->___target = value;
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
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_banner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banner;
}
constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData const& GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_get_banner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___banner;
}
constexpr void GlobalNamespace::DlcPromoPanelModel_PromoInfo::__cordl_internal_set_banner(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___banner = value;
}
inline void GlobalNamespace::DlcPromoPanelModel_PromoInfo::_ctor(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType promoType, ::StringW promoId, ::StringW target,
                                                                 ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData banner, ::GlobalNamespace::PlayerSensitivityFlag contentRating,
                                                                 int32_t maxDisplayCount, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData>(), ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, promoType, promoId, target, banner, contentRating, maxDisplayCount, priority);
}
inline ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* GlobalNamespace::DlcPromoPanelModel_PromoInfo::New_ctor(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType promoType, ::StringW promoId,
                                                                                                                ::StringW target, ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData banner,
                                                                                                                ::GlobalNamespace::PlayerSensitivityFlag contentRating, int32_t maxDisplayCount,
                                                                                                                int32_t priority) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(promoType, promoId, target, banner, contentRating, maxDisplayCount, priority));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo::DlcPromoPanelModel_PromoInfo() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c::*)()>(&::GlobalNamespace::DlcPromoPanelModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37507d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c._UpdatePromoInfosAsync_b__30_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c::*)(::GlobalNamespace::PackDefinitionSO*)>(
    &::GlobalNamespace::DlcPromoPanelModel___c::_UpdatePromoInfosAsync_b__30_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x37507d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c*>(),
                                                                                           { "<UpdatePromoInfosAsync>b__30_0", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c._UpdatePromoInfosAsync_b__30_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DlcPromoPanelModel___c::*)(
    ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(&::GlobalNamespace::DlcPromoPanelModel___c::_UpdatePromoInfosAsync_b__30_1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3750800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c*>(),
            { "<UpdatePromoInfosAsync>b__30_1", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(), ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel___c::setStaticF___9(::GlobalNamespace::DlcPromoPanelModel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::DlcPromoPanelModel___c*, "<>9", ::GlobalNamespace::DlcPromoPanelModel___c*>(std::forward<::GlobalNamespace::DlcPromoPanelModel___c*>(value));
}
inline ::GlobalNamespace::DlcPromoPanelModel___c* GlobalNamespace::DlcPromoPanelModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::DlcPromoPanelModel___c*, "<>9", ::GlobalNamespace::DlcPromoPanelModel___c*>();
}
inline void GlobalNamespace::DlcPromoPanelModel___c::setStaticF___9__30_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>*, "<>9__30_0", ::GlobalNamespace::DlcPromoPanelModel___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* GlobalNamespace::DlcPromoPanelModel___c::getStaticF___9__30_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>*, "<>9__30_0", ::GlobalNamespace::DlcPromoPanelModel___c*>();
}
inline void GlobalNamespace::DlcPromoPanelModel___c::setStaticF___9__30_1(::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*, "<>9__30_1", ::GlobalNamespace::DlcPromoPanelModel___c*>(
      std::forward<::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* GlobalNamespace::DlcPromoPanelModel___c::getStaticF___9__30_1() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*, "<>9__30_1", ::GlobalNamespace::DlcPromoPanelModel___c*>();
}
inline void GlobalNamespace::DlcPromoPanelModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c::_UpdatePromoInfosAsync_b__30_0(::GlobalNamespace::PackDefinitionSO* packDefinition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c*>(),
                                                                                         { "<UpdatePromoInfosAsync>b__30_0", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packDefinition);
}
inline int32_t GlobalNamespace::DlcPromoPanelModel___c::_UpdatePromoInfosAsync_b__30_1(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* a, ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c*>(),
          { "<UpdatePromoInfosAsync>b__30_1", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(), ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::DlcPromoPanelModel___c* GlobalNamespace::DlcPromoPanelModel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DlcPromoPanelModel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel___c::DlcPromoPanelModel___c() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::*)()>(&::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x375082c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0._UpdatePromoInfosAsync_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(
    &::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::_UpdatePromoInfosAsync_b__2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3750830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0*>(),
                                                             { "<UpdatePromoInfosAsync>b__2", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::__cordl_internal_get_dlcPromoPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcPromoPanel;
}
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::__cordl_internal_get_dlcPromoPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcPromoPanel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::__cordl_internal_set_dlcPromoPanel(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dlcPromoPanel = value;
}
inline void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::_UpdatePromoInfosAsync_b__2(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* promoInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0*>(),
                                                           { "<UpdatePromoInfosAsync>b__2", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, promoInfo);
}
inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0* GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0::DlcPromoPanelModel___c__DisplayClass30_0() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::*)()>(&::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x374f848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0._GetPackDataForMainMenuPromoBannerInternal_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(
    &::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::_GetPackDataForMainMenuPromoBannerInternal_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3750854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0*>(),
                                                             { "<GetPackDataForMainMenuPromoBannerInternal>b__0", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0._GetPackDataForMainMenuPromoBannerInternal_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(
    &::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::_GetPackDataForMainMenuPromoBannerInternal_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3750874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0*>(),
                                                             { "<GetPackDataForMainMenuPromoBannerInternal>b__1", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::__cordl_internal_get_sensitivityFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sensitivityFlag;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::__cordl_internal_get_sensitivityFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sensitivityFlag;
}
constexpr void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::__cordl_internal_set_sensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sensitivityFlag = value;
}
inline void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::_GetPackDataForMainMenuPromoBannerInternal_b__0(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0*>(),
                                                           { "<GetPackDataForMainMenuPromoBannerInternal>b__0", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::_GetPackDataForMainMenuPromoBannerInternal_b__1(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0*>(),
                                                           { "<GetPackDataForMainMenuPromoBannerInternal>b__1", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0* GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_0::DlcPromoPanelModel___c__DisplayClass33_0() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::*)()>(&::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x374f84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1._GetPackDataForMainMenuPromoBannerInternal_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(
    &::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::_GetPackDataForMainMenuPromoBannerInternal_b__2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3750894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1*>(),
                                                             { "<GetPackDataForMainMenuPromoBannerInternal>b__2", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::__cordl_internal_get_priorityPromoInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityPromoInfo;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* const& GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::__cordl_internal_get_priorityPromoInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityPromoInfo;
}
constexpr void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::__cordl_internal_set_priorityPromoInfo(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priorityPromoInfo = value;
}
inline void GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::_GetPackDataForMainMenuPromoBannerInternal_b__2(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* pi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1*>(),
                                                           { "<GetPackDataForMainMenuPromoBannerInternal>b__2", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pi);
}
inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1* GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass33_1::DlcPromoPanelModel___c__DisplayClass33_1() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x37508b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3750b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x3750b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3750f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "pack", ty:
// "::UnityW<::GlobalNamespace::PackDefinitionSO>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __t__builder, ::UnityW<::GlobalNamespace::PackDefinitionSO> pack,
    ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->pack = pack;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0x3751004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3751688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x37516f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3751d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousTask", ty: "::System::Threading::Tasks::Task*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::DlcPromoPanelModel__UpdateModelDataAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* previousTask,
    ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->previousTask = previousTask;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26::DlcPromoPanelModel__UpdateModelDataAsync_d__26() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x3751dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3752584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_allPromoInfos_5__3", ty: "::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2,
    ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*> _allPromoInfos_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_newNotOwnedMusicPackPromoInfos_5__2 = _newNotOwnedMusicPackPromoInfos_5__2;
  this->_allPromoInfos_5__3 = _allPromoInfos_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__46() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::MoveNext)> {
  constexpr static std::size_t size = 0xfe8;
  constexpr static std::size_t addrs = 0x37525f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37535d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_validPackDefinitions_5__2",
// ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _validPackDefinitions_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_validPackDefinitions_5__2 = _validPackDefinitions_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(
    ::GlobalNamespace::IAdditionalContentModel*, ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::IAnalyticsModel*,
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*, ::GlobalNamespace::PlayerDataModel*, ::Analytics::Model::TelemetryModel*,
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*)>(&::GlobalNamespace::DlcPromoPanelModel::_ctor)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x374e9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
            { ".ctor",
              {},
              { ::i2c::type_of<::GlobalNamespace::IAdditionalContentModel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IAnalyticsModel*>(),
                ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(),
                ::i2c::type_of<::Analytics::Model::TelemetryModel*>(), ::i2c::type_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.Zenject_IInitializable_Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::Zenject_IInitializable_Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x374ec9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "Zenject.IInitializable.Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::Tick)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x374ed9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.RequestNextPromo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::RequestNextPromo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x374f320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "RequestNextPromo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.RunModelDataUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::RunModelDataUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x374ecac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "RunModelDataUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateModelDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::DlcPromoPanelModel::*)(::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::DlcPromoPanelModel::UpdateModelDataAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x374f38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                { "UpdateModelDataAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleAdditionalContentModelDidInvalidateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x374f450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "HandleAdditionalContentModelDidInvalidateData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleDidCatalogLoadOrUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::HandleDidCatalogLoadOrUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x374f4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "HandleDidCatalogLoadOrUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateDlcPromoPanelDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdateDlcPromoPanelDataAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x374f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                                                           { "UpdateDlcPromoPanelDataAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdatePromoInfosAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdatePromoInfosAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x374f5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "UpdatePromoInfosAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.LoadPackPromoInfoAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* (
    ::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::PackDefinitionSO*)>(&::GlobalNamespace::DlcPromoPanelModel::LoadPackPromoInfoAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x374f67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "LoadPackPromoInfoAsync", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.CreateBannerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData (*)(::GlobalNamespace::PromoBannerInfoSO*)>(
    &::GlobalNamespace::DlcPromoPanelModel::CreateBannerData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x374f76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "CreateBannerData", {}, { ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetPackDataForMainMenuPromoBannerInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>> (
    ::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBannerInternal)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x374ee54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "GetPackDataForMainMenuPromoBannerInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.TryGetPromoGroupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::GlobalNamespace::DlcPromoPanelModel::TryGetPromoGroupId)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x374f850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                                                           { "TryGetPromoGroupId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x374f8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                { "MainMenuDlcPromoBannerWasShown", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x374fc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                { "MainMenuDlcPromoBannerWasPressed", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x374fe08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "BuyLevelButtonWasPressed",
                                                                                         {},
                                                                                         { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevel*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x37500d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                { "BuyLevelButtonWasShown", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x37501d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                         { "BuyPackButtonWasPressed", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3750318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                         { "BuyPackButtonWasShown", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.LevelPackWasPurchased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::DlcPromoPanelModel::LevelPackWasPurchased)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3750418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "LevelPackWasPurchased", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.LevelWasPurchased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::DlcPromoPanelModel::LevelWasPurchased)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x37505e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                { "LevelWasPurchased", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleColdplayBuyClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::HandleColdplayBuyClicked)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x374ff84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "HandleColdplayBuyClicked", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleColdplayPurchased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::HandleColdplayPurchased)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3750498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "HandleColdplayPurchased", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetExperimentEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x374faa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                             { "GetExperimentEventData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateOwnedPacksAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdateOwnedPacksAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3750698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "UpdateOwnedPacksAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
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
  this->____additionalContentModel = value;
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
  this->____beatmapLevelsModel = value;
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
  this->____analyticsModel = value;
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
  this->____playerDataModel = value;
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
  this->____telemetryModel = value;
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
  this->____metaRemoteAssetsManager = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__defaultDlcPromoPanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultDlcPromoPanels;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__defaultDlcPromoPanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultDlcPromoPanels;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__defaultDlcPromoPanels(::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultDlcPromoPanels = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__dlcPromoPanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanels;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__dlcPromoPanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanels;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__dlcPromoPanels(::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dlcPromoPanels = value;
}
constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__notOwnedMusicPackPromoInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwnedMusicPackPromoInfos;
}
constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__notOwnedMusicPackPromoInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwnedMusicPackPromoInfos;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__notOwnedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notOwnedMusicPackPromoInfos = value;
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
  this->____random = value;
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
  this->____promoInfos = value;
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
  this->____priorityPromoInfos = value;
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__currentDataLoadTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDataLoadTask;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__currentDataLoadTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDataLoadTask;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__currentDataLoadTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDataLoadTask = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__currentDataLoadCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDataLoadCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__currentDataLoadCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDataLoadCancellationTokenSource;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__currentDataLoadCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDataLoadCancellationTokenSource = value;
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
  this->____loadPackPromoInfoHandles = value;
}
constexpr ::GlobalNamespace::ObservableVariable_1<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>>*&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_mainMenuPromo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainMenuPromo;
}
constexpr ::GlobalNamespace::ObservableVariable_1<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>>* const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_mainMenuPromo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainMenuPromo;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set_mainMenuPromo(
    ::GlobalNamespace::ObservableVariable_1<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainMenuPromo = value;
}
inline void GlobalNamespace::DlcPromoPanelModel::_ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                       ::GlobalNamespace::IAnalyticsModel* analyticsModel,
                                                       ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>* defaultDlcPromoPanels,
                                                       ::GlobalNamespace::PlayerDataModel* playerDataModel, ::Analytics::Model::TelemetryModel* telemetryModel,
                                                       ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
          { ".ctor",
            {},
            { ::i2c::type_of<::GlobalNamespace::IAdditionalContentModel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IAnalyticsModel*>(),
              ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(),
              ::i2c::type_of<::Analytics::Model::TelemetryModel*>(), ::i2c::type_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalContentModel, beatmapLevelsModel, analyticsModel, defaultDlcPromoPanels, playerDataModel, telemetryModel,
                                                   metaRemoteAssetsManager);
}
inline void GlobalNamespace::DlcPromoPanelModel::Zenject_IInitializable_Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "Zenject.IInitializable.Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::RequestNextPromo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "RequestNextPromo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::RunModelDataUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "RunModelDataUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdateModelDataAsync(::System::Threading::Tasks::Task* previousTask,
                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                              { "UpdateModelDataAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, previousTask, cancellationToken);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "HandleAdditionalContentModelDidInvalidateData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleDidCatalogLoadOrUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "HandleDidCatalogLoadOrUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdateDlcPromoPanelDataAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                                                         { "UpdateDlcPromoPanelDataAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdatePromoInfosAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "UpdatePromoInfosAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* GlobalNamespace::DlcPromoPanelModel::LoadPackPromoInfoAsync(::GlobalNamespace::PackDefinitionSO* pack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "LoadPackPromoInfoAsync", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>(this, ___internal_method, pack);
}
inline ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData GlobalNamespace::DlcPromoPanelModel::CreateBannerData(::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "CreateBannerData", {}, { ::i2c::type_of<::GlobalNamespace::PromoBannerInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData>(nullptr, ___internal_method, promoBannerInfo);
}
inline ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>> GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBannerInternal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "GetPackDataForMainMenuPromoBannerInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>>(this, ___internal_method);
}
inline bool GlobalNamespace::DlcPromoPanelModel::TryGetPromoGroupId(::StringW promoId, ::by_ref<::StringW> promoGroupId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                                                         { "TryGetPromoGroupId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, promoId, promoGroupId);
}
inline void GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* promoInfo, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                              { "MainMenuDlcPromoBannerWasShown", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, promoInfo, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* promoInfo, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                              { "MainMenuDlcPromoBannerWasPressed", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, promoInfo, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                                                         { "BuyLevelButtonWasPressed",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pack, level, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                              { "BuyLevelButtonWasShown", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                       { "BuyPackButtonWasPressed", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pack, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                              { "BuyPackButtonWasShown", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pack, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::LevelPackWasPurchased(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "LevelPackWasPurchased", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pack);
}
inline void GlobalNamespace::DlcPromoPanelModel::LevelWasPurchased(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                              { "LevelWasPurchased", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pack, level);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleColdplayBuyClicked(::StringW itemId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "HandleColdplayBuyClicked", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemId);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleColdplayPurchased(::StringW itemId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "HandleColdplayPurchased", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemId);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(),
                                                           { "GetExperimentEventData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(nullptr, ___internal_method, itemId, page, customText);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdateOwnedPacksAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DlcPromoPanelModel*>(), { "UpdateOwnedPacksAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::DlcPromoPanelModel* GlobalNamespace::DlcPromoPanelModel::New_ctor(
    ::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IAnalyticsModel* analyticsModel,
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>* defaultDlcPromoPanels, ::GlobalNamespace::PlayerDataModel* playerDataModel,
    ::Analytics::Model::TelemetryModel* telemetryModel, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DlcPromoPanelModel*>(additionalContentModel, beatmapLevelsModel, analyticsModel, defaultDlcPromoPanels, playerDataModel,
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
