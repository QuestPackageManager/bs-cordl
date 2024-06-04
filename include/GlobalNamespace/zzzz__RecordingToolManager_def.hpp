#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingToolManager)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class RecordingSettings;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor;
}
namespace GlobalNamespace {
class RecordingToolSettings;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace GlobalNamespace {
struct __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28;
}
namespace GlobalNamespace {
class __RecordingToolManager____c;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace GlobalNamespace {
class __RecordingToolManager____c;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace GlobalNamespace {
struct __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolManager);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolManager____c);
MARK_VAL_T(::GlobalNamespace::__RecordingToolManager__SetupData);
MARK_VAL_T(::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28);
// Type: ::SetupData
// SizeInfo { instance_size: 2, native_size: 8, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RecordingToolManager::SetupData
struct CORDL_TYPE __RecordingToolManager__SetupData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolManager__SetupData();

  // Ctor Parameters [CppParam { name: "profileSong", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "runAutopilot", ty: "bool", modifiers: "", def_value: None }]
  constexpr __RecordingToolManager__SetupData(bool profileSong, bool runAutopilot) noexcept;

  /// @brief Field profileSong, offset: 0x0, size: 0x1, def value: None
  bool profileSong;

  /// @brief Field runAutopilot, offset: 0x1, size: 0x1, def value: None
  bool runAutopilot;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolManager__SetupData, 0x2>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolManager__SetupData, profileSong) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolManager__SetupData, runAutopilot) == 0x1, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolManager::<>c*
class CORDL_TYPE __RecordingToolManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__RecordingToolManager____c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::System::Func_2<::GlobalNamespace::RecordingSettings*, bool>* __9__25_0;

  static inline ::GlobalNamespace::__RecordingToolManager____c* New_ctor();

  /// @brief Method <.ctor>b__25_0, addr 0x26ac890, size 0x18, virtual false, abstract: false, final false
  inline bool __ctor_b__25_0(::GlobalNamespace::RecordingSettings* recordingSettings);

  /// @brief Method .ctor, addr 0x26ac888, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__RecordingToolManager____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::RecordingSettings*, bool>* getStaticF___9__25_0();

  static inline void setStaticF___9(::GlobalNamespace::__RecordingToolManager____c* value);

  static inline void setStaticF___9__25_0(::System::Func_2<::GlobalNamespace::RecordingSettings*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolManager____c(__RecordingToolManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolManager____c(__RecordingToolManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish>d__28
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RecordingToolManager::<HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish>d__28
struct CORDL_TYPE __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26ac8a8, size 0x2b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26acb60, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RecordingToolManager*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28(int32_t __1__state,
                                                                                                             ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                             ::GlobalNamespace::RecordingToolManager* __4__this,
                                                                                                             ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolManager* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordingToolManager
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolManager*
class CORDL_TYPE RecordingToolManager : public ::System::Object {
public:
  // Declarations
  using SetupData = ::GlobalNamespace::__RecordingToolManager__SetupData;

  using _HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28 = ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28;

  using __c = ::GlobalNamespace::__RecordingToolManager____c;

  /// @brief Field _configJsonData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__configJsonData, put = __cordl_internal_set__configJsonData))::StringW _configJsonData;

  /// @brief Field _configurationProcessor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__configurationProcessor,
                      put = __cordl_internal_set__configurationProcessor))::GlobalNamespace::RecordingToolConfigurationProcessor* _configurationProcessor;

  /// @brief Field _container, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _currentRecordingIndex, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__currentRecordingIndex, put = __cordl_internal_set__currentRecordingIndex)) int32_t _currentRecordingIndex;

  /// @brief Field _gameScenesManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gameplayLevelSceneTransitionEvents, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayLevelSceneTransitionEvents,
                      put = __cordl_internal_set__gameplayLevelSceneTransitionEvents))::GlobalNamespace::GameplayLevelSceneTransitionEvents* _gameplayLevelSceneTransitionEvents;

  /// @brief Field _logger, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _performanceRecordingEnabled, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__performanceRecordingEnabled, put = __cordl_internal_set__performanceRecordingEnabled)) bool _performanceRecordingEnabled;

  /// @brief Field _posesSerializer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__posesSerializer, put = __cordl_internal_set__posesSerializer))::GlobalNamespace::IPosesSerializer* _posesSerializer;

  /// @brief Field _recordingToolEnabled, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__recordingToolEnabled, put = __cordl_internal_set__recordingToolEnabled)) bool _recordingToolEnabled;

  /// @brief Field _recordingToolSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolSettings, put = __cordl_internal_set__recordingToolSettings))::GlobalNamespace::RecordingToolSettings* _recordingToolSettings;

  __declspec(property(get = get_configJsonData))::StringW configJsonData;

  __declspec(property(get = get_performanceRecordingEnabled)) bool performanceRecordingEnabled;

  __declspec(property(get = get_posesSerializer))::GlobalNamespace::IPosesSerializer* posesSerializer;

  __declspec(property(get = get_recordingToolEnabled)) bool recordingToolEnabled;

  __declspec(property(get = get_recordingToolSettings))::GlobalNamespace::RecordingToolSettings* recordingToolSettings;

  __declspec(property(get = get_showRecordingToolScene)) bool showRecordingToolScene;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method BindNextRecording, addr 0x26ac4d4, size 0x350, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MenuDestination* BindNextRecording(::Zenject::DiContainer* container, ::GlobalNamespace::RecordingSettings* recordingSettings, bool quitAppAfterRun);

  /// @brief Method Dispose, addr 0x26ac3a8, size 0x98, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish, addr 0x26ac440, size 0x94, virtual false, abstract: false, final false
  inline void HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish();

  /// @brief Method Initialize, addr 0x26ac15c, size 0xa8, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::RecordingToolManager* New_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor,
                                                                  ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::Zenject::DiContainer* diContainer);

  /// @brief Method StartNextRecording, addr 0x26ac204, size 0x1a4, virtual false, abstract: false, final false
  inline void StartNextRecording();

  constexpr ::StringW const& __cordl_internal_get__configJsonData() const;

  constexpr ::StringW& __cordl_internal_get__configJsonData();

  constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor*& __cordl_internal_get__configurationProcessor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolConfigurationProcessor*> const& __cordl_internal_get__configurationProcessor() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr int32_t const& __cordl_internal_get__currentRecordingIndex() const;

  constexpr int32_t& __cordl_internal_get__currentRecordingIndex();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& __cordl_internal_get__gameplayLevelSceneTransitionEvents();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayLevelSceneTransitionEvents*> const& __cordl_internal_get__gameplayLevelSceneTransitionEvents() const;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __cordl_internal_get__logger() const;

  constexpr bool const& __cordl_internal_get__performanceRecordingEnabled() const;

  constexpr bool& __cordl_internal_get__performanceRecordingEnabled();

  constexpr ::GlobalNamespace::IPosesSerializer*& __cordl_internal_get__posesSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> const& __cordl_internal_get__posesSerializer() const;

  constexpr bool const& __cordl_internal_get__recordingToolEnabled() const;

  constexpr bool& __cordl_internal_get__recordingToolEnabled();

  constexpr ::GlobalNamespace::RecordingToolSettings*& __cordl_internal_get__recordingToolSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSettings*> const& __cordl_internal_get__recordingToolSettings() const;

  constexpr void __cordl_internal_set__configJsonData(::StringW value);

  constexpr void __cordl_internal_set__configurationProcessor(::GlobalNamespace::RecordingToolConfigurationProcessor* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__currentRecordingIndex(int32_t value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value);

  constexpr void __cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr void __cordl_internal_set__performanceRecordingEnabled(bool value);

  constexpr void __cordl_internal_set__posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  constexpr void __cordl_internal_set__recordingToolEnabled(bool value);

  constexpr void __cordl_internal_set__recordingToolSettings(::GlobalNamespace::RecordingToolSettings* value);

  /// @brief Method .ctor, addr 0x26ac0d4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor, ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                    ::Zenject::DiContainer* diContainer);

  /// @brief Method get_configJsonData, addr 0x26ac0bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_configJsonData();

  /// @brief Method get_performanceRecordingEnabled, addr 0x26ac0b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_performanceRecordingEnabled();

  /// @brief Method get_posesSerializer, addr 0x26ac0cc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IPosesSerializer* get_posesSerializer();

  /// @brief Method get_recordingToolEnabled, addr 0x26ac0a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_recordingToolEnabled();

  /// @brief Method get_recordingToolSettings, addr 0x26ac0c4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RecordingToolSettings* get_recordingToolSettings();

  /// @brief Method get_showRecordingToolScene, addr 0x26ac0ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_showRecordingToolScene();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolManager(RecordingToolManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolManager(RecordingToolManager const&) = delete;

  /// @brief Field _gameplayLevelSceneTransitionEvents, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameplayLevelSceneTransitionEvents* ____gameplayLevelSceneTransitionEvents;

  /// @brief Field _gameScenesManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _recordingToolEnabled, offset: 0x20, size: 0x1, def value: None
  bool ____recordingToolEnabled;

  /// @brief Field _performanceRecordingEnabled, offset: 0x21, size: 0x1, def value: None
  bool ____performanceRecordingEnabled;

  /// @brief Field _configJsonData, offset: 0x28, size: 0x8, def value: None
  ::StringW ____configJsonData;

  /// @brief Field _recordingToolSettings, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSettings* ____recordingToolSettings;

  /// @brief Field _configurationProcessor, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolConfigurationProcessor* ____configurationProcessor;

  /// @brief Field _container, offset: 0x40, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _logger, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _posesSerializer, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IPosesSerializer* ____posesSerializer;

  /// @brief Field _currentRecordingIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ____currentRecordingIndex;

  /// @brief Field kRecordingToolId offset 0xffffffff size 0x8
  static constexpr ::ConstString kRecordingToolId{ u"RecordingTool" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolManager, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____gameplayLevelSceneTransitionEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____gameScenesManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____recordingToolEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____performanceRecordingEnabled) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____configJsonData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____recordingToolSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____configurationProcessor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____container) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____logger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____posesSerializer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____currentRecordingIndex) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolManager*, "", "RecordingToolManager");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolManager____c*, "", "RecordingToolManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolManager__SetupData, "", "RecordingToolManager/SetupData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28, "",
                       "RecordingToolManager/<HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish>d__28");
