#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCollectionViewController)
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class LevelCollectionTableView;
}
namespace GlobalNamespace {
class __LevelCollectionViewController____c__DisplayClass24_0;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace UnityEngine {
class RectTransform;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
struct __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCollectionViewController;
}
namespace GlobalNamespace {
class __LevelCollectionViewController____c__DisplayClass24_0;
}
namespace GlobalNamespace {
struct __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelCollectionViewController);
MARK_REF_PTR_T(::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass24_0);
MARK_VAL_T(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24);
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5658))
// CS Name: ::LevelCollectionViewController::<>c__DisplayClass24_0*
class CORDL_TYPE __LevelCollectionViewController____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::LevelCollectionViewController* __4__this;

  /// @brief Field level, offset 0x18, size 0x8
  __declspec(property(get = __get_level, put = __set_level))::GlobalNamespace::IPreviewBeatmapLevel* level;

  constexpr ::GlobalNamespace::LevelCollectionViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCollectionViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::LevelCollectionViewController* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_level();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_level() const;

  constexpr void __set_level(::GlobalNamespace::IPreviewBeatmapLevel* value);

  static inline ::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass24_0* New_ctor();

  /// @brief Method .ctor addr 0x22bc3c4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SongPlayerCrossfadeToLevelAsync>b__0 addr 0x22bc3cc size 0x2c virtual false final false
  inline void _SongPlayerCrossfadeToLevelAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__LevelCollectionViewController____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelCollectionViewController____c__DisplayClass24_0(__LevelCollectionViewController____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelCollectionViewController____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelCollectionViewController____c__DisplayClass24_0(__LevelCollectionViewController____c__DisplayClass24_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCollectionViewController____c__DisplayClass24_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LevelCollectionViewController* _____4__this;

  /// @brief Field level, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___level;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass24_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<SongPlayerCrossfadeToLevelAsync>d__24
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 276 }),
// TypeDefinitionIndex(TypeDefinitionIndex(15594)), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5659)) CS Name:
// ::LevelCollectionViewController::<SongPlayerCrossfadeToLevelAsync>d__24
struct CORDL_TYPE __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22bc3f8 size 0x768 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22bcb60 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelCollectionViewController*", modifiers:
  // "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass24_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }]
  constexpr __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                    ::GlobalNamespace::LevelCollectionViewController* __4__this, ::GlobalNamespace::IPreviewBeatmapLevel* level,
                                                                                    ::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass24_0* __8__1,
                                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelCollectionViewController* __4__this;

  /// @brief Field level, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* level;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass24_0* __8__1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelCollectionViewController
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5660))
// CS Name: ::LevelCollectionViewController*
class CORDL_TYPE LevelCollectionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _SongPlayerCrossfadeToLevelAsync_d__24 = ::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24;

  using __c__DisplayClass24_0 = ::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass24_0;

  /// @brief Field _levelCollectionTableView, offset 0x70, size 0x8
  __declspec(property(get = __get__levelCollectionTableView, put = __set__levelCollectionTableView))::GlobalNamespace::LevelCollectionTableView* _levelCollectionTableView;

  /// @brief Field _noDataInfoContainer, offset 0x78, size 0x8
  __declspec(property(get = __get__noDataInfoContainer, put = __set__noDataInfoContainer))::UnityEngine::RectTransform* _noDataInfoContainer;

  /// @brief Field _playerDataModel, offset 0x80, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _container, offset 0x88, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _additionalContentModel, offset 0x90, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _songPreviewPlayer, offset 0x98, size 0x8
  __declspec(property(get = __get__songPreviewPlayer, put = __set__songPreviewPlayer))::GlobalNamespace::SongPreviewPlayer* _songPreviewPlayer;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset 0xa0, size 0x8
  __declspec(property(get = __get__perceivedLoudnessPerLevelModel, put = __set__perceivedLoudnessPerLevelModel))::GlobalNamespace::PerceivedLoudnessPerLevelModel* _perceivedLoudnessPerLevelModel;

  /// @brief Field _audioClipAsyncLoader, offset 0xa8, size 0x8
  __declspec(property(get = __get__audioClipAsyncLoader, put = __set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field didSelectLevelEvent, offset 0xb0, size 0x8
  __declspec(property(get = __get_didSelectLevelEvent,
                      put = __set_didSelectLevelEvent))::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent;

  /// @brief Field didSelectHeaderEvent, offset 0xb8, size 0x8
  __declspec(property(get = __get_didSelectHeaderEvent, put = __set_didSelectHeaderEvent))::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>* didSelectHeaderEvent;

  /// @brief Field _showHeader, offset 0xc0, size 0x1
  __declspec(property(get = __get__showHeader, put = __set__showHeader)) bool _showHeader;

  /// @brief Field _songPlayerCrossFadingToLevelId, offset 0xc8, size 0x8
  __declspec(property(get = __get__songPlayerCrossFadingToLevelId, put = __set__songPlayerCrossFadingToLevelId))::StringW _songPlayerCrossFadingToLevelId;

  /// @brief Field _noDataInfoGO, offset 0xd0, size 0x8
  __declspec(property(get = __get__noDataInfoGO, put = __set__noDataInfoGO))::UnityEngine::GameObject* _noDataInfoGO;

  /// @brief Field _previewBeatmapLevelToBeSelected, offset 0xd8, size 0x8
  __declspec(property(get = __get__previewBeatmapLevelToBeSelected, put = __set__previewBeatmapLevelToBeSelected))::GlobalNamespace::IPreviewBeatmapLevel* _previewBeatmapLevelToBeSelected;

  constexpr ::GlobalNamespace::LevelCollectionTableView*& __get__levelCollectionTableView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCollectionTableView*> const& __get__levelCollectionTableView() const;

  constexpr void __set__levelCollectionTableView(::GlobalNamespace::LevelCollectionTableView* value);

  constexpr ::UnityEngine::RectTransform*& __get__noDataInfoContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__noDataInfoContainer() const;

  constexpr void __set__noDataInfoContainer(::UnityEngine::RectTransform* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr ::GlobalNamespace::SongPreviewPlayer*& __get__songPreviewPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& __get__songPreviewPlayer() const;

  constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value);

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __get__perceivedLoudnessPerLevelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const& __get__perceivedLoudnessPerLevelModel() const;

  constexpr void __set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __get__audioClipAsyncLoader() const;

  constexpr void __set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>*& __get_didSelectLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>*> const&
  __get_didSelectLevelEvent() const;

  constexpr void __set_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>*& __get_didSelectHeaderEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>*> const& __get_didSelectHeaderEvent() const;

  constexpr void __set_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>* value);

  constexpr bool& __get__showHeader();

  constexpr bool const& __get__showHeader() const;

  constexpr void __set__showHeader(bool value);

  constexpr ::StringW& __get__songPlayerCrossFadingToLevelId();

  constexpr ::StringW const& __get__songPlayerCrossFadingToLevelId() const;

  constexpr void __set__songPlayerCrossFadingToLevelId(::StringW value);

  constexpr ::UnityEngine::GameObject*& __get__noDataInfoGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__noDataInfoGO() const;

  constexpr void __set__noDataInfoGO(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get__previewBeatmapLevelToBeSelected();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get__previewBeatmapLevelToBeSelected() const;

  constexpr void __set__previewBeatmapLevelToBeSelected(::GlobalNamespace::IPreviewBeatmapLevel* value);

  /// @brief Method add_didSelectLevelEvent addr 0x22b9dec size 0xb0 virtual false final false
  inline void add_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method remove_didSelectLevelEvent addr 0x22ba6a4 size 0xb0 virtual false final false
  inline void remove_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method add_didSelectHeaderEvent addr 0x22b9e9c size 0xb0 virtual false final false
  inline void add_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>* value);

  /// @brief Method remove_didSelectHeaderEvent addr 0x22ba754 size 0xb0 virtual false final false
  inline void remove_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>* value);

  /// @brief Method SetData addr 0x22bac24 size 0x3a8 virtual false final false
  inline void SetData(::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, ::StringW headerText, ::UnityEngine::Sprite* headerSprite, bool sortLevels, bool sortPreviewBeatmapLevels,
                      ::UnityEngine::GameObject* noDataInfoPrefab);

  /// @brief Method SelectLevel addr 0x22b9724 size 0x34 virtual false final false
  inline void SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  /// @brief Method RefreshFavorites addr 0x22bbd58 size 0x30 virtual false final false
  inline void RefreshFavorites();

  /// @brief Method DidActivate addr 0x22bbe74 size 0x210 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x22bc084 size 0x1e0 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleLevelCollectionTableViewDidSelectLevel addr 0x22bc264 size 0x50 virtual false final false
  inline void HandleLevelCollectionTableViewDidSelectLevel(::GlobalNamespace::LevelCollectionTableView* tableView, ::GlobalNamespace::IPreviewBeatmapLevel* level);

  /// @brief Method SongPlayerCrossfadeToLevelAsync addr 0x22bc2b4 size 0xa0 virtual false final false
  inline void SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* level);

  /// @brief Method HandleLevelCollectionTableViewDidSelectPack addr 0x22bc354 size 0x44 virtual false final false
  inline void HandleLevelCollectionTableViewDidSelectPack(::GlobalNamespace::LevelCollectionTableView* tableView);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x22bc398 size 0x1c virtual false final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  static inline ::GlobalNamespace::LevelCollectionViewController* New_ctor();

  /// @brief Method .ctor addr 0x22bc3b4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCollectionViewController(LevelCollectionViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCollectionViewController(LevelCollectionViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCollectionViewController();

public:
  /// @brief Field _levelCollectionTableView, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::LevelCollectionTableView* ____levelCollectionTableView;

  /// @brief Field _noDataInfoContainer, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____noDataInfoContainer;

  /// @brief Field _playerDataModel, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _container, offset: 0x88, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _additionalContentModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _songPreviewPlayer, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::SongPreviewPlayer* ____songPreviewPlayer;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____perceivedLoudnessPerLevelModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field didSelectLevelEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>* ___didSelectLevelEvent;

  /// @brief Field didSelectHeaderEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>* ___didSelectHeaderEvent;

  /// @brief Field _showHeader, offset: 0xc0, size: 0x1, def value: None
  bool ____showHeader;

  /// @brief Field _songPlayerCrossFadingToLevelId, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____songPlayerCrossFadingToLevelId;

  /// @brief Field _noDataInfoGO, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____noDataInfoGO;

  /// @brief Field _previewBeatmapLevelToBeSelected, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ____previewBeatmapLevelToBeSelected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCollectionViewController, 0xe0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelCollectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionViewController*, "", "LevelCollectionViewController");
NEED_NO_BOX(::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCollectionViewController____c__DisplayClass24_0*, "", "LevelCollectionViewController/<>c__DisplayClass24_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24, "", "LevelCollectionViewController/<SongPlayerCrossfadeToLevelAsync>d__24");
