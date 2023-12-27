#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventHandler)
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IEventHandler);
// Type: UnityEngine.UIElements::IEventHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7210))
// CS Name: ::UnityEngine.UIElements::IEventHandler*
class CORDL_TYPE IEventHandler {
public:
  // Declarations
  /// @brief Method SendEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method HandleEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void HandleEvent(::UnityEngine::UIElements::EventBase* evt);

  // Ctor Parameters [CppParam { name: "", ty: "IEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventHandler(IEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventHandler(IEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IEventHandler*, "UnityEngine.UIElements", "IEventHandler");
