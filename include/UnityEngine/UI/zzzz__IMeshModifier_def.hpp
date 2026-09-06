#pragma once
// IWYU pragma private; include "UnityEngine/UI/IMeshModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMeshModifier)
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::UI {
class IMeshModifier;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::IMeshModifier*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::IMeshModifier*, "UnityEngine.UI", "IMeshModifier");
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.IMeshModifier
class CORDL_TYPE IMeshModifier {
public:
  // Declarations
  /// [Obsolete("use IMeshModifier.ModifyMesh (VertexHelper verts) instead", false)]
  /// @brief Method ModifyMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ModifyMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method ModifyMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ModifyMesh(::UnityEngine::UI::VertexHelper* verts);

  // Ctor Parameters [CppParam { name: "", ty: "IMeshModifier", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMeshModifier(IMeshModifierconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17515 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
