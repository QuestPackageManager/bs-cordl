#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelModel)
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdatePacksAsync_d__19;
}
namespace GlobalNamespace {
class __DlcPromoPanelDataSO__MusicPackPromoInfo;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System {
class Random;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___Initialize_d__10;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel____c__DisplayClass11_0;
}
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace GlobalNamespace {
class IPlatformInit;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel____c__DisplayClass11_0;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___Initialize_d__10;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdatePacksAsync_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel);
MARK_REF_PTR_T(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19);
// Type: ::<Initialize>d__10
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105
// }), TypeDefinitionIndex(TypeDefinitionIndex(3393))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4160)) CS Name: ::DlcPromoPanelModel::<Initialize>d__10
struct CORDL_TYPE __DlcPromoPanelModel___Initialize_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x223f2d0, size 0x614, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x223f8e4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___Initialize_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___Initialize_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4658)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4161))
// CS Name: ::DlcPromoPanelModel::<>c__DisplayClass11_0*
class CORDL_TYPE __DlcPromoPanelModel____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field sensitivityFlag, offset 0x10, size 0x4
  __declspec(property(get = __get_sensitivityFlag, put = __set_sensitivityFlag))::GlobalNamespace::PlayerSensitivityFlag sensitivityFlag;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get_sensitivityFlag();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get_sensitivityFlag() const;

  constexpr void __set_sensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value);

  static inline ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0* New_ctor();

  /// @brief Method .ctor, addr 0x223e7dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetPackDataForMainMenuPromoBanner>b__0, addr 0x223f8f0, size 0x24, virtual false, abstract: false, final false
  inline bool _GetPackDataForMainMenuPromoBanner_b__0(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* x);

  /// @brief Method <GetPackDataForMainMenuPromoBanner>b__1, addr 0x223f914, size 0x24, virtual false, abstract: false, final false
  inline bool _GetPackDataForMainMenuPromoBanner_b__1(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* x);

  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DlcPromoPanelModel____c__DisplayClass11_0(__DlcPromoPanelModel____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DlcPromoPanelModel____c__DisplayClass11_0(__DlcPromoPanelModel____c__DisplayClass11_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel____c__DisplayClass11_0();

public:
  /// @brief Field sensitivityFlag, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___sensitivityFlag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0, ___sensitivityFlag) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdatePacksAsync>d__19
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(16270)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4162)) CS Name: ::DlcPromoPanelModel::<UpdatePacksAsync>d__19
struct CORDL_TYPE __DlcPromoPanelModel___UpdatePacksAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x223f938, size 0x5e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x223ff1c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*",
  // modifiers: "", def_value: None }, CppParam { name: "_newOwnedMusicPackPromoInfos_5__3", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty:
  // "::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_packData_5__6", ty: "::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___UpdatePacksAsync_d__19(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
      ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2,
      ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>* _newOwnedMusicPackPromoInfos_5__3,
      ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> __7__wrap3, int32_t __7__wrap4,
      ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* _packData_5__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___UpdatePacksAsync_d__19();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <newNotOwnedMusicPackPromoInfos>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2;

  /// @brief Field <newOwnedMusicPackPromoInfos>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>* _newOwnedMusicPackPromoInfos_5__3;

  /// @brief Field <>7__wrap3, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> __7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0x40, size: 0x4, def value: None
  int32_t __7__wrap4;

  /// @brief Field <packData>5__6, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* _packData_5__6;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, _newNotOwnedMusicPackPromoInfos_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, _newOwnedMusicPackPromoInfos_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, __7__wrap3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, __7__wrap4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, _packData_5__6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleAdditionalContentModelDidInvalidateData>d__20
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4163))
// CS Name: ::DlcPromoPanelModel::<HandleAdditionalContentModelDidInvalidateData>d__20
struct CORDL_TYPE __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x223ff28, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2240150, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                       ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DlcPromoPanelModel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4164))
// CS Name: ::DlcPromoPanelModel*
class CORDL_TYPE DlcPromoPanelModel : public ::System::Object {
public:
  // Declarations
  using _HandleAdditionalContentModelDidInvalidateData_d__20 = ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20;

  using _UpdatePacksAsync_d__19 = ::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19;

  using __c__DisplayClass11_0 = ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0;

  using _Initialize_d__10 = ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10;

  /// @brief Field _additionalContentModel, offset 0x10, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _analyticsModel, offset 0x18, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _dlcPromoPanelData, offset 0x20, size 0x8
  __declspec(property(get = __get__dlcPromoPanelData, put = __set__dlcPromoPanelData))::GlobalNamespace::DlcPromoPanelDataSO* _dlcPromoPanelData;

  /// @brief Field _playerDataModel, offset 0x28, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _platformInit, offset 0x30, size 0x8
  __declspec(property(get = __get__platformInit, put = __set__platformInit))::GlobalNamespace::IPlatformInit* _platformInit;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset 0x38, size 0x8
  __declspec(property(get = __get__notOwnedMusicPackPromoInfos,
                      put = __set__notOwnedMusicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,
                                                                         ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> _notOwnedMusicPackPromoInfos;

  /// @brief Field _ownedMusicPackPromoInfos, offset 0x40, size 0x8
  __declspec(property(get = __get__ownedMusicPackPromoInfos,
                      put = __set__ownedMusicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,
                                                                      ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> _ownedMusicPackPromoInfos;

  /// @brief Field _updatingNotOwnedPacks, offset 0x48, size 0x1
  __declspec(property(get = __get__updatingNotOwnedPacks, put = __set__updatingNotOwnedPacks)) bool _updatingNotOwnedPacks;

  /// @brief Field _initialized, offset 0x49, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _random, offset 0x50, size 0x8
  __declspec(property(get = __get__random, put = __set__random))::System::Random* _random;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::GlobalNamespace::DlcPromoPanelDataSO*& __get__dlcPromoPanelData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelDataSO*> const& __get__dlcPromoPanelData() const;

  constexpr void __set__dlcPromoPanelData(::GlobalNamespace::DlcPromoPanelDataSO* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::IPlatformInit*& __get__platformInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformInit*> const& __get__platformInit() const;

  constexpr void __set__platformInit(::GlobalNamespace::IPlatformInit* value);

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>& __get__notOwnedMusicPackPromoInfos();

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> const&
  __get__notOwnedMusicPackPromoInfos() const;

  constexpr void
  __set__notOwnedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>& __get__ownedMusicPackPromoInfos();

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> const&
  __get__ownedMusicPackPromoInfos() const;

  constexpr void
  __set__ownedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> value);

  constexpr bool& __get__updatingNotOwnedPacks();

  constexpr bool const& __get__updatingNotOwnedPacks() const;

  constexpr void __set__updatingNotOwnedPacks(bool value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr ::System::Random*& __get__random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __get__random() const;

  constexpr void __set__random(::System::Random* value);

  /// @brief Method Initialize, addr 0x223e3a0, size 0x90, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method GetPackDataForMainMenuPromoBanner, addr 0x223e430, size 0x3ac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* GetPackDataForMainMenuPromoBanner(ByRef<bool> owned);

  /// @brief Method MainMenuDlcPromoBannerWasShown, addr 0x223e7e4, size 0x184, virtual false, abstract: false, final false
  inline void MainMenuDlcPromoBannerWasShown(::GlobalNamespace::IBeatmapLevelPack* promoPack, ::StringW customText);

  /// @brief Method MainMenuDlcPromoBannerWasPressed, addr 0x223ea88, size 0x16c, virtual false, abstract: false, final false
  inline void MainMenuDlcPromoBannerWasPressed(::GlobalNamespace::IBeatmapLevelPack* promoPack, ::StringW customText);

  /// @brief Method BuyLevelButtonWasPressed, addr 0x223ebf4, size 0x15c, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasPressed(::GlobalNamespace::IPreviewBeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyLevelButtonWasShown, addr 0x223ed50, size 0x15c, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasShown(::GlobalNamespace::IPreviewBeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasPressed, addr 0x223eeac, size 0x15c, virtual false, abstract: false, final false
  inline void BuyPackButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasShown, addr 0x223f008, size 0x15c, virtual false, abstract: false, final false
  inline void BuyPackButtonWasShown(::GlobalNamespace::IBeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method GetExperimentEventData, addr 0x223e968, size 0x120, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText);

  /// @brief Method UpdatePacksAsync, addr 0x223f164, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdatePacksAsync();

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x223f234, size 0x94, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  static inline ::GlobalNamespace::DlcPromoPanelModel* New_ctor();

  /// @brief Method .ctor, addr 0x223f2c8, size 0x8, virtual false, abstract: false, final false
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
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _analyticsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _dlcPromoPanelData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelDataSO* ____dlcPromoPanelData;

  /// @brief Field _playerDataModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _platformInit, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformInit* ____platformInit;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> ____notOwnedMusicPackPromoInfos;

  /// @brief Field _ownedMusicPackPromoInfos, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> ____ownedMusicPackPromoInfos;

  /// @brief Field _updatingNotOwnedPacks, offset: 0x48, size: 0x1, def value: None
  bool ____updatingNotOwnedPacks;

  /// @brief Field _initialized, offset: 0x49, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _random, offset: 0x50, size: 0x8, def value: None
  ::System::Random* ____random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____additionalContentModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____analyticsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____dlcPromoPanelData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____playerDataModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____platformInit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____notOwnedMusicPackPromoInfos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____ownedMusicPackPromoInfos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____updatingNotOwnedPacks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____initialized) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____random) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel*, "", "DlcPromoPanelModel");
NEED_NO_BOX(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass11_0*, "", "DlcPromoPanelModel/<>c__DisplayClass11_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__20, "", "DlcPromoPanelModel/<HandleAdditionalContentModelDidInvalidateData>d__20");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__10, "", "DlcPromoPanelModel/<Initialize>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___UpdatePacksAsync_d__19, "", "DlcPromoPanelModel/<UpdatePacksAsync>d__19");
