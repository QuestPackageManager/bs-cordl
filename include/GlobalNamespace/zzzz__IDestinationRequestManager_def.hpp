#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDestinationRequestManager)
namespace GlobalNamespace {
class MenuDestination;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IDestinationRequestManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IDestinationRequestManager);
// Type: ::IDestinationRequestManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4183))
// CS Name: ::IDestinationRequestManager*
class CORDL_TYPE IDestinationRequestManager {
public:
  // Declarations
  __declspec(property(get = get_currentMenuDestinationRequest, put = set_currentMenuDestinationRequest))::GlobalNamespace::MenuDestination* currentMenuDestinationRequest;

  /// @brief Method add_didSendMenuDestinationRequestEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value);

  /// @brief Method remove_didSendMenuDestinationRequestEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value);

  /// @brief Method get_currentMenuDestinationRequest addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::MenuDestination* get_currentMenuDestinationRequest();

  /// @brief Method set_currentMenuDestinationRequest addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_currentMenuDestinationRequest(::GlobalNamespace::MenuDestination* value);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "IDestinationRequestManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDestinationRequestManager(IDestinationRequestManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDestinationRequestManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDestinationRequestManager(IDestinationRequestManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IDestinationRequestManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDestinationRequestManager*, "", "IDestinationRequestManager");
