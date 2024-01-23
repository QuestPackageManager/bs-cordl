#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataCache)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct __BeatmapDataCache___GetBeatmapData_d__4;
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
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
struct __BeatmapDataCache___GetBeatmapData_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataCache);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4);
// Type: ::<GetBeatmapData>d__4
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(4260)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 890 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 890 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(5819)) CS Name: ::BeatmapDataCache::<GetBeatmapData>d__4
struct CORDL_TYPE __BeatmapDataCache___GetBeatmapData_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x22eb1dc, size 0x474, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22eb650, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmap", ty:
  // "::GlobalNamespace::IDifficultyBeatmap*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataCache*", modifiers: "", def_value: None }, CppParam {
  // name: "environmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty:
  // "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr __BeatmapDataCache___GetBeatmapData_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                     ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::BeatmapDataCache* __4__this,
                                                     ::UnityW<::GlobalNamespace::EnvironmentInfoSO> environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataCache___GetBeatmapData_d__4();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field difficultyBeatmap, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCache* __4__this;

  /// @brief Field environmentInfo, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> environmentInfo;

  /// @brief Field playerSpecificSettings, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, difficultyBeatmap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, environmentInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, playerSpecificSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataCache
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5820))
// CS Name: ::BeatmapDataCache*
class CORDL_TYPE BeatmapDataCache : public ::System::Object {
public:
  // Declarations
  using _GetBeatmapData_d__4 = ::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4;

  /// @brief Field difficultyBeatmap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_difficultyBeatmap, put = __cordl_internal_set_difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;

  /// @brief Field environmentInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentInfo, put = __cordl_internal_set_environmentInfo))::UnityW<::GlobalNamespace::EnvironmentInfoSO> environmentInfo;

  /// @brief Field playerSpecificSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings, put = __cordl_internal_set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field cachedMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedMap, put = __cordl_internal_set_cachedMap))::GlobalNamespace::IReadonlyBeatmapData* cachedMap;

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __cordl_internal_get_difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __cordl_internal_get_difficultyBeatmap() const;

  constexpr void __cordl_internal_set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get_environmentInfo();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get_environmentInfo() const;

  constexpr void __cordl_internal_set_environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get_cachedMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __cordl_internal_get_cachedMap() const;

  constexpr void __cordl_internal_set_cachedMap(::GlobalNamespace::IReadonlyBeatmapData* value);

  /// @brief Method GetBeatmapData, addr 0x22eb0c4, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  GetBeatmapData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  static inline ::GlobalNamespace::BeatmapDataCache* New_ctor();

  /// @brief Method .ctor, addr 0x22eb1d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataCache(BeatmapDataCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataCache(BeatmapDataCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataCache();

public:
  /// @brief Field difficultyBeatmap, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ___difficultyBeatmap;

  /// @brief Field environmentInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ___environmentInfo;

  /// @brief Field playerSpecificSettings, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field cachedMap, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___cachedMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataCache, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache, ___difficultyBeatmap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache, ___environmentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache, ___playerSpecificSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache, ___cachedMap) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataCache*, "", "BeatmapDataCache");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataCache___GetBeatmapData_d__4, "", "BeatmapDataCache/<GetBeatmapData>d__4");
