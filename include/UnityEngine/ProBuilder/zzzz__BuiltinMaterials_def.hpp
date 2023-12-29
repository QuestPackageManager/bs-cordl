#pragma once
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
// Type: UnityEngine.ProBuilder::BuiltinMaterials
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10178))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12034))
// CS Name: ::UnityEngine.ProBuilder::BuiltinMaterials*
class CORDL_TYPE BuiltinMaterials : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_IsInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_IsInitialized, put = setStaticF_s_IsInitialized)) bool s_IsInitialized;

  /// @brief Field previewColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_previewColor, put = setStaticF_previewColor))::UnityEngine::Color previewColor;

  /// @brief Field s_SelectionPickerShader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SelectionPickerShader, put = setStaticF_s_SelectionPickerShader))::UnityEngine::Shader* s_SelectionPickerShader;

  /// @brief Field s_GeometryShadersSupported, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_GeometryShadersSupported, put = setStaticF_s_GeometryShadersSupported)) bool s_GeometryShadersSupported;

  /// @brief Field s_DefaultMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultMaterial, put = setStaticF_s_DefaultMaterial))::UnityEngine::Material* s_DefaultMaterial;

  /// @brief Field s_FacePickerMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FacePickerMaterial, put = setStaticF_s_FacePickerMaterial))::UnityEngine::Material* s_FacePickerMaterial;

  /// @brief Field s_VertexPickerMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VertexPickerMaterial, put = setStaticF_s_VertexPickerMaterial))::UnityEngine::Material* s_VertexPickerMaterial;

  /// @brief Field s_EdgePickerMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EdgePickerMaterial, put = setStaticF_s_EdgePickerMaterial))::UnityEngine::Material* s_EdgePickerMaterial;

  /// @brief Field s_UnityDefaultDiffuse, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UnityDefaultDiffuse, put = setStaticF_s_UnityDefaultDiffuse))::UnityEngine::Material* s_UnityDefaultDiffuse;

  /// @brief Field s_UnlitVertexColorMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UnlitVertexColorMaterial, put = setStaticF_s_UnlitVertexColorMaterial))::UnityEngine::Material* s_UnlitVertexColorMaterial;

  /// @brief Field s_ShapePreviewMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ShapePreviewMaterial, put = setStaticF_s_ShapePreviewMaterial))::UnityEngine::Material* s_ShapePreviewMaterial;

  /// @brief Field k_EdgePickerMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_EdgePickerMaterial, put = setStaticF_k_EdgePickerMaterial))::StringW k_EdgePickerMaterial;

  /// @brief Field k_FacePickerMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_FacePickerMaterial, put = setStaticF_k_FacePickerMaterial))::StringW k_FacePickerMaterial;

  /// @brief Field k_VertexPickerMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_VertexPickerMaterial, put = setStaticF_k_VertexPickerMaterial))::StringW k_VertexPickerMaterial;

  /// @brief Field k_EdgePickerShader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_EdgePickerShader, put = setStaticF_k_EdgePickerShader))::StringW k_EdgePickerShader;

  /// @brief Field k_FacePickerShader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_FacePickerShader, put = setStaticF_k_FacePickerShader))::StringW k_FacePickerShader;

  /// @brief Field k_VertexPickerShader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_VertexPickerShader, put = setStaticF_k_VertexPickerShader))::StringW k_VertexPickerShader;

  static inline void setStaticF_s_IsInitialized(bool value);

  static inline bool getStaticF_s_IsInitialized();

  static inline void setStaticF_previewColor(::UnityEngine::Color value);

  static inline ::UnityEngine::Color getStaticF_previewColor();

  static inline void setStaticF_s_SelectionPickerShader(::UnityEngine::Shader* value);

  static inline ::UnityEngine::Shader* getStaticF_s_SelectionPickerShader();

  static inline void setStaticF_s_GeometryShadersSupported(bool value);

  static inline bool getStaticF_s_GeometryShadersSupported();

  static inline void setStaticF_s_DefaultMaterial(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_s_DefaultMaterial();

  static inline void setStaticF_s_FacePickerMaterial(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_s_FacePickerMaterial();

  static inline void setStaticF_s_VertexPickerMaterial(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_s_VertexPickerMaterial();

  static inline void setStaticF_s_EdgePickerMaterial(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_s_EdgePickerMaterial();

  static inline void setStaticF_s_UnityDefaultDiffuse(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_s_UnityDefaultDiffuse();

  static inline void setStaticF_s_UnlitVertexColorMaterial(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_s_UnlitVertexColorMaterial();

  static inline void setStaticF_s_ShapePreviewMaterial(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF_s_ShapePreviewMaterial();

  static inline void setStaticF_k_EdgePickerMaterial(::StringW value);

  static inline ::StringW getStaticF_k_EdgePickerMaterial();

  static inline void setStaticF_k_FacePickerMaterial(::StringW value);

  static inline ::StringW getStaticF_k_FacePickerMaterial();

  static inline void setStaticF_k_VertexPickerMaterial(::StringW value);

  static inline ::StringW getStaticF_k_VertexPickerMaterial();

  static inline void setStaticF_k_EdgePickerShader(::StringW value);

  static inline ::StringW getStaticF_k_EdgePickerShader();

  static inline void setStaticF_k_FacePickerShader(::StringW value);

  static inline ::StringW getStaticF_k_FacePickerShader();

  static inline void setStaticF_k_VertexPickerShader(::StringW value);

  static inline ::StringW getStaticF_k_VertexPickerShader();

  /// @brief Method Init addr 0x29b8c68 size 0x6a0 virtual false final false
  static inline void Init();

  /// @brief Method get_geometryShadersSupported addr 0x29b9578 size 0x5c virtual false final false
  static inline bool get_geometryShadersSupported();

  /// @brief Method get_defaultMaterial addr 0x29b95d4 size 0x5c virtual false final false
  static inline ::UnityEngine::Material* get_defaultMaterial();

  /// @brief Method get_selectionPickerShader addr 0x29b9630 size 0x5c virtual false final false
  static inline ::UnityEngine::Shader* get_selectionPickerShader();

  /// @brief Method get_facePickerMaterial addr 0x29b968c size 0x5c virtual false final false
  static inline ::UnityEngine::Material* get_facePickerMaterial();

  /// @brief Method get_vertexPickerMaterial addr 0x29b96e8 size 0x5c virtual false final false
  static inline ::UnityEngine::Material* get_vertexPickerMaterial();

  /// @brief Method get_edgePickerMaterial addr 0x29b9744 size 0x5c virtual false final false
  static inline ::UnityEngine::Material* get_edgePickerMaterial();

  /// @brief Method get_triggerMaterial addr 0x29b97a0 size 0x108 virtual false final false
  static inline ::UnityEngine::Material* get_triggerMaterial();

  /// @brief Method get_colliderMaterial addr 0x29b98a8 size 0x108 virtual false final false
  static inline ::UnityEngine::Material* get_colliderMaterial();

  /// @brief Method get_noDrawMaterial addr 0x29b99b0 size 0x108 virtual false final false
  static inline ::UnityEngine::Material* get_noDrawMaterial();

  /// @brief Method GetLegacyDiffuse addr 0x29b9ab8 size 0x2a0 virtual false final false
  static inline ::UnityEngine::Material* GetLegacyDiffuse();

  /// @brief Method GetDefaultMaterial addr 0x29b9308 size 0x1f0 virtual false final false
  static inline ::UnityEngine::Material* GetDefaultMaterial();

  /// @brief Method get_unlitVertexColor addr 0x29b9d58 size 0x5c virtual false final false
  static inline ::UnityEngine::Material* get_unlitVertexColor();

  /// @brief Method get_ShapePreviewMaterial addr 0x29b9db4 size 0x5c virtual false final false
  static inline ::UnityEngine::Material* get_ShapePreviewMaterial();

  // Ctor Parameters [CppParam { name: "", ty: "BuiltinMaterials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuiltinMaterials(BuiltinMaterials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuiltinMaterials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuiltinMaterials(BuiltinMaterials const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuiltinMaterials();

public:
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

  /// @brief Field dotShader offset 0xffffffff size 0x8
  static constexpr ::ConstString dotShader{ u"Hidden/ProBuilder/VertexShader" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::BuiltinMaterials, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::BuiltinMaterials);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BuiltinMaterials*, "UnityEngine.ProBuilder", "BuiltinMaterials");
