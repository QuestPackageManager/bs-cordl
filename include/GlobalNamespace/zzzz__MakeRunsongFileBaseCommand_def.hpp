#pragma once
// IWYU pragma private; include "GlobalNamespace\MakeRunsongFileBaseCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MakeRunsongFileBaseCommand)
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
class MakeRunsongFileBaseCommand___c;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace GlobalNamespace {
class SongRunningHelper;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MakeRunsongFileBaseCommand;
}
namespace GlobalNamespace {
class MakeRunsongFileBaseCommand___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MakeRunsongFileBaseCommand*);
MARK_REF_T(::GlobalNamespace::MakeRunsongFileBaseCommand___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MakeRunsongFileBaseCommand*, "", "MakeRunsongFileBaseCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MakeRunsongFileBaseCommand___c*, "", "MakeRunsongFileBaseCommand/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MakeRunsongFileBaseCommand/<>c
class CORDL_TYPE MakeRunsongFileBaseCommand___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MakeRunsongFileBaseCommand___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Comparison_1<::GlobalNamespace::BeatmapLevel*>* __9__12_0;

  static inline ::GlobalNamespace::MakeRunsongFileBaseCommand___c* New_ctor();

  /// @brief Method <CollectFirstNLongestLevels>b__12_0, addr 0x32de8b4, size 0x74, virtual false, abstract: false, final false
  inline int32_t _CollectFirstNLongestLevels_b__12_0(::GlobalNamespace::BeatmapLevel* a, ::GlobalNamespace::BeatmapLevel* b);

  /// @brief Method .ctor, addr 0x32de8b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MakeRunsongFileBaseCommand___c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::BeatmapLevel*>* getStaticF___9__12_0();

  static inline void setStaticF___9(::GlobalNamespace::MakeRunsongFileBaseCommand___c* value);

  static inline void setStaticF___9__12_0(::System::Comparison_1<::GlobalNamespace::BeatmapLevel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MakeRunsongFileBaseCommand___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MakeRunsongFileBaseCommand___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MakeRunsongFileBaseCommand___c(MakeRunsongFileBaseCommand___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MakeRunsongFileBaseCommand___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MakeRunsongFileBaseCommand___c(MakeRunsongFileBaseCommand___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MakeRunsongFileBaseCommand___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: MakeRunsongFileBaseCommand
class CORDL_TYPE MakeRunsongFileBaseCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using __c = ::GlobalNamespace::MakeRunsongFileBaseCommand___c;

  __declspec(property(get = get_AllowsUnknownArguments)) bool AllowsUnknownArguments;

  /// @brief Field _beatmapLevelsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _characteristic, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristic, put = __cordl_internal_set__characteristic)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _characteristic;

  /// @brief Field _difficulty, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty)) ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* _difficulty;

  /// @brief Field _exec, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__exec, put = __cordl_internal_set__exec)) ::GlobalNamespace::OptionalArgument_1<bool>* _exec;

  /// @brief Field _filePath, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::GlobalNamespace::RequiredArgument_1<::StringW>* _filePath;

  /// @brief Field _maxNumberOfLevels, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__maxNumberOfLevels, put = __cordl_internal_set__maxNumberOfLevels)) ::GlobalNamespace::OptionalArgument_1<int32_t>* _maxNumberOfLevels;

  /// @brief Field _songRunningHelper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__songRunningHelper, put = __cordl_internal_set__songRunningHelper)) ::GlobalNamespace::SongRunningHelper* _songRunningHelper;

  /// @brief Method CollectFirstNLongestLevels, addr 0x32de120, size 0x1f0, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapLevel*> CollectFirstNLongestLevels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* fromLevels, int32_t numberOfLevels);

  /// @brief Method ExecuteAsync, addr 0x32dd918, size 0x1e8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method GenerateCommandFile, addr 0x32ddb00, size 0x620, virtual false, abstract: false, final false
  inline bool GenerateCommandFile(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*> messages,
                                  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* levelsToPlay);

  static inline ::GlobalNamespace::MakeRunsongFileBaseCommand* New_ctor();

  /// @brief Method TryGetLevelCharacteristic, addr 0x32de310, size 0x118, virtual false, abstract: false, final false
  inline bool TryGetLevelCharacteristic(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristic, ::by_ref<::GlobalNamespace::BeatmapCharacteristic> characteristicEnum);

  /// @brief Method TryGetLevelsToPlay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetLevelsToPlay(int32_t desiredNumberOfLevels, ::StringW characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                 ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*> messages,
                                 ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*> levelsToPlay);

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__characteristic() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__characteristic();

  constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* const& __cordl_internal_get__difficulty() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get__difficulty();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__exec() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__exec();

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& __cordl_internal_get__filePath() const;

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& __cordl_internal_get__filePath();

  constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>* const& __cordl_internal_get__maxNumberOfLevels() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& __cordl_internal_get__maxNumberOfLevels();

  constexpr ::GlobalNamespace::SongRunningHelper* const& __cordl_internal_get__songRunningHelper() const;

  constexpr ::GlobalNamespace::SongRunningHelper*& __cordl_internal_get__songRunningHelper();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* value);

  constexpr void __cordl_internal_set__exec(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__filePath(::GlobalNamespace::RequiredArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__maxNumberOfLevels(::GlobalNamespace::OptionalArgument_1<int32_t>* value);

  constexpr void __cordl_internal_set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value);

  /// @brief Method .ctor, addr 0x32de428, size 0x434, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllowsUnknownArguments, addr 0x32dd910, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowsUnknownArguments();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MakeRunsongFileBaseCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MakeRunsongFileBaseCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MakeRunsongFileBaseCommand(MakeRunsongFileBaseCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MakeRunsongFileBaseCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MakeRunsongFileBaseCommand(MakeRunsongFileBaseCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19402 };

  /// @brief Field _songRunningHelper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SongRunningHelper* ____songRunningHelper;

  /// @brief Field _beatmapLevelsModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _filePath, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::StringW>* ____filePath;

  /// @brief Field _difficulty, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* ____difficulty;

  /// @brief Field _characteristic, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____characteristic;

  /// @brief Field _maxNumberOfLevels, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<int32_t>* ____maxNumberOfLevels;

  /// @brief Field _exec, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____exec;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MakeRunsongFileBaseCommand, ____songRunningHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MakeRunsongFileBaseCommand, ____beatmapLevelsModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MakeRunsongFileBaseCommand, ____filePath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MakeRunsongFileBaseCommand, ____difficulty) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MakeRunsongFileBaseCommand, ____characteristic) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MakeRunsongFileBaseCommand, ____maxNumberOfLevels) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MakeRunsongFileBaseCommand, ____exec) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MakeRunsongFileBaseCommand) == 0x70, "Size mismatch!");

} // namespace GlobalNamespace
