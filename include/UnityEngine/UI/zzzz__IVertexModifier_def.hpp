#pragma once
// IWYU pragma private; include "UnityEngine/UI/IVertexModifier.hpp"
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
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.IVertexModifier
class CORDL_TYPE IVertexModifier {
public:
  // Declarations
  /// @brief Method ModifyVertices, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts);

  // Ctor Parameters [CppParam { name: "", ty: "IVertexModifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVertexModifier(IVertexModifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15159 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IVertexModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IVertexModifier*, "UnityEngine.UI", "IVertexModifier");
