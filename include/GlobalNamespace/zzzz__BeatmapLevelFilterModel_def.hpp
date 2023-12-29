#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelFilterModel)
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct __BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class LevelFilterParams;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace GlobalNamespace {
class __BeatmapLevelFilterModel____c__DisplayClass0_0;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelFilterModel;
}
namespace GlobalNamespace {
class __BeatmapLevelFilterModel____c__DisplayClass0_0;
}
namespace GlobalNamespace {
struct __BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0;
}
namespace GlobalNamespace {
struct __BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelFilterModel);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4369))
// CS Name: ::BeatmapLevelFilterModel::<>c__DisplayClass0_0*
class CORDL_TYPE __BeatmapLevelFilterModel____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field searchByText, offset 0x10, size 0x1
  __declspec(property(get = __get_searchByText, put = __set_searchByText)) bool searchByText;

  /// @brief Field searchTexts, offset 0x18, size 0x8
  __declspec(property(get = __get_searchTexts, put = __set_searchTexts))::ArrayW<::StringW, ::Array<::StringW>*> searchTexts;

  /// @brief Field levelFilterParams, offset 0x20, size 0x8
  __declspec(property(get = __get_levelFilterParams, put = __set_levelFilterParams))::GlobalNamespace::LevelFilterParams* levelFilterParams;

  /// @brief Field playerDataModel, offset 0x28, size 0x8
  __declspec(property(get = __get_playerDataModel, put = __set_playerDataModel))::GlobalNamespace::PlayerDataModel* playerDataModel;

  constexpr bool& __get_searchByText();

  constexpr bool const& __get_searchByText() const;

  constexpr void __set_searchByText(bool value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_searchTexts();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_searchTexts() const;

  constexpr void __set_searchTexts(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::GlobalNamespace::LevelFilterParams*& __get_levelFilterParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelFilterParams*> const& __get_levelFilterParams() const;

  constexpr void __set_levelFilterParams(::GlobalNamespace::LevelFilterParams* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get_playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get_playerDataModel() const;

  constexpr void __set_playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  static inline ::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0* New_ctor();

  /// @brief Method .ctor addr 0x21f6624 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FilerBeatmapLevelPackCollectionAsync>b__0 addr 0x21f662c size 0x760 virtual false final false
  inline bool _FilerBeatmapLevelPackCollectionAsync_b__0(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelFilterModel____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelFilterModel____c__DisplayClass0_0(__BeatmapLevelFilterModel____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelFilterModel____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelFilterModel____c__DisplayClass0_0(__BeatmapLevelFilterModel____c__DisplayClass0_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelFilterModel____c__DisplayClass0_0();

public:
  /// @brief Field searchByText, offset: 0x10, size: 0x1, def value: None
  bool ___searchByText;

  /// @brief Field searchTexts, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___searchTexts;

  /// @brief Field levelFilterParams, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelFilterParams* ___levelFilterParams;

  /// @brief Field playerDataModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ___playerDataModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0, ___searchByText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0, ___searchTexts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0, ___levelFilterParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0, ___playerDataModel) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FilerBeatmapLevelPackCollectionAsync>d__0
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 853 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3831), inst: 3033 }), TypeDefinitionIndex(TypeDefinitionIndex(4363)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 871 }), TypeDefinitionIndex(TypeDefinitionIndex(3831)), TypeDefinitionIndex(TypeDefinitionIndex(4421)), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4370)) CS Name: ::BeatmapLevelFilterModel::<FilerBeatmapLevelPackCollectionAsync>d__0
struct CORDL_TYPE __BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21f6d8c size 0x404 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21f7190 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>", modifiers: "", def_value: None }, CppParam { name: "levelFilterParams", ty:
  // "::GlobalNamespace::LevelFilterParams*", modifiers: "", def_value: None }, CppParam { name: "playerDataModel", ty: "::GlobalNamespace::PlayerDataModel*", modifiers: "", def_value: None },
  // CppParam { name: "beatmapLevelPacks", ty: "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "additionalContentModel", ty: "::GlobalNamespace::AdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*> __t__builder,
      ::GlobalNamespace::LevelFilterParams* levelFilterParams, ::GlobalNamespace::PlayerDataModel* playerDataModel,
      ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks, ::GlobalNamespace::AdditionalContentModel* additionalContentModel,
      ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*> __t__builder;

  /// @brief Field levelFilterParams, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelFilterParams* levelFilterParams;

  /// @brief Field playerDataModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* playerDataModel;

  /// @brief Field beatmapLevelPacks, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks;

  /// @brief Field additionalContentModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AdditionalContentModel* additionalContentModel;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>8__1, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0* __8__1;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, levelFilterParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, playerDataModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, beatmapLevelPacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, additionalContentModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, __8__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetAllBeatmapLevelsAsync>d__2
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15192)), TypeDefinitionIndex(TypeDefinitionIndex(4122)), TypeDefinitionIndex(TypeDefinitionIndex(4421)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3831), inst: 3033 }), TypeDefinitionIndex(TypeDefinitionIndex(3831)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 883 }), TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 853 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4371)) CS Name:
// ::BeatmapLevelFilterModel::<GetAllBeatmapLevelsAsync>d__2
struct CORDL_TYPE __BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21f71e8 size 0x98c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21f7b74 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "beatmapLevelPacks", ty: "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "songPackMask", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "onlyOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "additionalContentModel", ty: "::GlobalNamespace::AdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "onlyNotOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_levels_5__2", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value: None }, CppParam {
  // name: "_beatmapLevel_5__6", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __t__builder,
      ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks, ::GlobalNamespace::SongPackMask songPackMask, bool onlyOwned,
      ::GlobalNamespace::AdditionalContentModel* additionalContentModel, ::System::Threading::CancellationToken cancellationToken, bool onlyNotOwned,
      ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* _levels_5__2,
      ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> __7__wrap2, int32_t __7__wrap3,
      ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>* __7__wrap4, ::GlobalNamespace::IPreviewBeatmapLevel* _beatmapLevel_5__6,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __t__builder;

  /// @brief Field beatmapLevelPacks, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks;

  /// @brief Field songPackMask, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::SongPackMask songPackMask;

  /// @brief Field onlyOwned, offset: 0x38, size: 0x1, def value: None
  bool onlyOwned;

  /// @brief Field additionalContentModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::AdditionalContentModel* additionalContentModel;

  /// @brief Field cancellationToken, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field onlyNotOwned, offset: 0x50, size: 0x1, def value: None
  bool onlyNotOwned;

  /// @brief Field <levels>5__2, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* _levels_5__2;

  /// @brief Field <>7__wrap2, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> __7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x68, size: 0x4, def value: None
  int32_t __7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>* __7__wrap4;

  /// @brief Field <beatmapLevel>5__6, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* _beatmapLevel_5__6;

  /// @brief Field <>u__1, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, beatmapLevelPacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, songPackMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, onlyOwned) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, additionalContentModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, cancellationToken) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, onlyNotOwned) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, _levels_5__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, __7__wrap2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, __7__wrap3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, __7__wrap4) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, _beatmapLevel_5__6) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, __u__1) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelFilterModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4372))
// CS Name: ::BeatmapLevelFilterModel*
class CORDL_TYPE BeatmapLevelFilterModel : public ::System::Object {
public:
  // Declarations
  using _GetAllBeatmapLevelsAsync_d__2 = ::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2;

  using _FilerBeatmapLevelPackCollectionAsync_d__0 = ::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0;

  using __c__DisplayClass0_0 = ::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0;

  /// @brief Method FilerBeatmapLevelPackCollectionAsync addr 0x21f61a0 size 0x120 virtual false final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelCollection*>*
  FilerBeatmapLevelPackCollectionAsync(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks,
                                       ::GlobalNamespace::LevelFilterParams* levelFilterParams, ::GlobalNamespace::PlayerDataModel* playerDataModel,
                                       ::GlobalNamespace::AdditionalContentModel* additionalContentModel, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LevelContainsText addr 0x21f62c0 size 0x230 virtual false final false
  static inline bool LevelContainsText(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, ::ArrayW<::StringW, ::Array<::StringW>*> searchTexts);

  /// @brief Method GetAllBeatmapLevelsAsync addr 0x21f64f0 size 0x134 virtual false final false
  static inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>*
  GetAllBeatmapLevelsAsync(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks, ::GlobalNamespace::SongPackMask songPackMask,
                           bool onlyOwned, bool onlyNotOwned, ::GlobalNamespace::AdditionalContentModel* additionalContentModel, ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelFilterModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelFilterModel(BeatmapLevelFilterModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelFilterModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelFilterModel(BeatmapLevelFilterModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelFilterModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelFilterModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelFilterModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelFilterModel*, "", "BeatmapLevelFilterModel");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0*, "", "BeatmapLevelFilterModel/<>c__DisplayClass0_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, "", "BeatmapLevelFilterModel/<FilerBeatmapLevelPackCollectionAsync>d__0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, "", "BeatmapLevelFilterModel/<GetAllBeatmapLevelsAsync>d__2");
