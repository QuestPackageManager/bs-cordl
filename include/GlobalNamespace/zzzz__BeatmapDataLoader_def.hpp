#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__LastUsedBeatmapDataCache_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataLoader)
namespace GlobalNamespace {
class BeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IEnvironmentInfo;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct __BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1;
}
namespace GlobalNamespace {
struct __BeatmapDataLoader___LoadBeatmapDataAsync_d__4;
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
class BeatmapDataLoader;
}
namespace GlobalNamespace {
struct __BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1;
}
namespace GlobalNamespace {
struct __BeatmapDataLoader___LoadBeatmapDataAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataLoader);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1);
MARK_VAL_T(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4);
// Type: ::<LoadBasicBeatmapDataAsync>d__1
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapDataLoader::<LoadBasicBeatmapDataAsync>d__1
struct CORDL_TYPE __BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12ba008, size 0x538, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12ba540, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData", ty:
  // "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None }]
  constexpr __BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1(int32_t __1__state,
                                                                 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder,
                                                                 ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder;

  /// @brief Field beatmapLevelData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Field beatmapKey, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1, beatmapLevelData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1, beatmapKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1, __u__2) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapDataAsync>d__4
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapDataLoader::<LoadBeatmapDataAsync>d__4
struct CORDL_TYPE __BeatmapDataLoader___LoadBeatmapDataAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12ba598, size 0xb24, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12bb1b8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataLoader___LoadBeatmapDataAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "enableBeatmapDataCaching", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: None }, CppParam { name: "beatmapKey", ty:
  // "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: None }, CppParam {
  // name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty:
  // "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None },
  // CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW,::Array<::StringW>*>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>", modifiers: "", def_value: None }]
  constexpr __BeatmapDataLoader___LoadBeatmapDataAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                            bool enableBeatmapDataCaching, ::GlobalNamespace::BeatmapDataLoader* __4__this, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                            ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                            ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, float_t startBpm,
                                                            bool loadingForDesignatedEnvironment, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW, ::Array<::StringW>*>> __u__1,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field enableBeatmapDataCaching, offset: 0x20, size: 0x1, def value: None
  bool enableBeatmapDataCaching;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* __4__this;

  /// @brief Field beatmapKey, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field environmentInfo, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* environmentInfo;

  /// @brief Field gameplayModifiers, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field beatmapLevelData, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Field startBpm, offset: 0x68, size: 0x4, def value: None
  float_t startBpm;

  /// @brief Field loadingForDesignatedEnvironment, offset: 0x6c, size: 0x1, def value: None
  bool loadingForDesignatedEnvironment;

  /// @brief Field <>u__1, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW, ::Array<::StringW>*>> __u__1;

  /// @brief Field <>u__2, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, enableBeatmapDataCaching) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, beatmapKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, environmentInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, gameplayModifiers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, playerSpecificSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, beatmapLevelData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, startBpm) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, loadingForDesignatedEnvironment) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, __u__2) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataLoader
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataLoader*
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using _LoadBasicBeatmapDataAsync_d__1 = ::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1;

  using _LoadBeatmapDataAsync_d__4 = ::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4;

  /// @brief Field _lastUsedBeatmapDataCache, offset 0x10, size 0x38
  __declspec(property(get = __cordl_internal_get__lastUsedBeatmapDataCache, put = __cordl_internal_set__lastUsedBeatmapDataCache))::GlobalNamespace::LastUsedBeatmapDataCache _lastUsedBeatmapDataCache;

  /// @brief Method LoadBasicBeatmapData, addr 0x12b994c, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* LoadBasicBeatmapData(::StringW beatmapJson);

  /// @brief Method LoadBasicBeatmapData, addr 0x12b987c, size 0xd0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* LoadBasicBeatmapData(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method LoadBasicBeatmapDataAsync, addr 0x12b9774, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* LoadBasicBeatmapDataAsync(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                                                 ::GlobalNamespace::BeatmapKey beatmapKey);

  /// @brief Method LoadBeatmapData, addr 0x12b9ba0, size 0x460, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* LoadBeatmapData(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm,
                                                                  bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                  ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method LoadBeatmapDataAsync, addr 0x12b9a40, size 0x160, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  LoadBeatmapDataAsync(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm, bool loadingForDesignatedEnvironment,
                       ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                       bool enableBeatmapDataCaching);

  static inline ::GlobalNamespace::BeatmapDataLoader* New_ctor();

  constexpr ::GlobalNamespace::LastUsedBeatmapDataCache const& __cordl_internal_get__lastUsedBeatmapDataCache() const;

  constexpr ::GlobalNamespace::LastUsedBeatmapDataCache& __cordl_internal_get__lastUsedBeatmapDataCache();

  constexpr void __cordl_internal_set__lastUsedBeatmapDataCache(::GlobalNamespace::LastUsedBeatmapDataCache value);

  /// @brief Method .ctor, addr 0x12ba000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader(BeatmapDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader(BeatmapDataLoader const&) = delete;

  /// @brief Field _lastUsedBeatmapDataCache, offset: 0x10, size: 0x38, def value: None
  ::GlobalNamespace::LastUsedBeatmapDataCache ____lastUsedBeatmapDataCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataLoader, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader, ____lastUsedBeatmapDataCache) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader___LoadBasicBeatmapDataAsync_d__1, "", "BeatmapDataLoader/<LoadBasicBeatmapDataAsync>d__1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataLoader___LoadBeatmapDataAsync_d__4, "", "BeatmapDataLoader/<LoadBeatmapDataAsync>d__4");
