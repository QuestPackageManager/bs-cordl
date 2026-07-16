#pragma once
// IWYU pragma private; include "GlobalNamespace/MakeRunPackFileCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__MakeRunsongFileBaseCommand_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MakeRunPackFileCommand)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
class MakeRunPackFileCommand___c__DisplayClass5_0;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MakeRunPackFileCommand;
}
namespace GlobalNamespace {
class MakeRunPackFileCommand___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MakeRunPackFileCommand*);
MARK_REF_T(::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MakeRunPackFileCommand*, "", "MakeRunPackFileCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0*, "", "MakeRunPackFileCommand/<>c__DisplayClass5_0");
// Dependencies BeatmapDifficulty, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MakeRunPackFileCommand/<>c__DisplayClass5_0
class CORDL_TYPE MakeRunPackFileCommand___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::MakeRunPackFileCommand* __4__this;

  /// @brief Field characteristic, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic)) ::StringW characteristic;

  /// @brief Field difficulty, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  static inline ::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0* New_ctor();

  /// @brief Method <TryGetLevelsToPlay>b__0, addr 0x32dd904, size 0xa4, virtual false, abstract: false, final false
  inline bool _TryGetLevelsToPlay_b__0(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  constexpr ::GlobalNamespace::MakeRunPackFileCommand* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::MakeRunPackFileCommand*& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_characteristic() const;

  constexpr ::StringW& __cordl_internal_get_characteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_difficulty();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MakeRunPackFileCommand* value);

  constexpr void __cordl_internal_set_characteristic(::StringW value);

  constexpr void __cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method .ctor, addr 0x32dd84c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MakeRunPackFileCommand___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MakeRunPackFileCommand___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MakeRunPackFileCommand___c__DisplayClass5_0(MakeRunPackFileCommand___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MakeRunPackFileCommand___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MakeRunPackFileCommand___c__DisplayClass5_0(MakeRunPackFileCommand___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19372 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MakeRunPackFileCommand* _____4__this;

  /// @brief Field characteristic, offset: 0x18, size: 0x8, def value: None
  ::StringW ___characteristic;

  /// @brief Field difficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___difficulty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0, ___characteristic) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0, ___difficulty) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MakeRunsongFileBaseCommand
namespace GlobalNamespace {
// Is value type: false
// CS Name: MakeRunPackFileCommand
class CORDL_TYPE MakeRunPackFileCommand : public ::GlobalNamespace::MakeRunsongFileBaseCommand {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0;

  /// @brief Field _packId, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__packId, put = __cordl_internal_set__packId)) ::GlobalNamespace::RequiredArgument_1<::StringW>* _packId;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  static inline ::GlobalNamespace::MakeRunPackFileCommand* New_ctor();

  /// @brief Method TryGetLevelsToPlay, addr 0x32dd228, size 0x624, virtual true, abstract: false, final false
  inline bool TryGetLevelsToPlay(int32_t desiredNumberOfLevels, ::StringW characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                 ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*> messages,
                                 ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*> levelsToPlay);

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& __cordl_internal_get__packId() const;

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& __cordl_internal_get__packId();

  constexpr void __cordl_internal_set__packId(::GlobalNamespace::RequiredArgument_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x32dd850, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32dd1a0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32dd1e4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MakeRunPackFileCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MakeRunPackFileCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MakeRunPackFileCommand(MakeRunPackFileCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MakeRunPackFileCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MakeRunPackFileCommand(MakeRunPackFileCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19373 };

  /// @brief Field _packId, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::StringW>* ____packId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MakeRunPackFileCommand, ____packId) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MakeRunPackFileCommand) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace
