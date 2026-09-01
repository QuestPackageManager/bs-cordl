#pragma once
// IWYU pragma private; include "GlobalNamespace\RunSongScreenshotsConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RunSongScreenshotsConsoleCommand)
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class ITerminalView;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
struct RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18;
}
namespace GlobalNamespace {
struct RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17;
}
namespace GlobalNamespace {
class RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20;
}
namespace GlobalNamespace {
class RunSongScreenshotsConsoleCommand___c;
}
namespace GlobalNamespace {
class RunSongScreenshotsConsoleCommand___c__DisplayClass18_0;
}
namespace GlobalNamespace {
class ScreenshotLevelStarter;
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
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class Barrier;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class RunSongScreenshotsConsoleCommand;
}
namespace GlobalNamespace {
class RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20;
}
namespace GlobalNamespace {
class RunSongScreenshotsConsoleCommand___c;
}
namespace GlobalNamespace {
class RunSongScreenshotsConsoleCommand___c__DisplayClass18_0;
}
namespace GlobalNamespace {
struct RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18;
}
namespace GlobalNamespace {
struct RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RunSongScreenshotsConsoleCommand*);
MARK_REF_T(::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*);
MARK_REF_T(::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*);
MARK_REF_T(::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0*);
MARK_VAL_T(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18);
MARK_VAL_T(::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongScreenshotsConsoleCommand*, "", "RunSongScreenshotsConsoleCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20*, "",
                    "RunSongScreenshotsConsoleCommand/<WaitUntilScreenshotQueueEmptyCoroutine>d__20");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongScreenshotsConsoleCommand___c*, "", "RunSongScreenshotsConsoleCommand/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0*, "", "RunSongScreenshotsConsoleCommand/<>c__DisplayClass18_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, "", "RunSongScreenshotsConsoleCommand/<EnqueueScreenshotLevelManually>d__18");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17, "", "RunSongScreenshotsConsoleCommand/<ExecuteAsync>d__17");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RunSongScreenshotsConsoleCommand/<>c
class CORDL_TYPE RunSongScreenshotsConsoleCommand___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c* __9;

  /// @brief Field <>9__18_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_2, put = setStaticF___9__18_2)) ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* __9__18_2;

  /// @brief Field <>9__18_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_3, put = setStaticF___9__18_3)) ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* __9__18_3;

  static inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c* New_ctor();

  /// @brief Method <EnqueueScreenshotLevelManually>b__18_2, addr 0x32e6d70, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW _EnqueueScreenshotLevelManually_b__18_2(::GlobalNamespace::BeatmapCharacteristic x);

  /// @brief Method <EnqueueScreenshotLevelManually>b__18_3, addr 0x32e6dcc, size 0x68, virtual false, abstract: false, final false
  inline ::StringW _EnqueueScreenshotLevelManually_b__18_3(::GlobalNamespace::BeatmapDifficulty x);

  /// @brief Method .ctor, addr 0x32e6d6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* getStaticF___9__18_2();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* getStaticF___9__18_3();

  static inline void setStaticF___9(::GlobalNamespace::RunSongScreenshotsConsoleCommand___c* value);

  static inline void setStaticF___9__18_2(::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* value);

  static inline void setStaticF___9__18_3(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongScreenshotsConsoleCommand___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunSongScreenshotsConsoleCommand___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunSongScreenshotsConsoleCommand___c(RunSongScreenshotsConsoleCommand___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunSongScreenshotsConsoleCommand___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunSongScreenshotsConsoleCommand___c(RunSongScreenshotsConsoleCommand___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RunSongScreenshotsConsoleCommand___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RunSongScreenshotsConsoleCommand/<>c__DisplayClass18_0
class CORDL_TYPE RunSongScreenshotsConsoleCommand___c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristicStr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristicStr, put = __cordl_internal_set_characteristicStr)) ::StringW characteristicStr;

  static inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0* New_ctor();

  /// @brief Method <EnqueueScreenshotLevelManually>b__0, addr 0x32e6e38, size 0x70, virtual false, abstract: false, final false
  inline bool _EnqueueScreenshotLevelManually_b__0(::GlobalNamespace::BeatmapCharacteristic characteristic);

  constexpr ::StringW const& __cordl_internal_get_characteristicStr() const;

  constexpr ::StringW& __cordl_internal_get_characteristicStr();

  constexpr void __cordl_internal_set_characteristicStr(::StringW value);

  /// @brief Method .ctor, addr 0x32e6e34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongScreenshotsConsoleCommand___c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunSongScreenshotsConsoleCommand___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunSongScreenshotsConsoleCommand___c__DisplayClass18_0(RunSongScreenshotsConsoleCommand___c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunSongScreenshotsConsoleCommand___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunSongScreenshotsConsoleCommand___c__DisplayClass18_0(RunSongScreenshotsConsoleCommand___c__DisplayClass18_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19417 };

  /// @brief Field characteristicStr, offset: 0x10, size: 0x8, def value: None
  ::StringW ___characteristicStr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0, ___characteristicStr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: RunSongScreenshotsConsoleCommand/<EnqueueScreenshotLevelManually>d__18
struct CORDL_TYPE RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32e6ea8, size 0x1720, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32e85c8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RunSongScreenshotsConsoleCommand*",
  // modifiers: "", def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name:
  // "__8__1", ty: "::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0*", modifiers: "", def_value: None }, CppParam { name: "_songId_5__2", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "_beatmapLevel_5__3", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                   ::GlobalNamespace::RunSongScreenshotsConsoleCommand* __4__this,
                                                                                   ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages,
                                                                                   ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0* __8__1, ::StringW _songId_5__2,
                                                                                   ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19418 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RunSongScreenshotsConsoleCommand* __4__this;

  /// @brief Field messages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0* __8__1;

  /// @brief Field <songId>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _songId_5__2;

  /// @brief Field <beatmapLevel>5__3, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, messages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, _songId_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, _beatmapLevel_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: RunSongScreenshotsConsoleCommand/<ExecuteAsync>d__17
struct CORDL_TYPE RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32e8648, size 0x2c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32e8910, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RunSongScreenshotsConsoleCommand*",
  // modifiers: "", def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                 ::GlobalNamespace::RunSongScreenshotsConsoleCommand* __4__this,
                                                                 ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19419 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RunSongScreenshotsConsoleCommand* __4__this;

  /// @brief Field messages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17, messages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RunSongScreenshotsConsoleCommand/<WaitUntilScreenshotQueueEmptyCoroutine>d__20
class CORDL_TYPE RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::RunSongScreenshotsConsoleCommand* __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x32e8994, size 0x104, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x32e8a98, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x32e8aa0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x32e8ad8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x32e8990, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::RunSongScreenshotsConsoleCommand*& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::RunSongScreenshotsConsoleCommand* value);

  /// @brief Method .ctor, addr 0x32e6598, size 0x8, virtual false, abstract: false, final false
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
  constexpr RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20(RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20(RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19420 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RunSongScreenshotsConsoleCommand* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: RunSongScreenshotsConsoleCommand
class CORDL_TYPE RunSongScreenshotsConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _EnqueueScreenshotLevelManually_d__18 = ::GlobalNamespace::RunSongScreenshotsConsoleCommand__EnqueueScreenshotLevelManually_d__18;

  using _ExecuteAsync_d__17 = ::GlobalNamespace::RunSongScreenshotsConsoleCommand__ExecuteAsync_d__17;

  using _WaitUntilScreenshotQueueEmptyCoroutine_d__20 = ::GlobalNamespace::RunSongScreenshotsConsoleCommand__WaitUntilScreenshotQueueEmptyCoroutine_d__20;

  using __c = ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c;

  using __c__DisplayClass18_0 = ::GlobalNamespace::RunSongScreenshotsConsoleCommand___c__DisplayClass18_0;

  /// @brief Field _barrier, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__barrier, put = __cordl_internal_set__barrier)) ::System::Threading::Barrier* _barrier;

  /// @brief Field _beatmapLevels, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevels, put = __cordl_internal_set__beatmapLevels)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevels;

  /// @brief Field _characteristic, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristic, put = __cordl_internal_set__characteristic)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _characteristic;

  /// @brief Field _coroutineStarter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _difficulty, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _difficulty;

  /// @brief Field _framerate, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__framerate, put = __cordl_internal_set__framerate)) ::GlobalNamespace::OptionalArgument_1<int32_t>* _framerate;

  /// @brief Field _screenshotLevelStarter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__screenshotLevelStarter, put = __cordl_internal_set__screenshotLevelStarter)) ::GlobalNamespace::ScreenshotLevelStarter* _screenshotLevelStarter;

  /// @brief Field _screenshotPeriod, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__screenshotPeriod, put = __cordl_internal_set__screenshotPeriod)) ::GlobalNamespace::OptionalArgument_1<float_t>* _screenshotPeriod;

  /// @brief Field _screenshotTimes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__screenshotTimes, put = __cordl_internal_set__screenshotTimes)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _screenshotTimes;

  /// @brief Field _songId, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__songId, put = __cordl_internal_set__songId)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _songId;

  /// @brief Field _terminalView, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__terminalView, put = __cordl_internal_set__terminalView)) ::GlobalNamespace::ITerminalView* _terminalView;

  /// @brief Field _wait, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__wait, put = __cordl_internal_set__wait)) ::GlobalNamespace::OptionalArgument_1<bool>* _wait;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method EnqueueScreenshotLevelManually, addr 0x32e6304, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* EnqueueScreenshotLevelManually(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync, addr 0x32e6214, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method Initialize, addr 0x32e5cbc, size 0x558, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::RunSongScreenshotsConsoleCommand* New_ctor();

  /// @brief Method WaitUntilScreenshotQueueEmpty, addr 0x32e63f8, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* WaitUntilScreenshotQueueEmpty();

  /// @brief Method WaitUntilScreenshotQueueEmptyCoroutine, addr 0x32e6544, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* WaitUntilScreenshotQueueEmptyCoroutine();

  /// @brief Method <EnqueueScreenshotLevelManually>g__ParseNumber|18_1, addr 0x32e6c3c, size 0x94, virtual false, abstract: false, final false
  static inline float_t _EnqueueScreenshotLevelManually_g__ParseNumber_18_1(::StringW x);

  /// @brief Method <WaitUntilScreenshotQueueEmptyCoroutine>b__20_0, addr 0x32e6cf8, size 0x20, virtual false, abstract: false, final false
  inline bool _WaitUntilScreenshotQueueEmptyCoroutine_b__20_0();

  /// @brief Method <WaitUntilScreenshotQueueEmpty>b__19_0, addr 0x32e6cd0, size 0x28, virtual false, abstract: false, final false
  inline bool _WaitUntilScreenshotQueueEmpty_b__19_0();

  constexpr ::System::Threading::Barrier* const& __cordl_internal_get__barrier() const;

  constexpr ::System::Threading::Barrier*& __cordl_internal_get__barrier();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevels() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevels();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__characteristic() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__characteristic();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__difficulty() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__difficulty();

  constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>* const& __cordl_internal_get__framerate() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& __cordl_internal_get__framerate();

  constexpr ::GlobalNamespace::ScreenshotLevelStarter* const& __cordl_internal_get__screenshotLevelStarter() const;

  constexpr ::GlobalNamespace::ScreenshotLevelStarter*& __cordl_internal_get__screenshotLevelStarter();

  constexpr ::GlobalNamespace::OptionalArgument_1<float_t>* const& __cordl_internal_get__screenshotPeriod() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<float_t>*& __cordl_internal_get__screenshotPeriod();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__screenshotTimes() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__screenshotTimes();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__songId() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__songId();

  constexpr ::GlobalNamespace::ITerminalView* const& __cordl_internal_get__terminalView() const;

  constexpr ::GlobalNamespace::ITerminalView*& __cordl_internal_get__terminalView();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__wait() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__wait();

  constexpr void __cordl_internal_set__barrier(::System::Threading::Barrier* value);

  constexpr void __cordl_internal_set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__framerate(::GlobalNamespace::OptionalArgument_1<int32_t>* value);

  constexpr void __cordl_internal_set__screenshotLevelStarter(::GlobalNamespace::ScreenshotLevelStarter* value);

  constexpr void __cordl_internal_set__screenshotPeriod(::GlobalNamespace::OptionalArgument_1<float_t>* value);

  constexpr void __cordl_internal_set__screenshotTimes(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__songId(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__terminalView(::GlobalNamespace::ITerminalView* value);

  constexpr void __cordl_internal_set__wait(::GlobalNamespace::OptionalArgument_1<bool>* value);

  /// @brief Method .ctor, addr 0x32e65a0, size 0x69c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32e5c34, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32e5c78, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongScreenshotsConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunSongScreenshotsConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunSongScreenshotsConsoleCommand(RunSongScreenshotsConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunSongScreenshotsConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunSongScreenshotsConsoleCommand(RunSongScreenshotsConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19421 };

  /// @brief Field _beatmapLevels, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevels;

  /// @brief Field _screenshotLevelStarter, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ScreenshotLevelStarter* ____screenshotLevelStarter;

  /// @brief Field _coroutineStarter, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _terminalView, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ITerminalView* ____terminalView;

  /// @brief Field _songId, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____songId;

  /// @brief Field _difficulty, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____difficulty;

  /// @brief Field _characteristic, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____characteristic;

  /// @brief Field _screenshotPeriod, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<float_t>* ____screenshotPeriod;

  /// @brief Field _screenshotTimes, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____screenshotTimes;

  /// @brief Field _framerate, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<int32_t>* ____framerate;

  /// @brief Field _wait, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____wait;

  /// @brief Field _barrier, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::Barrier* ____barrier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____beatmapLevels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____screenshotLevelStarter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____coroutineStarter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____terminalView) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____songId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____difficulty) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____characteristic) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____screenshotPeriod) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____screenshotTimes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____framerate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____wait) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongScreenshotsConsoleCommand, ____barrier) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunSongScreenshotsConsoleCommand) == 0x98, "Size mismatch!");

} // namespace GlobalNamespace
