#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RunSongConsoleCommand)
namespace GlobalNamespace {
class ArgumentBase;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace GlobalNamespace {
class SongRunningHelper;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
struct __RunSongConsoleCommand___ExecuteAsync_d__14;
}
namespace GlobalNamespace {
class __RunSongConsoleCommand____c;
}
namespace GlobalNamespace {
class __RunSongConsoleCommand____c__DisplayClass14_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class RunSongConsoleCommand;
}
namespace GlobalNamespace {
class __RunSongConsoleCommand____c;
}
namespace GlobalNamespace {
class __RunSongConsoleCommand____c__DisplayClass14_0;
}
namespace GlobalNamespace {
struct __RunSongConsoleCommand___ExecuteAsync_d__14;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RunSongConsoleCommand);
MARK_REF_PTR_T(::GlobalNamespace::__RunSongConsoleCommand____c);
MARK_REF_PTR_T(::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0);
MARK_VAL_T(::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14);
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5985))
// CS Name: ::RunSongConsoleCommand::<>c__DisplayClass14_0*
class CORDL_TYPE __RunSongConsoleCommand____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristic, offset 0x10, size 0x8
  __declspec(property(get = __get_characteristic, put = __set_characteristic))::StringW characteristic;

  constexpr ::StringW& __get_characteristic();

  constexpr ::StringW const& __get_characteristic() const;

  constexpr void __set_characteristic(::StringW value);

  static inline ::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0* New_ctor();

  /// @brief Method .ctor, addr 0x23100a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ExecuteAsync>b__0, addr 0x23100b0, size 0x2c, virtual false, abstract: false, final false
  inline bool _ExecuteAsync_b__0(::GlobalNamespace::PreviewDifficultyBeatmapSet* x);

  // Ctor Parameters [CppParam { name: "", ty: "__RunSongConsoleCommand____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RunSongConsoleCommand____c__DisplayClass14_0(__RunSongConsoleCommand____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RunSongConsoleCommand____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RunSongConsoleCommand____c__DisplayClass14_0(__RunSongConsoleCommand____c__DisplayClass14_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RunSongConsoleCommand____c__DisplayClass14_0();

public:
  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::StringW ___characteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0, ___characteristic) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5986))
// CS Name: ::RunSongConsoleCommand::<>c*
class CORDL_TYPE __RunSongConsoleCommand____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__RunSongConsoleCommand____c* __9;

  /// @brief Field <>9__14_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_1, put = setStaticF___9__14_1))::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* __9__14_1;

  /// @brief Field <>9__14_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_2, put = setStaticF___9__14_2))::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* __9__14_2;

  static inline void setStaticF___9(::GlobalNamespace::__RunSongConsoleCommand____c* value);

  static inline ::GlobalNamespace::__RunSongConsoleCommand____c* getStaticF___9();

  static inline void setStaticF___9__14_1(::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* getStaticF___9__14_1();

  static inline void setStaticF___9__14_2(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* getStaticF___9__14_2();

  static inline ::GlobalNamespace::__RunSongConsoleCommand____c* New_ctor();

  /// @brief Method .ctor, addr 0x2310140, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ExecuteAsync>b__14_1, addr 0x2310148, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _ExecuteAsync_b__14_1(::GlobalNamespace::PreviewDifficultyBeatmapSet* x);

  /// @brief Method <ExecuteAsync>b__14_2, addr 0x2310168, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _ExecuteAsync_b__14_2(::GlobalNamespace::BeatmapDifficulty x);

  // Ctor Parameters [CppParam { name: "", ty: "__RunSongConsoleCommand____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RunSongConsoleCommand____c(__RunSongConsoleCommand____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RunSongConsoleCommand____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RunSongConsoleCommand____c(__RunSongConsoleCommand____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RunSongConsoleCommand____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RunSongConsoleCommand____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ExecuteAsync>d__14
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(4358)), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 906 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5987)) CS Name: ::RunSongConsoleCommand::<ExecuteAsync>d__14
struct CORDL_TYPE __RunSongConsoleCommand___ExecuteAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x23101cc, size 0xd7c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2310f48, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RunSongConsoleCommand*", modifiers: "",
  // def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value: None },
  // CppParam { name: "__8__1", ty: "::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }]
  constexpr __RunSongConsoleCommand___ExecuteAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::GlobalNamespace::RunSongConsoleCommand* __4__this,
                                                         ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages,
                                                         ::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0* __8__1,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RunSongConsoleCommand___ExecuteAsync_d__14();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RunSongConsoleCommand* __4__this;

  /// @brief Field messages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0* __8__1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14, messages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RunSongConsoleCommand
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5983))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5988))
// CS Name: ::RunSongConsoleCommand*
class CORDL_TYPE RunSongConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _ExecuteAsync_d__14 = ::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14;

  using __c = ::GlobalNamespace::__RunSongConsoleCommand____c;

  using __c__DisplayClass14_0 = ::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0;

  /// @brief Field _songRunningHelper, offset 0x18, size 0x8
  __declspec(property(get = __get__songRunningHelper, put = __set__songRunningHelper))::GlobalNamespace::SongRunningHelper* _songRunningHelper;

  /// @brief Field _beatmapLevels, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapLevels, put = __set__beatmapLevels))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevels;

  /// @brief Field _levelId, offset 0x28, size 0x8
  __declspec(property(get = __get__levelId, put = __set__levelId))::GlobalNamespace::RequiredArgument_1<::StringW>* _levelId;

  /// @brief Field _runAutopilot, offset 0x30, size 0x8
  __declspec(property(get = __get__runAutopilot, put = __set__runAutopilot))::GlobalNamespace::OptionalArgument_1<bool>* _runAutopilot;

  /// @brief Field _runUnityProfiler, offset 0x38, size 0x8
  __declspec(property(get = __get__runUnityProfiler, put = __set__runUnityProfiler))::GlobalNamespace::OptionalArgument_1<bool>* _runUnityProfiler;

  /// @brief Field _difficulty, offset 0x40, size 0x8
  __declspec(property(get = __get__difficulty, put = __set__difficulty))::GlobalNamespace::OptionalArgument_1<int32_t>* _difficulty;

  /// @brief Field _characteristic, offset 0x48, size 0x8
  __declspec(property(get = __get__characteristic, put = __set__characteristic))::GlobalNamespace::OptionalArgument_1<::StringW>* _characteristic;

  __declspec(property(get = get_isAsyncCommand)) bool isAsyncCommand;

  constexpr ::GlobalNamespace::SongRunningHelper*& __get__songRunningHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongRunningHelper*> const& __get__songRunningHelper() const;

  constexpr void __set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __get__beatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __get__beatmapLevels() const;

  constexpr void __set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& __get__levelId();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RequiredArgument_1<::StringW>*> const& __get__levelId() const;

  constexpr void __set__levelId(::GlobalNamespace::RequiredArgument_1<::StringW>* value);

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __get__runAutopilot();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<bool>*> const& __get__runAutopilot() const;

  constexpr void __set__runAutopilot(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __get__runUnityProfiler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<bool>*> const& __get__runUnityProfiler() const;

  constexpr void __set__runUnityProfiler(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& __get__difficulty();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<int32_t>*> const& __get__difficulty() const;

  constexpr void __set__difficulty(::GlobalNamespace::OptionalArgument_1<int32_t>* value);

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __get__characteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<::StringW>*> const& __get__characteristic() const;

  constexpr void __set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  /// @brief Method get_isAsyncCommand, addr 0x230fb5c, size 0x8, virtual true, abstract: false, final false
  inline bool get_isAsyncCommand();

  /// @brief Method GetArguments, addr 0x230fb64, size 0x144, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> GetArguments();

  /// @brief Method GetShortHelpText, addr 0x230fca8, size 0x44, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetShortHelpText();

  /// @brief Method GetLongUsageHelp, addr 0x230fcec, size 0x44, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetLongUsageHelp();

  /// @brief Method GetCommandName, addr 0x230fd30, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetCommandName();

  /// @brief Method Execute, addr 0x230fd70, size 0x4, virtual true, abstract: false, final false
  inline void Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync, addr 0x230fd74, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  static inline ::GlobalNamespace::RunSongConsoleCommand* New_ctor();

  /// @brief Method .ctor, addr 0x230fe4c, size 0x25c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RunSongConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunSongConsoleCommand(RunSongConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunSongConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunSongConsoleCommand(RunSongConsoleCommand const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongConsoleCommand();

public:
  /// @brief Field _songRunningHelper, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SongRunningHelper* ____songRunningHelper;

  /// @brief Field _beatmapLevels, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevels;

  /// @brief Field _levelId, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::StringW>* ____levelId;

  /// @brief Field _runAutopilot, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____runAutopilot;

  /// @brief Field _runUnityProfiler, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____runUnityProfiler;

  /// @brief Field _difficulty, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<int32_t>* ____difficulty;

  /// @brief Field _characteristic, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____characteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunSongConsoleCommand, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____songRunningHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____beatmapLevels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____runAutopilot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____runUnityProfiler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____difficulty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongConsoleCommand, ____characteristic) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RunSongConsoleCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunSongConsoleCommand*, "", "RunSongConsoleCommand");
NEED_NO_BOX(::GlobalNamespace::__RunSongConsoleCommand____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RunSongConsoleCommand____c*, "", "RunSongConsoleCommand/<>c");
NEED_NO_BOX(::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0*, "", "RunSongConsoleCommand/<>c__DisplayClass14_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14, "", "RunSongConsoleCommand/<ExecuteAsync>d__14");
