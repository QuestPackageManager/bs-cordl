#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VFXRuntimeResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(VFXRuntimeResources)
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXRuntimeResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VFXRuntimeResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXRuntimeResources*, "UnityEngine.VFX", "VFXRuntimeResources");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXRuntimeResources
class CORDL_TYPE VFXRuntimeResources : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_SDFNormalsCS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SDFNormalsCS, put = __cordl_internal_set_m_SDFNormalsCS)) ::UnityW<::UnityEngine::ComputeShader> m_SDFNormalsCS;

  /// @brief Field m_SDFRayMapCS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SDFRayMapCS, put = __cordl_internal_set_m_SDFRayMapCS)) ::UnityW<::UnityEngine::ComputeShader> m_SDFRayMapCS;

  /// @brief Field m_SDFRayMapShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SDFRayMapShader, put = __cordl_internal_set_m_SDFRayMapShader)) ::UnityW<::UnityEngine::Shader> m_SDFRayMapShader;

  __declspec(property(get = get_sdfNormalsCS, put = set_sdfNormalsCS)) ::UnityW<::UnityEngine::ComputeShader> sdfNormalsCS;

  __declspec(property(get = get_sdfRayMapCS, put = set_sdfRayMapCS)) ::UnityW<::UnityEngine::ComputeShader> sdfRayMapCS;

  __declspec(property(get = get_sdfRayMapShader, put = set_sdfRayMapShader)) ::UnityW<::UnityEngine::Shader> sdfRayMapShader;

  static inline ::UnityEngine::VFX::VFXRuntimeResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_SDFNormalsCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_SDFNormalsCS();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_SDFRayMapCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_SDFRayMapCS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_SDFRayMapShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_SDFRayMapShader();

  constexpr void __cordl_internal_set_m_SDFNormalsCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_SDFRayMapCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_SDFRayMapShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x69d82b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_runtimeResources, addr 0x69d820c, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::VFX::VFXRuntimeResources> get_runtimeResources();

  /// @brief Method get_sdfNormalsCS, addr 0x69d81ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_sdfNormalsCS();

  /// @brief Method get_sdfRayMapCS, addr 0x69d81dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_sdfRayMapCS();

  /// @brief Method get_sdfRayMapShader, addr 0x69d81fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_sdfRayMapShader();

  /// @brief Method set_sdfNormalsCS, addr 0x69d81f4, size 0x8, virtual false, abstract: false, final false
  inline void set_sdfNormalsCS(::UnityEngine::ComputeShader* value);

  /// @brief Method set_sdfRayMapCS, addr 0x69d81e4, size 0x8, virtual false, abstract: false, final false
  inline void set_sdfRayMapCS(::UnityEngine::ComputeShader* value);

  /// @brief Method set_sdfRayMapShader, addr 0x69d8204, size 0x8, virtual false, abstract: false, final false
  inline void set_sdfRayMapShader(::UnityEngine::Shader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXRuntimeResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXRuntimeResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXRuntimeResources(VFXRuntimeResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXRuntimeResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXRuntimeResources(VFXRuntimeResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19971 };

  /// @brief Field m_SDFRayMapCS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_SDFRayMapCS;

  /// @brief Field m_SDFNormalsCS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_SDFNormalsCS;

  /// @brief Field m_SDFRayMapShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_SDFRayMapShader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXRuntimeResources, ___m_SDFRayMapCS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXRuntimeResources, ___m_SDFNormalsCS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXRuntimeResources, ___m_SDFRayMapShader) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXRuntimeResources) == 0x30, "Size mismatch!");

} // namespace UnityEngine::VFX
