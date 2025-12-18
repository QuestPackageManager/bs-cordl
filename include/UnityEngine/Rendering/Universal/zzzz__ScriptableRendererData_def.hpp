#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRendererData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRendererData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData_DebugShaderResources;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData_ProbeVolumeResources;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData_DebugShaderResources;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData_ProbeVolumeResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRendererData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRendererData/DebugShaderResources
class CORDL_TYPE ScriptableRendererData_DebugShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field debugReplacementPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_debugReplacementPS, put = __cordl_internal_set_debugReplacementPS)) ::UnityW<::UnityEngine::Shader> debugReplacementPS;

  /// @brief Field hdrDebugViewPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hdrDebugViewPS, put = __cordl_internal_set_hdrDebugViewPS)) ::UnityW<::UnityEngine::Shader> hdrDebugViewPS;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_debugReplacementPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_debugReplacementPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_hdrDebugViewPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_hdrDebugViewPS();

  constexpr void __cordl_internal_set_debugReplacementPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_hdrDebugViewPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x66bbb2c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRendererData_DebugShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererData_DebugShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRendererData_DebugShaderResources(ScriptableRendererData_DebugShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererData_DebugShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRendererData_DebugShaderResources(ScriptableRendererData_DebugShaderResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12710 };

  /// @brief Field debugReplacementPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___debugReplacementPS;

  /// @brief Field hdrDebugViewPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___hdrDebugViewPS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources, ___debugReplacementPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources, ___hdrDebugViewPS) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRendererData/ProbeVolumeResources
class CORDL_TYPE ScriptableRendererData_ProbeVolumeResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field probeSamplingDebugMesh, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_probeSamplingDebugMesh, put = __cordl_internal_set_probeSamplingDebugMesh)) ::UnityW<::UnityEngine::Mesh> probeSamplingDebugMesh;

  /// @brief Field probeSamplingDebugTexture, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_probeSamplingDebugTexture, put = __cordl_internal_set_probeSamplingDebugTexture)) ::UnityW<::UnityEngine::Texture2D> probeSamplingDebugTexture;

  /// @brief Field probeVolumeBlendStatesCS, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeBlendStatesCS, put = __cordl_internal_set_probeVolumeBlendStatesCS)) ::UnityW<::UnityEngine::ComputeShader> probeVolumeBlendStatesCS;

  /// @brief Field probeVolumeDebugShader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeDebugShader, put = __cordl_internal_set_probeVolumeDebugShader)) ::UnityW<::UnityEngine::Shader> probeVolumeDebugShader;

  /// @brief Field probeVolumeFragmentationDebugShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeFragmentationDebugShader, put = __cordl_internal_set_probeVolumeFragmentationDebugShader)) ::UnityW<::UnityEngine::Shader>
      probeVolumeFragmentationDebugShader;

  /// @brief Field probeVolumeOffsetDebugShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeOffsetDebugShader, put = __cordl_internal_set_probeVolumeOffsetDebugShader)) ::UnityW<::UnityEngine::Shader> probeVolumeOffsetDebugShader;

  /// @brief Field probeVolumeSamplingDebugShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeSamplingDebugShader, put = __cordl_internal_set_probeVolumeSamplingDebugShader)) ::UnityW<::UnityEngine::Shader>
      probeVolumeSamplingDebugShader;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_probeSamplingDebugMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_probeSamplingDebugMesh();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_probeSamplingDebugTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_probeSamplingDebugTexture();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_probeVolumeBlendStatesCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_probeVolumeBlendStatesCS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_probeVolumeDebugShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_probeVolumeDebugShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_probeVolumeFragmentationDebugShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_probeVolumeFragmentationDebugShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_probeVolumeOffsetDebugShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_probeVolumeOffsetDebugShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_probeVolumeSamplingDebugShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_probeVolumeSamplingDebugShader();

  constexpr void __cordl_internal_set_probeSamplingDebugMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_probeSamplingDebugTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_probeVolumeBlendStatesCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_probeVolumeDebugShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_probeVolumeFragmentationDebugShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_probeVolumeOffsetDebugShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_probeVolumeSamplingDebugShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x66bbb30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRendererData_ProbeVolumeResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererData_ProbeVolumeResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRendererData_ProbeVolumeResources(ScriptableRendererData_ProbeVolumeResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererData_ProbeVolumeResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRendererData_ProbeVolumeResources(ScriptableRendererData_ProbeVolumeResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12711 };

  /// @brief Field probeVolumeDebugShader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___probeVolumeDebugShader;

  /// @brief Field probeVolumeFragmentationDebugShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___probeVolumeFragmentationDebugShader;

  /// @brief Field probeVolumeOffsetDebugShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___probeVolumeOffsetDebugShader;

  /// @brief Field probeVolumeSamplingDebugShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___probeVolumeSamplingDebugShader;

  /// @brief Field probeSamplingDebugMesh, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___probeSamplingDebugMesh;

  /// @brief Field probeSamplingDebugTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___probeSamplingDebugTexture;

  /// @brief Field probeVolumeBlendStatesCS, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___probeVolumeBlendStatesCS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources, ___probeVolumeDebugShader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources, ___probeVolumeFragmentationDebugShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources, ___probeVolumeOffsetDebugShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources, ___probeVolumeSamplingDebugShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources, ___probeSamplingDebugMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources, ___probeSamplingDebugTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources, ___probeVolumeBlendStatesCS) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRendererData
class CORDL_TYPE ScriptableRendererData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using DebugShaderResources = ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources;

  using ProbeVolumeResources = ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources;

  /// @brief Field <isInvalidated>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isInvalidated_k__BackingField, put = __cordl_internal_set__isInvalidated_k__BackingField)) bool _isInvalidated_k__BackingField;

  /// @brief Field debugShaders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_debugShaders, put = __cordl_internal_set_debugShaders)) ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources* debugShaders;

  __declspec(property(get = get_isInvalidated, put = set_isInvalidated)) bool isInvalidated;

  /// @brief Field m_RendererFeatureMap, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererFeatureMap, put = __cordl_internal_set_m_RendererFeatureMap)) ::System::Collections::Generic::List_1<int64_t>* m_RendererFeatureMap;

  /// @brief Field m_RendererFeatures, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RendererFeatures,
      put = __cordl_internal_set_m_RendererFeatures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* m_RendererFeatures;

  /// @brief Field m_UseNativeRenderPass, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseNativeRenderPass, put = __cordl_internal_set_m_UseNativeRenderPass)) bool m_UseNativeRenderPass;

  /// @brief Field probeVolumeResources, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeResources,
                      put = __cordl_internal_set_probeVolumeResources)) ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources* probeVolumeResources;

  __declspec(property(get = get_rendererFeatures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures;

  __declspec(property(get = get_useNativeRenderPass, put = set_useNativeRenderPass)) bool useNativeRenderPass;

  /// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();

  /// @brief Method InternalCreateRenderer, addr 0x66bba20, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* InternalCreateRenderer();

  static inline ::UnityEngine::Rendering::Universal::ScriptableRendererData* New_ctor();

  /// @brief Method OnEnable, addr 0x66bba3c, size 0xc, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x66bba30, size 0xc, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetDirty, addr 0x66bba14, size 0xc, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method TryGetRendererFeature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetRendererFeature(::ByRef<T> rendererFeature);

  constexpr bool const& __cordl_internal_get__isInvalidated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isInvalidated_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources* const& __cordl_internal_get_debugShaders() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources*& __cordl_internal_get_debugShaders();

  constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_m_RendererFeatureMap() const;

  constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_m_RendererFeatureMap();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* const& __cordl_internal_get_m_RendererFeatures() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*& __cordl_internal_get_m_RendererFeatures();

  constexpr bool const& __cordl_internal_get_m_UseNativeRenderPass() const;

  constexpr bool& __cordl_internal_get_m_UseNativeRenderPass();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources* const& __cordl_internal_get_probeVolumeResources() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources*& __cordl_internal_get_probeVolumeResources();

  constexpr void __cordl_internal_set__isInvalidated_k__BackingField(bool value);

  constexpr void __cordl_internal_set_debugShaders(::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources* value);

  constexpr void __cordl_internal_set_m_RendererFeatureMap(::System::Collections::Generic::List_1<int64_t>* value);

  constexpr void __cordl_internal_set_m_RendererFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* value);

  constexpr void __cordl_internal_set_m_UseNativeRenderPass(bool value);

  constexpr void __cordl_internal_set_probeVolumeResources(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources* value);

  /// @brief Method .ctor, addr 0x66bba60, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isInvalidated, addr 0x66bb9fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInvalidated();

  /// @brief Method get_rendererFeatures, addr 0x66bba0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* get_rendererFeatures();

  /// @brief Method get_useNativeRenderPass, addr 0x66bba48, size 0x8, virtual false, abstract: false, final false
  inline bool get_useNativeRenderPass();

  /// @brief Method set_isInvalidated, addr 0x66bba04, size 0x8, virtual false, abstract: false, final false
  inline void set_isInvalidated(bool value);

  /// @brief Method set_useNativeRenderPass, addr 0x66bba50, size 0x10, virtual false, abstract: false, final false
  inline void set_useNativeRenderPass(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRendererData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRendererData(ScriptableRendererData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRendererData(ScriptableRendererData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12712 };

  /// @brief Field debugShaders, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources* ___debugShaders;

  /// @brief Field probeVolumeResources, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources* ___probeVolumeResources;

  /// @brief Field <isInvalidated>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____isInvalidated_k__BackingField;

  /// @brief Field m_RendererFeatures, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* ___m_RendererFeatures;

  /// @brief Field m_RendererFeatureMap, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int64_t>* ___m_RendererFeatureMap;

  /// @brief Field m_UseNativeRenderPass, offset: 0x40, size: 0x1, def value: None
  bool ___m_UseNativeRenderPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ___debugShaders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ___probeVolumeResources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ____isInvalidated_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ___m_RendererFeatures) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ___m_RendererFeatureMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererData, ___m_UseNativeRenderPass) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRendererData, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRendererData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRendererData*, "UnityEngine.Rendering.Universal", "ScriptableRendererData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRendererData_DebugShaderResources*, "UnityEngine.Rendering.Universal", "ScriptableRendererData/DebugShaderResources");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRendererData_ProbeVolumeResources*, "UnityEngine.Rendering.Universal", "ScriptableRendererData/ProbeVolumeResources");
