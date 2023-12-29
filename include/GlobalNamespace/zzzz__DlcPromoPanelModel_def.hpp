#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelModel)
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System {
class Random;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class __DlcPromoPanelDataSO__MusicPackPromoInfo;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17);
// Type: ::<UpdateNotOwnedPacksAsync>d__17
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 883 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4122)), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4195)) CS Name:
// ::DlcPromoPanelModel::<UpdateNotOwnedPacksAsync>d__17
struct CORDL_TYPE __DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21d0e64 size 0x46c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21d12d0 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*",
  // modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_packData_5__5", ty: "::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value:
  // None }]
  constexpr __DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
      ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2,
      ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> __7__wrap2, int32_t __7__wrap3,
      ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* _packData_5__5,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <newNotOwnedMusicPackPromoInfos>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> __7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x40, size: 0x4, def value: None
  int32_t __7__wrap3;

  /// @brief Field <packData>5__5, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* _packData_5__5;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, _newNotOwnedMusicPackPromoInfos_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, _packData_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DlcPromoPanelModel
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4196))
// CS Name: ::DlcPromoPanelModel*
class CORDL_TYPE DlcPromoPanelModel : public ::System::Object {
public:
  // Declarations
  using _UpdateNotOwnedPacksAsync_d__17 = ::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17;

  /// @brief Field _additionalContentModel, offset 0x10, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::AdditionalContentModel* _additionalContentModel;

  /// @brief Field _analyticsModel, offset 0x18, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _dlcPromoPanelData, offset 0x20, size 0x8
  __declspec(property(get = __get__dlcPromoPanelData, put = __set__dlcPromoPanelData))::GlobalNamespace::DlcPromoPanelDataSO* _dlcPromoPanelData;

  /// @brief Field _playerDataModel, offset 0x28, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset 0x30, size 0x8
  __declspec(property(get = __get__notOwnedMusicPackPromoInfos,
                      put = __set__notOwnedMusicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,
                                                                         ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> _notOwnedMusicPackPromoInfos;

  /// @brief Field _updatingNotOwnedPacks, offset 0x38, size 0x1
  __declspec(property(get = __get__updatingNotOwnedPacks, put = __set__updatingNotOwnedPacks)) bool _updatingNotOwnedPacks;

  /// @brief Field _initialized, offset 0x39, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _random, offset 0x40, size 0x8
  __declspec(property(get = __get__random, put = __set__random))::System::Random* _random;

  constexpr ::GlobalNamespace::AdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::AdditionalContentModel* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::GlobalNamespace::DlcPromoPanelDataSO*& __get__dlcPromoPanelData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelDataSO*> const& __get__dlcPromoPanelData() const;

  constexpr void __set__dlcPromoPanelData(::GlobalNamespace::DlcPromoPanelDataSO* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>& __get__notOwnedMusicPackPromoInfos();

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> const&
  __get__notOwnedMusicPackPromoInfos() const;

  constexpr void
  __set__notOwnedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> value);

  constexpr bool& __get__updatingNotOwnedPacks();

  constexpr bool const& __get__updatingNotOwnedPacks() const;

  constexpr void __set__updatingNotOwnedPacks(bool value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr ::System::Random*& __get__random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __get__random() const;

  constexpr void __set__random(::System::Random* value);

  /// @brief Method InitAfterPlatformWasInitialized addr 0x21d00ec size 0xec virtual false final false
  inline void InitAfterPlatformWasInitialized(bool force);

  /// @brief Method GetPackDataForMainMenuPromoBanner addr 0x21d0270 size 0x268 virtual false final false
  inline ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* GetPackDataForMainMenuPromoBanner(ByRef<bool> owned);

  /// @brief Method MainMenuDlcPromoBannerWasShown addr 0x21d04d8 size 0x184 virtual false final false
  inline void MainMenuDlcPromoBannerWasShown(::GlobalNamespace::IBeatmapLevelPack* promoPack, ::StringW customText);

  /// @brief Method MainMenuDlcPromoBannerWasPressed addr 0x21d077c size 0x16c virtual false final false
  inline void MainMenuDlcPromoBannerWasPressed(::GlobalNamespace::IBeatmapLevelPack* promoPack, ::StringW customText);

  /// @brief Method BuyLevelButtonWasPressed addr 0x21d08e8 size 0x15c virtual false final false
  inline void BuyLevelButtonWasPressed(::GlobalNamespace::IPreviewBeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyLevelButtonWasShown addr 0x21d0a44 size 0x15c virtual false final false
  inline void BuyLevelButtonWasShown(::GlobalNamespace::IPreviewBeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasPressed addr 0x21d0ba0 size 0x15c virtual false final false
  inline void BuyPackButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasShown addr 0x21d0cfc size 0x15c virtual false final false
  inline void BuyPackButtonWasShown(::GlobalNamespace::IBeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method GetExperimentEventData addr 0x21d065c size 0x120 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText);

  /// @brief Method UpdateNotOwnedPacksAsync addr 0x21d01d8 size 0x98 virtual false final false
  inline void UpdateNotOwnedPacksAsync();

  /// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x21d0e58 size 0x4 virtual false final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  static inline ::GlobalNamespace::DlcPromoPanelModel* New_ctor();

  /// @brief Method .ctor addr 0x21d0e5c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DlcPromoPanelModel(DlcPromoPanelModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DlcPromoPanelModel(DlcPromoPanelModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel();

public:
  /// @brief Field _additionalContentModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AdditionalContentModel* ____additionalContentModel;

  /// @brief Field _analyticsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _dlcPromoPanelData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelDataSO* ____dlcPromoPanelData;

  /// @brief Field _playerDataModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> ____notOwnedMusicPackPromoInfos;

  /// @brief Field _updatingNotOwnedPacks, offset: 0x38, size: 0x1, def value: None
  bool ____updatingNotOwnedPacks;

  /// @brief Field _initialized, offset: 0x39, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _random, offset: 0x40, size: 0x8, def value: None
  ::System::Random* ____random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____additionalContentModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____analyticsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____dlcPromoPanelData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____playerDataModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____notOwnedMusicPackPromoInfos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____updatingNotOwnedPacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____initialized) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____random) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel*, "", "DlcPromoPanelModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, "", "DlcPromoPanelModel/<UpdateNotOwnedPacksAsync>d__17");
