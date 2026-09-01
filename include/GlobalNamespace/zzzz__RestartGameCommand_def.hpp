#pragma once
// IWYU pragma private; include "GlobalNamespace\RestartGameCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RestartGameCommand)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
struct RestartGameCommand__GameRestarted_d__8;
}
namespace GlobalNamespace {
class RestartGameCommand___c__DisplayClass7_0;
}
namespace GlobalNamespace {
class TerminalController;
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
namespace System::Threading {
class Barrier;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class RestartGameCommand;
}
namespace GlobalNamespace {
class RestartGameCommand___c__DisplayClass7_0;
}
namespace GlobalNamespace {
struct RestartGameCommand__GameRestarted_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RestartGameCommand*);
MARK_REF_T(::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0*);
MARK_VAL_T(::GlobalNamespace::RestartGameCommand__GameRestarted_d__8);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RestartGameCommand*, "", "RestartGameCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0*, "", "RestartGameCommand/<>c__DisplayClass7_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RestartGameCommand__GameRestarted_d__8, "", "RestartGameCommand/<GameRestarted>d__8");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RestartGameCommand/<>c__DisplayClass7_0
class CORDL_TYPE RestartGameCommand___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::RestartGameCommand* __4__this;

  /// @brief Field messages, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_messages, put = __cordl_internal_set_messages)) ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  static inline ::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0* New_ctor();

  /// @brief Method <ExecuteAsync>b__0, addr 0x32e3094, size 0xf0, virtual false, abstract: false, final false
  inline bool _ExecuteAsync_b__0();

  constexpr ::GlobalNamespace::RestartGameCommand* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::RestartGameCommand*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* const& __cordl_internal_get_messages() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*& __cordl_internal_get_messages();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::RestartGameCommand* value);

  constexpr void __cordl_internal_set_messages(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* value);

  /// @brief Method .ctor, addr 0x32e2df4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RestartGameCommand___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RestartGameCommand___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RestartGameCommand___c__DisplayClass7_0(RestartGameCommand___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RestartGameCommand___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RestartGameCommand___c__DisplayClass7_0(RestartGameCommand___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19409 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::RestartGameCommand* _____4__this;

  /// @brief Field messages, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* ___messages;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0, ___messages) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: RestartGameCommand/<GameRestarted>d__8
struct CORDL_TYPE RestartGameCommand__GameRestarted_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32e3184, size 0x1d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32e3354, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RestartGameCommand__GameRestarted_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RestartGameCommand*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr RestartGameCommand__GameRestarted_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::RestartGameCommand* __4__this,
                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19410 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::RestartGameCommand* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RestartGameCommand__GameRestarted_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RestartGameCommand__GameRestarted_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RestartGameCommand__GameRestarted_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RestartGameCommand__GameRestarted_d__8, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RestartGameCommand__GameRestarted_d__8) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: RestartGameCommand
class CORDL_TYPE RestartGameCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _GameRestarted_d__8 = ::GlobalNamespace::RestartGameCommand__GameRestarted_d__8;

  using __c__DisplayClass7_0 = ::GlobalNamespace::RestartGameCommand___c__DisplayClass7_0;

  /// @brief Field _barrier, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__barrier, put = __cordl_internal_set__barrier)) ::System::Threading::Barrier* _barrier;

  /// @brief Field _menuTransitionsHelper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper)) ::GlobalNamespace::MenuTransitionsHelper* _menuTransitionsHelper;

  /// @brief Field _terminalController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__terminalController, put = __cordl_internal_set__terminalController)) ::GlobalNamespace::TerminalController* _terminalController;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32e2c18, size 0x1dc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method GameRestarted, addr 0x32e2f90, size 0xa4, virtual false, abstract: false, final false
  inline void GameRestarted(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::RestartGameCommand* New_ctor();

  constexpr ::System::Threading::Barrier* const& __cordl_internal_get__barrier() const;

  constexpr ::System::Threading::Barrier*& __cordl_internal_get__barrier();

  constexpr ::GlobalNamespace::MenuTransitionsHelper* const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::GlobalNamespace::TerminalController* const& __cordl_internal_get__terminalController() const;

  constexpr ::GlobalNamespace::TerminalController*& __cordl_internal_get__terminalController();

  constexpr void __cordl_internal_set__barrier(::System::Threading::Barrier* value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr void __cordl_internal_set__terminalController(::GlobalNamespace::TerminalController* value);

  /// @brief Method .ctor, addr 0x32e3034, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32e2b90, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32e2bd4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RestartGameCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RestartGameCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RestartGameCommand(RestartGameCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RestartGameCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RestartGameCommand(RestartGameCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19411 };

  /// @brief Field _menuTransitionsHelper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* ____menuTransitionsHelper;

  /// @brief Field _terminalController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::TerminalController* ____terminalController;

  /// @brief Field _barrier, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Barrier* ____barrier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RestartGameCommand, ____menuTransitionsHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RestartGameCommand, ____terminalController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RestartGameCommand, ____barrier) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RestartGameCommand) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
