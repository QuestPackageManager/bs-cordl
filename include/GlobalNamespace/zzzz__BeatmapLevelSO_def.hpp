#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelSO)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapDataSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__DifficultyBeatmap;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO__GetBeatmapLevelDataResult__Result;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO___GetCoverImageAsync_d__72;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO___GetPreviewAudioClipAsync_d__71;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BeatmapLevelSO__GetBeatmapLevelDataResult__Result;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__DifficultyBeatmap;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO___GetCoverImageAsync_d__72;
}
namespace GlobalNamespace {
struct __BeatmapLevelSO___GetPreviewAudioClipAsync_d__71;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelSO);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71);
// Type: ::DifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4366))
// CS Name: ::BeatmapLevelSO::DifficultyBeatmapSet*
class CORDL_TYPE __BeatmapLevelSO__DifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristic, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic, put = __set__beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic;

  /// @brief Field _difficultyBeatmaps, offset 0x18, size 0x8
  __declspec(property(
      get = __get__difficultyBeatmaps,
      put = __set__difficultyBeatmaps))::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> _difficultyBeatmaps;

  __declspec(property(get = get_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  __declspec(property(get = get_difficultyBeatmaps))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;

  /// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmapSet"
  constexpr operator ::GlobalNamespace::IDifficultyBeatmapSet*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IDifficultyBeatmapSet"
  constexpr ::GlobalNamespace::IDifficultyBeatmapSet* i___GlobalNamespace__IDifficultyBeatmapSet() noexcept;

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic() const;

  constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>& __get__difficultyBeatmaps();

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> const& __get__difficultyBeatmaps() const;

  constexpr void __set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> value);

  /// @brief Method get_beatmapCharacteristic, addr 0x2345970, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();

  /// @brief Method get_difficultyBeatmaps, addr 0x2345978, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();

  static inline ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*
  New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
           ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> difficultyBeatmaps);

  /// @brief Method .ctor, addr 0x2345980, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                    ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> difficultyBeatmaps);

  /// @brief Method SetParentLevel, addr 0x2344dd8, size 0x44, virtual false, abstract: false, final false
  inline void SetParentLevel(::GlobalNamespace::IBeatmapLevel* level);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelSO__DifficultyBeatmapSet(__BeatmapLevelSO__DifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__DifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelSO__DifficultyBeatmapSet(__BeatmapLevelSO__DifficultyBeatmapSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO__DifficultyBeatmapSet();

public:
  /// @brief Field _beatmapCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic;

  /// @brief Field _difficultyBeatmaps, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> ____difficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet, ____beatmapCharacteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet, ____difficultyBeatmaps) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetBeatmapDataBasicInfoAsync>d__16
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4258)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 886 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 886 }), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4367)) CS Name: ::BeatmapLevelSO::DifficultyBeatmap::<GetBeatmapDataBasicInfoAsync>d__16
struct CORDL_TYPE __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x2345c3c, size 0x1ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2345e28, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __t__builder,
      ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetBeatmapDataAsync>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 890
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 890 }), TypeDefinitionIndex(TypeDefinitionIndex(4260))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4368)) CS
// Name: ::BeatmapLevelSO::DifficultyBeatmap::<GetBeatmapDataAsync>d__17
struct CORDL_TYPE __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x2345e80, size 0x2e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2346164, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO*", modifiers: "",
  // def_value: None }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17(int32_t __1__state,
                                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                                            ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap* __4__this, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                            ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap* __4__this;

  /// @brief Field environmentInfo, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  /// @brief Field playerSpecificSettings, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17, environmentInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17, playerSpecificSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DifficultyBeatmap
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4369))
// CS Name: ::BeatmapLevelSO::DifficultyBeatmap*
class CORDL_TYPE __BeatmapLevelSO__DifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  using _GetBeatmapDataAsync_d__17 = ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17;

  using _GetBeatmapDataBasicInfoAsync_d__16 = ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16;

  /// @brief Field _difficulty, offset 0x10, size 0x4
  __declspec(property(get = __get__difficulty, put = __set__difficulty))::GlobalNamespace::BeatmapDifficulty _difficulty;

  /// @brief Field _difficultyRank, offset 0x14, size 0x4
  __declspec(property(get = __get__difficultyRank, put = __set__difficultyRank)) int32_t _difficultyRank;

  /// @brief Field _noteJumpMovementSpeed, offset 0x18, size 0x4
  __declspec(property(get = __get__noteJumpMovementSpeed, put = __set__noteJumpMovementSpeed)) float_t _noteJumpMovementSpeed;

  /// @brief Field _noteJumpStartBeatOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get__noteJumpStartBeatOffset, put = __set__noteJumpStartBeatOffset)) float_t _noteJumpStartBeatOffset;

  /// @brief Field _environmentNameIdx, offset 0x20, size 0x4
  __declspec(property(get = __get__environmentNameIdx, put = __set__environmentNameIdx)) int32_t _environmentNameIdx;

  /// @brief Field _beatmapData, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapData, put = __set__beatmapData))::GlobalNamespace::BeatmapDataSO* _beatmapData;

  /// @brief Field _parentLevel, offset 0x30, size 0x8
  __declspec(property(get = __get__parentLevel, put = __set__parentLevel))::GlobalNamespace::IBeatmapLevel* _parentLevel;

  /// @brief Field _parentDifficultyBeatmapSet, offset 0x38, size 0x8
  __declspec(property(get = __get__parentDifficultyBeatmapSet, put = __set__parentDifficultyBeatmapSet))::GlobalNamespace::IDifficultyBeatmapSet* _parentDifficultyBeatmapSet;

  __declspec(property(get = get_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_difficultyRank)) int32_t difficultyRank;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteJumpStartBeatOffset)) float_t noteJumpStartBeatOffset;

  __declspec(property(get = get_environmentNameIdx)) int32_t environmentNameIdx;

  __declspec(property(get = get_level))::GlobalNamespace::IBeatmapLevel* level;

  __declspec(property(get = get_parentDifficultyBeatmapSet))::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet;

  /// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmap"
  constexpr operator ::GlobalNamespace::IDifficultyBeatmap*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IDifficultyBeatmap"
  constexpr ::GlobalNamespace::IDifficultyBeatmap* i___GlobalNamespace__IDifficultyBeatmap() noexcept;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__difficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__difficulty() const;

  constexpr void __set__difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr int32_t& __get__difficultyRank();

  constexpr int32_t const& __get__difficultyRank() const;

  constexpr void __set__difficultyRank(int32_t value);

  constexpr float_t& __get__noteJumpMovementSpeed();

  constexpr float_t const& __get__noteJumpMovementSpeed() const;

  constexpr void __set__noteJumpMovementSpeed(float_t value);

  constexpr float_t& __get__noteJumpStartBeatOffset();

  constexpr float_t const& __get__noteJumpStartBeatOffset() const;

  constexpr void __set__noteJumpStartBeatOffset(float_t value);

  constexpr int32_t& __get__environmentNameIdx();

  constexpr int32_t const& __get__environmentNameIdx() const;

  constexpr void __set__environmentNameIdx(int32_t value);

  constexpr ::GlobalNamespace::BeatmapDataSO*& __get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSO*> const& __get__beatmapData() const;

  constexpr void __set__beatmapData(::GlobalNamespace::BeatmapDataSO* value);

  constexpr ::GlobalNamespace::IBeatmapLevel*& __get__parentLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> const& __get__parentLevel() const;

  constexpr void __set__parentLevel(::GlobalNamespace::IBeatmapLevel* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmapSet*& __get__parentDifficultyBeatmapSet();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmapSet*> const& __get__parentDifficultyBeatmapSet() const;

  constexpr void __set__parentDifficultyBeatmapSet(::GlobalNamespace::IDifficultyBeatmapSet* value);

  /// @brief Method get_difficulty, addr 0x23459ac, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_difficultyRank, addr 0x23459b4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_difficultyRank();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x23459bc, size 0x8, virtual true, abstract: false, final true
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteJumpStartBeatOffset, addr 0x23459c4, size 0x8, virtual true, abstract: false, final true
  inline float_t get_noteJumpStartBeatOffset();

  /// @brief Method get_environmentNameIdx, addr 0x23459cc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_environmentNameIdx();

  /// @brief Method GetBeatmapDataBasicInfoAsync, addr 0x23459d4, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoAsync();

  /// @brief Method GetBeatmapDataAsync, addr 0x2345ac4, size 0x104, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                                                           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method get_level, addr 0x2345bc8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IBeatmapLevel* get_level();

  /// @brief Method get_parentDifficultyBeatmapSet, addr 0x2345bd0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();

  /// @brief Method SetParents, addr 0x233f3b4, size 0x8, virtual false, abstract: false, final false
  inline void SetParents(::GlobalNamespace::IBeatmapLevel* parentLevel, ::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet);

  static inline ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap* New_ctor(::GlobalNamespace::IBeatmapLevel* parentLevel, ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank,
                                                                                 float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t environmentNameIdx,
                                                                                 ::GlobalNamespace::BeatmapDataSO* beatmapData);

  /// @brief Method .ctor, addr 0x2345bd8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevel* parentLevel, ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed,
                    float_t noteJumpStartBeatOffset, int32_t environmentNameIdx, ::GlobalNamespace::BeatmapDataSO* beatmapData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__DifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelSO__DifficultyBeatmap(__BeatmapLevelSO__DifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__DifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelSO__DifficultyBeatmap(__BeatmapLevelSO__DifficultyBeatmap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO__DifficultyBeatmap();

public:
  /// @brief Field _difficulty, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty;

  /// @brief Field _difficultyRank, offset: 0x14, size: 0x4, def value: None
  int32_t ____difficultyRank;

  /// @brief Field _noteJumpMovementSpeed, offset: 0x18, size: 0x4, def value: None
  float_t ____noteJumpMovementSpeed;

  /// @brief Field _noteJumpStartBeatOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ____noteJumpStartBeatOffset;

  /// @brief Field _environmentNameIdx, offset: 0x20, size: 0x4, def value: None
  int32_t ____environmentNameIdx;

  /// @brief Field _beatmapData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataSO* ____beatmapData;

  /// @brief Field _parentLevel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* ____parentLevel;

  /// @brief Field _parentDifficultyBeatmapSet, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmapSet* ____parentDifficultyBeatmapSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap, ____difficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap, ____difficultyRank) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap, ____noteJumpMovementSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap, ____noteJumpStartBeatOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap, ____environmentNameIdx) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap, ____beatmapData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap, ____parentLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap, ____parentDifficultyBeatmapSet) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4370))
// CS Name: ::BeatmapLevelSO::GetBeatmapLevelDataResult::Result
struct CORDL_TYPE __BeatmapLevelSO__GetBeatmapLevelDataResult__Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapLevelSO__GetBeatmapLevelDataResult__Result_Unwrapped
  enum struct ____BeatmapLevelSO__GetBeatmapLevelDataResult__Result_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_NotOwned = static_cast<int32_t>(0x1),
    __E_Fail = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapLevelSO__GetBeatmapLevelDataResult__Result_Unwrapped() const noexcept {
    return static_cast<____BeatmapLevelSO__GetBeatmapLevelDataResult__Result_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelSO__GetBeatmapLevelDataResult__Result(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO__GetBeatmapLevelDataResult__Result();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result const OK;

  /// @brief Field NotOwned value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result const NotOwned;

  /// @brief Field Fail value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result const Fail;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetBeatmapLevelDataResult
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4370))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4371))
// CS Name: ::BeatmapLevelSO::GetBeatmapLevelDataResult
struct CORDL_TYPE __BeatmapLevelSO__GetBeatmapLevelDataResult {
public:
  // Declarations
  using Result = ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result;

  /// @brief Method .ctor, addr 0x23461bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result result, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  // Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData",
  // ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelSO__GetBeatmapLevelDataResult(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result result, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO__GetBeatmapLevelDataResult();

  /// @brief Field result, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result result;

  /// @brief Field beatmapLevelData, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, beatmapLevelData) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPreviewAudioClipAsync>d__71
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15594)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 276
// }), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 276 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4372)) CS Name: ::BeatmapLevelSO::<GetPreviewAudioClipAsync>d__71
struct CORDL_TYPE __BeatmapLevelSO___GetPreviewAudioClipAsync_d__71 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x23461c8, size 0x230, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23463f8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelSO*", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelSO___GetPreviewAudioClipAsync_d__71(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> __t__builder,
                                                              ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevelSO* __4__this,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO___GetPreviewAudioClipAsync_d__71();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelSO* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetCoverImageAsync>d__72
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10291)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 777
// }), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 777 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4373)) CS Name: ::BeatmapLevelSO::<GetCoverImageAsync>d__72
struct CORDL_TYPE __BeatmapLevelSO___GetCoverImageAsync_d__72 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x2346450, size 0x230, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2346680, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelSO*", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelSO___GetCoverImageAsync_d__72(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder,
                                                        ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevelSO* __4__this,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO___GetCoverImageAsync_d__72();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelSO* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetBeatmapLevelDataAsync>d__76
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(4371)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 905
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 905 }), TypeDefinitionIndex(TypeDefinitionIndex(3402))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4374)) CS
// Name: ::BeatmapLevelSO::<GetBeatmapLevelDataAsync>d__76
struct CORDL_TYPE __BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x23466d8, size 0x2a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2346978, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::BeatmapLevelSO*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> __t__builder,
      ::GlobalNamespace::BeatmapLevelSO* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelSO* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelSO
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(4658)), TypeDefinitionIndex(TypeDefinitionIndex(4371))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4375))
// CS Name: ::BeatmapLevelSO*
class CORDL_TYPE BeatmapLevelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using _GetBeatmapLevelDataAsync_d__76 = ::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76;

  using _GetCoverImageAsync_d__72 = ::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72;

  using _GetPreviewAudioClipAsync_d__71 = ::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71;

  using GetBeatmapLevelDataResult = ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult;

  using DifficultyBeatmap = ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap;

  using DifficultyBeatmapSet = ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet;

  /// @brief Field _levelID, offset 0x18, size 0x8
  __declspec(property(get = __get__levelID, put = __set__levelID))::StringW _levelID;

  /// @brief Field _songName, offset 0x20, size 0x8
  __declspec(property(get = __get__songName, put = __set__songName))::StringW _songName;

  /// @brief Field _songSubName, offset 0x28, size 0x8
  __declspec(property(get = __get__songSubName, put = __set__songSubName))::StringW _songSubName;

  /// @brief Field _songAuthorName, offset 0x30, size 0x8
  __declspec(property(get = __get__songAuthorName, put = __set__songAuthorName))::StringW _songAuthorName;

  /// @brief Field _levelAuthorName, offset 0x38, size 0x8
  __declspec(property(get = __get__levelAuthorName, put = __set__levelAuthorName))::StringW _levelAuthorName;

  /// @brief Field _audioClip, offset 0x40, size 0x8
  __declspec(property(get = __get__audioClip, put = __set__audioClip))::UnityEngine::AudioClip* _audioClip;

  /// @brief Field _beatsPerMinute, offset 0x48, size 0x4
  __declspec(property(get = __get__beatsPerMinute, put = __set__beatsPerMinute)) float_t _beatsPerMinute;

  /// @brief Field _songTimeOffset, offset 0x4c, size 0x4
  __declspec(property(get = __get__songTimeOffset, put = __set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _shuffle, offset 0x50, size 0x4
  __declspec(property(get = __get__shuffle, put = __set__shuffle)) float_t _shuffle;

  /// @brief Field _shufflePeriod, offset 0x54, size 0x4
  __declspec(property(get = __get__shufflePeriod, put = __set__shufflePeriod)) float_t _shufflePeriod;

  /// @brief Field _previewStartTime, offset 0x58, size 0x4
  __declspec(property(get = __get__previewStartTime, put = __set__previewStartTime)) float_t _previewStartTime;

  /// @brief Field _previewDuration, offset 0x5c, size 0x4
  __declspec(property(get = __get__previewDuration, put = __set__previewDuration)) float_t _previewDuration;

  /// @brief Field _coverImage, offset 0x60, size 0x8
  __declspec(property(get = __get__coverImage, put = __set__coverImage))::UnityEngine::Sprite* _coverImage;

  /// @brief Field _environmentInfo, offset 0x68, size 0x8
  __declspec(property(get = __get__environmentInfo, put = __set__environmentInfo))::GlobalNamespace::EnvironmentInfoSO* _environmentInfo;

  /// @brief Field _allDirectionsEnvironmentInfo, offset 0x70, size 0x8
  __declspec(property(get = __get__allDirectionsEnvironmentInfo, put = __set__allDirectionsEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* _allDirectionsEnvironmentInfo;

  /// @brief Field _environmentInfos, offset 0x78, size 0x8
  __declspec(property(get = __get__environmentInfos, put = __set__environmentInfos))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> _environmentInfos;

  /// @brief Field _difficultyBeatmapSets, offset 0x80, size 0x8
  __declspec(property(get = __get__difficultyBeatmapSets, put = __set__difficultyBeatmapSets))::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,
                                                                                                       ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*> _difficultyBeatmapSets;

  /// @brief Field _contentRating, offset 0x88, size 0x4
  __declspec(property(get = __get__contentRating, put = __set__contentRating))::GlobalNamespace::PlayerSensitivityFlag _contentRating;

  /// @brief Field _ignore360MovementBeatmaps, offset 0x8c, size 0x1
  __declspec(property(get = __get__ignore360MovementBeatmaps, put = __set__ignore360MovementBeatmaps)) bool _ignore360MovementBeatmaps;

  /// @brief Field _no360MovementDifficultyBeatmapSets, offset 0x90, size 0x8
  __declspec(property(
      get = __get__no360MovementDifficultyBeatmapSets,
      put = __set__no360MovementDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>* _no360MovementDifficultyBeatmapSets;

  /// @brief Field _previewDifficultyBeatmapSets, offset 0x98, size 0x8
  __declspec(property(get = __get__previewDifficultyBeatmapSets,
                      put = __set__previewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* _previewDifficultyBeatmapSets;

  /// @brief Field _no360MovementPreviewDifficultyBeatmapSets, offset 0xa0, size 0x8
  __declspec(property(get = __get__no360MovementPreviewDifficultyBeatmapSets, put = __set__no360MovementPreviewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<
      ::GlobalNamespace::PreviewDifficultyBeatmapSet*>* _no360MovementPreviewDifficultyBeatmapSets;

  /// @brief Field _beatmapLevelData, offset 0xa8, size 0x8
  __declspec(property(get = __get__beatmapLevelData, put = __set__beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* _beatmapLevelData;

  /// @brief Field _getBeatmapLevelDataResult, offset 0xb0, size 0x10
  __declspec(property(get = __get__getBeatmapLevelDataResult, put = __set__getBeatmapLevelDataResult))::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult _getBeatmapLevelDataResult;

  __declspec(property(get = get_levelID))::StringW levelID;

  __declspec(property(get = get_songName))::StringW songName;

  __declspec(property(get = get_songSubName))::StringW songSubName;

  __declspec(property(get = get_songAuthorName))::StringW songAuthorName;

  __declspec(property(get = get_levelAuthorName))::StringW levelAuthorName;

  __declspec(property(get = get_beatsPerMinute)) float_t beatsPerMinute;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_shuffle)) float_t shuffle;

  __declspec(property(get = get_shufflePeriod)) float_t shufflePeriod;

  __declspec(property(get = get_previewStartTime)) float_t previewStartTime;

  __declspec(property(get = get_previewDuration)) float_t previewDuration;

  __declspec(property(get = get_coverImage))::UnityEngine::Sprite* coverImage;

  __declspec(property(get = get_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  __declspec(property(get = get_allDirectionsEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;

  __declspec(property(get = get_environmentInfos))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos;

  __declspec(property(get = get_difficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  __declspec(property(get = get_songDuration)) float_t songDuration;

  __declspec(property(get = get_previewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;

  __declspec(property(get = get_songPreviewAudioClip))::UnityEngine::AudioClip* songPreviewAudioClip;

  __declspec(property(get = get_songAudioClip))::UnityEngine::AudioClip* songAudioClip;

  __declspec(property(get = get_beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevel"
  constexpr operator ::GlobalNamespace::IBeatmapLevel*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevel"
  constexpr ::GlobalNamespace::IBeatmapLevel* i___GlobalNamespace__IBeatmapLevel() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr ::GlobalNamespace::IPreviewBeatmapLevel* i___GlobalNamespace__IPreviewBeatmapLevel() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongAudioClipProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAssetSongAudioClipProvider"
  constexpr ::GlobalNamespace::IAssetSongAudioClipProvider* i___GlobalNamespace__IAssetSongAudioClipProvider() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr ::GlobalNamespace::IAssetSongPreviewAudioClipProvider* i___GlobalNamespace__IAssetSongPreviewAudioClipProvider() noexcept;

  constexpr ::StringW& __get__levelID();

  constexpr ::StringW const& __get__levelID() const;

  constexpr void __set__levelID(::StringW value);

  constexpr ::StringW& __get__songName();

  constexpr ::StringW const& __get__songName() const;

  constexpr void __set__songName(::StringW value);

  constexpr ::StringW& __get__songSubName();

  constexpr ::StringW const& __get__songSubName() const;

  constexpr void __set__songSubName(::StringW value);

  constexpr ::StringW& __get__songAuthorName();

  constexpr ::StringW const& __get__songAuthorName() const;

  constexpr void __set__songAuthorName(::StringW value);

  constexpr ::StringW& __get__levelAuthorName();

  constexpr ::StringW const& __get__levelAuthorName() const;

  constexpr void __set__levelAuthorName(::StringW value);

  constexpr ::UnityEngine::AudioClip*& __get__audioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__audioClip() const;

  constexpr void __set__audioClip(::UnityEngine::AudioClip* value);

  constexpr float_t& __get__beatsPerMinute();

  constexpr float_t const& __get__beatsPerMinute() const;

  constexpr void __set__beatsPerMinute(float_t value);

  constexpr float_t& __get__songTimeOffset();

  constexpr float_t const& __get__songTimeOffset() const;

  constexpr void __set__songTimeOffset(float_t value);

  constexpr float_t& __get__shuffle();

  constexpr float_t const& __get__shuffle() const;

  constexpr void __set__shuffle(float_t value);

  constexpr float_t& __get__shufflePeriod();

  constexpr float_t const& __get__shufflePeriod() const;

  constexpr void __set__shufflePeriod(float_t value);

  constexpr float_t& __get__previewStartTime();

  constexpr float_t const& __get__previewStartTime() const;

  constexpr void __set__previewStartTime(float_t value);

  constexpr float_t& __get__previewDuration();

  constexpr float_t const& __get__previewDuration() const;

  constexpr void __set__previewDuration(float_t value);

  constexpr ::UnityEngine::Sprite*& __get__coverImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__coverImage() const;

  constexpr void __set__coverImage(::UnityEngine::Sprite* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__environmentInfo() const;

  constexpr void __set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__allDirectionsEnvironmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__allDirectionsEnvironmentInfo() const;

  constexpr void __set__allDirectionsEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>& __get__environmentInfos();

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> const& __get__environmentInfos() const;

  constexpr void __set__environmentInfos(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>& __get__difficultyBeatmapSets();

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*> const& __get__difficultyBeatmapSets() const;

  constexpr void __set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*> value);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__contentRating();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__contentRating() const;

  constexpr void __set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr bool& __get__ignore360MovementBeatmaps();

  constexpr bool const& __get__ignore360MovementBeatmaps() const;

  constexpr void __set__ignore360MovementBeatmaps(bool value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*& __get__no360MovementDifficultyBeatmapSets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*> const&
  __get__no360MovementDifficultyBeatmapSets() const;

  constexpr void __set__no360MovementDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*& __get__previewDifficultyBeatmapSets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> const& __get__previewDifficultyBeatmapSets() const;

  constexpr void __set__previewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*& __get__no360MovementPreviewDifficultyBeatmapSets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> const&
  __get__no360MovementPreviewDifficultyBeatmapSets() const;

  constexpr void __set__no360MovementPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);

  constexpr ::GlobalNamespace::IBeatmapLevelData*& __get__beatmapLevelData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelData*> const& __get__beatmapLevelData() const;

  constexpr void __set__beatmapLevelData(::GlobalNamespace::IBeatmapLevelData* value);

  constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult& __get__getBeatmapLevelDataResult();

  constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult const& __get__getBeatmapLevelDataResult() const;

  constexpr void __set__getBeatmapLevelDataResult(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult value);

  /// @brief Method get_levelID, addr 0x2344bb0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelID();

  /// @brief Method get_songName, addr 0x2344bb8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songName();

  /// @brief Method get_songSubName, addr 0x2344bc0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName, addr 0x2344bc8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName, addr 0x2344bd0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute, addr 0x2344bd8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset, addr 0x2344be0, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songTimeOffset();

  /// @brief Method get_shuffle, addr 0x2344be8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod, addr 0x2344bf0, size 0x8, virtual true, abstract: false, final true
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime, addr 0x2344bf8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration, addr 0x2344c00, size 0x8, virtual true, abstract: false, final true
  inline float_t get_previewDuration();

  /// @brief Method get_coverImage, addr 0x2344c08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Sprite* get_coverImage();

  /// @brief Method get_environmentInfo, addr 0x2344c10, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_allDirectionsEnvironmentInfo, addr 0x2344c18, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();

  /// @brief Method get_environmentInfos, addr 0x2344c20, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos();

  /// @brief Method get_difficultyBeatmapSets, addr 0x2344c28, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();

  /// @brief Method get_contentRating, addr 0x2344c44, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method get_songDuration, addr 0x2344c4c, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_songDuration();

  /// @brief Method get_previewDifficultyBeatmapSets, addr 0x2344c68, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method get_songPreviewAudioClip, addr 0x2344c84, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::AudioClip* get_songPreviewAudioClip();

  /// @brief Method get_songAudioClip, addr 0x2344c8c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::AudioClip* get_songAudioClip();

  /// @brief Method OnEnable, addr 0x2344c94, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method InitData, addr 0x2344cb0, size 0x128, virtual false, abstract: false, final false
  inline void InitData();

  /// @brief Method GetPreviewAudioClipAsync, addr 0x2344e1c, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetCoverImageAsync, addr 0x2344f18, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method get_beatmapLevelData, addr 0x2345014, size 0x80, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  /// @brief Method __SetEnvironmentInfo, addr 0x2345094, size 0x8, virtual false, abstract: false, final false
  inline void __SetEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* environmentInfo);

  /// @brief Method GetBeatmapLevelDataAsync, addr 0x234509c, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* GetBeatmapLevelDataAsync(::System::Threading::CancellationToken token);

  /// @brief Method GetDifficultyBeatmap, addr 0x2345194, size 0x79c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method InitFull, addr 0x2345930, size 0x30, virtual false, abstract: false, final false
  inline void InitFull(::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, ::UnityEngine::AudioClip* audioClip, float_t beatsPerMinute,
                       float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, ::UnityEngine::Sprite* coverImage,
                       ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo,
                       ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos,
                       ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*> difficultyBeatmapSets);

  static inline ::GlobalNamespace::BeatmapLevelSO* New_ctor();

  /// @brief Method .ctor, addr 0x2345960, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelSO(BeatmapLevelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelSO(BeatmapLevelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSO();

public:
  /// @brief Field _levelID, offset: 0x18, size: 0x8, def value: None
  ::StringW ____levelID;

  /// @brief Field _songName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____songName;

  /// @brief Field _songSubName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____songSubName;

  /// @brief Field _songAuthorName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____songAuthorName;

  /// @brief Field _levelAuthorName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____levelAuthorName;

  /// @brief Field _audioClip, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____audioClip;

  /// @brief Field _beatsPerMinute, offset: 0x48, size: 0x4, def value: None
  float_t ____beatsPerMinute;

  /// @brief Field _songTimeOffset, offset: 0x4c, size: 0x4, def value: None
  float_t ____songTimeOffset;

  /// @brief Field _shuffle, offset: 0x50, size: 0x4, def value: None
  float_t ____shuffle;

  /// @brief Field _shufflePeriod, offset: 0x54, size: 0x4, def value: None
  float_t ____shufflePeriod;

  /// @brief Field _previewStartTime, offset: 0x58, size: 0x4, def value: None
  float_t ____previewStartTime;

  /// @brief Field _previewDuration, offset: 0x5c, size: 0x4, def value: None
  float_t ____previewDuration;

  /// @brief Field _coverImage, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____coverImage;

  /// @brief Field _environmentInfo, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____environmentInfo;

  /// @brief Field _allDirectionsEnvironmentInfo, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____allDirectionsEnvironmentInfo;

  /// @brief Field _environmentInfos, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> ____environmentInfos;

  /// @brief Field _difficultyBeatmapSets, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*> ____difficultyBeatmapSets;

  /// @brief Field _contentRating, offset: 0x88, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____contentRating;

  /// @brief Field _ignore360MovementBeatmaps, offset: 0x8c, size: 0x1, def value: None
  bool ____ignore360MovementBeatmaps;

  /// @brief Field _no360MovementDifficultyBeatmapSets, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>* ____no360MovementDifficultyBeatmapSets;

  /// @brief Field _previewDifficultyBeatmapSets, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* ____previewDifficultyBeatmapSets;

  /// @brief Field _no360MovementPreviewDifficultyBeatmapSets, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* ____no360MovementPreviewDifficultyBeatmapSets;

  /// @brief Field _beatmapLevelData, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* ____beatmapLevelData;

  /// @brief Field _getBeatmapLevelDataResult, offset: 0xb0, size: 0x10, def value: None
  ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult ____getBeatmapLevelDataResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelSO, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____levelID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____songName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____songSubName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____songAuthorName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____levelAuthorName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____audioClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____beatsPerMinute) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____songTimeOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____shuffle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____shufflePeriod) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____previewStartTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____previewDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____coverImage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____environmentInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____allDirectionsEnvironmentInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____environmentInfos) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____difficultyBeatmapSets) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____contentRating) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____ignore360MovementBeatmaps) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____no360MovementDifficultyBeatmapSets) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____previewDifficultyBeatmapSets) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____no360MovementPreviewDifficultyBeatmapSets) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____beatmapLevelData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____getBeatmapLevelDataResult) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, "", "BeatmapLevelSO/GetBeatmapLevelDataResult/Result");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSO*, "", "BeatmapLevelSO");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, "", "BeatmapLevelSO/DifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*, "", "BeatmapLevelSO/DifficultyBeatmapSet");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17, "", "BeatmapLevelSO/DifficultyBeatmap/<GetBeatmapDataAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16, "", "BeatmapLevelSO/DifficultyBeatmap/<GetBeatmapDataBasicInfoAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, "", "BeatmapLevelSO/GetBeatmapLevelDataResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76, "", "BeatmapLevelSO/<GetBeatmapLevelDataAsync>d__76");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72, "", "BeatmapLevelSO/<GetCoverImageAsync>d__72");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71, "", "BeatmapLevelSO/<GetPreviewAudioClipAsync>d__71");
