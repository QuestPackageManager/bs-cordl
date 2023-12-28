#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_AudioGraph)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Shader;
}
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy {
class G_GraphShader;
}
// Forward declare root types
namespace Tayx::Graphy::Audio {
class G_AudioGraph;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Audio::G_AudioGraph);
// Type: Tayx.Graphy.Audio::G_AudioGraph
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15086))
// CS Name: ::Tayx.Graphy.Audio::G_AudioGraph*
class CORDL_TYPE G_AudioGraph : public ::Tayx::Graphy::Graph::G_Graph {
public:
  // Declarations
  /// @brief Field m_imageGraph, offset 0x18, size 0x8
  __declspec(property(get = __get_m_imageGraph, put = __set_m_imageGraph))::UnityEngine::UI::Image* m_imageGraph;

  /// @brief Field m_imageGraphHighestValues, offset 0x20, size 0x8
  __declspec(property(get = __get_m_imageGraphHighestValues, put = __set_m_imageGraphHighestValues))::UnityEngine::UI::Image* m_imageGraphHighestValues;

  /// @brief Field ShaderFull, offset 0x28, size 0x8
  __declspec(property(get = __get_ShaderFull, put = __set_ShaderFull))::UnityEngine::Shader* ShaderFull;

  /// @brief Field ShaderLight, offset 0x30, size 0x8
  __declspec(property(get = __get_ShaderLight, put = __set_ShaderLight))::UnityEngine::Shader* ShaderLight;

  /// @brief Field m_isInitialized, offset 0x38, size 0x1
  __declspec(property(get = __get_m_isInitialized, put = __set_m_isInitialized)) bool m_isInitialized;

  /// @brief Field m_graphyManager, offset 0x40, size 0x8
  __declspec(property(get = __get_m_graphyManager, put = __set_m_graphyManager))::Tayx::Graphy::GraphyManager* m_graphyManager;

  /// @brief Field m_audioMonitor, offset 0x48, size 0x8
  __declspec(property(get = __get_m_audioMonitor, put = __set_m_audioMonitor))::Tayx::Graphy::Audio::G_AudioMonitor* m_audioMonitor;

  /// @brief Field m_resolution, offset 0x50, size 0x4
  __declspec(property(get = __get_m_resolution, put = __set_m_resolution)) int32_t m_resolution;

  /// @brief Field m_shaderGraph, offset 0x58, size 0x8
  __declspec(property(get = __get_m_shaderGraph, put = __set_m_shaderGraph))::Tayx::Graphy::G_GraphShader* m_shaderGraph;

  /// @brief Field m_shaderGraphHighestValues, offset 0x60, size 0x8
  __declspec(property(get = __get_m_shaderGraphHighestValues, put = __set_m_shaderGraphHighestValues))::Tayx::Graphy::G_GraphShader* m_shaderGraphHighestValues;

  /// @brief Field m_graphArray, offset 0x68, size 0x8
  __declspec(property(get = __get_m_graphArray, put = __set_m_graphArray))::ArrayW<float_t, ::Array<float_t>*> m_graphArray;

  /// @brief Field m_graphArrayHighestValue, offset 0x70, size 0x8
  __declspec(property(get = __get_m_graphArrayHighestValue, put = __set_m_graphArrayHighestValue))::ArrayW<float_t, ::Array<float_t>*> m_graphArrayHighestValue;

  constexpr ::UnityEngine::UI::Image*& __get_m_imageGraph();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_m_imageGraph() const;

  constexpr void __set_m_imageGraph(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::UI::Image*& __get_m_imageGraphHighestValues();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_m_imageGraphHighestValues() const;

  constexpr void __set_m_imageGraphHighestValues(::UnityEngine::UI::Image* value);

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

  constexpr ::Tayx::Graphy::Audio::G_AudioMonitor*& __get_m_audioMonitor();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioMonitor*> const& __get_m_audioMonitor() const;

  constexpr void __set_m_audioMonitor(::Tayx::Graphy::Audio::G_AudioMonitor* value);

  constexpr int32_t& __get_m_resolution();

  constexpr int32_t const& __get_m_resolution() const;

  constexpr void __set_m_resolution(int32_t value);

  constexpr ::Tayx::Graphy::G_GraphShader*& __get_m_shaderGraph();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::G_GraphShader*> const& __get_m_shaderGraph() const;

  constexpr void __set_m_shaderGraph(::Tayx::Graphy::G_GraphShader* value);

  constexpr ::Tayx::Graphy::G_GraphShader*& __get_m_shaderGraphHighestValues();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::G_GraphShader*> const& __get_m_shaderGraphHighestValues() const;

  constexpr void __set_m_shaderGraphHighestValues(::Tayx::Graphy::G_GraphShader* value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_m_graphArray();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_m_graphArray() const;

  constexpr void __set_m_graphArray(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_m_graphArrayHighestValue();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_m_graphArrayHighestValue() const;

  constexpr void __set_m_graphArrayHighestValue(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method OnEnable addr 0x2a094f0 size 0x50 virtual false final false
  inline void OnEnable();

  /// @brief Method Update addr 0x2a09540 size 0x38 virtual false final false
  inline void Update();

  /// @brief Method UpdateParameters addr 0x2a095d8 size 0x1ac virtual false final false
  inline void UpdateParameters();

  /// @brief Method Init addr 0x2a09784 size 0x134 virtual false final false
  inline void Init();

  /// @brief Method UpdateGraph addr 0x2a098b8 size 0x4d8 virtual true final false
  inline void UpdateGraph();

  /// @brief Method CreatePoints addr 0x2a09dd4 size 0x214 virtual true final false
  inline void CreatePoints();

  static inline ::Tayx::Graphy::Audio::G_AudioGraph* New_ctor();

  /// @brief Method .ctor addr 0x2a09fe8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioGraph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_AudioGraph(G_AudioGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_AudioGraph(G_AudioGraph const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_AudioGraph();

public:
  /// @brief Field m_imageGraph, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___m_imageGraph;

  /// @brief Field m_imageGraphHighestValues, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___m_imageGraphHighestValues;

  /// @brief Field ShaderFull, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Shader* ___ShaderFull;

  /// @brief Field ShaderLight, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Shader* ___ShaderLight;

  /// @brief Field m_isInitialized, offset: 0x38, size: 0x1, def value: None
  bool ___m_isInitialized;

  /// @brief Field m_graphyManager, offset: 0x40, size: 0x8, def value: None
  ::Tayx::Graphy::GraphyManager* ___m_graphyManager;

  /// @brief Field m_audioMonitor, offset: 0x48, size: 0x8, def value: None
  ::Tayx::Graphy::Audio::G_AudioMonitor* ___m_audioMonitor;

  /// @brief Field m_resolution, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_resolution;

  /// @brief Field m_shaderGraph, offset: 0x58, size: 0x8, def value: None
  ::Tayx::Graphy::G_GraphShader* ___m_shaderGraph;

  /// @brief Field m_shaderGraphHighestValues, offset: 0x60, size: 0x8, def value: None
  ::Tayx::Graphy::G_GraphShader* ___m_shaderGraphHighestValues;

  /// @brief Field m_graphArray, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_graphArray;

  /// @brief Field m_graphArrayHighestValue, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_graphArrayHighestValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Audio::G_AudioGraph, 0x78>, "Size mismatch!");

} // namespace Tayx::Graphy::Audio
NEED_NO_BOX(::Tayx::Graphy::Audio::G_AudioGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Audio::G_AudioGraph*, "Tayx.Graphy.Audio", "G_AudioGraph");
