#pragma once
// IWYU pragma private; include "Tayx/Graphy/Graph/G_Graph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(G_Graph)
// Forward declare root types
namespace Tayx::Graphy::Graph {
class G_Graph;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Graph::G_Graph);
// Dependencies UnityEngine.MonoBehaviour
namespace Tayx::Graphy::Graph {
// Is value type: false
// CS Name: Tayx.Graphy.Graph.G_Graph
class CORDL_TYPE G_Graph : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method CreatePoints, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CreatePoints();

  static inline ::Tayx::Graphy::Graph::G_Graph* New_ctor();

  /// @brief Method UpdateGraph, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateGraph();

  /// @brief Method .ctor, addr 0x44d3278, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_Graph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_Graph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_Graph(G_Graph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_Graph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_Graph(G_Graph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17235 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Graph::G_Graph, 0x20>, "Size mismatch!");

} // namespace Tayx::Graphy::Graph
NEED_NO_BOX(::Tayx::Graphy::Graph::G_Graph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Graph::G_Graph*, "Tayx.Graphy.Graph", "G_Graph");
