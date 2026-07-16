#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifierCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameplayModifierCommand)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameplayModifierCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameplayModifierCommand*, "", "GameplayModifierCommand");
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifierCommand
class CORDL_TYPE GameplayModifierCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  /// @brief Field _modifierName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__modifierName, put = __cordl_internal_set__modifierName)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _modifierName;

  /// @brief Field _playerDataModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _set, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__set, put = __cordl_internal_set__set)) ::GlobalNamespace::OptionalArgument_1<bool>* _set;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32cff54, size 0x1d0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method GetGameplayModifierString, addr 0x32d16e0, size 0x728, virtual false, abstract: false, final false
  inline ::StringW GetGameplayModifierString();

  static inline ::GlobalNamespace::GameplayModifierCommand* New_ctor();

  /// @brief Method PrintModifierState, addr 0x32d0b6c, size 0xb74, virtual false, abstract: false, final false
  inline void PrintModifierState(::StringW modifierName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method SetModifierState, addr 0x32d0124, size 0xa48, virtual false, abstract: false, final false
  inline bool SetModifierState(::StringW modifierName, bool state, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__modifierName() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__modifierName();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__set() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__set();

  constexpr void __cordl_internal_set__modifierName(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__set(::GlobalNamespace::OptionalArgument_1<bool>* value);

  /// @brief Method .ctor, addr 0x32d1e08, size 0x490, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32cfecc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32cff10, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifierCommand(GameplayModifierCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifierCommand(GameplayModifierCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19361 };

  /// @brief Field _playerDataModel, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _modifierName, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____modifierName;

  /// @brief Field _set, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____set;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifierCommand, ____playerDataModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierCommand, ____modifierName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierCommand, ____set) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameplayModifierCommand) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
