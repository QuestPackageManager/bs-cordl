#pragma once
// IWYU pragma private; include "GlobalNamespace/TerminalController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerminalController)
namespace GlobalNamespace {
struct AutocompleteResult;
}
namespace GlobalNamespace {
class CommandNode;
}
namespace GlobalNamespace {
class CommandRootNode;
}
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
struct TerminalController__TryExecuteCommand_d__22;
}
namespace GlobalNamespace {
struct TerminalController__TryExecuteCommands_d__14;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct LogType;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
class TerminalController;
}
namespace GlobalNamespace {
struct TerminalController__TryExecuteCommand_d__22;
}
namespace GlobalNamespace {
struct TerminalController__TryExecuteCommands_d__14;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TerminalController*);
MARK_VAL_T(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22);
MARK_VAL_T(::GlobalNamespace::TerminalController__TryExecuteCommands_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerminalController*, "", "TerminalController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22, "", "TerminalController/<TryExecuteCommand>d__22");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerminalController__TryExecuteCommands_d__14, "", "TerminalController/<TryExecuteCommands>d__14");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: TerminalController/<TryExecuteCommand>d__22
struct CORDL_TYPE TerminalController__TryExecuteCommand_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32e8c68, size 0x678, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32e92e0, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TerminalController__TryExecuteCommand_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "commandText", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::GlobalNamespace::TerminalController*", modifiers: "", def_value: None }, CppParam { name: "messages", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name: "_command_5__2", ty: "::GlobalNamespace::ConsoleCommandBase*",
  // modifiers: "", def_value: None }, CppParam { name: "_commandTask_5__3", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr TerminalController__TryExecuteCommand_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW commandText,
                                                        ::GlobalNamespace::TerminalController* __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages,
                                                        ::GlobalNamespace::ConsoleCommandBase* _command_5__2, ::System::Threading::Tasks::Task_1<bool>* _commandTask_5__3,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19392 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field commandText, offset: 0x20, size: 0x8, def value: None
  ::StringW commandText;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::TerminalController* __4__this;

  /// @brief Field messages, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  /// @brief Field <command>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ConsoleCommandBase* _command_5__2;

  /// @brief Field <commandTask>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<bool>* _commandTask_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22, commandText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22, messages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22, _command_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22, _commandTask_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerminalController__TryExecuteCommand_d__22) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: TerminalController/<TryExecuteCommands>d__14
struct CORDL_TYPE TerminalController__TryExecuteCommands_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32e934c, size 0x614, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32e9960, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TerminalController__TryExecuteCommands_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::TerminalController*", modifiers: "",
  // def_value: None }, CppParam { name: "_messages_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr TerminalController__TryExecuteCommands_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::TerminalController* __4__this,
                                                         ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* _messages_5__2,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19393 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::TerminalController* __4__this;

  /// @brief Field <messages>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* _messages_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommands_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommands_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommands_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommands_d__14, _messages_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController__TryExecuteCommands_d__14, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerminalController__TryExecuteCommands_d__14) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TerminalController
class CORDL_TYPE TerminalController : public ::System::Object {
public:
  // Declarations
  using _TryExecuteCommand_d__22 = ::GlobalNamespace::TerminalController__TryExecuteCommand_d__22;

  using _TryExecuteCommands_d__14 = ::GlobalNamespace::TerminalController__TryExecuteCommands_d__14;

  /// @brief Field _commands, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__commands,
                      put = __cordl_internal_set__commands)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* _commands;

  /// @brief Field _commandsExecutionTask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__commandsExecutionTask, put = setStaticF__commandsExecutionTask)) ::System::Threading::Tasks::Task* _commandsExecutionTask;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _coroutineStarter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _isDisposed, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isDisposed, put = __cordl_internal_set__isDisposed)) bool _isDisposed;

  /// @brief Field _rootNode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rootNode, put = __cordl_internal_set__rootNode)) ::GlobalNamespace::CommandRootNode* _rootNode;

  /// @brief Field _stringsFromSTDIN, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__stringsFromSTDIN, put = setStaticF__stringsFromSTDIN)) ::System::Collections::Generic::LinkedList_1<::StringW>* _stringsFromSTDIN;

  /// @brief Field onNewMessageToOutput, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onNewMessageToOutput, put = __cordl_internal_set_onNewMessageToOutput)) ::System::Action_2<::StringW, ::UnityEngine::LogType>* onNewMessageToOutput;

  /// @brief Field unityLogToConsole, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_unityLogToConsole, put = __cordl_internal_set_unityLogToConsole)) bool unityLogToConsole;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method CheckCommand, addr 0x32e86c0, size 0x140, virtual false, abstract: false, final false
  inline void CheckCommand(::GlobalNamespace::ConsoleCommandBase* command);

  /// @brief Method ClearCommandQueue, addr 0x32e1384, size 0x80, virtual false, abstract: false, final false
  inline void ClearCommandQueue();

  /// @brief Method CommandNotFoundMessage, addr 0x32e8550, size 0x74, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConsoleMessage CommandNotFoundMessage(::StringW command);

  /// @brief Method DisplayMessage, addr 0x32e1670, size 0x198, virtual false, abstract: false, final false
  inline void DisplayMessage(::GlobalNamespace::ConsoleMessage message);

  /// @brief Method Dispose, addr 0x32e7cd4, size 0xb0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FillDictOfCommands, addr 0x32e7a60, size 0x104, virtual false, abstract: false, final false
  inline void FillDictOfCommands(::ArrayW<::GlobalNamespace::ConsoleCommandBase*> commandInstances);

  /// @brief Method FindAutocompleteNode, addr 0x32e7f80, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::CommandNode*> FindAutocompleteNode(::StringW input, bool exact);

  /// @brief Method GenerateCommandTree, addr 0x32e7b64, size 0x74, virtual false, abstract: false, final false
  inline void GenerateCommandTree(::ArrayW<::GlobalNamespace::ConsoleCommandBase*> commandInstances);

  /// @brief Method GetAllConsoleCommandInstances, addr 0x32e7534, size 0x52c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* GetAllConsoleCommandInstances();

  /// @brief Method GetCommand, addr 0x32e88e4, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConsoleCommandBase* GetCommand(::StringW commandName);

  /// @brief Method GetCommands, addr 0x32e88dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* GetCommands();

  /// @brief Method HandleLaunchParameters, addr 0x32e7bd8, size 0x74, virtual false, abstract: false, final false
  inline void HandleLaunchParameters(::StringW commandsInput);

  /// @brief Method Init, addr 0x32e736c, size 0x90, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method Initialize, addr 0x32e73fc, size 0x138, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method IsArgumentName, addr 0x32e8418, size 0x30, virtual false, abstract: false, final false
  inline bool IsArgumentName(::StringW input);

  /// @brief Method IsArgumentValue, addr 0x32e8448, size 0x40, virtual false, abstract: false, final false
  inline bool IsArgumentValue(::StringW input);

  /// @brief Method IsCommandClass, addr 0x32e8800, size 0xdc, virtual false, abstract: false, final false
  inline bool IsCommandClass(::System::Type* type);

  static inline ::GlobalNamespace::TerminalController* New_ctor();

  /// @brief Method OnUnityLogMessageReceived, addr 0x32e8960, size 0x1c0, virtual false, abstract: false, final false
  inline void OnUnityLogMessageReceived(::StringW condition, ::StringW stackTrace, ::UnityEngine::LogType type);

  /// @brief Method QueueNewInput, addr 0x32e7c4c, size 0x88, virtual false, abstract: false, final false
  inline void QueueNewInput(::StringW input);

  /// @brief Method QueueNewInputFirst, addr 0x32e7ef8, size 0x88, virtual false, abstract: false, final false
  inline void QueueNewInputFirst(::StringW input);

  /// @brief Method StripExtraWhitespace, addr 0x32e85c4, size 0xfc, virtual false, abstract: false, final false
  inline ::StringW StripExtraWhitespace(::StringW commandText);

  /// @brief Method Tick, addr 0x32e7d84, size 0xc0, virtual true, abstract: false, final true
  inline void Tick();

  /// @brief Method TryExecuteCommand, addr 0x32e8488, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* TryExecuteCommand(::StringW commandText, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method TryExecuteCommands, addr 0x32e7e44, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* TryExecuteCommands();

  /// @brief Method TryFindAutocompleteText, addr 0x32e7f9c, size 0x47c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AutocompleteResult TryFindAutocompleteText(::StringW input);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* const& __cordl_internal_get__commands() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*& __cordl_internal_get__commands();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr bool const& __cordl_internal_get__isDisposed() const;

  constexpr bool& __cordl_internal_get__isDisposed();

  constexpr ::GlobalNamespace::CommandRootNode* const& __cordl_internal_get__rootNode() const;

  constexpr ::GlobalNamespace::CommandRootNode*& __cordl_internal_get__rootNode();

  constexpr ::System::Action_2<::StringW, ::UnityEngine::LogType>* const& __cordl_internal_get_onNewMessageToOutput() const;

  constexpr ::System::Action_2<::StringW, ::UnityEngine::LogType>*& __cordl_internal_get_onNewMessageToOutput();

  constexpr bool const& __cordl_internal_get_unityLogToConsole() const;

  constexpr bool& __cordl_internal_get_unityLogToConsole();

  constexpr void __cordl_internal_set__commands(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__isDisposed(bool value);

  constexpr void __cordl_internal_set__rootNode(::GlobalNamespace::CommandRootNode* value);

  constexpr void __cordl_internal_set_onNewMessageToOutput(::System::Action_2<::StringW, ::UnityEngine::LogType>* value);

  constexpr void __cordl_internal_set_unityLogToConsole(bool value);

  /// @brief Method .ctor, addr 0x32e8b20, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::Task* getStaticF__commandsExecutionTask();

  static inline ::System::Collections::Generic::LinkedList_1<::StringW>* getStaticF__stringsFromSTDIN();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  static inline void setStaticF__commandsExecutionTask(::System::Threading::Tasks::Task* value);

  static inline void setStaticF__stringsFromSTDIN(::System::Collections::Generic::LinkedList_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerminalController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerminalController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerminalController(TerminalController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerminalController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerminalController(TerminalController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19394 };

  /// @brief Field onNewMessageToOutput, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::UnityEngine::LogType>* ___onNewMessageToOutput;

  /// @brief Field unityLogToConsole, offset: 0x18, size: 0x1, def value: None
  bool ___unityLogToConsole;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _coroutineStarter, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _commands, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* ____commands;

  /// @brief Field _rootNode, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::CommandRootNode* ____rootNode;

  /// @brief Field _isDisposed, offset: 0x40, size: 0x1, def value: None
  bool ____isDisposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerminalController, ___onNewMessageToOutput) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController, ___unityLogToConsole) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController, ____container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController, ____coroutineStarter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController, ____commands) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController, ____rootNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerminalController, ____isDisposed) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerminalController) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
