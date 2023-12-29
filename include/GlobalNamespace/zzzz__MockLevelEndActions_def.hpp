#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockLevelEndActions)
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MockLevelEndActions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockLevelEndActions);
// Type: ::MockLevelEndActions
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5127))
// CS Name: ::MockLevelEndActions*
class CORDL_TYPE MockLevelEndActions : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelFailedEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_levelFailedEvent, put = __set_levelFailedEvent))::System::Action* levelFailedEvent;

  /// @brief Field levelFinishedEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_levelFinishedEvent, put = __set_levelFinishedEvent))::System::Action* levelFinishedEvent;

  /// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
  constexpr operator ::GlobalNamespace::ILevelEndActions*() noexcept;

  constexpr ::System::Action*& __get_levelFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_levelFailedEvent() const;

  constexpr void __set_levelFailedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_levelFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_levelFinishedEvent() const;

  constexpr void __set_levelFinishedEvent(::System::Action* value);

  /// @brief Method add_levelFailedEvent addr 0x2283948 size 0x9c virtual true final true
  inline void add_levelFailedEvent(::System::Action* value);

  /// @brief Method remove_levelFailedEvent addr 0x22839e4 size 0x9c virtual true final true
  inline void remove_levelFailedEvent(::System::Action* value);

  /// @brief Method add_levelFinishedEvent addr 0x2283a80 size 0x9c virtual true final true
  inline void add_levelFinishedEvent(::System::Action* value);

  /// @brief Method remove_levelFinishedEvent addr 0x2283b1c size 0x9c virtual true final true
  inline void remove_levelFinishedEvent(::System::Action* value);

  static inline ::GlobalNamespace::MockLevelEndActions* New_ctor();

  /// @brief Method .ctor addr 0x2283bb8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockLevelEndActions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockLevelEndActions(MockLevelEndActions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockLevelEndActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockLevelEndActions(MockLevelEndActions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockLevelEndActions();

public:
  /// @brief Field levelFailedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___levelFailedEvent;

  /// @brief Field levelFinishedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___levelFinishedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockLevelEndActions, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockLevelEndActions, ___levelFailedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockLevelEndActions, ___levelFinishedEvent) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockLevelEndActions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockLevelEndActions*, "", "MockLevelEndActions");
