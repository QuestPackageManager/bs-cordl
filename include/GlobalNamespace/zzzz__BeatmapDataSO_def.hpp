#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataSO)
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass2_0;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass1_0;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___GetBeatmapDataAsync_d__2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___RunTaskAndLogException_d__6;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
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
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataSO;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass1_0;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class __BeatmapDataSO____c__DisplayClass6_0;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___GetBeatmapDataAsync_d__2;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5;
}
namespace GlobalNamespace {
struct __BeatmapDataSO___RunTaskAndLogException_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataSO);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass6_0);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__6);
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4279))
// CS Name: ::BeatmapDataSO::<>c__DisplayClass1_0*
class CORDL_TYPE __BeatmapDataSO____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapDataBasicInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_beatmapDataBasicInfo, put = __set_beatmapDataBasicInfo))::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasicInfo;

  /// @brief Field beatmapSaveData, offset 0x18, size 0x8
  __declspec(property(get = __get_beatmapSaveData, put = __set_beatmapSaveData))::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData;

  constexpr ::GlobalNamespace::IBeatmapDataBasicInfo*& __get_beatmapDataBasicInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataBasicInfo*> const& __get_beatmapDataBasicInfo() const;

  constexpr void __set_beatmapDataBasicInfo(::GlobalNamespace::IBeatmapDataBasicInfo* value);

  constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData*& __get_beatmapSaveData();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& __get_beatmapSaveData() const;

  constexpr void __set_beatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* value);

  static inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0* New_ctor();

  /// @brief Method .ctor addr 0x21dda94 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetBeatmapDataBasicInfoAsync>b__0 addr 0x21dda9c size 0x1c virtual false final false
  inline void _GetBeatmapDataBasicInfoAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataSO____c__DisplayClass1_0(__BeatmapDataSO____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataSO____c__DisplayClass1_0(__BeatmapDataSO____c__DisplayClass1_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataSO____c__DisplayClass1_0();

public:
  /// @brief Field beatmapDataBasicInfo, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapDataBasicInfo* ___beatmapDataBasicInfo;

  /// @brief Field beatmapSaveData, offset: 0x18, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::BeatmapSaveData* ___beatmapSaveData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0, ___beatmapDataBasicInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0, ___beatmapSaveData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetBeatmapDataBasicInfoAsync>d__1
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(15033)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 862
// }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(4290)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 869 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4280)) CS Name: ::BeatmapDataSO::<GetBeatmapDataBasicInfoAsync>d__1
struct CORDL_TYPE __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21ddd6c size 0x360 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21de0cc size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapDataSO*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0*", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "__u__2",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1(int32_t __1__state,
                                                                ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __t__builder,
                                                                ::GlobalNamespace::BeatmapDataSO* __4__this, ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0* __8__1,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> __u__1,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataSO* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14934))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4281))
// CS Name: ::BeatmapDataSO::<>c__DisplayClass2_0*
class CORDL_TYPE __BeatmapDataSO____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field readonlyBeatmapData, offset 0x10, size 0x8
  __declspec(property(get = __get_readonlyBeatmapData, put = __set_readonlyBeatmapData))::GlobalNamespace::IReadonlyBeatmapData* readonlyBeatmapData;

  /// @brief Field beatmapSaveData, offset 0x18, size 0x8
  __declspec(property(get = __get_beatmapSaveData, put = __set_beatmapSaveData))::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData;

  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __get_beatmapDifficulty, put = __set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatsPerMinute, offset 0x24, size 0x4
  __declspec(property(get = __get_beatsPerMinute, put = __set_beatsPerMinute)) float_t beatsPerMinute;

  /// @brief Field loadingForDesignatedEnvironment, offset 0x28, size 0x1
  __declspec(property(get = __get_loadingForDesignatedEnvironment, put = __set_loadingForDesignatedEnvironment)) bool loadingForDesignatedEnvironment;

  /// @brief Field environmentInfo, offset 0x30, size 0x8
  __declspec(property(get = __get_environmentInfo, put = __set_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  /// @brief Field playerSpecificSettings, offset 0x38, size 0x8
  __declspec(property(get = __get_playerSpecificSettings, put = __set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get_readonlyBeatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get_readonlyBeatmapData() const;

  constexpr void __set_readonlyBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData*& __get_beatmapSaveData();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& __get_beatmapSaveData() const;

  constexpr void __set_beatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

  constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr float_t& __get_beatsPerMinute();

  constexpr float_t const& __get_beatsPerMinute() const;

  constexpr void __set_beatsPerMinute(float_t value);

  constexpr bool& __get_loadingForDesignatedEnvironment();

  constexpr bool const& __get_loadingForDesignatedEnvironment() const;

  constexpr void __set_loadingForDesignatedEnvironment(bool value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get_environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get_environmentInfo() const;

  constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __get_playerSpecificSettings() const;

  constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  static inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0* New_ctor();

  /// @brief Method .ctor addr 0x21de124 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetBeatmapDataAsync>b__0 addr 0x21de12c size 0x2c virtual false final false
  inline void _GetBeatmapDataAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataSO____c__DisplayClass2_0(__BeatmapDataSO____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataSO____c__DisplayClass2_0(__BeatmapDataSO____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataSO____c__DisplayClass2_0();

public:
  /// @brief Field readonlyBeatmapData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___readonlyBeatmapData;

  /// @brief Field beatmapSaveData, offset: 0x18, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::BeatmapSaveData* ___beatmapSaveData;

  /// @brief Field beatmapDifficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field beatsPerMinute, offset: 0x24, size: 0x4, def value: None
  float_t ___beatsPerMinute;

  /// @brief Field loadingForDesignatedEnvironment, offset: 0x28, size: 0x1, def value: None
  bool ___loadingForDesignatedEnvironment;

  /// @brief Field environmentInfo, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ___environmentInfo;

  /// @brief Field playerSpecificSettings, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0, ___readonlyBeatmapData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0, ___beatmapSaveData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0, ___beatsPerMinute) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0, ___loadingForDesignatedEnvironment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0, ___environmentInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0, ___playerSpecificSettings) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetBeatmapDataAsync>d__2
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4292)), TypeDefinitionIndex(TypeDefinitionIndex(14934)), TypeDefinitionIndex(TypeDefinitionIndex(3397)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 862 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3397), inst: 873 }), TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(15033))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4282)) CS
// Name: ::BeatmapDataSO::<GetBeatmapDataAsync>d__2
struct CORDL_TYPE __BeatmapDataSO___GetBeatmapDataAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21de304 size 0x378 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21de67c size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty:
  // "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO*", modifiers: "", def_value: None },
  // CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapDataSO*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0*", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "__u__2",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BeatmapDataSO___GetBeatmapDataAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                       ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t beatsPerMinute, bool loadingForDesignatedEnvironment,
                                                       ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                       ::GlobalNamespace::BeatmapDataSO* __4__this, ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0* __8__1,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> __u__1,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataSO___GetBeatmapDataAsync_d__2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field beatmapDifficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatsPerMinute, offset: 0x24, size: 0x4, def value: None
  float_t beatsPerMinute;

  /// @brief Field loadingForDesignatedEnvironment, offset: 0x28, size: 0x1, def value: None
  bool loadingForDesignatedEnvironment;

  /// @brief Field environmentInfo, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  /// @brief Field playerSpecificSettings, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataSO* __4__this;

  /// @brief Field <>8__1, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0* __8__1;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, beatsPerMinute) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, loadingForDesignatedEnvironment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, environmentInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, playerSpecificSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, __4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, __8__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, __u__2) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4283))
// CS Name: ::BeatmapDataSO::<>c__DisplayClass5_0*
class CORDL_TYPE __BeatmapDataSO____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapSaveData, offset 0x10, size 0x8
  __declspec(property(get = __get_beatmapSaveData, put = __set_beatmapSaveData))::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::BeatmapDataSO* __4__this;

  constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData*& __get_beatmapSaveData();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& __get_beatmapSaveData() const;

  constexpr void __set_beatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* value);

  constexpr ::GlobalNamespace::BeatmapDataSO*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSO*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::BeatmapDataSO* value);

  static inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor addr 0x21de6d4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LoadBeatmapSaveDataAsync>b__0 addr 0x21de6dc size 0x70 virtual false final false
  inline void _LoadBeatmapSaveDataAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataSO____c__DisplayClass5_0(__BeatmapDataSO____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataSO____c__DisplayClass5_0(__BeatmapDataSO____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataSO____c__DisplayClass5_0();

public:
  /// @brief Field beatmapSaveData, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::BeatmapSaveData* ___beatmapSaveData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataSO* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0, ___beatmapSaveData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapSaveDataAsync>d__5
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 862
// }), TypeDefinitionIndex(TypeDefinitionIndex(15033))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4284)) CS Name: ::BeatmapDataSO::<LoadBeatmapSaveDataAsync>d__5
struct CORDL_TYPE __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21de74c size 0x254 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21de9a0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapDataSO*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> __t__builder,
                                                            ::GlobalNamespace::BeatmapDataSO* __4__this, ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0* __8__1,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataSO* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4285))
// CS Name: ::BeatmapDataSO::<>c__DisplayClass6_0*
class CORDL_TYPE __BeatmapDataSO____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Action* action;

  constexpr ::System::Action*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_action() const;

  constexpr void __set_action(::System::Action* value);

  static inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor addr 0x21de9f8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <RunTaskAndLogException>b__0 addr 0x21dea00 size 0xc0 virtual false final false
  inline void _RunTaskAndLogException_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataSO____c__DisplayClass6_0(__BeatmapDataSO____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataSO____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataSO____c__DisplayClass6_0(__BeatmapDataSO____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataSO____c__DisplayClass6_0();

public:
  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass6_0, ___action) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RunTaskAndLogException>d__6
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3396)), TypeDefinitionIndex(TypeDefinitionIndex(3388))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4286))
// CS Name: ::BeatmapDataSO::<RunTaskAndLogException>d__6
struct CORDL_TYPE __BeatmapDataSO___RunTaskAndLogException_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21deac0 size 0x230 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21decf0 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BeatmapDataSO___RunTaskAndLogException_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Action* action,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataSO___RunTaskAndLogException_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field action, offset: 0x20, size: 0x8, def value: None
  ::System::Action* action;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__6, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__6, action) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__6, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4287))
// CS Name: ::BeatmapDataSO*
class CORDL_TYPE BeatmapDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using _RunTaskAndLogException_d__6 = ::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__6;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass6_0;

  using _LoadBeatmapSaveDataAsync_d__5 = ::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5;

  using __c__DisplayClass5_0 = ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0;

  using _GetBeatmapDataAsync_d__2 = ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2;

  using __c__DisplayClass2_0 = ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0;

  using _GetBeatmapDataBasicInfoAsync_d__1 = ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1;

  using __c__DisplayClass1_0 = ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0;

  /// @brief Field _jsonData, offset 0x18, size 0x8
  __declspec(property(get = __get__jsonData, put = __set__jsonData))::StringW _jsonData;

  /// @brief Field _beatmapDataBasic, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapDataBasic, put = __set__beatmapDataBasic))::GlobalNamespace::IBeatmapDataBasicInfo* _beatmapDataBasic;

  constexpr ::StringW& __get__jsonData();

  constexpr ::StringW const& __get__jsonData() const;

  constexpr void __set__jsonData(::StringW value);

  constexpr ::GlobalNamespace::IBeatmapDataBasicInfo*& __get__beatmapDataBasic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataBasicInfo*> const& __get__beatmapDataBasic() const;

  constexpr void __set__beatmapDataBasic(::GlobalNamespace::IBeatmapDataBasicInfo* value);

  /// @brief Method GetBeatmapDataBasicInfoAsync addr 0x21dd6a4 size 0xf0 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoAsync();

  /// @brief Method GetBeatmapDataAsync addr 0x21dd794 size 0x134 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapDataAsync(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t beatsPerMinute,
                                                                                                           bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                                                           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method SetJsonData addr 0x21dd8c8 size 0x8 virtual false final false
  inline void SetJsonData(::StringW jsonData);

  /// @brief Method LoadBeatmapSaveDataAsync addr 0x21dd8d0 size 0xf4 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>* LoadBeatmapSaveDataAsync();

  /// @brief Method RunTaskAndLogException addr 0x21dd9c4 size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* RunTaskAndLogException(::System::Action* action);

  static inline ::GlobalNamespace::BeatmapDataSO* New_ctor();

  /// @brief Method .ctor addr 0x21dda8c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataSO(BeatmapDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataSO(BeatmapDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataSO();

public:
  /// @brief Field _jsonData, offset: 0x18, size: 0x8, def value: None
  ::StringW ____jsonData;

  /// @brief Field _beatmapDataBasic, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapDataBasicInfo* ____beatmapDataBasic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataSO, ____jsonData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataSO, ____beatmapDataBasic) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataSO*, "", "BeatmapDataSO");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass1_0*, "", "BeatmapDataSO/<>c__DisplayClass1_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass2_0*, "", "BeatmapDataSO/<>c__DisplayClass2_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*, "", "BeatmapDataSO/<>c__DisplayClass5_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO____c__DisplayClass6_0*, "", "BeatmapDataSO/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__2, "", "BeatmapDataSO/<GetBeatmapDataAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1, "", "BeatmapDataSO/<GetBeatmapDataBasicInfoAsync>d__1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5, "", "BeatmapDataSO/<LoadBeatmapSaveDataAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__6, "", "BeatmapDataSO/<RunTaskAndLogException>d__6");
