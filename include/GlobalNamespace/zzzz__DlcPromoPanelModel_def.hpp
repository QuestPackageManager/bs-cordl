#pragma once
// IWYU pragma private; include "GlobalNamespace/DlcPromoPanelModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelModel)
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager;
}
namespace BeatSaber::Init {
class IPlatformInit;
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
struct DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__InitializeInternalAsync_d__28;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__Initialize_d__26;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateModelDataAsync_d__29;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdatePromoInfosAsync_d__32;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c;
}
namespace GlobalNamespace {
class DlcPromoPanelModel___c__DisplayClass35_0;
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
class PackDefinitionSO;
}
namespace GlobalNamespace {
class PackPromoInfoSO_LevelPromoInfo;
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
struct PromoInfo_DlcPromoPanelModel_PromoType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Random;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class Sprite;
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
class DlcPromoPanelModel___c__DisplayClass35_0;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__InitializeInternalAsync_d__28;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__Initialize_d__26;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateModelDataAsync_d__29;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43;
}
namespace GlobalNamespace {
struct DlcPromoPanelModel__UpdatePromoInfosAsync_d__32;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel_PromoInfo);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel___c);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__28);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__Initialize_d__26);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__29);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43);
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__32);
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
  constexpr operator __PromoInfo_DlcPromoPanelModel_PromoType_Unwrapped() const noexcept {
    return static_cast<__PromoInfo_DlcPromoPanelModel_PromoType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PromoInfo_DlcPromoPanelModel_PromoType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PromoInfo_DlcPromoPanelModel_PromoType(int32_t value__) noexcept;

  /// @brief Field Level value: I32(1)
  static ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType const Level;

  /// @brief Field Pack value: I32(0)
  static ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType const Pack;

  /// @brief Field Store value: I32(2)
  static ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType const Store;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13241 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies DlcPromoPanelModel::PromoInfo::PromoType, PlayerSensitivityFlag, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel/PromoInfo
class CORDL_TYPE DlcPromoPanelModel_PromoInfo : public ::System::Object {
public:
  // Declarations
  using PromoType = ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType;

  /// @brief Field bannerImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bannerImage, put = __cordl_internal_set_bannerImage)) ::UnityW<::UnityEngine::Sprite> bannerImage;

  /// @brief Field bannerPromoText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bannerPromoText, put = __cordl_internal_set_bannerPromoText)) ::StringW bannerPromoText;

  /// @brief Field bannerPromoTextPosition, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_bannerPromoTextPosition, put = __cordl_internal_set_bannerPromoTextPosition)) float_t bannerPromoTextPosition;

  /// @brief Field contentRating, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_contentRating, put = __cordl_internal_set_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field promoType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_promoType, put = __cordl_internal_set_promoType)) ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType promoType;

  static inline ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* New_ctor(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* levelPromoInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  static inline ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* New_ctor(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType promoType, ::StringW id,
                                                                          ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_bannerImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_bannerImage();

  constexpr ::StringW const& __cordl_internal_get_bannerPromoText() const;

  constexpr ::StringW& __cordl_internal_get_bannerPromoText();

  constexpr float_t const& __cordl_internal_get_bannerPromoTextPosition() const;

  constexpr float_t& __cordl_internal_get_bannerPromoTextPosition();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_contentRating() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_contentRating();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType const& __cordl_internal_get_promoType() const;

  constexpr ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType& __cordl_internal_get_promoType();

  constexpr void __cordl_internal_set_bannerImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_bannerPromoText(::StringW value);

  constexpr void __cordl_internal_set_bannerPromoTextPosition(float_t value);

  constexpr void __cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_promoType(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType value);

  /// @brief Method .ctor, addr 0x26f6b54, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* levelPromoInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  /// @brief Method .ctor, addr 0x26f6af0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType promoType, ::StringW id, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo,
                    ::GlobalNamespace::PlayerSensitivityFlag contentRating);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel_PromoInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel_PromoInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DlcPromoPanelModel_PromoInfo(DlcPromoPanelModel_PromoInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel_PromoInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DlcPromoPanelModel_PromoInfo(DlcPromoPanelModel_PromoInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13242 };

  /// @brief Field promoType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType ___promoType;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field contentRating, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___contentRating;

  /// @brief Field bannerImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___bannerImage;

  /// @brief Field bannerPromoText, offset: 0x30, size: 0x8, def value: None
  ::StringW ___bannerPromoText;

  /// @brief Field bannerPromoTextPosition, offset: 0x38, size: 0x4, def value: None
  float_t ___bannerPromoTextPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___promoType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___contentRating) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___bannerImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___bannerPromoText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel_PromoInfo, ___bannerPromoTextPosition) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel_PromoInfo, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel/<>c
class CORDL_TYPE DlcPromoPanelModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::DlcPromoPanelModel___c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0)) ::System::Action* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1)) ::System::Action* __9__25_1;

  /// @brief Field <>9__32_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__32_0, put = setStaticF___9__32_0)) ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* __9__32_0;

  static inline ::GlobalNamespace::DlcPromoPanelModel___c* New_ctor();

  /// @brief Method <UpdatePromoInfosAsync>b__32_0, addr 0x26f6c24, size 0x28, virtual false, abstract: false, final false
  inline bool _UpdatePromoInfosAsync_b__32_0(::GlobalNamespace::PackDefinitionSO* packDefinition);

  /// @brief Method <.ctor>b__25_0, addr 0x26f6c1c, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__25_0();

  /// @brief Method <.ctor>b__25_1, addr 0x26f6c20, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__25_1();

  /// @brief Method .ctor, addr 0x26f6c14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::DlcPromoPanelModel___c* getStaticF___9();

  static inline ::System::Action* getStaticF___9__25_0();

  static inline ::System::Action* getStaticF___9__25_1();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* getStaticF___9__32_0();

  static inline void setStaticF___9(::GlobalNamespace::DlcPromoPanelModel___c* value);

  static inline void setStaticF___9__25_0(::System::Action* value);

  static inline void setStaticF___9__25_1(::System::Action* value);

  static inline void setStaticF___9__32_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DlcPromoPanelModel___c(DlcPromoPanelModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DlcPromoPanelModel___c(DlcPromoPanelModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13243 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlayerSensitivityFlag, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel/<>c__DisplayClass35_0
class CORDL_TYPE DlcPromoPanelModel___c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field sensitivityFlag, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sensitivityFlag, put = __cordl_internal_set_sensitivityFlag)) ::GlobalNamespace::PlayerSensitivityFlag sensitivityFlag;

  static inline ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0* New_ctor();

  /// @brief Method <GetPackDataForMainMenuPromoBannerInternal>b__0, addr 0x26f6c54, size 0x24, virtual false, abstract: false, final false
  inline bool _GetPackDataForMainMenuPromoBannerInternal_b__0(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* x);

  /// @brief Method <GetPackDataForMainMenuPromoBannerInternal>b__1, addr 0x26f6c78, size 0x24, virtual false, abstract: false, final false
  inline bool _GetPackDataForMainMenuPromoBannerInternal_b__1(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* x);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_sensitivityFlag() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_sensitivityFlag();

  constexpr void __cordl_internal_set_sensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value);

  /// @brief Method .ctor, addr 0x26f6c4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel___c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DlcPromoPanelModel___c__DisplayClass35_0(DlcPromoPanelModel___c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel___c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DlcPromoPanelModel___c__DisplayClass35_0(DlcPromoPanelModel___c__DisplayClass35_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13244 };

  /// @brief Field sensitivityFlag, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___sensitivityFlag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0, ___sensitivityFlag) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<GetPackDataForMainMenuPromoBanner>d__34
struct CORDL_TYPE DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f6c9c, size 0x270, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f6f0c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>>", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>> __t__builder,
      ::GlobalNamespace::DlcPromoPanelModel* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13245 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<GetPackDataForMainMenuPromoBannerInternal>d__35
struct CORDL_TYPE DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f6f88, size 0x66c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f75f4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,bool>>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>> __t__builder,
      ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13246 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<HandleAdditionalContentModelDidInvalidateData>d__44
struct CORDL_TYPE DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f7670, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f7898, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                    ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13247 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<HandleDidCatalogLoadOrUpdate>d__30
struct CORDL_TYPE DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f78a4, size 0x298, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f7b3c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                   ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13248 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<Initialize>d__26
struct CORDL_TYPE DlcPromoPanelModel__Initialize_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f7b48, size 0x238, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f7d80, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__Initialize_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__Initialize_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13249 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__Initialize_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__Initialize_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__Initialize_d__26, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__Initialize_d__26, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__Initialize_d__26, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<InitializeInternalAsync>d__28
struct CORDL_TYPE DlcPromoPanelModel__InitializeInternalAsync_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f7d8c, size 0x668, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f83f4, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__InitializeInternalAsync_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__InitializeInternalAsync_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13250 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__28, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__28, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__28, __u__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__28, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<LoadPackPromoInfoAsync>d__33
struct CORDL_TYPE DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f845c, size 0x3e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f8840, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: None }, CppParam { name: "pack", ty:
  // "::UnityW<::GlobalNamespace::PackDefinitionSO>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33(int32_t __1__state,
                                                             ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __t__builder,
                                                             ::UnityW<::GlobalNamespace::PackDefinitionSO> pack, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13251 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __t__builder;

  /// @brief Field pack, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PackDefinitionSO> pack;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33, pack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<UpdateDlcPromoPanelDataAsync>d__31
struct CORDL_TYPE DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f88bc, size 0x398, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f8c54, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                   ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13252 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<UpdateModelDataAsync>d__29
struct CORDL_TYPE DlcPromoPanelModel__UpdateModelDataAsync_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f8cbc, size 0x34c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f9008, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__UpdateModelDataAsync_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__UpdateModelDataAsync_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                           ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13253 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__29, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__29, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__29, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<UpdateOwnedPacksAsync>d__43
struct CORDL_TYPE DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f9070, size 0x870, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26f98e0, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*", modifiers: "",
  // def_value: None }, CppParam { name: "_newOwnedMusicPackPromoInfos_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*", modifiers: "", def_value:
  // None }, CppParam { name: "_allPromoInfos_5__4", ty: "::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*,::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus,::Array<::GlobalNamespace::EntitlementStatus>*>>", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
      ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2,
      ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* _newOwnedMusicPackPromoInfos_5__3,
      ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> _allPromoInfos_5__4,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus, ::Array<::GlobalNamespace::EntitlementStatus>*>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13254 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <newNotOwnedMusicPackPromoInfos>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2;

  /// @brief Field <newOwnedMusicPackPromoInfos>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* _newOwnedMusicPackPromoInfos_5__3;

  /// @brief Field <allPromoInfos>5__4, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> _allPromoInfos_5__4;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus, ::Array<::GlobalNamespace::EntitlementStatus>*>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43, _newNotOwnedMusicPackPromoInfos_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43, _newOwnedMusicPackPromoInfos_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43, _allPromoInfos_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelModel/<UpdatePromoInfosAsync>d__32
struct CORDL_TYPE DlcPromoPanelModel__UpdatePromoInfosAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26f9948, size 0xac8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26fa410, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel__UpdatePromoInfosAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "_validPackDefinitions_5__2", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>,::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>>",
  // modifiers: "", def_value: None }]
  constexpr DlcPromoPanelModel__UpdatePromoInfosAsync_d__32(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _validPackDefinitions_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>, ::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13255 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <validPackDefinitions>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _validPackDefinitions_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>, ::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__32, _validPackDefinitions_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__32, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__32, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>, Zenject.IInitializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelModel
class CORDL_TYPE DlcPromoPanelModel : public ::System::Object {
public:
  // Declarations
  using PromoInfo = ::GlobalNamespace::DlcPromoPanelModel_PromoInfo;

  using _GetPackDataForMainMenuPromoBannerInternal_d__35 = ::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35;

  using _GetPackDataForMainMenuPromoBanner_d__34 = ::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34;

  using _HandleAdditionalContentModelDidInvalidateData_d__44 = ::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44;

  using _HandleDidCatalogLoadOrUpdate_d__30 = ::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30;

  using _InitializeInternalAsync_d__28 = ::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__28;

  using _Initialize_d__26 = ::GlobalNamespace::DlcPromoPanelModel__Initialize_d__26;

  using _LoadPackPromoInfoAsync_d__33 = ::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33;

  using _UpdateDlcPromoPanelDataAsync_d__31 = ::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31;

  using _UpdateModelDataAsync_d__29 = ::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__29;

  using _UpdateOwnedPacksAsync_d__43 = ::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43;

  using _UpdatePromoInfosAsync_d__32 = ::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__32;

  using __c = ::GlobalNamespace::DlcPromoPanelModel___c;

  using __c__DisplayClass35_0 = ::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0;

  /// @brief Field _additionalContentModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _beatmapLevelsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _cacheNextPackDataTask, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get__cacheNextPackDataTask,
      put = __cordl_internal_set__cacheNextPackDataTask)) ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>* _cacheNextPackDataTask;

  /// @brief Field _defaultPromoInfo, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultPromoInfo, put = __cordl_internal_set__defaultPromoInfo)) ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* _defaultPromoInfo;

  /// @brief Field _dlcPromoPanelData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelData, put = __cordl_internal_set__dlcPromoPanelData)) ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> _dlcPromoPanelData;

  /// @brief Field _initializationTask, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task* _initializationTask;

  /// @brief Field _initialized, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _loadDlcPromoPanelDataHandle, offset 0x88, size 0x20
  __declspec(property(
      get = __cordl_internal_get__loadDlcPromoPanelDataHandle,
      put = __cordl_internal_set__loadDlcPromoPanelDataHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>
      _loadDlcPromoPanelDataHandle;

  /// @brief Field _loadPackPromoInfoHandles, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__loadPackPromoInfoHandles, put = __cordl_internal_set__loadPackPromoInfoHandles)) ::System::Collections::Generic::List_1<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>* _loadPackPromoInfoHandles;

  /// @brief Field _metaRemoteAssetsManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__metaRemoteAssetsManager,
                      put = __cordl_internal_set__metaRemoteAssetsManager)) ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* _metaRemoteAssetsManager;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__notOwnedMusicPackPromoInfos,
                      put = __cordl_internal_set__notOwnedMusicPackPromoInfos)) ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>
      _notOwnedMusicPackPromoInfos;

  /// @brief Field _ownedMusicPackPromoInfos, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__ownedMusicPackPromoInfos,
                      put = __cordl_internal_set__ownedMusicPackPromoInfos)) ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>
      _ownedMusicPackPromoInfos;

  /// @brief Field _platformInit, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__platformInit, put = __cordl_internal_set__platformInit)) ::BeatSaber::Init::IPlatformInit* _platformInit;

  /// @brief Field _playerDataModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _promoInfos, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__promoInfos,
                      put = __cordl_internal_set__promoInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* _promoInfos;

  /// @brief Field _random, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Field _updatingNotOwnedPacks, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__updatingNotOwnedPacks, put = __cordl_internal_set__updatingNotOwnedPacks)) bool _updatingNotOwnedPacks;

  /// @brief Field hotReloadDidFinish, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_hotReloadDidFinish, put = __cordl_internal_set_hotReloadDidFinish)) ::System::Action* hotReloadDidFinish;

  /// @brief Field hotReloadDidStart, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_hotReloadDidStart, put = __cordl_internal_set_hotReloadDidStart)) ::System::Action* hotReloadDidStart;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method BuyLevelButtonWasPressed, addr 0x26f65dc, size 0xf0, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasPressed(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyLevelButtonWasShown, addr 0x26f66cc, size 0xf0, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasShown(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasPressed, addr 0x26f67bc, size 0xf0, virtual false, abstract: false, final false
  inline void BuyPackButtonWasPressed(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasShown, addr 0x26f68ac, size 0xf0, virtual false, abstract: false, final false
  inline void BuyPackButtonWasShown(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method GetExperimentEventData, addr 0x26f63c8, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText);

  /// @brief Method GetPackDataForMainMenuPromoBanner, addr 0x26f60e0, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>* GetPackDataForMainMenuPromoBanner();

  /// @brief Method GetPackDataForMainMenuPromoBannerInternal, addr 0x26f61c4, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>* GetPackDataForMainMenuPromoBannerInternal();

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x26f6a60, size 0x90, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleDidCatalogLoadOrUpdate, addr 0x26f5de0, size 0x90, virtual false, abstract: false, final false
  inline void HandleDidCatalogLoadOrUpdate();

  /// @brief Method Initialize, addr 0x26f5ba8, size 0x90, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeAsync, addr 0x26f5c38, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  /// @brief Method InitializeInternalAsync, addr 0x26f5c5c, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeInternalAsync();

  /// @brief Method LoadPackPromoInfoAsync, addr 0x26f5ff4, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* LoadPackPromoInfoAsync(::GlobalNamespace::PackDefinitionSO* pack);

  /// @brief Method MainMenuDlcPromoBannerWasPressed, addr 0x26f64e0, size 0xfc, virtual false, abstract: false, final false
  inline void MainMenuDlcPromoBannerWasPressed(::StringW packId, ::StringW customText);

  /// @brief Method MainMenuDlcPromoBannerWasShown, addr 0x26f62ac, size 0x11c, virtual false, abstract: false, final false
  inline void MainMenuDlcPromoBannerWasShown(::StringW packId, ::StringW customText);

  static inline ::GlobalNamespace::DlcPromoPanelModel* New_ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                ::GlobalNamespace::IAnalyticsModel* analyticsModel, ::GlobalNamespace::DlcPromoPanelDataSO* defaultDlcPromoPanelData,
                                                                ::GlobalNamespace::PlayerDataModel* playerDataModel, ::BeatSaber::Init::IPlatformInit* platformInit,
                                                                ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager);

  /// @brief Method UpdateDlcPromoPanelDataAsync, addr 0x26f5e70, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateDlcPromoPanelDataAsync();

  /// @brief Method UpdateModelDataAsync, addr 0x26f5d20, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateModelDataAsync();

  /// @brief Method UpdateOwnedPacksAsync, addr 0x26f699c, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateOwnedPacksAsync();

  /// @brief Method UpdatePromoInfosAsync, addr 0x26f5f30, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdatePromoInfosAsync();

  constexpr ::GlobalNamespace::IAdditionalContentModel* const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>* const& __cordl_internal_get__cacheNextPackDataTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>*& __cordl_internal_get__cacheNextPackDataTask();

  constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* const& __cordl_internal_get__defaultPromoInfo() const;

  constexpr ::GlobalNamespace::DlcPromoPanelModel_PromoInfo*& __cordl_internal_get__defaultPromoInfo();

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& __cordl_internal_get__dlcPromoPanelData() const;

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& __cordl_internal_get__dlcPromoPanelData();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> const&
  __cordl_internal_get__loadDlcPromoPanelDataHandle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>& __cordl_internal_get__loadDlcPromoPanelDataHandle();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>* const&
  __cordl_internal_get__loadPackPromoInfoHandles() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>*&
  __cordl_internal_get__loadPackPromoInfoHandles();

  constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* const& __cordl_internal_get__metaRemoteAssetsManager() const;

  constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*& __cordl_internal_get__metaRemoteAssetsManager();

  constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> const& __cordl_internal_get__notOwnedMusicPackPromoInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>& __cordl_internal_get__notOwnedMusicPackPromoInfos();

  constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> const& __cordl_internal_get__ownedMusicPackPromoInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>& __cordl_internal_get__ownedMusicPackPromoInfos();

  constexpr ::BeatSaber::Init::IPlatformInit* const& __cordl_internal_get__platformInit() const;

  constexpr ::BeatSaber::Init::IPlatformInit*& __cordl_internal_get__platformInit();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* const& __cordl_internal_get__promoInfos() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*& __cordl_internal_get__promoInfos();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr bool const& __cordl_internal_get__updatingNotOwnedPacks() const;

  constexpr bool& __cordl_internal_get__updatingNotOwnedPacks();

  constexpr ::System::Action* const& __cordl_internal_get_hotReloadDidFinish() const;

  constexpr ::System::Action*& __cordl_internal_get_hotReloadDidFinish();

  constexpr ::System::Action* const& __cordl_internal_get_hotReloadDidStart() const;

  constexpr ::System::Action*& __cordl_internal_get_hotReloadDidStart();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__cacheNextPackDataTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>* value);

  constexpr void __cordl_internal_set__defaultPromoInfo(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* value);

  constexpr void __cordl_internal_set__dlcPromoPanelData(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__loadDlcPromoPanelDataHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> value);

  constexpr void __cordl_internal_set__loadPackPromoInfoHandles(
      ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>* value);

  constexpr void __cordl_internal_set__metaRemoteAssetsManager(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* value);

  constexpr void __cordl_internal_set__notOwnedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> value);

  constexpr void __cordl_internal_set__ownedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> value);

  constexpr void __cordl_internal_set__platformInit(::BeatSaber::Init::IPlatformInit* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__promoInfos(::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  constexpr void __cordl_internal_set__updatingNotOwnedPacks(bool value);

  constexpr void __cordl_internal_set_hotReloadDidFinish(::System::Action* value);

  constexpr void __cordl_internal_set_hotReloadDidStart(::System::Action* value);

  /// @brief Method .ctor, addr 0x26f5918, size 0x290, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IAnalyticsModel* analyticsModel,
                    ::GlobalNamespace::DlcPromoPanelDataSO* defaultDlcPromoPanelData, ::GlobalNamespace::PlayerDataModel* playerDataModel, ::BeatSaber::Init::IPlatformInit* platformInit,
                    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager);

  /// @brief Method add_hotReloadDidFinish, addr 0x26f57e0, size 0x9c, virtual false, abstract: false, final false
  inline void add_hotReloadDidFinish(::System::Action* value);

  /// @brief Method add_hotReloadDidStart, addr 0x26f56a8, size 0x9c, virtual false, abstract: false, final false
  inline void add_hotReloadDidStart(::System::Action* value);

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Method remove_hotReloadDidFinish, addr 0x26f587c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_hotReloadDidFinish(::System::Action* value);

  /// @brief Method remove_hotReloadDidStart, addr 0x26f5744, size 0x9c, virtual false, abstract: false, final false
  inline void remove_hotReloadDidStart(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DlcPromoPanelModel(DlcPromoPanelModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DlcPromoPanelModel(DlcPromoPanelModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13256 };

  /// @brief Field _additionalContentModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _dlcPromoPanelData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> ____dlcPromoPanelData;

  /// @brief Field _playerDataModel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _platformInit, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::Init::IPlatformInit* ____platformInit;

  /// @brief Field _metaRemoteAssetsManager, offset: 0x40, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* ____metaRemoteAssetsManager;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> ____notOwnedMusicPackPromoInfos;

  /// @brief Field _ownedMusicPackPromoInfos, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, ::Array<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*> ____ownedMusicPackPromoInfos;

  /// @brief Field _updatingNotOwnedPacks, offset: 0x58, size: 0x1, def value: None
  bool ____updatingNotOwnedPacks;

  /// @brief Field _initialized, offset: 0x59, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _random, offset: 0x60, size: 0x8, def value: None
  ::System::Random* ____random;

  /// @brief Field _promoInfos, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* ____promoInfos;

  /// @brief Field _defaultPromoInfo, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel_PromoInfo* ____defaultPromoInfo;

  /// @brief Field _initializationTask, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____initializationTask;

  /// @brief Field _cacheNextPackDataTask, offset: 0x80, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, bool>>* ____cacheNextPackDataTask;

  /// @brief Field _loadDlcPromoPanelDataHandle, offset: 0x88, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> ____loadDlcPromoPanelDataHandle;

  /// @brief Field _loadPackPromoInfoHandles, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>* ____loadPackPromoInfoHandles;

  /// @brief Field hotReloadDidStart, offset: 0xb0, size: 0x8, def value: None
  ::System::Action* ___hotReloadDidStart;

  /// @brief Field hotReloadDidFinish, offset: 0xb8, size: 0x8, def value: None
  ::System::Action* ___hotReloadDidFinish;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____additionalContentModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____beatmapLevelsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____analyticsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____dlcPromoPanelData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____playerDataModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____platformInit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____metaRemoteAssetsManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____notOwnedMusicPackPromoInfos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____ownedMusicPackPromoInfos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____updatingNotOwnedPacks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____initialized) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____random) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____promoInfos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____defaultPromoInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____initializationTask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____cacheNextPackDataTask) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____loadDlcPromoPanelDataHandle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____loadPackPromoInfoHandles) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ___hotReloadDidStart) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ___hotReloadDidFinish) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromoInfo_DlcPromoPanelModel_PromoType, "", "DlcPromoPanelModel/PromoInfo/PromoType");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel*, "", "DlcPromoPanelModel");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel_PromoInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*, "", "DlcPromoPanelModel/PromoInfo");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel___c*, "", "DlcPromoPanelModel/<>c");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel___c__DisplayClass35_0*, "", "DlcPromoPanelModel/<>c__DisplayClass35_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBannerInternal_d__35, "", "DlcPromoPanelModel/<GetPackDataForMainMenuPromoBannerInternal>d__35");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__GetPackDataForMainMenuPromoBanner_d__34, "", "DlcPromoPanelModel/<GetPackDataForMainMenuPromoBanner>d__34");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__HandleAdditionalContentModelDidInvalidateData_d__44, "", "DlcPromoPanelModel/<HandleAdditionalContentModelDidInvalidateData>d__44");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__HandleDidCatalogLoadOrUpdate_d__30, "", "DlcPromoPanelModel/<HandleDidCatalogLoadOrUpdate>d__30");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__InitializeInternalAsync_d__28, "", "DlcPromoPanelModel/<InitializeInternalAsync>d__28");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__Initialize_d__26, "", "DlcPromoPanelModel/<Initialize>d__26");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__LoadPackPromoInfoAsync_d__33, "", "DlcPromoPanelModel/<LoadPackPromoInfoAsync>d__33");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__UpdateDlcPromoPanelDataAsync_d__31, "", "DlcPromoPanelModel/<UpdateDlcPromoPanelDataAsync>d__31");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__UpdateModelDataAsync_d__29, "", "DlcPromoPanelModel/<UpdateModelDataAsync>d__29");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__UpdateOwnedPacksAsync_d__43, "", "DlcPromoPanelModel/<UpdateOwnedPacksAsync>d__43");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel__UpdatePromoInfosAsync_d__32, "", "DlcPromoPanelModel/<UpdatePromoInfosAsync>d__32");
