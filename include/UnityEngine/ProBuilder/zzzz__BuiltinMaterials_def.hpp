#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/BuiltinMaterials.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BuiltinMaterials)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class BuiltinMaterials;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::BuiltinMaterials);
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.BuiltinMaterials
class CORDL_TYPE BuiltinMaterials : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_EdgePickerMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EdgePickerMaterial, put = setStaticF_k_EdgePickerMaterial)) ::StringW k_EdgePickerMaterial;

  /// @brief Field k_EdgePickerShader, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EdgePickerShader, put = setStaticF_k_EdgePickerShader)) ::StringW k_EdgePickerShader;

  /// @brief Field k_FacePickerMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FacePickerMaterial, put = setStaticF_k_FacePickerMaterial)) ::StringW k_FacePickerMaterial;

  /// @brief Field k_FacePickerShader, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FacePickerShader, put = setStaticF_k_FacePickerShader)) ::StringW k_FacePickerShader;

  /// @brief Field k_VertexPickerMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_VertexPickerMaterial, put = setStaticF_k_VertexPickerMaterial)) ::StringW k_VertexPickerMaterial;

  /// @brief Field k_VertexPickerShader, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_VertexPickerShader, put = setStaticF_k_VertexPickerShader)) ::StringW k_VertexPickerShader;

  /// @brief Field previewColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_previewColor, put = setStaticF_previewColor)) ::UnityEngine::Color previewColor;

  /// @brief Field s_DefaultMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultMaterial, put = setStaticF_s_DefaultMaterial)) ::UnityW<::UnityEngine::Material> s_DefaultMaterial;

  /// @brief Field s_EdgePickerMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EdgePickerMaterial, put = setStaticF_s_EdgePickerMaterial)) ::UnityW<::UnityEngine::Material> s_EdgePickerMaterial;

  /// @brief Field s_FacePickerMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FacePickerMaterial, put = setStaticF_s_FacePickerMaterial)) ::UnityW<::UnityEngine::Material> s_FacePickerMaterial;

  /// @brief Field s_GeometryShadersSupported, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_GeometryShadersSupported, put = setStaticF_s_GeometryShadersSupported)) bool s_GeometryShadersSupported;

  /// @brief Field s_IsInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_IsInitialized, put = setStaticF_s_IsInitialized)) bool s_IsInitialized;

  /// @brief Field s_SelectionPickerShader, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SelectionPickerShader, put = setStaticF_s_SelectionPickerShader)) ::UnityW<::UnityEngine::Shader> s_SelectionPickerShader;

  /// @brief Field s_ShapePreviewMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ShapePreviewMaterial, put = setStaticF_s_ShapePreviewMaterial)) ::UnityW<::UnityEngine::Material> s_ShapePreviewMaterial;

  /// @brief Field s_UnityDefaultDiffuse, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UnityDefaultDiffuse, put = setStaticF_s_UnityDefaultDiffuse)) ::UnityW<::UnityEngine::Material> s_UnityDefaultDiffuse;

  /// @brief Field s_UnlitVertexColorMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UnlitVertexColorMaterial, put = setStaticF_s_UnlitVertexColorMaterial)) ::UnityW<::UnityEngine::Material> s_UnlitVertexColorMaterial;

  /// @brief Field s_VertexPickerMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VertexPickerMaterial, put = setStaticF_s_VertexPickerMaterial)) ::UnityW<::UnityEngine::Material> s_VertexPickerMaterial;

  /// @brief Method GetDefaultMaterial, addr 0x4703974, size 0x1f0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial();

  /// @brief Method GetLegacyDiffuse, addr 0x4704124, size 0x2a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetLegacyDiffuse();

  /// @brief Method Init, addr 0x47032c4, size 0x6b0, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::StringW getStaticF_k_EdgePickerMaterial();

  static inline ::StringW getStaticF_k_EdgePickerShader();

  static inline ::StringW getStaticF_k_FacePickerMaterial();

  static inline ::StringW getStaticF_k_FacePickerShader();

  static inline ::StringW getStaticF_k_VertexPickerMaterial();

  static inline ::StringW getStaticF_k_VertexPickerShader();

  static inline ::UnityEngine::Color getStaticF_previewColor();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_DefaultMaterial();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_EdgePickerMaterial();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_FacePickerMaterial();

  static inline bool getStaticF_s_GeometryShadersSupported();

  static inline bool getStaticF_s_IsInitialized();

  static inline ::UnityW<::UnityEngine::Shader> getStaticF_s_SelectionPickerShader();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_ShapePreviewMaterial();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_UnityDefaultDiffuse();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_UnlitVertexColorMaterial();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_VertexPickerMaterial();

  /// @brief Method get_ShapePreviewMaterial, addr 0x4704420, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_ShapePreviewMaterial();

  /// @brief Method get_colliderMaterial, addr 0x4703f14, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_colliderMaterial();

  /// @brief Method get_defaultMaterial, addr 0x4703c40, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_edgePickerMaterial, addr 0x4703db0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_edgePickerMaterial();

  /// @brief Method get_facePickerMaterial, addr 0x4703cf8, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_facePickerMaterial();

  /// @brief Method get_geometryShadersSupported, addr 0x4703be4, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_geometryShadersSupported();

  /// @brief Method get_noDrawMaterial, addr 0x470401c, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_noDrawMaterial();

  /// @brief Method get_selectionPickerShader, addr 0x4703c9c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> get_selectionPickerShader();

  /// @brief Method get_triggerMaterial, addr 0x4703e0c, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_triggerMaterial();

  /// @brief Method get_unlitVertexColor, addr 0x47043c4, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_unlitVertexColor();

  /// @brief Method get_vertexPickerMaterial, addr 0x4703d54, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_vertexPickerMaterial();

  static inline void setStaticF_k_EdgePickerMaterial(::StringW value);

  static inline void setStaticF_k_EdgePickerShader(::StringW value);

  static inline void setStaticF_k_FacePickerMaterial(::StringW value);

  static inline void setStaticF_k_FacePickerShader(::StringW value);

  static inline void setStaticF_k_VertexPickerMaterial(::StringW value);

  static inline void setStaticF_k_VertexPickerShader(::StringW value);

  static inline void setStaticF_previewColor(::UnityEngine::Color value);

  static inline void setStaticF_s_DefaultMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_EdgePickerMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_FacePickerMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_GeometryShadersSupported(bool value);

  static inline void setStaticF_s_IsInitialized(bool value);

  static inline void setStaticF_s_SelectionPickerShader(::UnityW<::UnityEngine::Shader> value);

  static inline void setStaticF_s_ShapePreviewMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_UnityDefaultDiffuse(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_UnlitVertexColorMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_VertexPickerMaterial(::UnityW<::UnityEngine::Material> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuiltinMaterials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BuiltinMaterials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuiltinMaterials(BuiltinMaterials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuiltinMaterials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuiltinMaterials(BuiltinMaterials const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14224 };

  /// @brief Field dotShader offset 0xffffffff size 0x8
  static constexpr ::ConstString dotShader{ u"Hidden/ProBuilder/VertexShader" };

  /// @brief Field faceShader offset 0xffffffff size 0x8
  static constexpr ::ConstString faceShader{ u"Hidden/ProBuilder/FaceHighlight" };

  /// @brief Field lineShader offset 0xffffffff size 0x8
  static constexpr ::ConstString lineShader{ u"Hidden/ProBuilder/LineBillboard" };

  /// @brief Field lineShaderMetal offset 0xffffffff size 0x8
  static constexpr ::ConstString lineShaderMetal{ u"Hidden/ProBuilder/LineBillboardMetal" };

  /// @brief Field pointShader offset 0xffffffff size 0x8
  static constexpr ::ConstString pointShader{ u"Hidden/ProBuilder/PointBillboard" };

  /// @brief Field wireShader offset 0xffffffff size 0x8
  static constexpr ::ConstString wireShader{ u"Hidden/ProBuilder/FaceHighlight" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::BuiltinMaterials, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::BuiltinMaterials);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BuiltinMaterials*, "UnityEngine.ProBuilder", "BuiltinMaterials");
