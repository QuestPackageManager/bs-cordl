#pragma once
// IWYU pragma private; include "UnityEngine/UI/Outline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Shadow_def.hpp"
CORDL_MODULE_EXPORT(Outline)
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace UnityEngine::UI {
class Outline;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::Outline*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::Outline*, "UnityEngine.UI", "Outline");
// Dependencies UnityEngine.UI.Shadow
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Outline
class CORDL_TYPE Outline : public ::UnityEngine::UI::Shadow {
public:
  // Declarations
  /// @brief Method ModifyMesh, addr 0x6e106a8, size 0x254, virtual true, abstract: false, final false
  inline void ModifyMesh(::UnityEngine::UI::VertexHelper* vh);

  static inline ::UnityEngine::UI::Outline* New_ctor();

  /// @brief Method .ctor, addr 0x6e10684, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Outline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Outline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Outline(Outline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Outline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Outline(Outline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17485 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::Outline) == 0x48, "Size mismatch!");

} // namespace UnityEngine::UI
