#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDragAndDrop)
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IDragAndDrop);
// Type: UnityEngine.UIElements::IDragAndDrop
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7051))
// CS Name: ::UnityEngine.UIElements::IDragAndDrop*
class CORDL_TYPE IDragAndDrop {
public:
  // Declarations
  __declspec(property(get = get_data))::UnityEngine::UIElements::IDragAndDropData* data;

  /// @brief Method StartDrag addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void StartDrag(::UnityEngine::UIElements::StartDragArgs* args);

  /// @brief Method get_data addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::IDragAndDropData* get_data();

  // Ctor Parameters [CppParam { name: "", ty: "IDragAndDrop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDragAndDrop(IDragAndDrop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDragAndDrop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDragAndDrop(IDragAndDrop const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IDragAndDrop);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IDragAndDrop*, "UnityEngine.UIElements", "IDragAndDrop");
