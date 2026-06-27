#pragma once
// IWYU pragma private; include "GlobalNamespace/DlcPromoPanelModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelModel)
namespace Analytics::Model {
class TelemetryModel;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace GlobalNamespace {
class DlcPromoPanelModel_PromoInfo;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateModelDataAsync_d__26;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdatePromoInfosAsync_d__30;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c__DisplayClass30_0;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c__DisplayClass32_0;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c__DisplayClass32_1;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
template<typename T>
class ObservableVariable_1;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
class PackPromoInfoSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class PromoBannerInfoSO;
}
namespace GlobalNamespace {
struct PromoInfo_DlcPromoPanelModel_BannerData;
}
namespace GlobalNamespace {
struct PromoInfo_DlcPromoPanelModel_PromoType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Random;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class Sprite;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
struct PromoInfo_DlcPromoPanelModel_PromoType;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class DlcPromoPanelModel_PromoInfo;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c__DisplayClass30_0;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c__DisplayClass32_0;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c__DisplayClass32_1;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateModelDataAsync_d__26;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdatePromoInfosAsync_d__30;
}
namespace GlobalNamespace {
struct PromoInfo_DlcPromoPanelModel_BannerData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel_PromoInfo);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel___c);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_0);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_1);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30);
MARK_VAL_T(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/PromoInfo/BannerData
struct CORDL_TYPE PromoInfo_DlcPromoPanelModel_BannerData {
public:
// Declarations
/// @brief Method .ctor, addr 0x3690b5c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Sprite*  image, ::StringW  promoText, float_t  promoTextPosition) ;

/// @brief Method .ctor, addr 0x3690b68, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::PromoBannerInfoSO*  promoBannerInfo) ;

// Ctor Parameters []
// @brief default ctor
constexpr PromoInfo_DlcPromoPanelModel_BannerData() ;

// Ctor Parameters [CppParam { name: "image", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "promoText", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "promoTextPosition", ty: "float_t", modifiers: "", def_value: None }]
constexpr PromoInfo_DlcPromoPanelModel_BannerData(::UnityW<::UnityEngine::Sprite>  image, ::StringW  promoText, float_t  promoTextPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15182};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field image, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  image;

/// @brief Field promoText, offset: 0x8, size: 0x8, def value: None
 ::StringW  promoText;

/// @brief Field promoTextPosition, offset: 0x10, size: 0x4, def value: None
 float_t  promoTextPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData, image) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData, promoText) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData, promoTextPosition) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/PromoInfo/PromoType
struct CORDL_TYPE PromoInfo_DlcPromoPanelModel_PromoType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PromoInfo_DlcPromoPanelModel_PromoType_Unwrapped
enum struct __PromoInfo_DlcPromoPanelModel_PromoType_Unwrapped : int32_t {
__E_Pack = static_cast<int32_t>(0x0),
__E_Level = static_cast<int32_t>(0x1),
__E_Store = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PromoInfo_DlcPromoPanelModel_PromoType_Unwrapped () const noexcept {
return static_cast<__PromoInfo_DlcPromoPanelModel_PromoType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PromoInfo_DlcPromoPanelModel_PromoType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PromoInfo_DlcPromoPanelModel_PromoType(int32_t  value__) noexcept;

/// @brief Field Level value: I32(1)
static ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType const Level;

/// @brief Field Pack value: I32(0)
static ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType const Pack;

/// @brief Field Store value: I32(2)
static ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType const Store;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies DlcPromoPanelModel::PromoInfo::BannerData, DlcPromoPanelModel::PromoInfo::PromoType, PlayerSensitivityFlag, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel/PromoInfo
class CORDL_TYPE DlcPromoPanelModel_PromoInfo : public ::System::Object {
public:
// Declarations
using BannerData = ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData;

using PromoType = ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType;

/// @brief Field banner, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_banner, put=__cordl_internal_set_banner)) ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData  banner;

/// @brief Field contentRating, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_contentRating, put=__cordl_internal_set_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag  contentRating;

/// @brief Field maxDisplayCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDisplayCount, put=__cordl_internal_set_maxDisplayCount)) int32_t  maxDisplayCount;

/// @brief Field priority, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) int32_t  priority;

/// @brief Field promoId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_promoId, put=__cordl_internal_set_promoId)) ::StringW  promoId;

/// @brief Field promoType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_promoType, put=__cordl_internal_set_promoType)) ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType  promoType;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::StringW  target;

static inline ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* New_ctor(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType  promoType, ::StringW  promoId, ::StringW  target, ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData  banner, ::GlobalNamespace::PlayerSensitivityFlag  contentRating, int32_t  maxDisplayCount, int32_t  priority) ;

constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData const& __cordl_internal_get_banner() const;

constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData& __cordl_internal_get_banner() ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_contentRating() const;

constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_contentRating() ;

constexpr int32_t const& __cordl_internal_get_maxDisplayCount() const;

constexpr int32_t& __cordl_internal_get_maxDisplayCount() ;

constexpr int32_t const& __cordl_internal_get_priority() const;

constexpr int32_t& __cordl_internal_get_priority() ;

constexpr ::StringW const& __cordl_internal_get_promoId() const;

constexpr ::StringW& __cordl_internal_get_promoId() ;

constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType const& __cordl_internal_get_promoType() const;

constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType& __cordl_internal_get_promoType() ;

constexpr ::StringW const& __cordl_internal_get_target() const;

constexpr ::StringW& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_banner(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData  value) ;

constexpr void __cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag  value) ;

constexpr void __cordl_internal_set_maxDisplayCount(int32_t  value) ;

constexpr void __cordl_internal_set_priority(int32_t  value) ;

constexpr void __cordl_internal_set_promoId(::StringW  value) ;

constexpr void __cordl_internal_set_promoType(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType  value) ;

constexpr void __cordl_internal_set_target(::StringW  value) ;

/// @brief Method .ctor, addr 0x3690b38, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType  promoType, ::StringW  promoId, ::StringW  target, ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData  banner, ::GlobalNamespace::PlayerSensitivityFlag  contentRating, int32_t  maxDisplayCount, int32_t  priority) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel_PromoInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel_PromoInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DlcPromoPanelModel_PromoInfo(DlcPromoPanelModel_PromoInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel_PromoInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DlcPromoPanelModel_PromoInfo(DlcPromoPanelModel_PromoInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15184};

/// @brief Field promoType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType  ___promoType;

/// @brief Field promoId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___promoId;

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___target;

/// @brief Field priority, offset: 0x28, size: 0x4, def value: None
 int32_t  ___priority;

/// @brief Field maxDisplayCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___maxDisplayCount;

/// @brief Field contentRating, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::PlayerSensitivityFlag  ___contentRating;

/// @brief Field banner, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData  ___banner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___promoType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___promoId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___priority) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___maxDisplayCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___contentRating) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___banner) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel_PromoInfo, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel/<>c
class CORDL_TYPE DlcPromoPanelModel___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::DlcPromoPanelModel___c*  __9;

/// @brief Field <>9__30_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_0, put=setStaticF___9__30_0)) ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>,bool>*  __9__30_0;

/// @brief Field <>9__30_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_1, put=setStaticF___9__30_1)) ::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  __9__30_1;

static inline ::GlobalNamespace::DlcPromoPanelModel___c* New_ctor() ;

/// @brief Method <UpdatePromoInfosAsync>b__30_0, addr 0x3690be0, size 0x28, virtual false, abstract: false, final false
inline bool _UpdatePromoInfosAsync_b__30_0(::GlobalNamespace::PackDefinitionSO*  packDefinition) ;

/// @brief Method <UpdatePromoInfosAsync>b__30_1, addr 0x3690c08, size 0x2c, virtual false, abstract: false, final false
inline int32_t _UpdatePromoInfosAsync_b__30_1(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  a, ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  b) ;

/// @brief Method .ctor, addr 0x3690bdc, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::DlcPromoPanelModel___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>,bool>* getStaticF___9__30_0() ;

static inline ::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* getStaticF___9__30_1() ;

static inline void setStaticF___9(::GlobalNamespace::DlcPromoPanelModel___c*  value) ;

static inline void setStaticF___9__30_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>,bool>*  value) ;

static inline void setStaticF___9__30_1(::System::Comparison_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DlcPromoPanelModel___c(DlcPromoPanelModel___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DlcPromoPanelModel___c(DlcPromoPanelModel___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15185};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel___c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel/<>c__DisplayClass30_0
class CORDL_TYPE DlcPromoPanelModel___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field dlcPromoPanel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dlcPromoPanel, put=__cordl_internal_set_dlcPromoPanel)) ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>  dlcPromoPanel;

static inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <UpdatePromoInfosAsync>b__2, addr 0x3690c38, size 0x24, virtual false, abstract: false, final false
inline bool _UpdatePromoInfosAsync_b__2(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  promoInfo) ;

constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& __cordl_internal_get_dlcPromoPanel() const;

constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& __cordl_internal_get_dlcPromoPanel() ;

constexpr void __cordl_internal_set_dlcPromoPanel(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>  value) ;

/// @brief Method .ctor, addr 0x3690c34, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c__DisplayClass30_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DlcPromoPanelModel___c__DisplayClass30_0(DlcPromoPanelModel___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c__DisplayClass30_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DlcPromoPanelModel___c__DisplayClass30_0(DlcPromoPanelModel___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15186};

/// @brief Field dlcPromoPanel, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>  ___dlcPromoPanel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0, ___dlcPromoPanel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerSensitivityFlag, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel/<>c__DisplayClass32_0
class CORDL_TYPE DlcPromoPanelModel___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field sensitivityFlag, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensitivityFlag, put=__cordl_internal_set_sensitivityFlag)) ::GlobalNamespace::PlayerSensitivityFlag  sensitivityFlag;

static inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_0* New_ctor() ;

/// @brief Method <GetPackDataForMainMenuPromoBannerInternal>b__0, addr 0x3690c5c, size 0x20, virtual false, abstract: false, final false
inline bool _GetPackDataForMainMenuPromoBannerInternal_b__0(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  x) ;

/// @brief Method <GetPackDataForMainMenuPromoBannerInternal>b__1, addr 0x3690c7c, size 0x20, virtual false, abstract: false, final false
inline bool _GetPackDataForMainMenuPromoBannerInternal_b__1(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  x) ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_sensitivityFlag() const;

constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_sensitivityFlag() ;

constexpr void __cordl_internal_set_sensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag  value) ;

/// @brief Method .ctor, addr 0x368fbfc, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DlcPromoPanelModel___c__DisplayClass32_0(DlcPromoPanelModel___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DlcPromoPanelModel___c__DisplayClass32_0(DlcPromoPanelModel___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15187};

/// @brief Field sensitivityFlag, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::PlayerSensitivityFlag  ___sensitivityFlag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_0, ___sensitivityFlag) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel/<>c__DisplayClass32_1
class CORDL_TYPE DlcPromoPanelModel___c__DisplayClass32_1 : public ::System::Object {
public:
// Declarations
/// @brief Field priorityPromoInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_priorityPromoInfo, put=__cordl_internal_set_priorityPromoInfo)) ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  priorityPromoInfo;

static inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_1* New_ctor() ;

/// @brief Method <GetPackDataForMainMenuPromoBannerInternal>b__2, addr 0x3690c9c, size 0x24, virtual false, abstract: false, final false
inline bool _GetPackDataForMainMenuPromoBannerInternal_b__2(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  pi) ;

constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* const& __cordl_internal_get_priorityPromoInfo() const;

constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*& __cordl_internal_get_priorityPromoInfo() ;

constexpr void __cordl_internal_set_priorityPromoInfo(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  value) ;

/// @brief Method .ctor, addr 0x368fc00, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel___c__DisplayClass32_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c__DisplayClass32_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DlcPromoPanelModel___c__DisplayClass32_1(DlcPromoPanelModel___c__DisplayClass32_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c__DisplayClass32_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DlcPromoPanelModel___c__DisplayClass32_1(DlcPromoPanelModel___c__DisplayClass32_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15188};

/// @brief Field priorityPromoInfo, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  ___priorityPromoInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_1, ___priorityPromoInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_1, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<HandleAdditionalContentModelDidInvalidateData>d__27
struct CORDL_TYPE DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3690cc0, size 0x278, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3690f38, size 0x8, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::DlcPromoPanelModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::DlcPromoPanelModel*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<LoadPackPromoInfoAsync>d__31
struct CORDL_TYPE DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3690f40, size 0x44c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x369138c, size 0x80, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: None }, CppParam { name: "pack", ty: "::UnityW<::GlobalNamespace::PackDefinitionSO>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: None }]
constexpr DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>  __t__builder, ::UnityW<::GlobalNamespace::PackDefinitionSO>  pack, ::GlobalNamespace::DlcPromoPanelModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>  __t__builder;

/// @brief Field pack, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PackDefinitionSO>  pack;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::DlcPromoPanelModel*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31, pack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<UpdateDlcPromoPanelDataAsync>d__29
struct CORDL_TYPE DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x369140c, size 0x684, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3691a90, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>", modifiers: "", def_value: None }]
constexpr DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::DlcPromoPanelModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15191};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::DlcPromoPanelModel*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<UpdateModelDataAsync>d__26
struct CORDL_TYPE DlcPromoPanelModel__UpdateModelDataAsync_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x3691afc, size 0x668, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x3692164, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel__UpdateModelDataAsync_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "previousTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr DlcPromoPanelModel__UpdateModelDataAsync_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  previousTask, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::DlcPromoPanelModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15192};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field previousTask, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  previousTask;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::DlcPromoPanelModel*  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26, previousTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<UpdateOwnedPacksAsync>d__45
struct CORDL_TYPE DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x36921d0, size 0x7bc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x369298c, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*", modifiers: "", def_value: None }, CppParam { name: "_allPromoInfos_5__3", ty: "::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus,::Array<::GlobalNamespace::EntitlementStatus>*>>", modifiers: "", def_value: None }]
constexpr DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::DlcPromoPanelModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  _newNotOwnedMusicPackPromoInfos_5__2, ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>  _allPromoInfos_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus,::Array<::GlobalNamespace::EntitlementStatus>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15193};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::DlcPromoPanelModel*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <newNotOwnedMusicPackPromoInfos>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  _newNotOwnedMusicPackPromoInfos_5__2;

/// @brief Field <allPromoInfos>5__3, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>  _allPromoInfos_5__3;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus,::Array<::GlobalNamespace::EntitlementStatus>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45, _newNotOwnedMusicPackPromoInfos_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45, _allPromoInfos_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<UpdatePromoInfosAsync>d__30
struct CORDL_TYPE DlcPromoPanelModel__UpdatePromoInfosAsync_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x36929f8, size 0xfc8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x36939c0, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel__UpdatePromoInfosAsync_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_validPackDefinitions_5__2", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>,::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>>", modifiers: "", def_value: None }]
constexpr DlcPromoPanelModel__UpdatePromoInfosAsync_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::DlcPromoPanelModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*  _validPackDefinitions_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>,::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15194};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::DlcPromoPanelModel*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <validPackDefinitions>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*  _validPackDefinitions_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>,::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30, _validPackDefinitions_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel
class CORDL_TYPE DlcPromoPanelModel : public ::System::Object {
public:
// Declarations
using PromoInfo = ::GlobalNamespace::DlcPromoPanelModel_PromoInfo;

using _HandleAdditionalContentModelDidInvalidateData_d__27 = ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27;

using _LoadPackPromoInfoAsync_d__31 = ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31;

using _UpdateDlcPromoPanelDataAsync_d__29 = ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29;

using _UpdateModelDataAsync_d__26 = ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26;

using _UpdateOwnedPacksAsync_d__45 = ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45;

using _UpdatePromoInfosAsync_d__30 = ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30;

using __c = ::GlobalNamespace::DlcPromoPanelModel___c;

using __c__DisplayClass30_0 = ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0;

using __c__DisplayClass32_0 = ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_0;

using __c__DisplayClass32_1 = ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_1;

/// @brief Field _additionalContentModel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__additionalContentModel, put=__cordl_internal_set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel*  _additionalContentModel;

/// @brief Field _analyticsModel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__analyticsModel, put=__cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

/// @brief Field _beatmapLevelsModel, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapLevelsModel, put=__cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel*  _beatmapLevelsModel;

/// @brief Field _currentDataLoadCancellationTokenSource, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentDataLoadCancellationTokenSource, put=__cordl_internal_set__currentDataLoadCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _currentDataLoadCancellationTokenSource;

/// @brief Field _currentDataLoadTask, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentDataLoadTask, put=__cordl_internal_set__currentDataLoadTask)) ::System::Threading::Tasks::Task*  _currentDataLoadTask;

/// @brief Field _defaultDlcPromoPanels, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultDlcPromoPanels, put=__cordl_internal_set__defaultDlcPromoPanels)) ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  _defaultDlcPromoPanels;

/// @brief Field _dlcPromoPanels, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__dlcPromoPanels, put=__cordl_internal_set__dlcPromoPanels)) ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  _dlcPromoPanels;

/// @brief Field _loadDlcPromoPanelDataHandle, offset 0x88, size 0x18 
 __declspec(property(get=__cordl_internal_get__loadDlcPromoPanelDataHandle, put=__cordl_internal_set__loadDlcPromoPanelDataHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  _loadDlcPromoPanelDataHandle;

/// @brief Field _loadPackPromoInfoHandles, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadPackPromoInfoHandles, put=__cordl_internal_set__loadPackPromoInfoHandles)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>*  _loadPackPromoInfoHandles;

/// @brief Field _metaRemoteAssetsManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__metaRemoteAssetsManager, put=__cordl_internal_set__metaRemoteAssetsManager)) ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  _metaRemoteAssetsManager;

/// @brief Field _notOwnedMusicPackPromoInfos, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__notOwnedMusicPackPromoInfos, put=__cordl_internal_set__notOwnedMusicPackPromoInfos)) ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>  _notOwnedMusicPackPromoInfos;

/// @brief Field _playerDataModel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerDataModel, put=__cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel>  _playerDataModel;

/// @brief Field _priorityPromoInfos, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__priorityPromoInfos, put=__cordl_internal_set__priorityPromoInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  _priorityPromoInfos;

/// @brief Field _promoInfos, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__promoInfos, put=__cordl_internal_set__promoInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  _promoInfos;

/// @brief Field _random, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__random, put=__cordl_internal_set__random)) ::System::Random*  _random;

/// @brief Field _telemetryModel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryModel, put=__cordl_internal_set__telemetryModel)) ::Analytics::Model::TelemetryModel*  _telemetryModel;

/// @brief Field _updatingNotOwnedPacks, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__updatingNotOwnedPacks, put=__cordl_internal_set__updatingNotOwnedPacks)) bool  _updatingNotOwnedPacks;

/// @brief Field mainMenuPromo, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainMenuPromo, put=__cordl_internal_set_mainMenuPromo)) ::GlobalNamespace::ObservableVariable_1<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>>>*  mainMenuPromo;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Method BuyLevelButtonWasPressed, addr 0x36901cc, size 0x17c, virtual false, abstract: false, final false
inline void BuyLevelButtonWasPressed(::GlobalNamespace::BeatmapLevelPack*  pack, ::GlobalNamespace::BeatmapLevel*  level, ::StringW  page, ::StringW  customText) ;

/// @brief Method BuyLevelButtonWasShown, addr 0x36904a0, size 0x100, virtual false, abstract: false, final false
inline void BuyLevelButtonWasShown(::GlobalNamespace::BeatmapLevel*  level, ::StringW  page, ::StringW  customText) ;

/// @brief Method BuyPackButtonWasPressed, addr 0x36905a0, size 0x148, virtual false, abstract: false, final false
inline void BuyPackButtonWasPressed(::GlobalNamespace::BeatmapLevelPack*  pack, ::StringW  page, ::StringW  customText) ;

/// @brief Method BuyPackButtonWasShown, addr 0x36906e8, size 0x100, virtual false, abstract: false, final false
inline void BuyPackButtonWasShown(::GlobalNamespace::BeatmapLevelPack*  pack, ::StringW  page, ::StringW  customText) ;

/// @brief Method GetExperimentEventData, addr 0x368fe64, size 0x180, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetExperimentEventData(::StringW  itemId, ::StringW  page, ::StringW  customText) ;

/// @brief Method GetPackDataForMainMenuPromoBannerInternal, addr 0x368f2e0, size 0x4d0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>> GetPackDataForMainMenuPromoBannerInternal() ;

/// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x368f8e0, size 0xa4, virtual false, abstract: false, final false
inline void HandleAdditionalContentModelDidInvalidateData() ;

/// @brief Method HandleColdplayBuyClicked, addr 0x3690348, size 0x158, virtual false, abstract: false, final false
inline void HandleColdplayBuyClicked(::StringW  itemId) ;

/// @brief Method HandleColdplayPurchased, addr 0x3690868, size 0x158, virtual false, abstract: false, final false
inline void HandleColdplayPurchased(::StringW  itemId) ;

/// @brief Method HandleDidCatalogLoadOrUpdate, addr 0x368f984, size 0x4, virtual false, abstract: false, final false
inline void HandleDidCatalogLoadOrUpdate() ;

/// @brief Method LevelPackWasPurchased, addr 0x36907e8, size 0x80, virtual false, abstract: false, final false
inline void LevelPackWasPurchased(::GlobalNamespace::BeatmapLevelPack*  pack) ;

/// @brief Method LevelWasPurchased, addr 0x36909c0, size 0xb4, virtual false, abstract: false, final false
inline void LevelWasPurchased(::GlobalNamespace::BeatmapLevelPack*  pack, ::GlobalNamespace::BeatmapLevel*  level) ;

/// @brief Method LoadPackPromoInfoAsync, addr 0x368fb0c, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* LoadPackPromoInfoAsync(::GlobalNamespace::PackDefinitionSO*  pack) ;

/// @brief Method MainMenuDlcPromoBannerWasPressed, addr 0x368ffe4, size 0x1e8, virtual false, abstract: false, final false
inline void MainMenuDlcPromoBannerWasPressed(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  promoInfo, ::StringW  customText) ;

/// @brief Method MainMenuDlcPromoBannerWasShown, addr 0x368fc7c, size 0x1e8, virtual false, abstract: false, final false
inline void MainMenuDlcPromoBannerWasShown(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*  promoInfo, ::StringW  customText) ;

static inline ::GlobalNamespace::DlcPromoPanelModel* New_ctor(::GlobalNamespace::IAdditionalContentModel*  additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel*  beatmapLevelsModel, ::GlobalNamespace::IAnalyticsModel*  analyticsModel, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*  defaultDlcPromoPanels, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::Analytics::Model::TelemetryModel*  telemetryModel, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  metaRemoteAssetsManager) ;

/// @brief Method RequestNextPromo, addr 0x368f7b0, size 0x6c, virtual false, abstract: false, final false
inline void RequestNextPromo() ;

/// @brief Method RunModelDataUpdate, addr 0x368f138, size 0xf0, virtual false, abstract: false, final false
inline void RunModelDataUpdate() ;

/// @brief Method Tick, addr 0x368f228, size 0xb8, virtual false, abstract: false, final false
inline void Tick() ;

/// @brief Method TryGetPromoGroupId, addr 0x368fc04, size 0x78, virtual false, abstract: false, final false
static inline bool TryGetPromoGroupId(::StringW  promoId, ::ByRef<::StringW>  promoGroupId) ;

/// @brief Method UpdateDlcPromoPanelDataAsync, addr 0x368f988, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateDlcPromoPanelDataAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UpdateModelDataAsync, addr 0x368f81c, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateModelDataAsync(::System::Threading::Tasks::Task*  previousTask, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UpdateOwnedPacksAsync, addr 0x3690a74, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateOwnedPacksAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UpdatePromoInfosAsync, addr 0x368fa4c, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdatePromoInfosAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Zenject.IInitializable.Initialize, addr 0x368f128, size 0x10, virtual true, abstract: false, final true
inline void Zenject_IInitializable_Initialize() ;

constexpr ::GlobalNamespace::IAdditionalContentModel* const& __cordl_internal_get__additionalContentModel() const;

constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel() ;

constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel() ;

constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__currentDataLoadCancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__currentDataLoadCancellationTokenSource() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__currentDataLoadTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__currentDataLoadTask() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*> const& __cordl_internal_get__defaultDlcPromoPanels() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>& __cordl_internal_get__defaultDlcPromoPanels() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*> const& __cordl_internal_get__dlcPromoPanels() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>& __cordl_internal_get__dlcPromoPanels() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*> const& __cordl_internal_get__loadDlcPromoPanelDataHandle() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>& __cordl_internal_get__loadDlcPromoPanelDataHandle() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>* const& __cordl_internal_get__loadPackPromoInfoHandles() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>*& __cordl_internal_get__loadPackPromoInfoHandles() ;

constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* const& __cordl_internal_get__metaRemoteAssetsManager() const;

constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*& __cordl_internal_get__metaRemoteAssetsManager() ;

constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> const& __cordl_internal_get__notOwnedMusicPackPromoInfos() const;

constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>& __cordl_internal_get__notOwnedMusicPackPromoInfos() ;

constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* const& __cordl_internal_get__priorityPromoInfos() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*& __cordl_internal_get__priorityPromoInfos() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* const& __cordl_internal_get__promoInfos() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*& __cordl_internal_get__promoInfos() ;

constexpr ::System::Random* const& __cordl_internal_get__random() const;

constexpr ::System::Random*& __cordl_internal_get__random() ;

constexpr ::Analytics::Model::TelemetryModel* const& __cordl_internal_get__telemetryModel() const;

constexpr ::Analytics::Model::TelemetryModel*& __cordl_internal_get__telemetryModel() ;

constexpr bool const& __cordl_internal_get__updatingNotOwnedPacks() const;

constexpr bool& __cordl_internal_get__updatingNotOwnedPacks() ;

constexpr ::GlobalNamespace::ObservableVariable_1<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>>>* const& __cordl_internal_get_mainMenuPromo() const;

constexpr ::GlobalNamespace::ObservableVariable_1<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>>>*& __cordl_internal_get_mainMenuPromo() ;

constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value) ;

constexpr void __cordl_internal_set__currentDataLoadCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__currentDataLoadTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__defaultDlcPromoPanels(::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  value) ;

constexpr void __cordl_internal_set__dlcPromoPanels(::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  value) ;

constexpr void __cordl_internal_set__loadDlcPromoPanelDataHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  value) ;

constexpr void __cordl_internal_set__loadPackPromoInfoHandles(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>*  value) ;

constexpr void __cordl_internal_set__metaRemoteAssetsManager(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  value) ;

constexpr void __cordl_internal_set__notOwnedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>  value) ;

constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel>  value) ;

constexpr void __cordl_internal_set__priorityPromoInfos(::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  value) ;

constexpr void __cordl_internal_set__promoInfos(::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  value) ;

constexpr void __cordl_internal_set__random(::System::Random*  value) ;

constexpr void __cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel*  value) ;

constexpr void __cordl_internal_set__updatingNotOwnedPacks(bool  value) ;

constexpr void __cordl_internal_set_mainMenuPromo(::GlobalNamespace::ObservableVariable_1<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>>>*  value) ;

/// @brief Method .ctor, addr 0x368ee5c, size 0x2cc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::IAdditionalContentModel*  additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel*  beatmapLevelsModel, ::GlobalNamespace::IAnalyticsModel*  analyticsModel, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*  defaultDlcPromoPanels, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::Analytics::Model::TelemetryModel*  telemetryModel, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  metaRemoteAssetsManager) ;

/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DlcPromoPanelModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DlcPromoPanelModel(DlcPromoPanelModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DlcPromoPanelModel(DlcPromoPanelModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15195};

/// @brief Field kDefaultMaxDisplayCount offset 0xffffffff size 0x4
static constexpr int32_t  kDefaultMaxDisplayCount{static_cast<int32_t>(0x3)};

/// @brief Field kMinNumberOfNotOwnedPacks offset 0xffffffff size 0x4
static constexpr int32_t  kMinNumberOfNotOwnedPacks{static_cast<int32_t>(0x3)};

/// @brief Field _additionalContentModel, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::IAdditionalContentModel*  ____additionalContentModel;

/// @brief Field _beatmapLevelsModel, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::BeatmapLevelsModel*  ____beatmapLevelsModel;

/// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::IAnalyticsModel*  ____analyticsModel;

/// @brief Field _playerDataModel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerDataModel>  ____playerDataModel;

/// @brief Field _telemetryModel, offset: 0x30, size: 0x8, def value: None
 ::Analytics::Model::TelemetryModel*  ____telemetryModel;

/// @brief Field _metaRemoteAssetsManager, offset: 0x38, size: 0x8, def value: None
 ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  ____metaRemoteAssetsManager;

/// @brief Field _defaultDlcPromoPanels, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  ____defaultDlcPromoPanels;

/// @brief Field _dlcPromoPanels, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>,::Array<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  ____dlcPromoPanels;

/// @brief Field _notOwnedMusicPackPromoInfos, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>  ____notOwnedMusicPackPromoInfos;

/// @brief Field _updatingNotOwnedPacks, offset: 0x58, size: 0x1, def value: None
 bool  ____updatingNotOwnedPacks;

/// @brief Field _random, offset: 0x60, size: 0x8, def value: None
 ::System::Random*  ____random;

/// @brief Field _promoInfos, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  ____promoInfos;

/// @brief Field _priorityPromoInfos, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  ____priorityPromoInfos;

/// @brief Field _currentDataLoadTask, offset: 0x78, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____currentDataLoadTask;

/// @brief Field _currentDataLoadCancellationTokenSource, offset: 0x80, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____currentDataLoadCancellationTokenSource;

/// @brief Field _loadDlcPromoPanelDataHandle, offset: 0x88, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>*>  ____loadDlcPromoPanelDataHandle;

/// @brief Field _loadPackPromoInfoHandles, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>*  ____loadPackPromoInfoHandles;

/// @brief Field mainMenuPromo, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::ObservableVariable_1<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>>>*  ___mainMenuPromo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____additionalContentModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____beatmapLevelsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____analyticsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____playerDataModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____telemetryModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____metaRemoteAssetsManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____defaultDlcPromoPanels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____dlcPromoPanels) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____notOwnedMusicPackPromoInfos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____updatingNotOwnedPacks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____random) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____promoInfos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____priorityPromoInfos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____currentDataLoadTask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____currentDataLoadCancellationTokenSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____loadDlcPromoPanelDataHandle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____loadPackPromoInfoHandles) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ___mainMenuPromo) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel, 0xb0>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType, "", "DlcPromoPanelModel/PromoInfo/PromoType");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel*, "", "DlcPromoPanelModel");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel_PromoInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, "", "DlcPromoPanelModel/PromoInfo");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel___c*, "", "DlcPromoPanelModel/<>c");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass30_0*, "", "DlcPromoPanelModel/<>c__DisplayClass30_0");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_0*, "", "DlcPromoPanelModel/<>c__DisplayClass32_0");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass32_1*, "", "DlcPromoPanelModel/<>c__DisplayClass32_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__27, "", "DlcPromoPanelModel/<HandleAdditionalContentModelDidInvalidateData>d__27");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__31, "", "DlcPromoPanelModel/<LoadPackPromoInfoAsync>d__31");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__29, "", "DlcPromoPanelModel/<UpdateDlcPromoPanelDataAsync>d__29");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__26, "", "DlcPromoPanelModel/<UpdateModelDataAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__45, "", "DlcPromoPanelModel/<UpdateOwnedPacksAsync>d__45");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__30, "", "DlcPromoPanelModel/<UpdatePromoInfosAsync>d__30");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_BannerData, "", "DlcPromoPanelModel/PromoInfo/BannerData");
