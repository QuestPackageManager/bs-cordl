#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayServerFiniteStateMachineFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameplayServerFiniteStateMachineFactory)
namespace GlobalNamespace {
struct GameplayServerFiniteStateMachine_InitParams;
}
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayServerFiniteStateMachineFactory;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameplayServerFiniteStateMachineFactory*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameplayServerFiniteStateMachineFactory*, "", "GameplayServerFiniteStateMachineFactory");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayServerFiniteStateMachineFactory
class CORDL_TYPE GameplayServerFiniteStateMachineFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x32b2c34, size 0x74, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameplayServerFiniteStateMachine* Create(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams initParams);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayServerFiniteStateMachineFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachineFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayServerFiniteStateMachineFactory(GameplayServerFiniteStateMachineFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachineFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayServerFiniteStateMachineFactory(GameplayServerFiniteStateMachineFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18891 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameplayServerFiniteStateMachineFactory) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
