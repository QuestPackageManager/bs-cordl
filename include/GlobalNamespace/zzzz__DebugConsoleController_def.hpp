#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugConsoleController)
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommandsAsync_d__7;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommands_d__6;
}
namespace GlobalNamespace {
struct __DebugConsoleController___TryExecuteCommand_d__9;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
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
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T1, typename T2> class Action_2;
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
class DebugConsoleController;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommandsAsync_d__7;
}
namespace GlobalNamespace {
struct __DebugConsoleController___ExecuteCommands_d__6;
}
namespace GlobalNamespace {
struct __DebugConsoleController___TryExecuteCommand_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DebugConsoleController);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController__ConsoleMessage);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6);
MARK_VAL_T(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9);
// Type: ::ConsoleMessage
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugConsoleController::ConsoleMessage
struct CORDL_TYPE __DebugConsoleController__ConsoleMessage {
public:
  // Declarations
  /// @brief Method ToString, addr 0x257ee10, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x257ce64, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::UnityEngine::LogType type);

  /// @brief Method op_Addition, addr 0x257ee18, size 0x20, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage op_Addition(::GlobalNamespace::__DebugConsoleController__ConsoleMessage a,
                                                                                        ::GlobalNamespace::__DebugConsoleController__ConsoleMessage b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController__ConsoleMessage();

  // Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None }]
  constexpr __DebugConsoleController__ConsoleMessage(::StringW Message, ::UnityEngine::LogType Type) noexcept;

  /// @brief Field Message, offset: 0x0, size: 0x8, def value: None
  ::StringW Message;

  /// @brief Field Type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::LogType Type;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController__ConsoleMessage, Message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController__ConsoleMessage, Type) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ExecuteCommands>d__6
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugConsoleController::<ExecuteCommands>d__6
struct CORDL_TYPE __DebugConsoleController___ExecuteCommands_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x257ee38, size 0x2fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x257f134, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController___ExecuteCommands_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DebugConsoleController___ExecuteCommands_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                            ::GlobalNamespace::DebugConsoleController* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DebugConsoleController* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ExecuteCommandsAsync>d__7
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugConsoleController::<ExecuteCommandsAsync>d__7
struct CORDL_TYPE __DebugConsoleController___ExecuteCommandsAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x257f140, size 0x374, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x257f4b4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController___ExecuteCommandsAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "",
  // def_value: None }, CppParam { name: "_messages_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DebugConsoleController___ExecuteCommandsAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                 ::GlobalNamespace::DebugConsoleController* __4__this,
                                                                 ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* _messages_5__2,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DebugConsoleController* __4__this;

  /// @brief Field <messages>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* _messages_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, _messages_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryExecuteCommand>d__9
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DebugConsoleController::<TryExecuteCommand>d__9
struct CORDL_TYPE __DebugConsoleController___TryExecuteCommand_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x257f4c0, size 0x3f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x257f8b8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugConsoleController___TryExecuteCommand_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "commandText", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::GlobalNamespace::DebugConsoleController*", modifiers: "", def_value: None }, CppParam { name: "messages", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DebugConsoleController___TryExecuteCommand_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::StringW commandText,
                                                              ::GlobalNamespace::DebugConsoleController* __4__this,
                                                              ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field commandText, offset: 0x20, size: 0x8, def value: None
  ::StringW commandText;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DebugConsoleController* __4__this;

  /// @brief Field messages, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9, commandText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9, messages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DebugConsoleController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugConsoleController*
class CORDL_TYPE DebugConsoleController : public ::System::Object {
public:
  // Declarations
  using ConsoleMessage = ::GlobalNamespace::__DebugConsoleController__ConsoleMessage;

  using _ExecuteCommandsAsync_d__7 = ::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7;

  using _ExecuteCommands_d__6 = ::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6;

  using _TryExecuteCommand_d__9 = ::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9;

  /// @brief Field _commands, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__commands,
                      put = __cordl_internal_set__commands))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* _commands;

  /// @brief Field _commandsExecutionTask, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__commandsExecutionTask, put = __cordl_internal_set__commandsExecutionTask))::System::Threading::Tasks::Task* _commandsExecutionTask;

  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _stringsFromSTDIN, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__stringsFromSTDIN, put = __cordl_internal_set__stringsFromSTDIN))::System::Collections::Generic::Queue_1<::StringW>* _stringsFromSTDIN;

  /// @brief Field onNewMessageToOutput, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onNewMessageToOutput, put = __cordl_internal_set_onNewMessageToOutput))::System::Action_2<::StringW, ::UnityEngine::LogType>* onNewMessageToOutput;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method CheckCommand, addr 0x257e4ec, size 0x138, virtual false, abstract: false, final false
  inline void CheckCommand(::GlobalNamespace::ConsoleCommandBase* command);

  /// @brief Method CommandNotFoundMessage, addr 0x257dfdc, size 0x74, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage CommandNotFoundMessage(::StringW command);

  /// @brief Method DisplayMessage, addr 0x257ce70, size 0xb0, virtual false, abstract: false, final false
  inline void DisplayMessage(::GlobalNamespace::__DebugConsoleController__ConsoleMessage message);

  /// @brief Method ExecuteCommands, addr 0x257dd48, size 0x94, virtual false, abstract: false, final false
  inline void ExecuteCommands();

  /// @brief Method ExecuteCommandsAsync, addr 0x257dddc, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteCommandsAsync();

  /// @brief Method FillDictOfCommands, addr 0x257e174, size 0x378, virtual false, abstract: false, final false
  inline void FillDictOfCommands(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* commandInstances);

  /// @brief Method GetAllConsoleCommandInstances, addr 0x257e624, size 0x520, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ConsoleCommandBase*>* GetAllConsoleCommandInstances();

  /// @brief Method GetCommand, addr 0x257ec0c, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConsoleCommandBase* GetCommand(::StringW commandName);

  /// @brief Method GetCommands, addr 0x257ec04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* GetCommands();

  /// @brief Method Initialize, addr 0x257ec84, size 0x64, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method IsCommandClass, addr 0x257eb44, size 0xc0, virtual false, abstract: false, final false
  inline bool IsCommandClass(::System::Type* type);

  static inline ::GlobalNamespace::DebugConsoleController* New_ctor();

  /// @brief Method QueueNewInput, addr 0x257dea8, size 0x58, virtual false, abstract: false, final false
  inline void QueueNewInput(::StringW input);

  /// @brief Method StripExtraWhitespace, addr 0x257e050, size 0x124, virtual false, abstract: false, final false
  inline ::StringW StripExtraWhitespace(::StringW commandText);

  /// @brief Method Tick, addr 0x257ece8, size 0x68, virtual true, abstract: false, final true
  inline void Tick();

  /// @brief Method TryExecuteCommand, addr 0x257df00, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* TryExecuteCommand(::StringW commandText, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*& __cordl_internal_get__commands();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>*> const& __cordl_internal_get__commands() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__commandsExecutionTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__commandsExecutionTask() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::System::Collections::Generic::Queue_1<::StringW>*& __cordl_internal_get__stringsFromSTDIN();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::StringW>*> const& __cordl_internal_get__stringsFromSTDIN() const;

  constexpr ::System::Action_2<::StringW, ::UnityEngine::LogType>*& __cordl_internal_get_onNewMessageToOutput();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::UnityEngine::LogType>*> const& __cordl_internal_get_onNewMessageToOutput() const;

  constexpr void __cordl_internal_set__commands(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* value);

  constexpr void __cordl_internal_set__commandsExecutionTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__stringsFromSTDIN(::System::Collections::Generic::Queue_1<::StringW>* value);

  constexpr void __cordl_internal_set_onNewMessageToOutput(::System::Action_2<::StringW, ::UnityEngine::LogType>* value);

  /// @brief Method .ctor, addr 0x257ed50, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugConsoleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugConsoleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugConsoleController(DebugConsoleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugConsoleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugConsoleController(DebugConsoleController const&) = delete;

  /// @brief Field onNewMessageToOutput, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::UnityEngine::LogType>* ___onNewMessageToOutput;

  /// @brief Field _container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _stringsFromSTDIN, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::StringW>* ____stringsFromSTDIN;

  /// @brief Field _commands, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* ____commands;

  /// @brief Field _commandsExecutionTask, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____commandsExecutionTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DebugConsoleController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ___onNewMessageToOutput) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____stringsFromSTDIN) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____commands) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugConsoleController, ____commandsExecutionTask) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DebugConsoleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugConsoleController*, "", "DebugConsoleController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController__ConsoleMessage, "", "DebugConsoleController/ConsoleMessage");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ExecuteCommandsAsync_d__7, "", "DebugConsoleController/<ExecuteCommandsAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___ExecuteCommands_d__6, "", "DebugConsoleController/<ExecuteCommands>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugConsoleController___TryExecuteCommand_d__9, "", "DebugConsoleController/<TryExecuteCommand>d__9");
