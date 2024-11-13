#pragma once
// IWYU pragma private; include "Tayx/Graphy/Fps/G_FpsGraph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(G_FpsGraph)
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
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
namespace Tayx::Graphy::Fps {
class G_FpsGraph;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Fps::G_FpsGraph);
// Type: Tayx.Graphy.Fps::G_FpsGraph
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Fps {
// Is value type: false
// CS Name: ::Tayx.Graphy.Fps::G_FpsGraph*
class CORDL_TYPE G_FpsGraph : public ::Tayx::Graphy::Graph::G_Graph {
public:
  // Declarations
  /// @brief Field ShaderFull, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ShaderFull, put = __cordl_internal_set_ShaderFull)) ::UnityW<::UnityEngine::Shader> ShaderFull;

  /// @brief Field ShaderLight, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ShaderLight, put = __cordl_internal_set_ShaderLight)) ::UnityW<::UnityEngine::Shader> ShaderLight;

  /// @brief Field m_fpsArray, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsArray, put = __cordl_internal_set_m_fpsArray)) ::ArrayW<int32_t, ::Array<int32_t>*> m_fpsArray;

  /// @brief Field m_fpsMonitor, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsMonitor, put = __cordl_internal_set_m_fpsMonitor)) ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> m_fpsMonitor;

  /// @brief Field m_graphyManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_highestFps, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_highestFps, put = __cordl_internal_set_m_highestFps)) int32_t m_highestFps;

  /// @brief Field m_imageGraph, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_imageGraph, put = __cordl_internal_set_m_imageGraph)) ::UnityW<::UnityEngine::UI::Image> m_imageGraph;

  /// @brief Field m_isInitialized, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isInitialized, put = __cordl_internal_set_m_isInitialized)) bool m_isInitialized;

  /// @brief Field m_resolution, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_resolution, put = __cordl_internal_set_m_resolution)) int32_t m_resolution;

  /// @brief Field m_shaderGraph, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_shaderGraph, put = __cordl_internal_set_m_shaderGraph)) ::Tayx::Graphy::G_GraphShader* m_shaderGraph;

  /// @brief Method CreatePoints, addr 0x4470ef4, size 0x14c, virtual true, abstract: false, final false
  inline void CreatePoints();

  /// @brief Method Init, addr 0x4470b98, size 0x114, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Fps::G_FpsGraph* New_ctor();

  /// @brief Method Update, addr 0x4470a88, size 0xc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateGraph, addr 0x4470cac, size 0x248, virtual true, abstract: false, final false
  inline void UpdateGraph();

  /// @brief Method UpdateParameters, addr 0x4470a94, size 0x104, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_ShaderFull() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_ShaderFull();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_ShaderLight() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_ShaderLight();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_fpsArray() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_fpsArray();

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& __cordl_internal_get_m_fpsMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& __cordl_internal_get_m_fpsMonitor();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr int32_t const& __cordl_internal_get_m_highestFps() const;

  constexpr int32_t& __cordl_internal_get_m_highestFps();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_imageGraph() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_imageGraph();

  constexpr bool const& __cordl_internal_get_m_isInitialized() const;

  constexpr bool& __cordl_internal_get_m_isInitialized();

  constexpr int32_t const& __cordl_internal_get_m_resolution() const;

  constexpr int32_t& __cordl_internal_get_m_resolution();

  constexpr ::Tayx::Graphy::G_GraphShader*& __cordl_internal_get_m_shaderGraph();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::G_GraphShader*> const& __cordl_internal_get_m_shaderGraph() const;

  constexpr void __cordl_internal_set_ShaderFull(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_ShaderLight(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_fpsArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_highestFps(int32_t value);

  constexpr void __cordl_internal_set_m_imageGraph(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_isInitialized(bool value);

  constexpr void __cordl_internal_set_m_resolution(int32_t value);

  constexpr void __cordl_internal_set_m_shaderGraph(::Tayx::Graphy::G_GraphShader* value);

  /// @brief Method .ctor, addr 0x4471040, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_FpsGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_FpsGraph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_FpsGraph(G_FpsGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_FpsGraph(G_FpsGraph const&) = delete;

  /// @brief Field m_imageGraph, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_imageGraph;

  /// @brief Field ShaderFull, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___ShaderFull;

  /// @brief Field ShaderLight, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___ShaderLight;

  /// @brief Field m_isInitialized, offset: 0x38, size: 0x1, def value: None
  bool ___m_isInitialized;

  /// @brief Field m_graphyManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_fpsMonitor, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> ___m_fpsMonitor;

  /// @brief Field m_resolution, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_resolution;

  /// @brief Field m_shaderGraph, offset: 0x58, size: 0x8, def value: None
  ::Tayx::Graphy::G_GraphShader* ___m_shaderGraph;

  /// @brief Field m_fpsArray, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_fpsArray;

  /// @brief Field m_highestFps, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_highestFps;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17091 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::G_FpsGraph, 0x70>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___m_imageGraph) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___ShaderFull) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___ShaderLight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___m_isInitialized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___m_graphyManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___m_fpsMonitor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___m_resolution) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___m_shaderGraph) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___m_fpsArray) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsGraph, ___m_highestFps) == 0x68, "Offset mismatch!");

} // namespace Tayx::Graphy::Fps
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsGraph*, "Tayx.Graphy.Fps", "G_FpsGraph");
