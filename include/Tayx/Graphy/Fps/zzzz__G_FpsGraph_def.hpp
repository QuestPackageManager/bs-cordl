#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(G_FpsGraph)
namespace UnityEngine {
class Shader;
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
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsGraph;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Fps::G_FpsGraph);
// Type: Tayx.Graphy.Fps::G_FpsGraph
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15081))
// CS Name: ::Tayx.Graphy.Fps::G_FpsGraph*
class CORDL_TYPE G_FpsGraph : public ::Tayx::Graphy::Graph::G_Graph {
public:
  // Declarations
  /// @brief Field m_imageGraph, offset 0x18, size 0x8
  __declspec(property(get = __get_m_imageGraph, put = __set_m_imageGraph))::UnityEngine::UI::Image* m_imageGraph;

  /// @brief Field ShaderFull, offset 0x20, size 0x8
  __declspec(property(get = __get_ShaderFull, put = __set_ShaderFull))::UnityEngine::Shader* ShaderFull;

  /// @brief Field ShaderLight, offset 0x28, size 0x8
  __declspec(property(get = __get_ShaderLight, put = __set_ShaderLight))::UnityEngine::Shader* ShaderLight;

  /// @brief Field m_isInitialized, offset 0x30, size 0x1
  __declspec(property(get = __get_m_isInitialized, put = __set_m_isInitialized)) bool m_isInitialized;

  /// @brief Field m_graphyManager, offset 0x38, size 0x8
  __declspec(property(get = __get_m_graphyManager, put = __set_m_graphyManager))::Tayx::Graphy::GraphyManager* m_graphyManager;

  /// @brief Field m_fpsMonitor, offset 0x40, size 0x8
  __declspec(property(get = __get_m_fpsMonitor, put = __set_m_fpsMonitor))::Tayx::Graphy::Fps::G_FpsMonitor* m_fpsMonitor;

  /// @brief Field m_resolution, offset 0x48, size 0x4
  __declspec(property(get = __get_m_resolution, put = __set_m_resolution)) int32_t m_resolution;

  /// @brief Field m_shaderGraph, offset 0x50, size 0x8
  __declspec(property(get = __get_m_shaderGraph, put = __set_m_shaderGraph))::Tayx::Graphy::G_GraphShader* m_shaderGraph;

  /// @brief Field m_fpsArray, offset 0x58, size 0x8
  __declspec(property(get = __get_m_fpsArray, put = __set_m_fpsArray))::ArrayW<int32_t, ::Array<int32_t>*> m_fpsArray;

  /// @brief Field m_highestFps, offset 0x60, size 0x4
  __declspec(property(get = __get_m_highestFps, put = __set_m_highestFps)) int32_t m_highestFps;

  constexpr ::UnityEngine::UI::Image*& __get_m_imageGraph();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_m_imageGraph() const;

  constexpr void __set_m_imageGraph(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::Shader*& __get_ShaderFull();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get_ShaderFull() const;

  constexpr void __set_ShaderFull(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::Shader*& __get_ShaderLight();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get_ShaderLight() const;

  constexpr void __set_ShaderLight(::UnityEngine::Shader* value);

  constexpr bool& __get_m_isInitialized();

  constexpr bool const& __get_m_isInitialized() const;

  constexpr void __set_m_isInitialized(bool value);

  constexpr ::Tayx::Graphy::GraphyManager*& __get_m_graphyManager();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> const& __get_m_graphyManager() const;

  constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager* value);

  constexpr ::Tayx::Graphy::Fps::G_FpsMonitor*& __get_m_fpsMonitor();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsMonitor*> const& __get_m_fpsMonitor() const;

  constexpr void __set_m_fpsMonitor(::Tayx::Graphy::Fps::G_FpsMonitor* value);

  constexpr int32_t& __get_m_resolution();

  constexpr int32_t const& __get_m_resolution() const;

  constexpr void __set_m_resolution(int32_t value);

  constexpr ::Tayx::Graphy::G_GraphShader*& __get_m_shaderGraph();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::G_GraphShader*> const& __get_m_shaderGraph() const;

  constexpr void __set_m_shaderGraph(::Tayx::Graphy::G_GraphShader* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_fpsArray();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_fpsArray() const;

  constexpr void __set_m_fpsArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_m_highestFps();

  constexpr int32_t const& __get_m_highestFps() const;

  constexpr void __set_m_highestFps(int32_t value);

  /// @brief Method Update addr 0x2a08444 size 0xc virtual false final false
  inline void Update();

  /// @brief Method UpdateParameters addr 0x2a08450 size 0x100 virtual false final false
  inline void UpdateParameters();

  /// @brief Method Init addr 0x2a08550 size 0x114 virtual false final false
  inline void Init();

  /// @brief Method UpdateGraph addr 0x2a08664 size 0x244 virtual true final false
  inline void UpdateGraph();

  /// @brief Method CreatePoints addr 0x2a088a8 size 0x14c virtual true final false
  inline void CreatePoints();

  static inline ::Tayx::Graphy::Fps::G_FpsGraph* New_ctor();

  /// @brief Method .ctor addr 0x2a089f4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsGraph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_FpsGraph(G_FpsGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_FpsGraph(G_FpsGraph const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_FpsGraph();

public:
  /// @brief Field m_imageGraph, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___m_imageGraph;

  /// @brief Field ShaderFull, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Shader* ___ShaderFull;

  /// @brief Field ShaderLight, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Shader* ___ShaderLight;

  /// @brief Field m_isInitialized, offset: 0x30, size: 0x1, def value: None
  bool ___m_isInitialized;

  /// @brief Field m_graphyManager, offset: 0x38, size: 0x8, def value: None
  ::Tayx::Graphy::GraphyManager* ___m_graphyManager;

  /// @brief Field m_fpsMonitor, offset: 0x40, size: 0x8, def value: None
  ::Tayx::Graphy::Fps::G_FpsMonitor* ___m_fpsMonitor;

  /// @brief Field m_resolution, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_resolution;

  /// @brief Field m_shaderGraph, offset: 0x50, size: 0x8, def value: None
  ::Tayx::Graphy::G_GraphShader* ___m_shaderGraph;

  /// @brief Field m_fpsArray, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_fpsArray;

  /// @brief Field m_highestFps, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_highestFps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::G_FpsGraph, 0x68>, "Size mismatch!");

} // namespace Tayx::Graphy::Fps
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsGraph*, "Tayx.Graphy.Fps", "G_FpsGraph");
