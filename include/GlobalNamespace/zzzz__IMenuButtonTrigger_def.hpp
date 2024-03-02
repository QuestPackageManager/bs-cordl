#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMenuButtonTrigger)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMenuButtonTrigger);
// Type: ::IMenuButtonTrigger
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IMenuButtonTrigger*
class CORDL_TYPE IMenuButtonTrigger {
public:
  // Declarations
  /// @brief Method add_menuButtonTriggeredEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_menuButtonTriggeredEvent(::System::Action* value);

  /// @brief Method remove_menuButtonTriggeredEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_menuButtonTriggeredEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IMenuButtonTrigger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMenuButtonTrigger(IMenuButtonTrigger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMenuButtonTrigger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMenuButtonTrigger(IMenuButtonTrigger const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMenuButtonTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMenuButtonTrigger*, "", "IMenuButtonTrigger");
