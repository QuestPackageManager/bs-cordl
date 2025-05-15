#pragma once
// IWYU pragma private; include "GlobalNamespace/MockLevelEndActions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockLevelEndActions)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MockLevelEndActions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockLevelEndActions);
// Dependencies ILevelEndActions, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockLevelEndActions
class CORDL_TYPE MockLevelEndActions : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelFailedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFailedEvent, put = __cordl_internal_set_levelFailedEvent)) ::System::Action* levelFailedEvent;

  /// @brief Field levelFinishedEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFinishedEvent, put = __cordl_internal_set_levelFinishedEvent)) ::System::Action* levelFinishedEvent;

  /// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
  constexpr operator ::GlobalNamespace::ILevelEndActions*() noexcept;

  static inline ::GlobalNamespace::MockLevelEndActions* New_ctor();

  constexpr ::System::Action* const& __cordl_internal_get_levelFailedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelFailedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_levelFinishedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelFinishedEvent();

  constexpr void __cordl_internal_set_levelFailedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelFinishedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3ba5330, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_levelFailedEvent, addr 0x3ba51f8, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelFailedEvent(::System::Action* value);

  /// @brief Method add_levelFinishedEvent, addr 0x3ba50c0, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelFinishedEvent(::System::Action* value);

  /// @brief Convert to "::GlobalNamespace::ILevelEndActions"
  constexpr ::GlobalNamespace::ILevelEndActions* i___GlobalNamespace__ILevelEndActions() noexcept;

  /// @brief Method remove_levelFailedEvent, addr 0x3ba5294, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelFailedEvent(::System::Action* value);

  /// @brief Method remove_levelFinishedEvent, addr 0x3ba515c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelFinishedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockLevelEndActions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockLevelEndActions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockLevelEndActions(MockLevelEndActions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockLevelEndActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockLevelEndActions(MockLevelEndActions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4399 };

  /// @brief Field levelFinishedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___levelFinishedEvent;

  /// @brief Field levelFailedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___levelFailedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockLevelEndActions, ___levelFinishedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockLevelEndActions, ___levelFailedEvent) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockLevelEndActions, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockLevelEndActions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockLevelEndActions*, "", "MockLevelEndActions");
