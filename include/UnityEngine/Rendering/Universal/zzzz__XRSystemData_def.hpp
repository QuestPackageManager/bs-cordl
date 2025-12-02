#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XRSystemData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(XRSystemData)
namespace UnityEngine::Rendering::Universal {
class XRSystemData_ShaderResources;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class XRSystemData;
}
namespace UnityEngine::Rendering::Universal {
class XRSystemData_ShaderResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRSystemData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XRSystemData/ShaderResources
class CORDL_TYPE XRSystemData_ShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field xrMirrorViewPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xrMirrorViewPS, put = __cordl_internal_set_xrMirrorViewPS)) ::UnityW<::UnityEngine::Shader> xrMirrorViewPS;

  /// @brief Field xrOcclusionMeshPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xrOcclusionMeshPS, put = __cordl_internal_set_xrOcclusionMeshPS)) ::UnityW<::UnityEngine::Shader> xrOcclusionMeshPS;

  static inline ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_xrMirrorViewPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_xrMirrorViewPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_xrOcclusionMeshPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_xrOcclusionMeshPS();

  constexpr void __cordl_internal_set_xrMirrorViewPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_xrOcclusionMeshPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x66542c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSystemData_ShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSystemData_ShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSystemData_ShaderResources(XRSystemData_ShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSystemData_ShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSystemData_ShaderResources(XRSystemData_ShaderResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12710 };

  /// @brief Field xrOcclusionMeshPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___xrOcclusionMeshPS;

  /// @brief Field xrMirrorViewPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___xrMirrorViewPS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources, ___xrOcclusionMeshPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources, ___xrMirrorViewPS) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XRSystemData
class CORDL_TYPE XRSystemData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using ShaderResources = ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources;

  /// @brief Field shaders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_shaders, put = __cordl_internal_set_shaders)) ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources* shaders;

  static inline ::UnityEngine::Rendering::Universal::XRSystemData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources* const& __cordl_internal_get_shaders() const;

  constexpr ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources*& __cordl_internal_get_shaders();

  constexpr void __cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources* value);

  /// @brief Method .ctor, addr 0x66542c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSystemData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSystemData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSystemData(XRSystemData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSystemData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSystemData(XRSystemData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12711 };

  /// @brief Field shaders, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources* ___shaders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystemData, ___shaders) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRSystemData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRSystemData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRSystemData*, "UnityEngine.Rendering.Universal", "XRSystemData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRSystemData_ShaderResources*, "UnityEngine.Rendering.Universal", "XRSystemData/ShaderResources");
