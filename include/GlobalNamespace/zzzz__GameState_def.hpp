#pragma once
// IWYU pragma private; include "GlobalNamespace/GameState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameState)
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class GameState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameState);
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameState
class CORDL_TYPE GameState : public ::System::Object {
public:
  // Declarations
  /// @brief Field fsm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fsm, put = __cordl_internal_set_fsm)) ::GlobalNamespace::GameplayServerFiniteStateMachine* fsm;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::GameState* New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine* fsm);

  constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine* const& __cordl_internal_get_fsm() const;

  constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine*& __cordl_internal_get_fsm();

  constexpr void __cordl_internal_set_fsm(::GlobalNamespace::GameplayServerFiniteStateMachine* value);

  /// @brief Method .ctor, addr 0x22cbbc4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::GameplayServerFiniteStateMachine* fsm);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameState(GameState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameState(GameState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14771 };

  /// @brief Field fsm, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameplayServerFiniteStateMachine* ___fsm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameState, ___fsm) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameState, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameState*, "", "GameState");
