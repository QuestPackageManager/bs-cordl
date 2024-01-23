#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RunSongPackConsoleCommand)
namespace GlobalNamespace {
class ArgumentBase;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
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
struct __DebugConsoleController__ConsoleMessage;
}
namespace GlobalNamespace {
class __RunSongPackConsoleCommand____c;
}
namespace GlobalNamespace {
class __RunSongPackConsoleCommand____c__DisplayClass12_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class RunSongPackConsoleCommand;
}
namespace GlobalNamespace {
class __RunSongPackConsoleCommand____c;
}
namespace GlobalNamespace {
class __RunSongPackConsoleCommand____c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RunSongPackConsoleCommand);
MARK_REF_PTR_T(::GlobalNamespace::__RunSongPackConsoleCommand____c);
MARK_REF_PTR_T(::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0);
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5989))
// CS Name: ::RunSongPackConsoleCommand::<>c__DisplayClass12_0*
class CORDL_TYPE __RunSongPackConsoleCommand____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic))::StringW characteristic;

  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0))::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, bool>* __9__0;

  constexpr ::StringW& __cordl_internal_get_characteristic();

  constexpr ::StringW const& __cordl_internal_get_characteristic() const;

  constexpr void __cordl_internal_set_characteristic(::StringW value);

  constexpr ::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, bool>*& __cordl_internal_get___9__0();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, bool>*> const& __cordl_internal_get___9__0() const;

  constexpr void __cordl_internal_set___9__0(::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, bool>* value);

  static inline ::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0* New_ctor();

  /// @brief Method .ctor, addr 0x2311b0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Execute>b__0, addr 0x2311df8, size 0x2c, virtual false, abstract: false, final false
  inline bool _Execute_b__0(::GlobalNamespace::PreviewDifficultyBeatmapSet* x);

  // Ctor Parameters [CppParam { name: "", ty: "__RunSongPackConsoleCommand____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RunSongPackConsoleCommand____c__DisplayClass12_0(__RunSongPackConsoleCommand____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RunSongPackConsoleCommand____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RunSongPackConsoleCommand____c__DisplayClass12_0(__RunSongPackConsoleCommand____c__DisplayClass12_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RunSongPackConsoleCommand____c__DisplayClass12_0();

public:
  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::StringW ___characteristic;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, bool>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0, ___characteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0, _____9__0) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5990))
// CS Name: ::RunSongPackConsoleCommand::<>c*
class CORDL_TYPE __RunSongPackConsoleCommand____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__RunSongPackConsoleCommand____c* __9;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1))::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2))::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* __9__12_2;

  static inline void setStaticF___9(::GlobalNamespace::__RunSongPackConsoleCommand____c* value);

  static inline ::GlobalNamespace::__RunSongPackConsoleCommand____c* getStaticF___9();

  static inline void setStaticF___9__12_1(::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* getStaticF___9__12_1();

  static inline void setStaticF___9__12_2(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* getStaticF___9__12_2();

  static inline ::GlobalNamespace::__RunSongPackConsoleCommand____c* New_ctor();

  /// @brief Method .ctor, addr 0x2311e88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Execute>b__12_1, addr 0x2311e90, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _Execute_b__12_1(::GlobalNamespace::PreviewDifficultyBeatmapSet* x);

  /// @brief Method <Execute>b__12_2, addr 0x2311eb0, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _Execute_b__12_2(::GlobalNamespace::BeatmapDifficulty x);

  // Ctor Parameters [CppParam { name: "", ty: "__RunSongPackConsoleCommand____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RunSongPackConsoleCommand____c(__RunSongPackConsoleCommand____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RunSongPackConsoleCommand____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RunSongPackConsoleCommand____c(__RunSongPackConsoleCommand____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RunSongPackConsoleCommand____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RunSongPackConsoleCommand____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RunSongPackConsoleCommand
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5983))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5991))
// CS Name: ::RunSongPackConsoleCommand*
class CORDL_TYPE RunSongPackConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using __c = ::GlobalNamespace::__RunSongPackConsoleCommand____c;

  using __c__DisplayClass12_0 = ::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0;

  /// @brief Field _songRunningHelper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__songRunningHelper, put = __cordl_internal_set__songRunningHelper))::GlobalNamespace::SongRunningHelper* _songRunningHelper;

  /// @brief Field _packId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__packId, put = __cordl_internal_set__packId))::GlobalNamespace::RequiredArgument_1<::StringW>* _packId;

  /// @brief Field _runAutopilot, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__runAutopilot, put = __cordl_internal_set__runAutopilot))::GlobalNamespace::OptionalArgument_1<bool>* _runAutopilot;

  /// @brief Field _runUnityProfiler, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__runUnityProfiler, put = __cordl_internal_set__runUnityProfiler))::GlobalNamespace::OptionalArgument_1<bool>* _runUnityProfiler;

  /// @brief Field _difficulty, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty))::GlobalNamespace::OptionalArgument_1<int32_t>* _difficulty;

  /// @brief Field _characteristic, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristic, put = __cordl_internal_set__characteristic))::GlobalNamespace::OptionalArgument_1<::StringW>* _characteristic;

  __declspec(property(get = get_isAsyncCommand)) bool isAsyncCommand;

  constexpr ::GlobalNamespace::SongRunningHelper*& __cordl_internal_get__songRunningHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongRunningHelper*> const& __cordl_internal_get__songRunningHelper() const;

  constexpr void __cordl_internal_set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value);

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& __cordl_internal_get__packId();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RequiredArgument_1<::StringW>*> const& __cordl_internal_get__packId() const;

  constexpr void __cordl_internal_set__packId(::GlobalNamespace::RequiredArgument_1<::StringW>* value);

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__runAutopilot();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<bool>*> const& __cordl_internal_get__runAutopilot() const;

  constexpr void __cordl_internal_set__runAutopilot(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__runUnityProfiler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<bool>*> const& __cordl_internal_get__runUnityProfiler() const;

  constexpr void __cordl_internal_set__runUnityProfiler(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& __cordl_internal_get__difficulty();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<int32_t>*> const& __cordl_internal_get__difficulty() const;

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::OptionalArgument_1<int32_t>* value);

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__characteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<::StringW>*> const& __cordl_internal_get__characteristic() const;

  constexpr void __cordl_internal_set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  /// @brief Method get_isAsyncCommand, addr 0x2310f54, size 0x8, virtual true, abstract: false, final false
  inline bool get_isAsyncCommand();

  /// @brief Method GetArguments, addr 0x2310f5c, size 0x144, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> GetArguments();

  /// @brief Method GetShortHelpText, addr 0x23110a0, size 0x44, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetShortHelpText();

  /// @brief Method GetLongUsageHelp, addr 0x23110e4, size 0x44, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetLongUsageHelp();

  /// @brief Method GetCommandName, addr 0x2311128, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetCommandName();

  /// @brief Method Execute, addr 0x2311168, size 0x9a4, virtual true, abstract: false, final false
  inline void Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync, addr 0x2311b14, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  static inline ::GlobalNamespace::RunSongPackConsoleCommand* New_ctor();

  /// @brief Method .ctor, addr 0x2311b9c, size 0x25c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RunSongPackConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunSongPackConsoleCommand(RunSongPackConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunSongPackConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunSongPackConsoleCommand(RunSongPackConsoleCommand const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunSongPackConsoleCommand();

public:
  /// @brief Field _songRunningHelper, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SongRunningHelper* ____songRunningHelper;

  /// @brief Field _packId, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::StringW>* ____packId;

  /// @brief Field _runAutopilot, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____runAutopilot;

  /// @brief Field _runUnityProfiler, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____runUnityProfiler;

  /// @brief Field _difficulty, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<int32_t>* ____difficulty;

  /// @brief Field _characteristic, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____characteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunSongPackConsoleCommand, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongPackConsoleCommand, ____songRunningHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongPackConsoleCommand, ____packId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongPackConsoleCommand, ____runAutopilot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongPackConsoleCommand, ____runUnityProfiler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongPackConsoleCommand, ____difficulty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunSongPackConsoleCommand, ____characteristic) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RunSongPackConsoleCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunSongPackConsoleCommand*, "", "RunSongPackConsoleCommand");
NEED_NO_BOX(::GlobalNamespace::__RunSongPackConsoleCommand____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RunSongPackConsoleCommand____c*, "", "RunSongPackConsoleCommand/<>c");
NEED_NO_BOX(::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0*, "", "RunSongPackConsoleCommand/<>c__DisplayClass12_0");
