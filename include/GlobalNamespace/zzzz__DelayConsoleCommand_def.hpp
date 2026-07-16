#pragma once
// IWYU pragma private; include "GlobalNamespace/DelayConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DelayConsoleCommand)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
class DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9;
}
namespace GlobalNamespace {
class DelayConsoleCommand___c__DisplayClass8_0;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
class TerminalController;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class Barrier;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class DelayConsoleCommand;
}
namespace GlobalNamespace {
class DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9;
}
namespace GlobalNamespace {
class DelayConsoleCommand___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DelayConsoleCommand*);
MARK_REF_T(::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9*);
MARK_REF_T(::GlobalNamespace::DelayConsoleCommand___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DelayConsoleCommand*, "", "DelayConsoleCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9*, "", "DelayConsoleCommand/<CoroutineControlsCommandLifecycle>d__9");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DelayConsoleCommand___c__DisplayClass8_0*, "", "DelayConsoleCommand/<>c__DisplayClass8_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DelayConsoleCommand/<>c__DisplayClass8_0
class CORDL_TYPE DelayConsoleCommand___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::DelayConsoleCommand* __4__this;

  /// @brief Field messages, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_messages, put = __cordl_internal_set_messages)) ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  static inline ::GlobalNamespace::DelayConsoleCommand___c__DisplayClass8_0* New_ctor();

  /// @brief Method <ExecuteAsync>b__0, addr 0x32cce0c, size 0x170, virtual false, abstract: false, final false
  inline bool _ExecuteAsync_b__0();

  constexpr ::GlobalNamespace::DelayConsoleCommand* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::DelayConsoleCommand*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* const& __cordl_internal_get_messages() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*& __cordl_internal_get_messages();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::DelayConsoleCommand* value);

  constexpr void __cordl_internal_set_messages(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* value);

  /// @brief Method .ctor, addr 0x32cccb4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelayConsoleCommand___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelayConsoleCommand___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelayConsoleCommand___c__DisplayClass8_0(DelayConsoleCommand___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelayConsoleCommand___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelayConsoleCommand___c__DisplayClass8_0(DelayConsoleCommand___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19350 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::DelayConsoleCommand* _____4__this;

  /// @brief Field messages, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* ___messages;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand___c__DisplayClass8_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand___c__DisplayClass8_0, ___messages) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DelayConsoleCommand___c__DisplayClass8_0) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DelayConsoleCommand/<CoroutineControlsCommandLifecycle>d__9
class CORDL_TYPE DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::DelayConsoleCommand* __4__this;

  /// @brief Field <i>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Field <wholeSeconds>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__wholeSeconds_5__2, put = __cordl_internal_set__wholeSeconds_5__2)) int32_t _wholeSeconds_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x32ccf80, size 0x338, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x32cd2b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x32cd2c0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x32cd2f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x32ccf7c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::DelayConsoleCommand* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::DelayConsoleCommand*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr int32_t const& __cordl_internal_get__wholeSeconds_5__2() const;

  constexpr int32_t& __cordl_internal_get__wholeSeconds_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::DelayConsoleCommand* value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  constexpr void __cordl_internal_set__wholeSeconds_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x32ccd0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9(DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9(DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19351 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DelayConsoleCommand* _____4__this;

  /// @brief Field <wholeSeconds>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____wholeSeconds_5__2;

  /// @brief Field <i>5__3, offset: 0x2c, size: 0x4, def value: None
  int32_t ____i_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9, ____wholeSeconds_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9, ____i_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: DelayConsoleCommand
class CORDL_TYPE DelayConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _CoroutineControlsCommandLifecycle_d__9 = ::GlobalNamespace::DelayConsoleCommand__CoroutineControlsCommandLifecycle_d__9;

  using __c__DisplayClass8_0 = ::GlobalNamespace::DelayConsoleCommand___c__DisplayClass8_0;

  /// @brief Field _barrier, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__barrier, put = __cordl_internal_set__barrier)) ::System::Threading::Barrier* _barrier;

  /// @brief Field _coroutineStarter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _seconds, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__seconds, put = __cordl_internal_set__seconds)) ::GlobalNamespace::OptionalArgument_1<float_t>* _seconds;

  /// @brief Field _terminalController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__terminalController, put = __cordl_internal_set__terminalController)) ::GlobalNamespace::TerminalController* _terminalController;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method CoroutineControlsCommandLifecycle, addr 0x32cccb8, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CoroutineControlsCommandLifecycle();

  /// @brief Method ExecuteAsync, addr 0x32ccaf8, size 0x1bc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  static inline ::GlobalNamespace::DelayConsoleCommand* New_ctor();

  constexpr ::System::Threading::Barrier* const& __cordl_internal_get__barrier() const;

  constexpr ::System::Threading::Barrier*& __cordl_internal_get__barrier();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::GlobalNamespace::OptionalArgument_1<float_t>* const& __cordl_internal_get__seconds() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<float_t>*& __cordl_internal_get__seconds();

  constexpr ::GlobalNamespace::TerminalController* const& __cordl_internal_get__terminalController() const;

  constexpr ::GlobalNamespace::TerminalController*& __cordl_internal_get__terminalController();

  constexpr void __cordl_internal_set__barrier(::System::Threading::Barrier* value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__seconds(::GlobalNamespace::OptionalArgument_1<float_t>* value);

  constexpr void __cordl_internal_set__terminalController(::GlobalNamespace::TerminalController* value);

  /// @brief Method .ctor, addr 0x32ccd14, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32cca70, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32ccab4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelayConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelayConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelayConsoleCommand(DelayConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelayConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelayConsoleCommand(DelayConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19352 };

  /// @brief Field _coroutineStarter, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _terminalController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::TerminalController* ____terminalController;

  /// @brief Field _seconds, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<float_t>* ____seconds;

  /// @brief Field _barrier, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::Barrier* ____barrier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand, ____coroutineStarter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand, ____terminalController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand, ____seconds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayConsoleCommand, ____barrier) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DelayConsoleCommand) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
