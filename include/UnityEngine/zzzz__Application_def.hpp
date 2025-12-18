#pragma once
// IWYU pragma private; include "UnityEngine/Application.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Application)
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
struct ApplicationInstallMode;
}
namespace UnityEngine {
struct ApplicationMemoryUsageChange;
}
namespace UnityEngine {
struct ApplicationMemoryUsage;
}
namespace UnityEngine {
struct ApplicationSandboxType;
}
namespace UnityEngine {
class Application_LogCallback;
}
namespace UnityEngine {
class Application_LowMemoryCallback;
}
namespace UnityEngine {
class Application_MemoryUsageChangedCallback;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct NetworkReachability;
}
namespace UnityEngine {
struct RuntimePlatform;
}
namespace UnityEngine {
struct SystemLanguage;
}
namespace UnityEngine {
struct ThreadPriority;
}
// Forward declare root types
namespace UnityEngine {
class Application;
}
namespace UnityEngine {
class Application_LogCallback;
}
namespace UnityEngine {
class Application_LowMemoryCallback;
}
namespace UnityEngine {
class Application_MemoryUsageChangedCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Application);
MARK_REF_PTR_T(::UnityEngine::Application_LogCallback);
MARK_REF_PTR_T(::UnityEngine::Application_LowMemoryCallback);
MARK_REF_PTR_T(::UnityEngine::Application_MemoryUsageChangedCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/LowMemoryCallback
class CORDL_TYPE Application_LowMemoryCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x689c4ec, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::Application_LowMemoryCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x689c484, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Application_LowMemoryCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Application_LowMemoryCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Application_LowMemoryCallback(Application_LowMemoryCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Application_LowMemoryCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Application_LowMemoryCallback(Application_LowMemoryCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10036 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Application_LowMemoryCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/MemoryUsageChangedCallback
class CORDL_TYPE Application_MemoryUsageChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x689c57c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::UnityEngine::ApplicationMemoryUsageChange> usage);

  static inline ::UnityEngine::Application_MemoryUsageChangedCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x689c500, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Application_MemoryUsageChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Application_MemoryUsageChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Application_MemoryUsageChangedCallback(Application_MemoryUsageChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Application_MemoryUsageChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Application_MemoryUsageChangedCallback(Application_MemoryUsageChangedCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10037 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Application_MemoryUsageChangedCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/LogCallback
class CORDL_TYPE Application_LogCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x689c610, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW condition, ::StringW stackTrace, ::UnityEngine::LogType type);

  static inline ::UnityEngine::Application_LogCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x689c590, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Application_LogCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Application_LogCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Application_LogCallback(Application_LogCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Application_LogCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Application_LogCallback(Application_LogCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10038 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Application_LogCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application
class CORDL_TYPE Application : public ::System::Object {
public:
  // Declarations
  using LogCallback = ::UnityEngine::Application_LogCallback;

  using LowMemoryCallback = ::UnityEngine::Application_LowMemoryCallback;

  using MemoryUsageChangedCallback = ::UnityEngine::Application_MemoryUsageChangedCallback;

  /// @brief Field deepLinkActivated, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deepLinkActivated, put = setStaticF_deepLinkActivated)) ::System::Action_1<::StringW>* deepLinkActivated;

  /// @brief Field focusChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_focusChanged, put = setStaticF_focusChanged)) ::System::Action_1<bool>* focusChanged;

  /// @brief Field lowMemory, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lowMemory, put = setStaticF_lowMemory)) ::UnityEngine::Application_LowMemoryCallback* lowMemory;

  /// @brief Field memoryUsageChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_memoryUsageChanged, put = setStaticF_memoryUsageChanged)) ::UnityEngine::Application_MemoryUsageChangedCallback* memoryUsageChanged;

  /// @brief Field quitting, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_quitting, put = setStaticF_quitting)) ::System::Action* quitting;

  /// @brief Field s_LogCallbackHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LogCallbackHandler, put = setStaticF_s_LogCallbackHandler)) ::UnityEngine::Application_LogCallback* s_LogCallbackHandler;

  /// @brief Field s_LogCallbackHandlerThreaded, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LogCallbackHandlerThreaded, put = setStaticF_s_LogCallbackHandlerThreaded)) ::UnityEngine::Application_LogCallback* s_LogCallbackHandlerThreaded;

  /// @brief Field s_currentCancellationTokenSource, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_currentCancellationTokenSource,
                      put = setStaticF_s_currentCancellationTokenSource)) ::System::Threading::CancellationTokenSource* s_currentCancellationTokenSource;

  /// @brief Field unloading, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_unloading, put = setStaticF_unloading)) ::System::Action* unloading;

  /// @brief Field wantsToQuit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_wantsToQuit, put = setStaticF_wantsToQuit)) ::System::Func_1<bool>* wantsToQuit;

  /// @brief Method CallLogCallback, addr 0x689b71c, size 0xec, virtual false, abstract: false, final false
  static inline void CallLogCallback(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type, bool invokedOnMainThread);

  /// @brief Method CallLowMemory, addr 0x689b210, size 0x134, virtual false, abstract: false, final false
  static inline void CallLowMemory(::UnityEngine::ApplicationMemoryUsage usage);

  /// @brief Method CanStreamedLevelBeLoaded, addr 0x6899ce8, size 0x70, virtual false, abstract: false, final false
  static inline bool CanStreamedLevelBeLoaded(int32_t levelIndex);

  /// @brief Method CanStreamedLevelBeLoaded, addr 0x6899d58, size 0x15c, virtual false, abstract: false, final false
  static inline bool CanStreamedLevelBeLoaded(::StringW levelName);

  /// @brief Method CanStreamedLevelBeLoaded_Injected, addr 0x6899eb4, size 0x3c, virtual false, abstract: false, final false
  static inline bool CanStreamedLevelBeLoaded_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> levelName);

  /// @brief Method HasLogCallback, addr 0x689b34c, size 0x88, virtual false, abstract: false, final false
  static inline bool HasLogCallback();

  /// @brief Method Internal_ApplicationQuit, addr 0x689c134, size 0x98, virtual false, abstract: false, final false
  static inline void Internal_ApplicationQuit();

  /// @brief Method Internal_ApplicationUnload, addr 0x689c1cc, size 0x98, virtual false, abstract: false, final false
  static inline void Internal_ApplicationUnload();

  /// @brief Method Internal_ApplicationWantsToQuit, addr 0x689bcb0, size 0x200, virtual false, abstract: false, final false
  static inline bool Internal_ApplicationWantsToQuit();

  /// @brief Method Internal_InitializeExitCancellationToken, addr 0x689bfd0, size 0xe8, virtual false, abstract: false, final false
  static inline void Internal_InitializeExitCancellationToken();

  /// @brief Method Internal_RaiseExitCancellationToken, addr 0x689c0b8, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_RaiseExitCancellationToken();

  /// @brief Method InvokeDeepLinkActivated, addr 0x689c358, size 0xa0, virtual false, abstract: false, final false
  static inline void InvokeDeepLinkActivated(::StringW url);

  /// @brief Method InvokeFocusChanged, addr 0x689c2b8, size 0xa0, virtual false, abstract: false, final false
  static inline void InvokeFocusChanged(bool focus);

  /// @brief Method InvokeOnBeforeRender, addr 0x689c264, size 0x54, virtual false, abstract: false, final false
  static inline void InvokeOnBeforeRender();

  /// @brief Method OpenURL, addr 0x689adb0, size 0x14c, virtual false, abstract: false, final false
  static inline void OpenURL(::StringW url);

  /// @brief Method OpenURL_Injected, addr 0x689aefc, size 0x3c, virtual false, abstract: false, final false
  static inline void OpenURL_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> url);

  /// @brief Method Quit, addr 0x6899c74, size 0x74, virtual false, abstract: false, final false
  static inline void Quit();

  /// @brief Method Quit, addr 0x6899c38, size 0x3c, virtual false, abstract: false, final false
  static inline void Quit(int32_t exitCode);

  /// @brief Method SetLogCallbackDefined, addr 0x689af9c, size 0x3c, virtual false, abstract: false, final false
  static inline void SetLogCallbackDefined(bool defined);

  /// @brief Method add_focusChanged, addr 0x689b8c0, size 0x108, virtual false, abstract: false, final false
  static inline void add_focusChanged(::System::Action_1<bool>* value);

  /// @brief Method add_logMessageReceived, addr 0x689b3d4, size 0xe4, virtual false, abstract: false, final false
  static inline void add_logMessageReceived(::UnityEngine::Application_LogCallback* value);

  /// @brief Method add_logMessageReceivedThreaded, addr 0x689b578, size 0xe4, virtual false, abstract: false, final false
  static inline void add_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* value);

  /// @brief Method add_onBeforeRender, addr 0x689b808, size 0x5c, virtual false, abstract: false, final false
  static inline void add_onBeforeRender(::UnityEngine::Events::UnityAction* value);

  /// @brief Method add_quitting, addr 0x689bad0, size 0xf0, virtual false, abstract: false, final false
  static inline void add_quitting(::System::Action* value);

  static inline ::System::Action_1<::StringW>* getStaticF_deepLinkActivated();

  static inline ::System::Action_1<bool>* getStaticF_focusChanged();

  static inline ::UnityEngine::Application_LowMemoryCallback* getStaticF_lowMemory();

  static inline ::UnityEngine::Application_MemoryUsageChangedCallback* getStaticF_memoryUsageChanged();

  static inline ::System::Action* getStaticF_quitting();

  static inline ::UnityEngine::Application_LogCallback* getStaticF_s_LogCallbackHandler();

  static inline ::UnityEngine::Application_LogCallback* getStaticF_s_LogCallbackHandlerThreaded();

  static inline ::System::Threading::CancellationTokenSource* getStaticF_s_currentCancellationTokenSource();

  static inline ::System::Action* getStaticF_unloading();

  static inline ::System::Func_1<bool>* getStaticF_wantsToQuit();

  /// @brief Method get_backgroundLoadingPriority, addr 0x689afd8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ThreadPriority get_backgroundLoadingPriority();

  /// @brief Method get_buildGUID, addr 0x6899f40, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_buildGUID();

  /// @brief Method get_buildGUID_Injected, addr 0x689a040, size 0x3c, virtual false, abstract: false, final false
  static inline void get_buildGUID_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_companyName, addr 0x689ac74, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_companyName();

  /// @brief Method get_companyName_Injected, addr 0x689ad74, size 0x3c, virtual false, abstract: false, final false
  static inline void get_companyName_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_dataPath, addr 0x689a108, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_dataPath();

  /// @brief Method get_dataPath_Injected, addr 0x689a208, size 0x3c, virtual false, abstract: false, final false
  static inline void get_dataPath_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_identifier, addr 0x689a9ac, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_identifier();

  /// @brief Method get_identifier_Injected, addr 0x689aaac, size 0x3c, virtual false, abstract: false, final false
  static inline void get_identifier_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_installMode, addr 0x689aae8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ApplicationInstallMode get_installMode();

  /// @brief Method get_installerName, addr 0x689a870, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_installerName();

  /// @brief Method get_installerName_Injected, addr 0x689a970, size 0x3c, virtual false, abstract: false, final false
  static inline void get_installerName_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_internetReachability, addr 0x689b1e8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::NetworkReachability get_internetReachability();

  /// @brief Method get_isBatchMode, addr 0x689a0e0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isBatchMode();

  /// @brief Method get_isConsolePlatform, addr 0x689b124, size 0x9c, virtual false, abstract: false, final false
  static inline bool get_isConsolePlatform();

  /// @brief Method get_isEditor, addr 0x689c3f8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_isEditor();

  /// @brief Method get_isFocused, addr 0x6899f18, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isFocused();

  /// @brief Method get_isMobilePlatform, addr 0x689b064, size 0xc0, virtual false, abstract: false, final false
  static inline bool get_isMobilePlatform();

  /// @brief Method get_isPlaying, addr 0x6899ef0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isPlaying();

  /// @brief Method get_persistentDataPath, addr 0x689a380, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_persistentDataPath();

  /// @brief Method get_persistentDataPath_Injected, addr 0x689a480, size 0x3c, virtual false, abstract: false, final false
  static inline void get_persistentDataPath_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_platform, addr 0x689b03c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::RuntimePlatform get_platform();

  /// @brief Method get_productName, addr 0x689ab38, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_productName();

  /// @brief Method get_productName_Injected, addr 0x689ac38, size 0x3c, virtual false, abstract: false, final false
  static inline void get_productName_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_runInBackground, addr 0x689a07c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_runInBackground();

  /// @brief Method get_sandboxType, addr 0x689ab10, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ApplicationSandboxType get_sandboxType();

  /// @brief Method get_streamingAssetsPath, addr 0x689a244, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_streamingAssetsPath();

  /// @brief Method get_streamingAssetsPath_Injected, addr 0x689a344, size 0x3c, virtual false, abstract: false, final false
  static inline void get_streamingAssetsPath_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_systemLanguage, addr 0x689b1c0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::SystemLanguage get_systemLanguage();

  /// @brief Method get_targetFrameRate, addr 0x689af38, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_targetFrameRate();

  /// @brief Method get_temporaryCachePath, addr 0x689a4bc, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_temporaryCachePath();

  /// @brief Method get_temporaryCachePath_Injected, addr 0x689a5bc, size 0x3c, virtual false, abstract: false, final false
  static inline void get_temporaryCachePath_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_unityVersion, addr 0x689a5f8, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_unityVersion();

  /// @brief Method get_unityVersion_Injected, addr 0x689a6f8, size 0x3c, virtual false, abstract: false, final false
  static inline void get_unityVersion_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_version, addr 0x689a734, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW get_version();

  /// @brief Method get_version_Injected, addr 0x689a834, size 0x3c, virtual false, abstract: false, final false
  static inline void get_version_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method remove_focusChanged, addr 0x689b9c8, size 0x108, virtual false, abstract: false, final false
  static inline void remove_focusChanged(::System::Action_1<bool>* value);

  /// @brief Method remove_logMessageReceived, addr 0x689b4b8, size 0xc0, virtual false, abstract: false, final false
  static inline void remove_logMessageReceived(::UnityEngine::Application_LogCallback* value);

  /// @brief Method remove_logMessageReceivedThreaded, addr 0x689b65c, size 0xc0, virtual false, abstract: false, final false
  static inline void remove_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback* value);

  /// @brief Method remove_onBeforeRender, addr 0x689b864, size 0x5c, virtual false, abstract: false, final false
  static inline void remove_onBeforeRender(::UnityEngine::Events::UnityAction* value);

  /// @brief Method remove_quitting, addr 0x689bbc0, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_quitting(::System::Action* value);

  static inline void setStaticF_deepLinkActivated(::System::Action_1<::StringW>* value);

  static inline void setStaticF_focusChanged(::System::Action_1<bool>* value);

  static inline void setStaticF_lowMemory(::UnityEngine::Application_LowMemoryCallback* value);

  static inline void setStaticF_memoryUsageChanged(::UnityEngine::Application_MemoryUsageChangedCallback* value);

  static inline void setStaticF_quitting(::System::Action* value);

  static inline void setStaticF_s_LogCallbackHandler(::UnityEngine::Application_LogCallback* value);

  static inline void setStaticF_s_LogCallbackHandlerThreaded(::UnityEngine::Application_LogCallback* value);

  static inline void setStaticF_s_currentCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  static inline void setStaticF_unloading(::System::Action* value);

  static inline void setStaticF_wantsToQuit(::System::Func_1<bool>* value);

  /// @brief Method set_backgroundLoadingPriority, addr 0x689b000, size 0x3c, virtual false, abstract: false, final false
  static inline void set_backgroundLoadingPriority(::UnityEngine::ThreadPriority value);

  /// @brief Method set_runInBackground, addr 0x689a0a4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_runInBackground(bool value);

  /// @brief Method set_targetFrameRate, addr 0x689af60, size 0x3c, virtual false, abstract: false, final false
  static inline void set_targetFrameRate(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Application();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Application(Application&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Application(Application const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Application, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Application);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Application*, "UnityEngine", "Application");
NEED_NO_BOX(::UnityEngine::Application_LogCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Application_LogCallback*, "UnityEngine", "Application/LogCallback");
NEED_NO_BOX(::UnityEngine::Application_LowMemoryCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Application_LowMemoryCallback*, "UnityEngine", "Application/LowMemoryCallback");
NEED_NO_BOX(::UnityEngine::Application_MemoryUsageChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Application_MemoryUsageChangedCallback*, "UnityEngine", "Application/MemoryUsageChangedCallback");
