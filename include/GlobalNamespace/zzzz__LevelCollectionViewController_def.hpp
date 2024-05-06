#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCollectionViewController)
namespace BGLib::UnityExtension {
template <typename T> class Debouncer_1;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class LevelCollectionTableView;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
struct __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26;
}
namespace GlobalNamespace {
struct __LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25;
}
namespace GlobalNamespace {
class __LevelCollectionViewController____c__DisplayClass26_0;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
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
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Sprite;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCollectionViewController;
}
namespace GlobalNamespace {
class __LevelCollectionViewController____c__DisplayClass26_0;
}
namespace GlobalNamespace {
struct __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26;
}
namespace GlobalNamespace {
struct __LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelCollectionViewController);
MARK_REF_PTR_T(::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0);
MARK_VAL_T(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26);
MARK_VAL_T(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25);
// Type: ::<SongPlayerCrossfadeToLevel>d__25
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelCollectionViewController::<SongPlayerCrossfadeToLevel>d__25
struct CORDL_TYPE __LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26422a0, size 0x294, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2642534, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelCollectionViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                               ::UnityW<::GlobalNamespace::LevelCollectionViewController> __4__this, ::GlobalNamespace::BeatmapLevel* level,
                                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelCollectionViewController> __4__this;

  /// @brief Field level, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* level;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25, level) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass26_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelCollectionViewController::<>c__DisplayClass26_0*
class CORDL_TYPE __LevelCollectionViewController____c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::LevelCollectionViewController> __4__this;

  /// @brief Field level, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_level, put = __cordl_internal_set_level))::GlobalNamespace::BeatmapLevel* level;

  static inline ::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0* New_ctor();

  /// @brief Method <SongPlayerCrossfadeToLevelAsync>b__0, addr 0x2642548, size 0x20, virtual false, abstract: false, final false
  inline void _SongPlayerCrossfadeToLevelAsync_b__0();

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionViewController>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_level();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_level() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LevelCollectionViewController> value);

  constexpr void __cordl_internal_set_level(::GlobalNamespace::BeatmapLevel* value);

  /// @brief Method .ctor, addr 0x2642540, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCollectionViewController____c__DisplayClass26_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LevelCollectionViewController____c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelCollectionViewController____c__DisplayClass26_0(__LevelCollectionViewController____c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelCollectionViewController____c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelCollectionViewController____c__DisplayClass26_0(__LevelCollectionViewController____c__DisplayClass26_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelCollectionViewController> _____4__this;

  /// @brief Field level, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___level;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0, ___level) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SongPlayerCrossfadeToLevelAsync>d__26
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelCollectionViewController::<SongPlayerCrossfadeToLevelAsync>d__26
struct CORDL_TYPE __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2642568, size 0x360, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26428c8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelCollectionViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: None }]
  constexpr __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                    ::UnityW<::GlobalNamespace::LevelCollectionViewController> __4__this, ::GlobalNamespace::BeatmapLevel* level,
                                                                                    ::System::Threading::CancellationToken cancellationToken,
                                                                                    ::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0* __8__1,
                                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelCollectionViewController> __4__this;

  /// @brief Field level, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* level;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0* __8__1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26, level) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelCollectionViewController
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelCollectionViewController*
class CORDL_TYPE LevelCollectionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _SongPlayerCrossfadeToLevelAsync_d__26 = ::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26;

  using _SongPlayerCrossfadeToLevel_d__25 = ::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25;

  using __c__DisplayClass26_0 = ::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0;

  /// @brief Field _additionalContentModel, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _audioClipAsyncLoader, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapLevelToBeSelected, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelToBeSelected, put = __cordl_internal_set__beatmapLevelToBeSelected))::GlobalNamespace::BeatmapLevel* _beatmapLevelToBeSelected;

  /// @brief Field _container, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _crossfadeCancellationTokenSource, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__crossfadeCancellationTokenSource,
                      put = __cordl_internal_set__crossfadeCancellationTokenSource))::System::Threading::CancellationTokenSource* _crossfadeCancellationTokenSource;

  /// @brief Field _levelCollectionTableView, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCollectionTableView,
                      put = __cordl_internal_set__levelCollectionTableView))::UnityW<::GlobalNamespace::LevelCollectionTableView> _levelCollectionTableView;

  /// @brief Field _noDataInfoContainer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__noDataInfoContainer, put = __cordl_internal_set__noDataInfoContainer))::UnityW<::UnityEngine::RectTransform> _noDataInfoContainer;

  /// @brief Field _noDataInfoGO, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__noDataInfoGO, put = __cordl_internal_set__noDataInfoGO))::UnityW<::UnityEngine::GameObject> _noDataInfoGO;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevelModel,
                      put = __cordl_internal_set__perceivedLoudnessPerLevelModel))::GlobalNamespace::PerceivedLoudnessPerLevelModel* _perceivedLoudnessPerLevelModel;

  /// @brief Field _playerDataModel, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _showHeader, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__showHeader, put = __cordl_internal_set__showHeader)) bool _showHeader;

  /// @brief Field _songPreviewPlayer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer))::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Field _unloadLevelDebouncer, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__unloadLevelDebouncer,
                      put = __cordl_internal_set__unloadLevelDebouncer))::BGLib::UnityExtension::Debouncer_1<::GlobalNamespace::BeatmapLevel*>* _unloadLevelDebouncer;

  /// @brief Field didSelectHeaderEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectHeaderEvent,
                      put = __cordl_internal_set_didSelectHeaderEvent))::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionViewController>>* didSelectHeaderEvent;

  /// @brief Field didSelectLevelEvent, offset 0xb0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_didSelectLevelEvent,
               put = __cordl_internal_set_didSelectLevelEvent))::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionViewController>, ::GlobalNamespace::BeatmapLevel*>* didSelectLevelEvent;

  /// @brief Method DidActivate, addr 0x2641a90, size 0x210, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2641ca0, size 0x1e0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x2642274, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleLevelCollectionTableViewDidSelectLevel, addr 0x2641e80, size 0x50, virtual false, abstract: false, final false
  inline void HandleLevelCollectionTableViewDidSelectLevel(::GlobalNamespace::LevelCollectionTableView* tableView, ::GlobalNamespace::BeatmapLevel* level);

  /// @brief Method HandleLevelCollectionTableViewDidSelectPack, addr 0x2642230, size 0x44, virtual false, abstract: false, final false
  inline void HandleLevelCollectionTableViewDidSelectPack(::GlobalNamespace::LevelCollectionTableView* tableView);

  /// @brief Method LateUpdate, addr 0x2642174, size 0x50, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::LevelCollectionViewController* New_ctor();

  /// @brief Method OnDisable, addr 0x2642120, size 0x54, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x264204c, size 0xd4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshFavorites, addr 0x2641974, size 0x30, virtual false, abstract: false, final false
  inline void RefreshFavorites();

  /// @brief Method SelectLevel, addr 0x263f67c, size 0x34, virtual false, abstract: false, final false
  inline void SelectLevel(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method SetData, addr 0x2640b64, size 0x270, virtual false, abstract: false, final false
  inline void SetData(::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> beatmapLevels, ::StringW headerText, ::UnityEngine::Sprite* headerSprite, bool sortLevels,
                      bool sortBeatmapLevels, ::UnityEngine::GameObject* noDataInfoPrefab);

  /// @brief Method SongPlayerCrossfadeToLevel, addr 0x2641ed0, size 0x9c, virtual false, abstract: false, final false
  inline void SongPlayerCrossfadeToLevel(::GlobalNamespace::BeatmapLevel* level);

  /// @brief Method SongPlayerCrossfadeToLevelAsync, addr 0x2641f6c, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::BeatmapLevel* level, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UnloadPreviewAudioClip, addr 0x26421c4, size 0x6c, virtual false, abstract: false, final false
  inline void UnloadPreviewAudioClip(::GlobalNamespace::BeatmapLevel* level);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevelToBeSelected();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get__beatmapLevelToBeSelected() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__crossfadeCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__crossfadeCancellationTokenSource() const;

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionTableView> const& __cordl_internal_get__levelCollectionTableView() const;

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionTableView>& __cordl_internal_get__levelCollectionTableView();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__noDataInfoContainer() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__noDataInfoContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__noDataInfoGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__noDataInfoGO();

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __cordl_internal_get__perceivedLoudnessPerLevelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const& __cordl_internal_get__perceivedLoudnessPerLevelModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr bool const& __cordl_internal_get__showHeader() const;

  constexpr bool& __cordl_internal_get__showHeader();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::BGLib::UnityExtension::Debouncer_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get__unloadLevelDebouncer();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::UnityExtension::Debouncer_1<::GlobalNamespace::BeatmapLevel*>*> const& __cordl_internal_get__unloadLevelDebouncer() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionViewController>>*& __cordl_internal_get_didSelectHeaderEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionViewController>>*> const& __cordl_internal_get_didSelectHeaderEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionViewController>, ::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get_didSelectLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionViewController>, ::GlobalNamespace::BeatmapLevel*>*> const&
  __cordl_internal_get_didSelectLevelEvent() const;

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapLevelToBeSelected(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__crossfadeCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__levelCollectionTableView(::UnityW<::GlobalNamespace::LevelCollectionTableView> value);

  constexpr void __cordl_internal_set__noDataInfoContainer(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__noDataInfoGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__showHeader(bool value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr void __cordl_internal_set__unloadLevelDebouncer(::BGLib::UnityExtension::Debouncer_1<::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set_didSelectHeaderEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionViewController>>* value);

  constexpr void __cordl_internal_set_didSelectLevelEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionViewController>, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method .ctor, addr 0x2642290, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectHeaderEvent, addr 0x263fdf0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectHeaderEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionViewController>>* value);

  /// @brief Method add_didSelectLevelEvent, addr 0x263fd40, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectLevelEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionViewController>, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method remove_didSelectHeaderEvent, addr 0x2640694, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectHeaderEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionViewController>>* value);

  /// @brief Method remove_didSelectLevelEvent, addr 0x26405e4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectLevelEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionViewController>, ::GlobalNamespace::BeatmapLevel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCollectionViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCollectionViewController(LevelCollectionViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCollectionViewController(LevelCollectionViewController const&) = delete;

  /// @brief Field _levelCollectionTableView, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelCollectionTableView> ____levelCollectionTableView;

  /// @brief Field _noDataInfoContainer, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____noDataInfoContainer;

  /// @brief Field _playerDataModel, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _container, offset: 0x88, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _additionalContentModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _songPreviewPlayer, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____perceivedLoudnessPerLevelModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field didSelectLevelEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionViewController>, ::GlobalNamespace::BeatmapLevel*>* ___didSelectLevelEvent;

  /// @brief Field didSelectHeaderEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionViewController>>* ___didSelectHeaderEvent;

  /// @brief Field _showHeader, offset: 0xc0, size: 0x1, def value: None
  bool ____showHeader;

  /// @brief Field _noDataInfoGO, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____noDataInfoGO;

  /// @brief Field _beatmapLevelToBeSelected, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevelToBeSelected;

  /// @brief Field _crossfadeCancellationTokenSource, offset: 0xd8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____crossfadeCancellationTokenSource;

  /// @brief Field _unloadLevelDebouncer, offset: 0xe0, size: 0x8, def value: None
  ::BGLib::UnityExtension::Debouncer_1<::GlobalNamespace::BeatmapLevel*>* ____unloadLevelDebouncer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCollectionViewController, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____levelCollectionTableView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____noDataInfoContainer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____playerDataModel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____container) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____additionalContentModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____songPreviewPlayer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____perceivedLoudnessPerLevelModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____audioClipAsyncLoader) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ___didSelectLevelEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ___didSelectHeaderEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____showHeader) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____noDataInfoGO) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____beatmapLevelToBeSelected) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____crossfadeCancellationTokenSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionViewController, ____unloadLevelDebouncer) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelCollectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionViewController*, "", "LevelCollectionViewController");
NEED_NO_BOX(::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass26_0*, "", "LevelCollectionViewController/<>c__DisplayClass26_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__26, "", "LevelCollectionViewController/<SongPlayerCrossfadeToLevelAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevel_d__25, "", "LevelCollectionViewController/<SongPlayerCrossfadeToLevel>d__25");
