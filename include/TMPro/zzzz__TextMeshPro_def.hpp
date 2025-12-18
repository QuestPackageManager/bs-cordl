#pragma once
// IWYU pragma private; include "TMPro/TextMeshPro.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__MaskingTypes_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextMeshPro)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
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
struct TMP_Text_TextProcessingElement;
}
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
namespace TMPro {
class TextContainer;
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
// Dependencies TMPro.MaskingTypes, TMPro.TMP_Text, Unity.Profiling.ProfilerMarker, UnityEngine.Matrix4x4
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TextMeshPro
class CORDL_TYPE TextMeshPro : public ::TMPro::TMP_Text {
public:
  // Declarations
  /// @brief Field OnPreRenderText, offset 0x6f0, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreRenderText, put = __cordl_internal_set_OnPreRenderText)) ::System::Action_1<::TMPro::TMP_TextInfo*>* OnPreRenderText;

  /// @brief Field _SortingLayer, offset 0x6e0, size 0x4
  __declspec(property(get = __cordl_internal_get__SortingLayer, put = __cordl_internal_set__SortingLayer)) int32_t _SortingLayer;

  /// @brief Field _SortingLayerID, offset 0x6e4, size 0x4
  __declspec(property(get = __cordl_internal_get__SortingLayerID, put = __cordl_internal_set__SortingLayerID)) int32_t _SortingLayerID;

  /// @brief Field _SortingOrder, offset 0x6e8, size 0x4
  __declspec(property(get = __cordl_internal_get__SortingOrder, put = __cordl_internal_set__SortingOrder)) int32_t _SortingOrder;

  __declspec(property(get = get_autoSizeTextContainer, put = set_autoSizeTextContainer)) bool autoSizeTextContainer;

  /// @brief Field k_CalculateVerticesPositionMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CalculateVerticesPositionMarker, put = setStaticF_k_CalculateVerticesPositionMarker)) ::Unity::Profiling::ProfilerMarker k_CalculateVerticesPositionMarker;

  /// @brief Field k_CharacterLookupMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CharacterLookupMarker, put = setStaticF_k_CharacterLookupMarker)) ::Unity::Profiling::ProfilerMarker k_CharacterLookupMarker;

  /// @brief Field k_ComputeCharacterAdvanceMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ComputeCharacterAdvanceMarker, put = setStaticF_k_ComputeCharacterAdvanceMarker)) ::Unity::Profiling::ProfilerMarker k_ComputeCharacterAdvanceMarker;

  /// @brief Field k_ComputeTextMetricsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ComputeTextMetricsMarker, put = setStaticF_k_ComputeTextMetricsMarker)) ::Unity::Profiling::ProfilerMarker k_ComputeTextMetricsMarker;

  /// @brief Field k_GenerateTextMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateTextMarker, put = setStaticF_k_GenerateTextMarker)) ::Unity::Profiling::ProfilerMarker k_GenerateTextMarker;

  /// @brief Field k_GenerateTextPhaseIIIMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateTextPhaseIIIMarker, put = setStaticF_k_GenerateTextPhaseIIIMarker)) ::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIIMarker;

  /// @brief Field k_GenerateTextPhaseIIMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateTextPhaseIIMarker, put = setStaticF_k_GenerateTextPhaseIIMarker)) ::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIMarker;

  /// @brief Field k_GenerateTextPhaseIMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateTextPhaseIMarker, put = setStaticF_k_GenerateTextPhaseIMarker)) ::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIMarker;

  /// @brief Field k_HandleCarriageReturnMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_HandleCarriageReturnMarker, put = setStaticF_k_HandleCarriageReturnMarker)) ::Unity::Profiling::ProfilerMarker k_HandleCarriageReturnMarker;

  /// @brief Field k_HandleGPOSFeaturesMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_HandleGPOSFeaturesMarker, put = setStaticF_k_HandleGPOSFeaturesMarker)) ::Unity::Profiling::ProfilerMarker k_HandleGPOSFeaturesMarker;

  /// @brief Field k_HandleHorizontalLineBreakingMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_HandleHorizontalLineBreakingMarker,
                      put = setStaticF_k_HandleHorizontalLineBreakingMarker)) ::Unity::Profiling::ProfilerMarker k_HandleHorizontalLineBreakingMarker;

  /// @brief Field k_HandleLineTerminationMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_HandleLineTerminationMarker, put = setStaticF_k_HandleLineTerminationMarker)) ::Unity::Profiling::ProfilerMarker k_HandleLineTerminationMarker;

  /// @brief Field k_HandleVerticalLineBreakingMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_HandleVerticalLineBreakingMarker, put = setStaticF_k_HandleVerticalLineBreakingMarker)) ::Unity::Profiling::ProfilerMarker k_HandleVerticalLineBreakingMarker;

  /// @brief Field k_HandleVisibleCharacterMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_HandleVisibleCharacterMarker, put = setStaticF_k_HandleVisibleCharacterMarker)) ::Unity::Profiling::ProfilerMarker k_HandleVisibleCharacterMarker;

  /// @brief Field k_HandleWhiteSpacesMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_HandleWhiteSpacesMarker, put = setStaticF_k_HandleWhiteSpacesMarker)) ::Unity::Profiling::ProfilerMarker k_HandleWhiteSpacesMarker;

  /// @brief Field k_ParseMarkupTextMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ParseMarkupTextMarker, put = setStaticF_k_ParseMarkupTextMarker)) ::Unity::Profiling::ProfilerMarker k_ParseMarkupTextMarker;

  /// @brief Field k_SaveGlyphVertexDataMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SaveGlyphVertexDataMarker, put = setStaticF_k_SaveGlyphVertexDataMarker)) ::Unity::Profiling::ProfilerMarker k_SaveGlyphVertexDataMarker;

  /// @brief Field k_SavePageInfoMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SavePageInfoMarker, put = setStaticF_k_SavePageInfoMarker)) ::Unity::Profiling::ProfilerMarker k_SavePageInfoMarker;

  /// @brief Field k_SaveProcessingStatesMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SaveProcessingStatesMarker, put = setStaticF_k_SaveProcessingStatesMarker)) ::Unity::Profiling::ProfilerMarker k_SaveProcessingStatesMarker;

  /// @brief Field k_SaveTextExtentMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SaveTextExtentMarker, put = setStaticF_k_SaveTextExtentMarker)) ::Unity::Profiling::ProfilerMarker k_SaveTextExtentMarker;

  /// @brief Field k_SetArraySizesMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SetArraySizesMarker, put = setStaticF_k_SetArraySizesMarker)) ::Unity::Profiling::ProfilerMarker k_SetArraySizesMarker;

  /// @brief Field m_EnvMapMatrix, offset 0x72c, size 0x40
  __declspec(property(get = __cordl_internal_get_m_EnvMapMatrix, put = __cordl_internal_set_m_EnvMapMatrix)) ::UnityEngine::Matrix4x4 m_EnvMapMatrix;

  /// @brief Field m_RectTransformCorners, offset 0x770, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransformCorners, put = __cordl_internal_set_m_RectTransformCorners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>
      m_RectTransformCorners;

  /// @brief Field m_hasFontAssetChanged, offset 0x6f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasFontAssetChanged, put = __cordl_internal_set_m_hasFontAssetChanged)) bool m_hasFontAssetChanged;

  /// @brief Field m_isFirstAllocation, offset 0x710, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isFirstAllocation, put = __cordl_internal_set_m_isFirstAllocation)) bool m_isFirstAllocation;

  /// @brief Field m_isRegisteredForEvents, offset 0x778, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isRegisteredForEvents, put = __cordl_internal_set_m_isRegisteredForEvents)) bool m_isRegisteredForEvents;

  /// @brief Field m_maskType, offset 0x728, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maskType, put = __cordl_internal_set_m_maskType)) ::TMPro::MaskingTypes m_maskType;

  /// @brief Field m_max_characters, offset 0x714, size 0x4
  __declspec(property(get = __cordl_internal_get_m_max_characters, put = __cordl_internal_set_m_max_characters)) int32_t m_max_characters;

  /// @brief Field m_max_numberOfLines, offset 0x718, size 0x4
  __declspec(property(get = __cordl_internal_get_m_max_numberOfLines, put = __cordl_internal_set_m_max_numberOfLines)) int32_t m_max_numberOfLines;

  /// @brief Field m_meshFilter, offset 0x708, size 0x8
  __declspec(property(get = __cordl_internal_get_m_meshFilter, put = __cordl_internal_set_m_meshFilter)) ::UnityW<::UnityEngine::MeshFilter> m_meshFilter;

  /// @brief Field m_previousLossyScaleY, offset 0x6fc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_previousLossyScaleY, put = __cordl_internal_set_m_previousLossyScaleY)) float_t m_previousLossyScaleY;

  /// @brief Field m_renderer, offset 0x700, size 0x8
  __declspec(property(get = __cordl_internal_get_m_renderer, put = __cordl_internal_set_m_renderer)) ::UnityW<::UnityEngine::Renderer> m_renderer;

  /// @brief Field m_subTextObjects, offset 0x720, size 0x8
  __declspec(property(get = __cordl_internal_get_m_subTextObjects, put = __cordl_internal_set_m_subTextObjects)) ::ArrayW<::UnityW<::TMPro::TMP_SubMesh>, ::Array<::UnityW<::TMPro::TMP_SubMesh>>*>
      m_subTextObjects;

  __declspec(property(get = get_maskType, put = set_maskType)) ::TMPro::MaskingTypes maskType;

  /// @brief Field materialIndexPairs, offset 0x780, size 0x8
  __declspec(property(get = __cordl_internal_get_materialIndexPairs, put = __cordl_internal_set_materialIndexPairs)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialIndexPairs;

  __declspec(property(get = get_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_meshFilter)) ::UnityW<::UnityEngine::MeshFilter> meshFilter;

  __declspec(property(get = get_renderer)) ::UnityW<::UnityEngine::Renderer> renderer;

  __declspec(property(get = get_sortingLayerID, put = set_sortingLayerID)) int32_t sortingLayerID;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) int32_t sortingOrder;

  __declspec(property(get = get_textContainer)) ::UnityW<::TMPro::TextContainer> textContainer;

  __declspec(property(get = get_transform)) ::UnityW<::UnityEngine::Transform> transform;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Method Awake, addr 0x6782a04, size 0x2cc, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x67829fc, size 0x4, virtual true, abstract: false, final true
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x6782a00, size 0x4, virtual true, abstract: false, final true
  inline void CalculateLayoutInputVertical();

  /// @brief Method ClearMesh, addr 0x678240c, size 0xcc, virtual true, abstract: false, final false
  inline void ClearMesh(bool updateMesh);

  /// @brief Method ComputeMarginSize, addr 0x6786d24, size 0xe4, virtual true, abstract: false, final false
  inline void ComputeMarginSize();

  /// @brief Method CreateMaterialInstance, addr 0x6783ac4, size 0xbc, virtual false, abstract: false, final false
  inline void CreateMaterialInstance();

  /// @brief Method DestroySubMeshObjects, addr 0x67876bc, size 0xe0, virtual true, abstract: false, final false
  inline void DestroySubMeshObjects();

  /// @brief Method DisableMasking, addr 0x67839cc, size 0xf8, virtual false, abstract: false, final false
  inline void DisableMasking();

  /// @brief Method EnableMasking, addr 0x678384c, size 0xfc, virtual false, abstract: false, final false
  inline void EnableMasking();

  /// @brief Method ForceMeshUpdate, addr 0x6782390, size 0x10, virtual true, abstract: false, final false
  inline void ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing);

  /// @brief Method GenerateTextMesh, addr 0x677060c, size 0x73b0, virtual true, abstract: false, final false
  inline void GenerateTextMesh();

  /// @brief Method GetCompoundBounds, addr 0x678779c, size 0x194, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds GetCompoundBounds();

  /// @brief Method GetMaterial, addr 0x6783b80, size 0x114, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetMaterials, addr 0x6783c94, size 0x1b0, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> mats);

  /// @brief Method GetSharedMaterials, addr 0x6783e80, size 0x18c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetSharedMaterials();

  /// @brief Method GetTextContainerLocalCorners, addr 0x6787308, size 0x9c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetTextContainerLocalCorners();

  /// @brief Method GetTextInfo, addr 0x67823a0, size 0x6c, virtual true, abstract: false, final false
  inline ::TMPro::TMP_TextInfo* GetTextInfo(::StringW text);

  /// @brief Method InternalUpdate, addr 0x6786fac, size 0xa8, virtual true, abstract: false, final false
  inline void InternalUpdate();

  /// @brief Method LoadFontAsset, addr 0x6782f4c, size 0x5ac, virtual true, abstract: false, final false
  inline void LoadFontAsset();

  static inline ::TMPro::TextMeshPro* New_ctor();

  /// @brief Method OnDestroy, addr 0x6782e80, size 0xcc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x6786e08, size 0x1c, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x6782dd0, size 0xb0, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6782cd0, size 0x100, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPreRenderObject, addr 0x6781f0c, size 0x254, virtual false, abstract: false, final false
  inline void OnPreRenderObject();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x6786e54, size 0x158, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnTransformParentChanged, addr 0x6786e24, size 0x30, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method Rebuild, addr 0x6781e20, size 0xec, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method SetActiveSubMeshes, addr 0x678759c, size 0x120, virtual true, abstract: false, final false
  inline void SetActiveSubMeshes(bool state);

  /// @brief Method SetActiveSubTextObjectRenderers, addr 0x67871c8, size 0x140, virtual false, abstract: false, final false
  inline void SetActiveSubTextObjectRenderers(bool state);

  /// @brief Method SetAllDirty, addr 0x6781ddc, size 0x44, virtual true, abstract: false, final false
  inline void SetAllDirty();

  /// @brief Method SetArraySizes, addr 0x6784aa8, size 0x227c, virtual true, abstract: false, final false
  inline int32_t SetArraySizes(::ArrayW<::TMPro::TMP_Text_TextProcessingElement, ::Array<::TMPro::TMP_Text_TextProcessingElement>*> textProcessingArray);

  /// @brief Method SetCulling, addr 0x678472c, size 0x2f0, virtual true, abstract: false, final false
  inline void SetCulling();

  /// @brief Method SetFaceColor, addr 0x67844bc, size 0x124, virtual true, abstract: false, final false
  inline void SetFaceColor(::UnityEngine::Color32 color);

  /// @brief Method SetLayoutDirty, addr 0x6781cf4, size 0xd8, virtual true, abstract: false, final false
  inline void SetLayoutDirty();

  /// @brief Method SetMask, addr 0x67818a8, size 0x164, virtual false, abstract: false, final false
  inline void SetMask(::TMPro::MaskingTypes maskType);

  /// @brief Method SetMask, addr 0x6781a0c, size 0x48, virtual false, abstract: false, final false
  inline void SetMask(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords);

  /// @brief Method SetMask, addr 0x6781af4, size 0x60, virtual false, abstract: false, final false
  inline void SetMask(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords, float_t softnessX, float_t softnessY);

  /// @brief Method SetMaskCoordinates, addr 0x6781a54, size 0xa0, virtual false, abstract: false, final false
  inline void SetMaskCoordinates(::UnityEngine::Vector4 coords);

  /// @brief Method SetMaskCoordinates, addr 0x6781b54, size 0xe8, virtual false, abstract: false, final false
  inline void SetMaskCoordinates(::UnityEngine::Vector4 coords, float_t softX, float_t softY);

  /// @brief Method SetMaterialDirty, addr 0x6781dcc, size 0x10, virtual true, abstract: false, final false
  inline void SetMaterialDirty();

  /// @brief Method SetMeshFilters, addr 0x67873a4, size 0x1f8, virtual false, abstract: false, final false
  inline void SetMeshFilters(bool state);

  /// @brief Method SetOutlineColor, addr 0x67845e0, size 0x124, virtual true, abstract: false, final false
  inline void SetOutlineColor(::UnityEngine::Color32 color);

  /// @brief Method SetOutlineThickness, addr 0x6784394, size 0x128, virtual true, abstract: false, final false
  inline void SetOutlineThickness(float_t thickness);

  /// @brief Method SetPerspectiveCorrection, addr 0x6784a1c, size 0x8c, virtual false, abstract: false, final false
  inline void SetPerspectiveCorrection();

  /// @brief Method SetShaderDepth, addr 0x6784704, size 0x28, virtual true, abstract: false, final false
  inline void SetShaderDepth();

  /// @brief Method SetSharedMaterial, addr 0x6783e44, size 0x3c, virtual true, abstract: false, final false
  inline void SetSharedMaterial(::UnityEngine::Material* mat);

  /// @brief Method SetSharedMaterials, addr 0x678400c, size 0x388, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials);

  /// @brief Method SetVerticesDirty, addr 0x6781c3c, size 0xb8, virtual true, abstract: false, final false
  inline void SetVerticesDirty();

  /// @brief Method UpdateEnvMapMatrix, addr 0x6783628, size 0x224, virtual false, abstract: false, final false
  inline void UpdateEnvMapMatrix();

  /// @brief Method UpdateFontAsset, addr 0x67829ec, size 0x10, virtual false, abstract: false, final false
  inline void UpdateFontAsset();

  /// @brief Method UpdateGeometry, addr 0x6782658, size 0x18, virtual true, abstract: false, final false
  inline void UpdateGeometry(::UnityEngine::Mesh* mesh, int32_t index);

  /// @brief Method UpdateMask, addr 0x6783948, size 0x84, virtual false, abstract: false, final false
  inline void UpdateMask();

  /// @brief Method UpdateMaterial, addr 0x6782160, size 0x12c, virtual true, abstract: false, final false
  inline void UpdateMaterial();

  /// @brief Method UpdateMeshPadding, addr 0x678228c, size 0x104, virtual true, abstract: false, final false
  inline void UpdateMeshPadding();

  /// @brief Method UpdateSDFScale, addr 0x6787054, size 0x174, virtual false, abstract: false, final false
  inline void UpdateSDFScale(float_t scaleDelta);

  /// @brief Method UpdateSubMeshSortingLayerID, addr 0x6781214, size 0x110, virtual false, abstract: false, final false
  inline void UpdateSubMeshSortingLayerID(int32_t id);

  /// @brief Method UpdateSubMeshSortingOrder, addr 0x6781474, size 0x110, virtual false, abstract: false, final false
  inline void UpdateSubMeshSortingOrder(int32_t order);

  /// @brief Method UpdateVertexData, addr 0x6782814, size 0x1d8, virtual true, abstract: false, final false
  inline void UpdateVertexData();

  /// @brief Method UpdateVertexData, addr 0x6782670, size 0x1a4, virtual true, abstract: false, final false
  inline void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags flags);

  /// @brief Method ValidateEnvMapProperty, addr 0x67834f8, size 0x130, virtual false, abstract: false, final false
  inline void ValidateEnvMapProperty();

  constexpr ::System::Action_1<::TMPro::TMP_TextInfo*>* const& __cordl_internal_get_OnPreRenderText() const;

  constexpr ::System::Action_1<::TMPro::TMP_TextInfo*>*& __cordl_internal_get_OnPreRenderText();

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

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get_materialIndexPairs() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_materialIndexPairs();

  constexpr void __cordl_internal_set_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  constexpr void __cordl_internal_set__SortingLayer(int32_t value);

  constexpr void __cordl_internal_set__SortingLayerID(int32_t value);

  constexpr void __cordl_internal_set__SortingOrder(int32_t value);

  constexpr void __cordl_internal_set_m_EnvMapMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

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

  constexpr void __cordl_internal_set_materialIndexPairs(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  /// @brief Method .ctor, addr 0x6787930, size 0x138, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnPreRenderText, addr 0x67824d8, size 0xc0, virtual true, abstract: false, final false
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

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SaveTextExtentMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SetArraySizesMarker();

  /// @brief Method get_autoSizeTextContainer, addr 0x6781584, size 0x8, virtual true, abstract: false, final false
  inline bool get_autoSizeTextContainer();

  /// @brief Method get_maskType, addr 0x6781898, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::MaskingTypes get_maskType();

  /// @brief Method get_mesh, addr 0x67816d4, size 0xb8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_meshFilter, addr 0x678178c, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshFilter> get_meshFilter();

  /// @brief Method get_renderer, addr 0x67810c0, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

  /// @brief Method get_sortingLayerID, addr 0x6781028, size 0x98, virtual false, abstract: false, final false
  inline int32_t get_sortingLayerID();

  /// @brief Method get_sortingOrder, addr 0x6781324, size 0x98, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

  /// @brief Method get_textContainer, addr 0x6781630, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TextContainer> get_textContainer();

  /// @brief Method get_transform, addr 0x6781638, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  /// @brief Method remove_OnPreRenderText, addr 0x6782598, size 0xc0, virtual true, abstract: false, final false
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

  static inline void setStaticF_k_SaveTextExtentMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_SetArraySizesMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_autoSizeTextContainer, addr 0x678158c, size 0xa4, virtual true, abstract: false, final false
  inline void set_autoSizeTextContainer(bool value);

  /// @brief Method set_maskType, addr 0x67818a0, size 0x8, virtual false, abstract: false, final false
  inline void set_maskType(::TMPro::MaskingTypes value);

  /// @brief Method set_sortingLayerID, addr 0x678115c, size 0xb8, virtual false, abstract: false, final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method set_sortingOrder, addr 0x67813bc, size 0xb8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15832 };

  /// @brief Field _SortingLayer, offset: 0x6e0, size: 0x4, def value: None
  int32_t ____SortingLayer;

  /// @brief Field _SortingLayerID, offset: 0x6e4, size: 0x4, def value: None
  int32_t ____SortingLayerID;

  /// @brief Field _SortingOrder, offset: 0x6e8, size: 0x4, def value: None
  int32_t ____SortingOrder;

  /// @brief Field OnPreRenderText, offset: 0x6f0, size: 0x8, def value: None
  ::System::Action_1<::TMPro::TMP_TextInfo*>* ___OnPreRenderText;

  /// @brief Field m_hasFontAssetChanged, offset: 0x6f8, size: 0x1, def value: None
  bool ___m_hasFontAssetChanged;

  /// @brief Field m_previousLossyScaleY, offset: 0x6fc, size: 0x4, def value: None
  float_t ___m_previousLossyScaleY;

  /// @brief Field m_renderer, offset: 0x700, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ___m_renderer;

  /// @brief Field m_meshFilter, offset: 0x708, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___m_meshFilter;

  /// @brief Field m_isFirstAllocation, offset: 0x710, size: 0x1, def value: None
  bool ___m_isFirstAllocation;

  /// @brief Field m_max_characters, offset: 0x714, size: 0x4, def value: None
  int32_t ___m_max_characters;

  /// @brief Field m_max_numberOfLines, offset: 0x718, size: 0x4, def value: None
  int32_t ___m_max_numberOfLines;

  /// @brief Field m_subTextObjects, offset: 0x720, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TMP_SubMesh>, ::Array<::UnityW<::TMPro::TMP_SubMesh>>*> ___m_subTextObjects;

  /// @brief Field m_maskType, offset: 0x728, size: 0x4, def value: None
  ::TMPro::MaskingTypes ___m_maskType;

  /// @brief Field m_EnvMapMatrix, offset: 0x72c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_EnvMapMatrix;

  /// @brief Field m_RectTransformCorners, offset: 0x770, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_RectTransformCorners;

  /// @brief Field m_isRegisteredForEvents, offset: 0x778, size: 0x1, def value: None
  bool ___m_isRegisteredForEvents;

  /// @brief Field materialIndexPairs, offset: 0x780, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___materialIndexPairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TextMeshPro, ____SortingLayer) == 0x6e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ____SortingLayerID) == 0x6e4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ____SortingOrder) == 0x6e8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___OnPreRenderText) == 0x6f0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_hasFontAssetChanged) == 0x6f8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_previousLossyScaleY) == 0x6fc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_renderer) == 0x700, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_meshFilter) == 0x708, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_isFirstAllocation) == 0x710, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_max_characters) == 0x714, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_max_numberOfLines) == 0x718, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_subTextObjects) == 0x720, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_maskType) == 0x728, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_EnvMapMatrix) == 0x72c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_RectTransformCorners) == 0x770, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___m_isRegisteredForEvents) == 0x778, "Offset mismatch!");

static_assert(offsetof(::TMPro::TextMeshPro, ___materialIndexPairs) == 0x780, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TextMeshPro, 0x788>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextMeshPro*, "TMPro", "TextMeshPro");
