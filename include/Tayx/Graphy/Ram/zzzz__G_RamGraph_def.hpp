#pragma once
// IWYU pragma private; include "Tayx/Graphy/Ram/G_RamGraph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_RamGraph)
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
namespace Tayx::Graphy {
class G_GraphShader;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace Tayx::Graphy::Ram {
class G_RamGraph;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Ram::G_RamGraph);
// Dependencies Tayx.Graphy.Graph.G_Graph
namespace Tayx::Graphy::Ram {
// Is value type: false
// CS Name: Tayx.Graphy.Ram.G_RamGraph
class CORDL_TYPE G_RamGraph : public ::Tayx::Graphy::Graph::G_Graph {
public:
  // Declarations
  /// @brief Field ShaderFull, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ShaderFull, put = __cordl_internal_set_ShaderFull)) ::UnityW<::UnityEngine::Shader> ShaderFull;

  /// @brief Field ShaderLight, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ShaderLight, put = __cordl_internal_set_ShaderLight)) ::UnityW<::UnityEngine::Shader> ShaderLight;

  /// @brief Field m_allocatedArray, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_allocatedArray, put = __cordl_internal_set_m_allocatedArray)) ::ArrayW<float_t, ::Array<float_t>*> m_allocatedArray;

  /// @brief Field m_graphyManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_highestMemory, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_highestMemory, put = __cordl_internal_set_m_highestMemory)) float_t m_highestMemory;

  /// @brief Field m_imageAllocated, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_imageAllocated, put = __cordl_internal_set_m_imageAllocated)) ::UnityW<::UnityEngine::UI::Image> m_imageAllocated;

  /// @brief Field m_imageMono, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_imageMono, put = __cordl_internal_set_m_imageMono)) ::UnityW<::UnityEngine::UI::Image> m_imageMono;

  /// @brief Field m_imageReserved, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_imageReserved, put = __cordl_internal_set_m_imageReserved)) ::UnityW<::UnityEngine::UI::Image> m_imageReserved;

  /// @brief Field m_isInitialized, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isInitialized, put = __cordl_internal_set_m_isInitialized)) bool m_isInitialized;

  /// @brief Field m_monoArray, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_monoArray, put = __cordl_internal_set_m_monoArray)) ::ArrayW<float_t, ::Array<float_t>*> m_monoArray;

  /// @brief Field m_ramMonitor, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ramMonitor, put = __cordl_internal_set_m_ramMonitor)) ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> m_ramMonitor;

  /// @brief Field m_reservedArray, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_reservedArray, put = __cordl_internal_set_m_reservedArray)) ::ArrayW<float_t, ::Array<float_t>*> m_reservedArray;

  /// @brief Field m_resolution, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_resolution, put = __cordl_internal_set_m_resolution)) int32_t m_resolution;

  /// @brief Field m_shaderGraphAllocated, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_shaderGraphAllocated, put = __cordl_internal_set_m_shaderGraphAllocated)) ::Tayx::Graphy::G_GraphShader* m_shaderGraphAllocated;

  /// @brief Field m_shaderGraphMono, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_shaderGraphMono, put = __cordl_internal_set_m_shaderGraphMono)) ::Tayx::Graphy::G_GraphShader* m_shaderGraphMono;

  /// @brief Field m_shaderGraphReserved, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_shaderGraphReserved, put = __cordl_internal_set_m_shaderGraphReserved)) ::Tayx::Graphy::G_GraphShader* m_shaderGraphReserved;

  /// @brief Method CreatePoints, addr 0x44d2c14, size 0x2ec, virtual true, abstract: false, final false
  inline void CreatePoints();

  /// @brief Method Init, addr 0x44d2850, size 0x158, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Ram::G_RamGraph* New_ctor();

  /// @brief Method Update, addr 0x44d25f8, size 0xc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateGraph, addr 0x44d29a8, size 0x26c, virtual true, abstract: false, final false
  inline void UpdateGraph();

  /// @brief Method UpdateParameters, addr 0x44d2604, size 0x24c, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_ShaderFull() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_ShaderFull();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_ShaderLight() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_ShaderLight();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_allocatedArray() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_allocatedArray();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr float_t const& __cordl_internal_get_m_highestMemory() const;

  constexpr float_t& __cordl_internal_get_m_highestMemory();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_imageAllocated() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_imageAllocated();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_imageMono() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_imageMono();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_imageReserved() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_imageReserved();

  constexpr bool const& __cordl_internal_get_m_isInitialized() const;

  constexpr bool& __cordl_internal_get_m_isInitialized();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_monoArray() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_monoArray();

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> const& __cordl_internal_get_m_ramMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor>& __cordl_internal_get_m_ramMonitor();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_reservedArray() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_reservedArray();

  constexpr int32_t const& __cordl_internal_get_m_resolution() const;

  constexpr int32_t& __cordl_internal_get_m_resolution();

  constexpr ::Tayx::Graphy::G_GraphShader* const& __cordl_internal_get_m_shaderGraphAllocated() const;

  constexpr ::Tayx::Graphy::G_GraphShader*& __cordl_internal_get_m_shaderGraphAllocated();

  constexpr ::Tayx::Graphy::G_GraphShader* const& __cordl_internal_get_m_shaderGraphMono() const;

  constexpr ::Tayx::Graphy::G_GraphShader*& __cordl_internal_get_m_shaderGraphMono();

  constexpr ::Tayx::Graphy::G_GraphShader* const& __cordl_internal_get_m_shaderGraphReserved() const;

  constexpr ::Tayx::Graphy::G_GraphShader*& __cordl_internal_get_m_shaderGraphReserved();

  constexpr void __cordl_internal_set_ShaderFull(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_ShaderLight(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_allocatedArray(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_highestMemory(float_t value);

  constexpr void __cordl_internal_set_m_imageAllocated(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_imageMono(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_imageReserved(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_isInitialized(bool value);

  constexpr void __cordl_internal_set_m_monoArray(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_ramMonitor(::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> value);

  constexpr void __cordl_internal_set_m_reservedArray(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_resolution(int32_t value);

  constexpr void __cordl_internal_set_m_shaderGraphAllocated(::Tayx::Graphy::G_GraphShader* value);

  constexpr void __cordl_internal_set_m_shaderGraphMono(::Tayx::Graphy::G_GraphShader* value);

  constexpr void __cordl_internal_set_m_shaderGraphReserved(::Tayx::Graphy::G_GraphShader* value);

  /// @brief Method .ctor, addr 0x44d2f00, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_RamGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_RamGraph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_RamGraph(G_RamGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_RamGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_RamGraph(G_RamGraph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17231 };

  /// @brief Field m_imageAllocated, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_imageAllocated;

  /// @brief Field m_imageReserved, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_imageReserved;

  /// @brief Field m_imageMono, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_imageMono;

  /// @brief Field ShaderFull, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___ShaderFull;

  /// @brief Field ShaderLight, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___ShaderLight;

  /// @brief Field m_isInitialized, offset: 0x48, size: 0x1, def value: None
  bool ___m_isInitialized;

  /// @brief Field m_graphyManager, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_ramMonitor, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> ___m_ramMonitor;

  /// @brief Field m_resolution, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_resolution;

  /// @brief Field m_shaderGraphAllocated, offset: 0x68, size: 0x8, def value: None
  ::Tayx::Graphy::G_GraphShader* ___m_shaderGraphAllocated;

  /// @brief Field m_shaderGraphReserved, offset: 0x70, size: 0x8, def value: None
  ::Tayx::Graphy::G_GraphShader* ___m_shaderGraphReserved;

  /// @brief Field m_shaderGraphMono, offset: 0x78, size: 0x8, def value: None
  ::Tayx::Graphy::G_GraphShader* ___m_shaderGraphMono;

  /// @brief Field m_allocatedArray, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_allocatedArray;

  /// @brief Field m_reservedArray, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_reservedArray;

  /// @brief Field m_monoArray, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_monoArray;

  /// @brief Field m_highestMemory, offset: 0x98, size: 0x4, def value: None
  float_t ___m_highestMemory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_imageAllocated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_imageReserved) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_imageMono) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___ShaderFull) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___ShaderLight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_isInitialized) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_graphyManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_ramMonitor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_resolution) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_shaderGraphAllocated) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_shaderGraphReserved) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_shaderGraphMono) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_allocatedArray) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_reservedArray) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_monoArray) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamGraph, ___m_highestMemory) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Ram::G_RamGraph, 0xa0>, "Size mismatch!");

} // namespace Tayx::Graphy::Ram
NEED_NO_BOX(::Tayx::Graphy::Ram::G_RamGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::G_RamGraph*, "Tayx.Graphy.Ram", "G_RamGraph");
