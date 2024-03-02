#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoProjectionEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class SongTimeSyncedVideoPlayer;
}
namespace GlobalNamespace {
class VideoProjectionDataModelSO;
}
namespace GlobalNamespace {
class __VideoProjectionDataModelSO__VideoClipWithId;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__GameplayVideoProjectionBehavior;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__InitData;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__VideoProjectionBehavior;
}
namespace GlobalNamespace {
struct __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoProjectionEffect;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__GameplayVideoProjectionBehavior;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__InitData;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__VideoProjectionBehavior;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0;
}
namespace GlobalNamespace {
struct __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VideoProjectionEffect);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0);
MARK_VAL_T(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VideoProjectionEffect::InitData*
class CORDL_TYPE __VideoProjectionEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapLevel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel))::GlobalNamespace::BeatmapLevel* beatmapLevel;

  static inline ::GlobalNamespace::__VideoProjectionEffect__InitData* New_ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_beatmapLevel() const;

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  /// @brief Method .ctor, addr 0x2440370, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoProjectionEffect__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoProjectionEffect__InitData(__VideoProjectionEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoProjectionEffect__InitData(__VideoProjectionEffect__InitData const&) = delete;

  /// @brief Field beatmapLevel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__InitData, ___beatmapLevel) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VideoProjectionEffect::VideoProjectionBehavior::<>c__DisplayClass7_0*
class CORDL_TYPE __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field eventValue, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_eventValue, put = __cordl_internal_set_eventValue)) int32_t eventValue;

  static inline ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0* New_ctor();

  /// @brief Method <LoadVideoFromModel>b__0, addr 0x244079c, size 0x24, virtual false, abstract: false, final false
  inline bool _LoadVideoFromModel_b__0(::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId* clipWithId);

  constexpr int32_t const& __cordl_internal_get_eventValue() const;

  constexpr int32_t& __cordl_internal_get_eventValue();

  constexpr void __cordl_internal_set_eventValue(int32_t value);

  /// @brief Method .ctor, addr 0x2440700, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0(__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0(__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0 const&) = delete;

  /// @brief Field eventValue, offset: 0x10, size: 0x4, def value: None
  int32_t ___eventValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0, ___eventValue) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadPreviewCoverAsset>d__8
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VideoProjectionEffect::VideoProjectionBehavior::<LoadPreviewCoverAsset>d__8
struct CORDL_TYPE __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x24407c0, size 0x2e8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2440aa8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: None }]
  constexpr __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                          ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* __4__this,
                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VideoProjectionBehavior
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VideoProjectionEffect::VideoProjectionBehavior*
class CORDL_TYPE __VideoProjectionEffect__VideoProjectionBehavior : public ::System::Object {
public:
  // Declarations
  using _LoadPreviewCoverAsset_d__8 = ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8;

  using __c__DisplayClass7_0 = ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0;

  /// @brief Field _beatmapLevel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel))::GlobalNamespace::BeatmapLevel* _beatmapLevel;

  /// @brief Field _eventValue, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__eventValue, put = __cordl_internal_set__eventValue)) int32_t _eventValue;

  /// @brief Field _model, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__model, put = __cordl_internal_set__model))::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> _model;

  /// @brief Field _videoClipHandle, offset 0x18, size 0x20
  __declspec(
      property(get = __cordl_internal_get__videoClipHandle,
               put = __cordl_internal_set__videoClipHandle))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>> _videoClipHandle;

  /// @brief Field _videoPlayer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__videoPlayer, put = __cordl_internal_set__videoPlayer))::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> _videoPlayer;

  /// @brief Method Dispose, addr 0x24403d4, size 0xb0, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method LoadPreviewCoverAsset, addr 0x2440708, size 0x94, virtual false, abstract: false, final false
  inline void LoadPreviewCoverAsset();

  /// @brief Method LoadVideoFromModel, addr 0x2440484, size 0x27c, virtual false, abstract: false, final false
  inline void LoadVideoFromModel(int32_t eventValue);

  static inline ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* New_ctor(::GlobalNamespace::VideoProjectionDataModelSO* dataModel,
                                                                                              ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get__beatmapLevel() const;

  constexpr int32_t const& __cordl_internal_get__eventValue() const;

  constexpr int32_t& __cordl_internal_get__eventValue();

  constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> const& __cordl_internal_get__model() const;

  constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO>& __cordl_internal_get__model();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>> const& __cordl_internal_get__videoClipHandle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>>& __cordl_internal_get__videoClipHandle();

  constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> const& __cordl_internal_get__videoPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer>& __cordl_internal_get__videoPlayer();

  constexpr void __cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__eventValue(int32_t value);

  constexpr void __cordl_internal_set__model(::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> value);

  constexpr void __cordl_internal_set__videoClipHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>> value);

  constexpr void __cordl_internal_set__videoPlayer(::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> value);

  /// @brief Method .ctor, addr 0x2440398, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoProjectionEffect__VideoProjectionBehavior();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__VideoProjectionBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoProjectionEffect__VideoProjectionBehavior(__VideoProjectionEffect__VideoProjectionBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__VideoProjectionBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoProjectionEffect__VideoProjectionBehavior(__VideoProjectionEffect__VideoProjectionBehavior const&) = delete;

  /// @brief Field _eventValue, offset: 0x10, size: 0x4, def value: None
  int32_t ____eventValue;

  /// @brief Field _videoClipHandle, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Video::VideoClip>> ____videoClipHandle;

  /// @brief Field _model, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> ____model;

  /// @brief Field _videoPlayer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> ____videoPlayer;

  /// @brief Field _beatmapLevel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior, ____eventValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior, ____videoClipHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior, ____model) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior, ____videoPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior, ____beatmapLevel) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapEditorVideoProjectionBehavior
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior*
class CORDL_TYPE __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior : public ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _callbackWrapper, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__callbackWrapper, put = __cordl_internal_set__callbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _callbackWrapper;

  /// @brief Method Dispose, addr 0x2440ab4, size 0x28, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method HandleBeatmapEvent, addr 0x2440adc, size 0xec, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* data);

  static inline ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*
  New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
           ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__callbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__callbackWrapper() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__callbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method .ctor, addr 0x2440124, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
                    ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior(__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior(__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior const&) = delete;

  /// @brief Field _beatmapCallbacksController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _callbackWrapper, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____callbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior, ____beatmapCallbacksController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior, ____callbackWrapper) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayVideoProjectionBehavior
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VideoProjectionEffect::GameplayVideoProjectionBehavior*
class CORDL_TYPE __VideoProjectionEffect__GameplayVideoProjectionBehavior : public ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior {
public:
  // Declarations
  static inline ::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*
  New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
           ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method .ctor, addr 0x243ffec, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer,
                    ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoProjectionEffect__GameplayVideoProjectionBehavior();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__GameplayVideoProjectionBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoProjectionEffect__GameplayVideoProjectionBehavior(__VideoProjectionEffect__GameplayVideoProjectionBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__GameplayVideoProjectionBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoProjectionEffect__GameplayVideoProjectionBehavior(__VideoProjectionEffect__GameplayVideoProjectionBehavior const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VideoProjectionEffect
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VideoProjectionEffect*
class CORDL_TYPE VideoProjectionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BeatmapEditorVideoProjectionBehavior = ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior;

  using GameplayVideoProjectionBehavior = ::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior;

  using InitData = ::GlobalNamespace::__VideoProjectionEffect__InitData;

  using VideoProjectionBehavior = ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior;

  /// @brief Field _beatmapCallbacksController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData))::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _behavior, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__behavior, put = __cordl_internal_set__behavior))::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* _behavior;

  /// @brief Field _environmentContext, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentContext, put = __cordl_internal_set__environmentContext))::GlobalNamespace::EnvironmentContext _environmentContext;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__VideoProjectionEffect__InitData* _initData;

  /// @brief Field _videoEventType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__videoEventType, put = __cordl_internal_set__videoEventType))::GlobalNamespace::BasicBeatmapEventType _videoEventType;

  /// @brief Field _videoPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__videoPlayer, put = __cordl_internal_set__videoPlayer))::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> _videoPlayer;

  /// @brief Field _videoProjectionDataModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__videoProjectionDataModel,
                      put = __cordl_internal_set__videoProjectionDataModel))::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> _videoProjectionDataModel;

  static inline ::GlobalNamespace::VideoProjectionEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x2440350, size 0x18, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x243fee0, size 0x10c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*& __cordl_internal_get__behavior();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*> const& __cordl_internal_get__behavior() const;

  constexpr ::GlobalNamespace::EnvironmentContext const& __cordl_internal_get__environmentContext() const;

  constexpr ::GlobalNamespace::EnvironmentContext& __cordl_internal_get__environmentContext();

  constexpr ::GlobalNamespace::__VideoProjectionEffect__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__videoEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__videoEventType();

  constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> const& __cordl_internal_get__videoPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer>& __cordl_internal_get__videoPlayer();

  constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> const& __cordl_internal_get__videoProjectionDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO>& __cordl_internal_get__videoProjectionDataModel();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set__behavior(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* value);

  constexpr void __cordl_internal_set__environmentContext(::GlobalNamespace::EnvironmentContext value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__VideoProjectionEffect__InitData* value);

  constexpr void __cordl_internal_set__videoEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__videoPlayer(::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> value);

  constexpr void __cordl_internal_set__videoProjectionDataModel(::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> value);

  /// @brief Method .ctor, addr 0x2440368, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoProjectionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoProjectionEffect(VideoProjectionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoProjectionEffect(VideoProjectionEffect const&) = delete;

  /// @brief Field _videoProjectionDataModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VideoProjectionDataModelSO> ____videoProjectionDataModel;

  /// @brief Field _videoPlayer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongTimeSyncedVideoPlayer> ____videoPlayer;

  /// @brief Field _videoEventType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____videoEventType;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__VideoProjectionEffect__InitData* ____initData;

  /// @brief Field _environmentContext, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentContext ____environmentContext;

  /// @brief Field _beatmapData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _beatmapCallbacksController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _behavior, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* ____behavior;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VideoProjectionEffect, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoProjectionEffect, ____videoProjectionDataModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoProjectionEffect, ____videoPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoProjectionEffect, ____videoEventType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoProjectionEffect, ____initData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoProjectionEffect, ____environmentContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoProjectionEffect, ____beatmapData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoProjectionEffect, ____beatmapCallbacksController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoProjectionEffect, ____behavior) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VideoProjectionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionEffect*, "", "VideoProjectionEffect");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*, "", "VideoProjectionEffect/BeatmapEditorVideoProjectionBehavior");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*, "", "VideoProjectionEffect/GameplayVideoProjectionBehavior");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__InitData*, "", "VideoProjectionEffect/InitData");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*, "", "VideoProjectionEffect/VideoProjectionBehavior");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*, "", "VideoProjectionEffect/VideoProjectionBehavior/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8, "",
                       "VideoProjectionEffect/VideoProjectionBehavior/<LoadPreviewCoverAsset>d__8");
