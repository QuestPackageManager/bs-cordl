#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Shaders.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Shaders)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Shaders;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Shaders);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Shaders
class CORDL_TYPE Shaders : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_AtlasBlit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AtlasBlit, put = setStaticF_k_AtlasBlit)) ::StringW k_AtlasBlit;

  /// @brief Field k_ColorConversionBlit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ColorConversionBlit, put = setStaticF_k_ColorConversionBlit)) ::StringW k_ColorConversionBlit;

  /// @brief Field k_Editor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_Editor, put = setStaticF_k_Editor)) ::StringW k_Editor;

  /// @brief Field k_ForceGammaKeyword, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ForceGammaKeyword, put = setStaticF_k_ForceGammaKeyword)) ::StringW k_ForceGammaKeyword;

  /// @brief Field k_Runtime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_Runtime, put = setStaticF_k_Runtime)) ::StringW k_Runtime;

  /// @brief Field k_RuntimeWorld, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_RuntimeWorld, put = setStaticF_k_RuntimeWorld)) ::StringW k_RuntimeWorld;

  /// @brief Field s_EditorMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EditorMaterial, put = setStaticF_s_EditorMaterial)) ::UnityW<::UnityEngine::Material> s_EditorMaterial;

  /// @brief Field s_RefCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_RefCount, put = setStaticF_s_RefCount)) int32_t s_RefCount;

  /// @brief Field s_RuntimeMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RuntimeMaterial, put = setStaticF_s_RuntimeMaterial)) ::UnityW<::UnityEngine::Material> s_RuntimeMaterial;

  /// @brief Field s_RuntimeWorldMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RuntimeWorldMaterial, put = setStaticF_s_RuntimeWorldMaterial)) ::UnityW<::UnityEngine::Material> s_RuntimeWorldMaterial;

  /// @brief Method Acquire, addr 0x6b25de4, size 0x64, virtual false, abstract: false, final false
  static inline void Acquire();

  /// @brief Method GetOrCreateMaterial, addr 0x6b25b9c, size 0x188, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetOrCreateMaterial(::ByRef<::UnityEngine::Material*> material, ::StringW shaderName);

  /// @brief Method Release, addr 0x6b25e48, size 0x154, virtual false, abstract: false, final false
  static inline void Release();

  static inline ::StringW getStaticF_k_AtlasBlit();

  static inline ::StringW getStaticF_k_ColorConversionBlit();

  static inline ::StringW getStaticF_k_Editor();

  static inline ::StringW getStaticF_k_ForceGammaKeyword();

  static inline ::StringW getStaticF_k_Runtime();

  static inline ::StringW getStaticF_k_RuntimeWorld();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_EditorMaterial();

  static inline int32_t getStaticF_s_RefCount();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_RuntimeMaterial();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_RuntimeWorldMaterial();

  /// @brief Method get_editorMaterial, addr 0x6b25d84, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_editorMaterial();

  /// @brief Method get_runtimeMaterial, addr 0x6b25b3c, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_runtimeMaterial();

  /// @brief Method get_runtimeWorldMaterial, addr 0x6b25d24, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_runtimeWorldMaterial();

  static inline void setStaticF_k_AtlasBlit(::StringW value);

  static inline void setStaticF_k_ColorConversionBlit(::StringW value);

  static inline void setStaticF_k_Editor(::StringW value);

  static inline void setStaticF_k_ForceGammaKeyword(::StringW value);

  static inline void setStaticF_k_Runtime(::StringW value);

  static inline void setStaticF_k_RuntimeWorld(::StringW value);

  static inline void setStaticF_s_EditorMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_RefCount(int32_t value);

  static inline void setStaticF_s_RuntimeMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_RuntimeWorldMaterial(::UnityW<::UnityEngine::Material> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Shaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Shaders(Shaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Shaders(Shaders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5346 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Shaders, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Shaders);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Shaders*, "UnityEngine.UIElements.UIR", "Shaders");
