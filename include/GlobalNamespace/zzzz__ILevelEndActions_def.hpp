#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILevelEndActions)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ILevelEndActions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILevelEndActions);
// Type: ::ILevelEndActions
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5015))
// CS Name: ::ILevelEndActions*
class CORDL_TYPE ILevelEndActions {
public:
  // Declarations
  /// @brief Method add_levelFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_levelFailedEvent(::System::Action* value);

  /// @brief Method remove_levelFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_levelFailedEvent(::System::Action* value);

  /// @brief Method add_levelFinishedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_levelFinishedEvent(::System::Action* value);

  /// @brief Method remove_levelFinishedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_levelFinishedEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "ILevelEndActions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILevelEndActions(ILevelEndActions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILevelEndActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelEndActions(ILevelEndActions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILevelEndActions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILevelEndActions*, "", "ILevelEndActions");
