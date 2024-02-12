#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVertexModifier)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct UIVertex;
}
// Forward declare root types
namespace UnityEngine::UI {
class IVertexModifier;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::IVertexModifier);
// Type: UnityEngine.UI::IVertexModifier
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13042))
// CS Name: ::UnityEngine.UI::IVertexModifier*
class CORDL_TYPE IVertexModifier {
public:
  // Declarations
  /// @brief Method ModifyVertices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts);

  // Ctor Parameters [CppParam { name: "", ty: "IVertexModifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVertexModifier(IVertexModifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVertexModifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVertexModifier(IVertexModifier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IVertexModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IVertexModifier*, "UnityEngine.UI", "IVertexModifier");
