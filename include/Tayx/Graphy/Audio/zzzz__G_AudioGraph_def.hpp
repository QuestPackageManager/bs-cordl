#pragma once
// IWYU pragma private; include "Tayx/Graphy/Audio/G_AudioGraph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_AudioGraph)
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
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
namespace Tayx::Graphy::Audio {
class G_AudioGraph;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Audio::G_AudioGraph);
// Dependencies Tayx.Graphy.Graph.G_Graph
namespace Tayx::Graphy::Audio {
// Is value type: false
// CS Name: Tayx.Graphy.Audio.G_AudioGraph
class CORDL_TYPE G_AudioGraph : public ::Tayx::Graphy::Graph::G_Graph {
public:
  // Declarations
  /// @brief Field ShaderFull, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ShaderFull, put = __cordl_internal_set_ShaderFull)) ::UnityW<::UnityEngine::Shader> ShaderFull;

  /// @brief Field ShaderLight, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ShaderLight, put = __cordl_internal_set_ShaderLight)) ::UnityW<::UnityEngine::Shader> ShaderLight;

  /// @brief Field m_audioMonitor, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioMonitor, put = __cordl_internal_set_m_audioMonitor)) ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> m_audioMonitor;

  /// @brief Field m_graphArray, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphArray, put = __cordl_internal_set_m_graphArray)) ::ArrayW<float_t, ::Array<float_t>*> m_graphArray;

  /// @brief Field m_graphArrayHighestValue, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphArrayHighestValue, put = __cordl_internal_set_m_graphArrayHighestValue)) ::ArrayW<float_t, ::Array<float_t>*> m_graphArrayHighestValue;

  /// @brief Field m_graphyManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_imageGraph, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_imageGraph, put = __cordl_internal_set_m_imageGraph)) ::UnityW<::UnityEngine::UI::Image> m_imageGraph;

  /// @brief Field m_imageGraphHighestValues, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_imageGraphHighestValues, put = __cordl_internal_set_m_imageGraphHighestValues)) ::UnityW<::UnityEngine::UI::Image> m_imageGraphHighestValues;

  /// @brief Field m_isInitialized, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isInitialized, put = __cordl_internal_set_m_isInitialized)) bool m_isInitialized;

  /// @brief Field m_resolution, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_resolution, put = __cordl_internal_set_m_resolution)) int32_t m_resolution;

  /// @brief Field m_shaderGraph, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_shaderGraph, put = __cordl_internal_set_m_shaderGraph)) ::Tayx::Graphy::G_GraphShader* m_shaderGraph;

  /// @brief Field m_shaderGraphHighestValues, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_shaderGraphHighestValues, put = __cordl_internal_set_m_shaderGraphHighestValues)) ::Tayx::Graphy::G_GraphShader* m_shaderGraphHighestValues;

  /// @brief Method CreatePoints, addr 0x44d3720, size 0x214, virtual true, abstract: false, final false
  inline void CreatePoints();

  /// @brief Method Init, addr 0x44d30d8, size 0x134, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Audio::G_AudioGraph* New_ctor();

  /// @brief Method OnEnable, addr 0x44d2e48, size 0x50, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x44d2e98, size 0x38, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateGraph, addr 0x44d320c, size 0x4d0, virtual true, abstract: false, final false
  inline void UpdateGraph();

  /// @brief Method UpdateParameters, addr 0x44d2f30, size 0x1a8, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_ShaderFull() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_ShaderFull();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_ShaderLight() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_ShaderLight();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& __cordl_internal_get_m_audioMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& __cordl_internal_get_m_audioMonitor();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_graphArray() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_graphArray();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_graphArrayHighestValue() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_graphArrayHighestValue();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_imageGraph() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_imageGraph();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_imageGraphHighestValues() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_imageGraphHighestValues();

  constexpr bool const& __cordl_internal_get_m_isInitialized() const;

  constexpr bool& __cordl_internal_get_m_isInitialized();

  constexpr int32_t const& __cordl_internal_get_m_resolution() const;

  constexpr int32_t& __cordl_internal_get_m_resolution();

  constexpr ::Tayx::Graphy::G_GraphShader* const& __cordl_internal_get_m_shaderGraph() const;

  constexpr ::Tayx::Graphy::G_GraphShader*& __cordl_internal_get_m_shaderGraph();

  constexpr ::Tayx::Graphy::G_GraphShader* const& __cordl_internal_get_m_shaderGraphHighestValues() const;

  constexpr ::Tayx::Graphy::G_GraphShader*& __cordl_internal_get_m_shaderGraphHighestValues();

  constexpr void __cordl_internal_set_ShaderFull(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_ShaderLight(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value);

  constexpr void __cordl_internal_set_m_graphArray(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_graphArrayHighestValue(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_imageGraph(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_imageGraphHighestValues(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_isInitialized(bool value);

  constexpr void __cordl_internal_set_m_resolution(int32_t value);

  constexpr void __cordl_internal_set_m_shaderGraph(::Tayx::Graphy::G_GraphShader* value);

  constexpr void __cordl_internal_set_m_shaderGraphHighestValues(::Tayx::Graphy::G_GraphShader* value);

  /// @brief Method .ctor, addr 0x44d3934, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_AudioGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_AudioGraph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_AudioGraph(G_AudioGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_AudioGraph(G_AudioGraph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17229 };

  /// @brief Field m_imageGraph, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_imageGraph;

  /// @brief Field m_imageGraphHighestValues, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_imageGraphHighestValues;

  /// @brief Field ShaderFull, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___ShaderFull;

  /// @brief Field ShaderLight, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___ShaderLight;

  /// @brief Field m_isInitialized, offset: 0x40, size: 0x1, def value: None
  bool ___m_isInitialized;

  /// @brief Field m_graphyManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_audioMonitor, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> ___m_audioMonitor;

  /// @brief Field m_resolution, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_resolution;

  /// @brief Field m_shaderGraph, offset: 0x60, size: 0x8, def value: None
  ::Tayx::Graphy::G_GraphShader* ___m_shaderGraph;

  /// @brief Field m_shaderGraphHighestValues, offset: 0x68, size: 0x8, def value: None
  ::Tayx::Graphy::G_GraphShader* ___m_shaderGraphHighestValues;

  /// @brief Field m_graphArray, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_graphArray;

  /// @brief Field m_graphArrayHighestValue, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_graphArrayHighestValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_imageGraph) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_imageGraphHighestValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___ShaderFull) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___ShaderLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_isInitialized) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_graphyManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_audioMonitor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_resolution) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_shaderGraph) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_shaderGraphHighestValues) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_graphArray) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioGraph, ___m_graphArrayHighestValue) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Audio::G_AudioGraph, 0x80>, "Size mismatch!");

} // namespace Tayx::Graphy::Audio
NEED_NO_BOX(::Tayx::Graphy::Audio::G_AudioGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Audio::G_AudioGraph*, "Tayx.Graphy.Audio", "G_AudioGraph");
