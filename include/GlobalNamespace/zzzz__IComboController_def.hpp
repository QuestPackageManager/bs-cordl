#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IComboController)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IComboController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IComboController);
// Type: ::IComboController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4656))
// CS Name: ::IComboController*
class CORDL_TYPE IComboController {
public:
  // Declarations
  /// @brief Method add_comboDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_comboDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_comboDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_comboDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_comboBreakingEventHappenedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_comboBreakingEventHappenedEvent(::System::Action* value);

  /// @brief Method remove_comboBreakingEventHappenedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_comboBreakingEventHappenedEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IComboController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IComboController(IComboController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IComboController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComboController(IComboController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IComboController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IComboController*, "", "IComboController");
