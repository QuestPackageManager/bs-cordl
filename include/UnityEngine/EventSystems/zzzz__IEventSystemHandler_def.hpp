#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventSystemHandler)
// Forward declare root types
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IEventSystemHandler);
// Type: UnityEngine.EventSystems::IEventSystemHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13170))
// CS Name: ::UnityEngine.EventSystems::IEventSystemHandler*
class CORDL_TYPE IEventSystemHandler {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IEventSystemHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventSystemHandler(IEventSystemHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventSystemHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventSystemHandler(IEventSystemHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IEventSystemHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IEventSystemHandler*, "UnityEngine.EventSystems", "IEventSystemHandler");
