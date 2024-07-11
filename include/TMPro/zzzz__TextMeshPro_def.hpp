#pragma once
// IWYU pragma private; include "TMPro/TextMeshPro.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__MaskingTypes_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextMeshPro)
namespace System {
template <typename T> class Action_1;
}
namespace TMPro {
struct MaskingTypes;
}
namespace TMPro {
class TMP_SubMesh;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
namespace TMPro {
class TextContainer;
}
namespace TMPro {
struct __TMP_Text__UnicodeChar;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace TMPro {
class TextMeshPro;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TextMeshPro);
// Type: TMPro::TextMeshPro
// SizeInfo { instance_size: 1888, native_size: -1, calculated_instance_size: 1888, calculated_native_size: 1881, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TextMeshPro*
class CORDL_TYPE TextMeshPro : public ::TMPro::TMP_Text {
public:
  // Declarations
  /// @brief Field OnPreRenderText, offset 0x6d0, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreRenderText, put = __cordl_internal_set_OnPreRenderText))::System::Action_1<::TMPro::TMP_TextInfo*>* OnPreRenderText;

  /// @brief Field _SortingLayer, offset 0x6c0, size 0x4
  __declspec(property(get = __cordl_internal_get__SortingLayer, put = __cordl_internal_set__SortingLayer)) int32_t _SortingLayer;

  /// @brief Field _SortingLayerID, offset 0x6c4, size 0x4
  __declspec(property(get = __cordl_internal_get__SortingLayerID, put = __cordl_internal_set__SortingLayerID)) int32_t _SortingLayerID;

  /// @brief Field _SortingOrder, offset 0x6c8, size 0x4
  __declspec(property(get = __cordl_internal_get__SortingOrder, put = __cordl_internal_set__SortingOrder)) int32_t _SortingOrder;

  __declspec(property(get = get_autoSizeTextContainer, put = set_autoSizeTextContainer)) bool autoSizeTextContainer;

  /// @brief Field k_CalculateVerticesPositionMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CalculateVerticesPositionMarker,
                             put = setStaticF_k_CalculateVerticesPositionMarker))::Unity::Profiling::ProfilerMarker k_CalculateVerticesPositionMarker;

  /// @brief Field k_CharacterLookupMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CharacterLookupMarker, put = setStaticF_k_CharacterLookupMarker))::Unity::Profiling::ProfilerMarker k_CharacterLookupMarker;

  /// @brief Field k_ComputeCharacterAdvanceMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ComputeCharacterAdvanceMarker, put = setStaticF_k_ComputeCharacterAdvanceMarker))::Unity::Profiling::ProfilerMarker k_ComputeCharacterAdvanceMarker;

  /// @brief Field k_ComputeTextMetricsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ComputeTextMetricsMarker, put = setStaticF_k_ComputeTextMetricsMarker))::Unity::Profiling::ProfilerMarker k_ComputeTextMetricsMarker;

  /// @brief Field k_GenerateTextMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextMarker, put = setStaticF_k_GenerateTextMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextMarker;

  /// @brief Field k_GenerateTextPhaseIIIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextPhaseIIIMarker, put = setStaticF_k_GenerateTextPhaseIIIMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIIMarker;

  /// @brief Field k_GenerateTextPhaseIIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextPhaseIIMarker, put = setStaticF_k_GenerateTextPhaseIIMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIMarker;

  /// @brief Field k_GenerateTextPhaseIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextPhaseIMarker, put = setStaticF_k_GenerateTextPhaseIMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIMarker;

  /// @brief Field k_HandleCarriageReturnMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleCarriageReturnMarker, put = setStaticF_k_HandleCarriageReturnMarker))::Unity::Profiling::ProfilerMarker k_HandleCarriageReturnMarker;

  /// @brief Field k_HandleGPOSFeaturesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleGPOSFeaturesMarker, put = setStaticF_k_HandleGPOSFeaturesMarker))::Unity::Profiling::ProfilerMarker k_HandleGPOSFeaturesMarker;

  /// @brief Field k_HandleHorizontalLineBreakingMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleHorizontalLineBreakingMarker,
                             put = setStaticF_k_HandleHorizontalLineBreakingMarker))::Unity::Profiling::ProfilerMarker k_HandleHorizontalLineBreakingMarker;

  /// @brief Field k_HandleLineTerminationMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleLineTerminationMarker, put = setStaticF_k_HandleLineTerminationMarker))::Unity::Profiling::ProfilerMarker k_HandleLineTerminationMarker;

  /// @brief Field k_HandleVerticalLineBreakingMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleVerticalLineBreakingMarker,
                             put = setStaticF_k_HandleVerticalLineBreakingMarker))::Unity::Profiling::ProfilerMarker k_HandleVerticalLineBreakingMarker;

  /// @brief Field k_HandleVisibleCharacterMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleVisibleCharacterMarker, put = setStaticF_k_HandleVisibleCharacterMarker))::Unity::Profiling::ProfilerMarker k_HandleVisibleCharacterMarker;

  /// @brief Field k_HandleWhiteSpacesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleWhiteSpacesMarker, put = setStaticF_k_HandleWhiteSpacesMarker))::Unity::Profiling::ProfilerMarker k_HandleWhiteSpacesMarker;

  /// @brief Field k_ParseMarkupTextMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ParseMarkupTextMarker, put = setStaticF_k_ParseMarkupTextMarker))::Unity::Profiling::ProfilerMarker k_ParseMarkupTextMarker;

  /// @brief Field k_SaveGlyphVertexDataMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SaveGlyphVertexDataMarker, put = setStaticF_k_SaveGlyphVertexDataMarker))::Unity::Profiling::ProfilerMarker k_SaveGlyphVertexDataMarker;

  /// @brief Field k_SavePageInfoMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SavePageInfoMarker, put = setStaticF_k_SavePageInfoMarker))::Unity::Profiling::ProfilerMarker k_SavePageInfoMarker;

  /// @brief Field k_SaveProcessingStatesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SaveProcessingStatesMarker, put = setStaticF_k_SaveProcessingStatesMarker))::Unity::Profiling::ProfilerMarker k_SaveProcessingStatesMarker;

  /// @brief Field k_SetArraySizesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SetArraySizesMarker, put = setStaticF_k_SetArraySizesMarker))::Unity::Profiling::ProfilerMarker k_SetArraySizesMarker;

  /// @brief Field m_EnvMapMatrix, offset 0x70c, size 0x40
  __declspec(property(get = __cordl_internal_get_m_EnvMapMatrix, put = __cordl_internal_set_m_EnvMapMatrix))::UnityEngine::Matrix4x4 m_EnvMapMatrix;

  /// @brief Field m_RectTransformCorners, offset 0x750, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransformCorners,
                      put = __cordl_internal_set_m_RectTransformCorners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_RectTransformCorners;

  /// @brief Field m_currentAutoSizeMode, offset 0x6d8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_currentAutoSizeMode, put = __cordl_internal_set_m_currentAutoSizeMode)) bool m_currentAutoSizeMode;

  /// @brief Field m_hasFontAssetChanged, offset 0x6d9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasFontAssetChanged, put = __cordl_internal_set_m_hasFontAssetChanged)) bool m_hasFontAssetChanged;

  /// @brief Field m_isFirstAllocation, offset 0x6f0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isFirstAllocation, put = __cordl_internal_set_m_isFirstAllocation)) bool m_isFirstAllocation;

  /// @brief Field m_isRegisteredForEvents, offset 0x758, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isRegisteredForEvents, put = __cordl_internal_set_m_isRegisteredForEvents)) bool m_isRegisteredForEvents;

  /// @brief Field m_maskType, offset 0x708, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maskType, put = __cordl_internal_set_m_maskType))::TMPro::MaskingTypes m_maskType;

  /// @brief Field m_max_characters, offset 0x6f4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_max_characters, put = __cordl_internal_set_m_max_characters)) int32_t m_max_characters;

  /// @brief Field m_max_numberOfLines, offset 0x6f8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_max_numberOfLines, put = __cordl_internal_set_m_max_numberOfLines)) int32_t m_max_numberOfLines;

  /// @brief Field m_meshFilter, offset 0x6e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_meshFilter, put = __cordl_internal_set_m_meshFilter))::UnityW<::UnityEngine::MeshFilter> m_meshFilter;

  /// @brief Field m_previousLossyScaleY, offset 0x6dc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_previousLossyScaleY, put = __cordl_internal_set_m_previousLossyScaleY)) float_t m_previousLossyScaleY;

  /// @brief Field m_renderer, offset 0x6e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_renderer, put = __cordl_internal_set_m_renderer))::UnityW<::UnityEngine::Renderer> m_renderer;

  /// @brief Field m_subTextObjects, offset 0x700, size 0x8
  __declspec(property(get = __cordl_internal_get_m_subTextObjects,
                      put = __cordl_internal_set_m_subTextObjects))::ArrayW<::UnityW<::TMPro::TMP_SubMesh>, ::Array<::UnityW<::TMPro::TMP_SubMesh>>*> m_subTextObjects;

  __declspec(property(get = get_maskType, put = set_maskType))::TMPro::MaskingTypes maskType;

  __declspec(property(get = get_mesh))::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_meshFilter))::UnityW<::UnityEngine::MeshFilter> meshFilter;

  __declspec(property(get = get_renderer))::UnityW<::UnityEngine::Renderer> renderer;

  __declspec(property(get = get_sortingLayerID, put = set_sortingLayerID)) int32_t sortingLayerID;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) int32_t sortingOrder;

  __declspec(property(get = get_textContainer))::UnityW<::TMPro::TextContainer> textContainer;

  __declspec(property(get = get_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Method Awake, addr 0x335fd58, size 0x3a8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x335fd50, size 0x4, virtual true, abstract: false, final true
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x335fd54, size 0x4, virtual true, abstract: false, final true
  inline void CalculateLayoutInputVertical();

  /// @brief Method ClearMesh, addr 0x335f7d0, size 0xc0, virtual true, abstract: false, final false
  inline void ClearMesh(bool updateMesh);

  /// @brief Method ComputeMarginSize, addr 0x33639d8, size 0x124, virtual true, abstract: false, final false
  inline void ComputeMarginSize();

  /// @brief Method CreateMaterialInstance, addr 0x3360ecc, size 0xc4, virtual false, abstract: false, final false
  inline void CreateMaterialInstance();

  /// @brief Method DestroySubMeshObjects, addr 0x3364374, size 0xdc, virtual true, abstract: false, final false
  inline void DestroySubMeshObjects();

  /// @brief Method DisableMasking, addr 0x3360dd8, size 0xf4, virtual false, abstract: false, final false
  inline void DisableMasking();

  /// @brief Method EnableMasking, addr 0x3360c60, size 0xf8, virtual false, abstract: false, final false
  inline void EnableMasking();

  /// @brief Method ForceMeshUpdate, addr 0x335f750, size 0x14, virtual true, abstract: false, final false
  inline void ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing);

  /// @brief Method GenerateTextMesh, addr 0x334d31c, size 0x7878, virtual true, abstract: false, final false
  inline void GenerateTextMesh();

  /// @brief Method GetCompoundBounds, addr 0x3364450, size 0x248, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds GetCompoundBounds();

  /// @brief Method GetMaterial, addr 0x3360f90, size 0x110, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetMaterials, addr 0x33610a0, size 0x1a8, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> mats);

  /// @brief Method GetSharedMaterials, addr 0x3361280, size 0x190, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetSharedMaterials();

  /// @brief Method GetTextContainerLocalCorners, addr 0x3364010, size 0x9c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetTextContainerLocalCorners();

  /// @brief Method GetTextInfo, addr 0x335f764, size 0x6c, virtual true, abstract: false, final false
  inline ::TMPro::TMP_TextInfo* GetTextInfo(::StringW text);

  /// @brief Method InternalUpdate, addr 0x3363cc4, size 0x9c, virtual true, abstract: false, final false
  inline void InternalUpdate();

  /// @brief Method LoadFontAsset, addr 0x3360374, size 0x670, virtual true, abstract: false, final false
  inline void LoadFontAsset();

  static inline ::TMPro::TextMeshPro* New_ctor();

  /// @brief Method OnDestroy, addr 0x33602a8, size 0xcc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x3363afc, size 0x1c, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x33601fc, size 0xac, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3360100, size 0xfc, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPreRenderObject, addr 0x335f2c0, size 0x25c, virtual false, abstract: false, final false
  inline void OnPreRenderObject();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x3363b48, size 0x17c, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnTransformParentChanged, addr 0x3363b18, size 0x30, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method Rebuild, addr 0x335f1d8, size 0xe8, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method SetActiveSubMeshes, addr 0x336426c, size 0x108, virtual true, abstract: false, final false
  inline void SetActiveSubMeshes(bool state);

  /// @brief Method SetActiveSubTextObjectRenderers, addr 0x3363ee4, size 0x12c, virtual false, abstract: false, final false
  inline void SetActiveSubTextObjectRenderers(bool state);

  /// @brief Method SetAllDirty, addr 0x335f194, size 0x44, virtual true, abstract: false, final false
  inline void SetAllDirty();

  /// @brief Method SetArraySizes, addr 0x3361f08, size 0x1ad0, virtual true, abstract: false, final false
  inline int32_t SetArraySizes(::ArrayW<::TMPro::__TMP_Text__UnicodeChar, ::Array<::TMPro::__TMP_Text__UnicodeChar>*> unicodeChars);

  /// @brief Method SetCulling, addr 0x3361bdc, size 0x2a8, virtual true, abstract: false, final false
  inline void SetCulling();

  /// @brief Method SetFaceColor, addr 0x33618a4, size 0x128, virtual true, abstract: false, final false
  inline void SetFaceColor(::UnityEngine::Color32 color);

  /// @brief Method SetLayoutDirty, addr 0x335f0b4, size 0xd0, virtual true, abstract: false, final false
  inline void SetLayoutDirty();

  /// @brief Method SetMask, addr 0x335ec84, size 0x148, virtual false, abstract: false, final false
  inline void SetMask(::TMPro::MaskingTypes maskType);

  /// @brief Method SetMask, addr 0x335edcc, size 0x48, virtual false, abstract: false, final false
  inline void SetMask(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords);

  /// @brief Method SetMask, addr 0x335eeb4, size 0x60, virtual false, abstract: false, final false
  inline void SetMask(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords, float_t softnessX, float_t softnessY);

  /// @brief Method SetMaskCoordinates, addr 0x335ee14, size 0xa0, virtual false, abstract: false, final false
  inline void SetMaskCoordinates(::UnityEngine::Vector4 coords);

  /// @brief Method SetMaskCoordinates, addr 0x335ef14, size 0xf0, virtual false, abstract: false, final false
  inline void SetMaskCoordinates(::UnityEngine::Vector4 coords, float_t softX, float_t softY);

  /// @brief Method SetMaterialDirty, addr 0x335f184, size 0x10, virtual true, abstract: false, final false
  inline void SetMaterialDirty();

  /// @brief Method SetMeshFilters, addr 0x33640ac, size 0x1c0, virtual false, abstract: false, final false
  inline void SetMeshFilters(bool state);

  /// @brief Method SetOutlineColor, addr 0x33619cc, size 0x128, virtual true, abstract: false, final false
  inline void SetOutlineColor(::UnityEngine::Color32 color);

  /// @brief Method SetOutlineThickness, addr 0x3361778, size 0x12c, virtual true, abstract: false, final false
  inline void SetOutlineThickness(float_t thickness);

  /// @brief Method SetPerspectiveCorrection, addr 0x3361e84, size 0x84, virtual false, abstract: false, final false
  inline void SetPerspectiveCorrection();

  /// @brief Method SetShaderDepth, addr 0x3361af4, size 0xe8, virtual true, abstract: false, final false
  inline void SetShaderDepth();

  /// @brief Method SetSharedMaterial, addr 0x3361248, size 0x38, virtual true, abstract: false, final false
  inline void SetSharedMaterial(::UnityEngine::Material* mat);

  /// @brief Method SetSharedMaterials, addr 0x3361410, size 0x368, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials);

  /// @brief Method SetVerticesDirty, addr 0x335f004, size 0xb0, virtual true, abstract: false, final false
  inline void SetVerticesDirty();

  /// @brief Method UpdateEnvMapMatrix, addr 0x33609e4, size 0x27c, virtual false, abstract: false, final false
  inline void UpdateEnvMapMatrix();

  /// @brief Method UpdateFontAsset, addr 0x335fd40, size 0x10, virtual false, abstract: false, final false
  inline void UpdateFontAsset();

  /// @brief Method UpdateGeometry, addr 0x335f9f8, size 0x18, virtual true, abstract: false, final false
  inline void UpdateGeometry(::UnityEngine::Mesh* mesh, int32_t index);

  /// @brief Method UpdateMask, addr 0x3360d58, size 0x80, virtual false, abstract: false, final false
  inline void UpdateMask();

  /// @brief Method UpdateMaterial, addr 0x335f51c, size 0x134, virtual true, abstract: false, final false
  inline void UpdateMaterial();

  /// @brief Method UpdateMeshPadding, addr 0x335f650, size 0x100, virtual true, abstract: false, final false
  inline void UpdateMeshPadding();

  /// @brief Method UpdateSDFScale, addr 0x3363d60, size 0x184, virtual false, abstract: false, final false
  inline void UpdateSDFScale(float_t scaleDelta);

  /// @brief Method UpdateSubMeshSortingLayerID, addr 0x335e624, size 0x10c, virtual false, abstract: false, final false
  inline void UpdateSubMeshSortingLayerID(int32_t id);

  /// @brief Method UpdateSubMeshSortingOrder, addr 0x335e878, size 0x10c, virtual false, abstract: false, final false
  inline void UpdateSubMeshSortingOrder(int32_t order);

  /// @brief Method UpdateVertexData, addr 0x335fba8, size 0x198, virtual true, abstract: false, final false
  inline void UpdateVertexData();

  /// @brief Method UpdateVertexData, addr 0x335fa10, size 0x198, virtual true, abstract: false, final false
  inline void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags flags);

  constexpr ::System::Action_1<::TMPro::TMP_TextInfo*>*& __cordl_internal_get_OnPreRenderText();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::TMPro::TMP_TextInfo*>*> const& __cordl_internal_get_OnPreRenderText() const;

  constexpr int32_t const& __cordl_internal_get__SortingLayer() const;

  constexpr int32_t& __cordl_internal_get__SortingLayer();

  constexpr int32_t const& __cordl_internal_get__SortingLayerID() const;

  constexpr int32_t& __cordl_internal_get__SortingLayerID();

  constexpr int32_t const& __cordl_internal_get__SortingOrder() const;

  constexpr int32_t& __cordl_internal_get__SortingOrder();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_EnvMapMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_EnvMapMatrix();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_RectTransformCorners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_RectTransformCorners();

  constexpr bool const& __cordl_internal_get_m_currentAutoSizeMode() const;

  constexpr bool& __cordl_internal_get_m_currentAutoSizeMode();

  constexpr bool const& __cordl_internal_get_m_hasFontAssetChanged() const;

  constexpr bool& __cordl_internal_get_m_hasFontAssetChanged();

  constexpr bool const& __cordl_internal_get_m_isFirstAllocation() const;

  constexpr bool& __cordl_internal_get_m_isFirstAllocation();

  constexpr bool const& __cordl_internal_get_m_isRegisteredForEvents() const;

  constexpr bool& __cordl_internal_get_m_isRegisteredForEvents();

  constexpr ::TMPro::MaskingTypes const& __cordl_internal_get_m_maskType() const;

  constexpr ::TMPro::MaskingTypes& __cordl_internal_get_m_maskType();

  constexpr int32_t const& __cordl_internal_get_m_max_characters() const;

  constexpr int32_t& __cordl_internal_get_m_max_characters();

  constexpr int32_t const& __cordl_internal_get_m_max_numberOfLines() const;

  constexpr int32_t& __cordl_internal_get_m_max_numberOfLines();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_m_meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_m_meshFilter();

  constexpr float_t const& __cordl_internal_get_m_previousLossyScaleY() const;

  constexpr float_t& __cordl_internal_get_m_previousLossyScaleY();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_m_renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_m_renderer();

  constexpr ::ArrayW<::UnityW<::TMPro::TMP_SubMesh>, ::Array<::UnityW<::TMPro::TMP_SubMesh>>*> const& __cordl_internal_get_m_subTextObjects() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TMP_SubMesh>, ::Array<::UnityW<::TMPro::TMP_SubMesh>>*>& __cordl_internal_get_m_subTextObjects();

  constexpr void __cordl_internal_set_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  constexpr void __cordl_internal_set__SortingLayer(int32_t value);

  constexpr void __cordl_internal_set__SortingLayerID(int32_t value);

  constexpr void __cordl_internal_set__SortingOrder(int32_t value);

  constexpr void __cordl_internal_set_m_EnvMapMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_currentAutoSizeMode(bool value);

  constexpr void __cordl_internal_set_m_hasFontAssetChanged(bool value);

  constexpr void __cordl_internal_set_m_isFirstAllocation(bool value);

  constexpr void __cordl_internal_set_m_isRegisteredForEvents(bool value);

  constexpr void __cordl_internal_set_m_maskType(::TMPro::MaskingTypes value);

  constexpr void __cordl_internal_set_m_max_characters(int32_t value);

  constexpr void __cordl_internal_set_m_max_numberOfLines(int32_t value);

  constexpr void __cordl_internal_set_m_meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set_m_previousLossyScaleY(float_t value);

  constexpr void __cordl_internal_set_m_renderer(::UnityW<::UnityEngine::Renderer> value);

  constexpr void __cordl_internal_set_m_subTextObjects(::ArrayW<::UnityW<::TMPro::TMP_SubMesh>, ::Array<::UnityW<::TMPro::TMP_SubMesh>>*> value);

  /// @brief Method .ctor, addr 0x3364698, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnPreRenderText, addr 0x335f890, size 0xb4, virtual true, abstract: false, final false
  inline void add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CalculateVerticesPositionMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CharacterLookupMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeCharacterAdvanceMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeTextMetricsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIIIMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIIMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleCarriageReturnMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleGPOSFeaturesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleHorizontalLineBreakingMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleLineTerminationMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleVerticalLineBreakingMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleVisibleCharacterMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleWhiteSpacesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ParseMarkupTextMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SaveGlyphVertexDataMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SavePageInfoMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SaveProcessingStatesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SetArraySizesMarker();

  /// @brief Method get_autoSizeTextContainer, addr 0x335e984, size 0x8, virtual true, abstract: false, final false
  inline bool get_autoSizeTextContainer();

  /// @brief Method get_maskType, addr 0x335ec74, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::MaskingTypes get_maskType();

  /// @brief Method get_mesh, addr 0x335eac8, size 0xb0, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_meshFilter, addr 0x335eb78, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshFilter> get_meshFilter();

  /// @brief Method get_renderer, addr 0x335e4dc, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

  /// @brief Method get_sortingLayerID, addr 0x335e448, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_sortingLayerID();

  /// @brief Method get_sortingOrder, addr 0x335e730, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

  /// @brief Method get_textContainer, addr 0x335ea2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TextContainer> get_textContainer();

  /// @brief Method get_transform, addr 0x335ea34, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  /// @brief Method remove_OnPreRenderText, addr 0x335f944, size 0xb4, virtual true, abstract: false, final false
  inline void remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  static inline void setStaticF_k_CalculateVerticesPositionMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_CharacterLookupMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ComputeCharacterAdvanceMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ComputeTextMetricsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateTextMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateTextPhaseIIIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateTextPhaseIIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateTextPhaseIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleCarriageReturnMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleGPOSFeaturesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleHorizontalLineBreakingMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleLineTerminationMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleVerticalLineBreakingMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleVisibleCharacterMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_HandleWhiteSpacesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ParseMarkupTextMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SaveGlyphVertexDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SavePageInfoMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SaveProcessingStatesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SetArraySizesMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_autoSizeTextContainer, addr 0x335e98c, size 0xa0, virtual true, abstract: false, final false
  inline void set_autoSizeTextContainer(bool value);

  /// @brief Method set_maskType, addr 0x335ec7c, size 0x8, virtual false, abstract: false, final false
  inline void set_maskType(::TMPro::MaskingTypes value);

  /// @brief Method set_sortingLayerID, addr 0x335e570, size 0xb4, virtual false, abstract: false, final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method set_sortingOrder, addr 0x335e7c4, size 0xb4, virtual false, abstract: false, final false
  inline void set_sortingOrder(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextMeshPro();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextMeshPro", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextMeshPro(TextMeshPro&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshPro", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextMeshPro(TextMeshPro const&) = delete;

  /// @brief Field _SortingLayer, offset: 0x6c0, size: 0x4, def value: None
  int32_t ____SortingLayer;

  /// @brief Field _SortingLayerID, offset: 0x6c4, size: 0x4, def value: None
  int32_t ____SortingLayerID;

  /// @brief Field _SortingOrder, offset: 0x6c8, size: 0x4, def value: None
  int32_t ____SortingOrder;

  /// @brief Field OnPreRenderText, offset: 0x6d0, size: 0x8, def value: None
  ::System::Action_1<::TMPro::TMP_TextInfo*>* ___OnPreRenderText;

  /// @brief Field m_currentAutoSizeMode, offset: 0x6d8, size: 0x1, def value: None
  bool ___m_currentAutoSizeMode;

  /// @brief Field m_hasFontAssetChanged, offset: 0x6d9, size: 0x1, def value: None
  bool ___m_hasFontAssetChanged;

  /// @brief Field m_previousLossyScaleY, offset: 0x6dc, size: 0x4, def value: None
  float_t ___m_previousLossyScaleY;

  /// @brief Field m_renderer, offset: 0x6e0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ___m_renderer;

  /// @brief Field m_meshFilter, offset: 0x6e8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___m_meshFilter;

  /// @brief Field m_isFirstAllocation, offset: 0x6f0, size: 0x1, def value: None
  bool ___m_isFirstAllocation;

  /// @brief Field m_max_characters, offset: 0x6f4, size: 0x4, def value: None
  int32_t ___m_max_characters;

  /// @brief Field m_max_numberOfLines, offset: 0x6f8, size: 0x4, def value: None
  int32_t ___m_max_numberOfLines;

  /// @brief Field m_subTextObjects, offset: 0x700, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TMP_SubMesh>, ::Array<::UnityW<::TMPro::TMP_SubMesh>>*> ___m_subTextObjects;

  /// @brief Field m_maskType, offset: 0x708, size: 0x4, def value: None
  ::TMPro::MaskingTypes ___m_maskType;

  /// @brief Field m_EnvMapMatrix, offset: 0x70c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_EnvMapMatrix;

  /// @brief Field m_RectTransformCorners, offset: 0x750, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_RectTransformCorners;

  /// @brief Field m_isRegisteredForEvents, offset: 0x758, size: 0x1, def value: None
  bool ___m_isRegisteredForEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextMeshPro, 0x760>, "Size mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ____SortingLayer) == 0x6c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ____SortingLayerID) == 0x6c4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ____SortingOrder) == 0x6c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___OnPreRenderText) == 0x6d0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_currentAutoSizeMode) == 0x6d8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_hasFontAssetChanged) == 0x6d9, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_previousLossyScaleY) == 0x6dc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_renderer) == 0x6e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_meshFilter) == 0x6e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_isFirstAllocation) == 0x6f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_max_characters) == 0x6f4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_max_numberOfLines) == 0x6f8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_subTextObjects) == 0x700, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_maskType) == 0x708, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_EnvMapMatrix) == 0x70c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_RectTransformCorners) == 0x750, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_isRegisteredForEvents) == 0x758, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextMeshPro*, "TMPro", "TextMeshPro");
