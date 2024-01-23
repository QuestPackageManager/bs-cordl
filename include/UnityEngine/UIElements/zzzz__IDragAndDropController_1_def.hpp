#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDragAndDropController_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TArgs> class IDragAndDropController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::IDragAndDropController_1);
// Type: UnityEngine.UIElements::IDragAndDropController`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TArgs>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6955))
// CS Name: ::UnityEngine.UIElements::IDragAndDropController`1<TArgs>*
class CORDL_TYPE IDragAndDropController_1 {
public:
  // Declarations
  /// @brief Method CanStartDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CanStartDrag(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIndices);

  /// @brief Method SetupDragAndDrop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StartDragArgs* SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIndices, bool skipText);

  /// @brief Method HandleDragAndDrop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(TArgs args);

  /// @brief Method OnDrop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDrop(TArgs args);

  // Ctor Parameters [CppParam { name: "", ty: "IDragAndDropController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDragAndDropController_1(IDragAndDropController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDragAndDropController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDragAndDropController_1(IDragAndDropController_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IDragAndDropController_1, "UnityEngine.UIElements", "IDragAndDropController`1");
