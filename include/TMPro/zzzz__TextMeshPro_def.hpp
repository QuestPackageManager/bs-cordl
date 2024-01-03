#pragma once
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
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace TMPro {
struct MaskingTypes;
}
namespace UnityEngine {
class Transform;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace UnityEngine {
class Renderer;
}
namespace TMPro {
class TextContainer;
}
namespace UnityEngine {
struct Bounds;
}
namespace TMPro {
class TMP_SubMesh;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
namespace TMPro {
struct __TMP_Text__UnicodeChar;
}
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12446)), TypeDefinitionIndex(TypeDefinitionIndex(10245)), TypeDefinitionIndex(TypeDefinitionIndex(9966)),
// TypeDefinitionIndex(TypeDefinitionIndex(12434))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12307)) CS Name: ::TMPro::TextMeshPro*
class CORDL_TYPE TextMeshPro : public ::TMPro::TMP_Text {
public:
  // Declarations
  /// @brief Field _SortingLayer, offset 0x6c0, size 0x4
  __declspec(property(get = __get__SortingLayer, put = __set__SortingLayer)) int32_t _SortingLayer;

  /// @brief Field _SortingLayerID, offset 0x6c4, size 0x4
  __declspec(property(get = __get__SortingLayerID, put = __set__SortingLayerID)) int32_t _SortingLayerID;

  /// @brief Field _SortingOrder, offset 0x6c8, size 0x4
  __declspec(property(get = __get__SortingOrder, put = __set__SortingOrder)) int32_t _SortingOrder;

  /// @brief Field OnPreRenderText, offset 0x6d0, size 0x8
  __declspec(property(get = __get_OnPreRenderText, put = __set_OnPreRenderText))::System::Action_1<::TMPro::TMP_TextInfo*>* OnPreRenderText;

  /// @brief Field m_currentAutoSizeMode, offset 0x6d8, size 0x1
  __declspec(property(get = __get_m_currentAutoSizeMode, put = __set_m_currentAutoSizeMode)) bool m_currentAutoSizeMode;

  /// @brief Field m_hasFontAssetChanged, offset 0x6d9, size 0x1
  __declspec(property(get = __get_m_hasFontAssetChanged, put = __set_m_hasFontAssetChanged)) bool m_hasFontAssetChanged;

  /// @brief Field m_previousLossyScaleY, offset 0x6dc, size 0x4
  __declspec(property(get = __get_m_previousLossyScaleY, put = __set_m_previousLossyScaleY)) float_t m_previousLossyScaleY;

  /// @brief Field m_renderer, offset 0x6e0, size 0x8
  __declspec(property(get = __get_m_renderer, put = __set_m_renderer))::UnityEngine::Renderer* m_renderer;

  /// @brief Field m_meshFilter, offset 0x6e8, size 0x8
  __declspec(property(get = __get_m_meshFilter, put = __set_m_meshFilter))::UnityEngine::MeshFilter* m_meshFilter;

  /// @brief Field m_isFirstAllocation, offset 0x6f0, size 0x1
  __declspec(property(get = __get_m_isFirstAllocation, put = __set_m_isFirstAllocation)) bool m_isFirstAllocation;

  /// @brief Field m_max_characters, offset 0x6f4, size 0x4
  __declspec(property(get = __get_m_max_characters, put = __set_m_max_characters)) int32_t m_max_characters;

  /// @brief Field m_max_numberOfLines, offset 0x6f8, size 0x4
  __declspec(property(get = __get_m_max_numberOfLines, put = __set_m_max_numberOfLines)) int32_t m_max_numberOfLines;

  /// @brief Field m_subTextObjects, offset 0x700, size 0x8
  __declspec(property(get = __get_m_subTextObjects, put = __set_m_subTextObjects))::ArrayW<::TMPro::TMP_SubMesh*, ::Array<::TMPro::TMP_SubMesh*>*> m_subTextObjects;

  /// @brief Field m_maskType, offset 0x708, size 0x4
  __declspec(property(get = __get_m_maskType, put = __set_m_maskType))::TMPro::MaskingTypes m_maskType;

  /// @brief Field m_EnvMapMatrix, offset 0x70c, size 0x40
  __declspec(property(get = __get_m_EnvMapMatrix, put = __set_m_EnvMapMatrix))::UnityEngine::Matrix4x4 m_EnvMapMatrix;

  /// @brief Field m_RectTransformCorners, offset 0x750, size 0x8
  __declspec(property(get = __get_m_RectTransformCorners, put = __set_m_RectTransformCorners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_RectTransformCorners;

  /// @brief Field m_isRegisteredForEvents, offset 0x758, size 0x1
  __declspec(property(get = __get_m_isRegisteredForEvents, put = __set_m_isRegisteredForEvents)) bool m_isRegisteredForEvents;

  /// @brief Field k_GenerateTextMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextMarker, put = setStaticF_k_GenerateTextMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextMarker;

  /// @brief Field k_SetArraySizesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SetArraySizesMarker, put = setStaticF_k_SetArraySizesMarker))::Unity::Profiling::ProfilerMarker k_SetArraySizesMarker;

  /// @brief Field k_GenerateTextPhaseIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextPhaseIMarker, put = setStaticF_k_GenerateTextPhaseIMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIMarker;

  /// @brief Field k_ParseMarkupTextMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ParseMarkupTextMarker, put = setStaticF_k_ParseMarkupTextMarker))::Unity::Profiling::ProfilerMarker k_ParseMarkupTextMarker;

  /// @brief Field k_CharacterLookupMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CharacterLookupMarker, put = setStaticF_k_CharacterLookupMarker))::Unity::Profiling::ProfilerMarker k_CharacterLookupMarker;

  /// @brief Field k_HandleGPOSFeaturesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleGPOSFeaturesMarker, put = setStaticF_k_HandleGPOSFeaturesMarker))::Unity::Profiling::ProfilerMarker k_HandleGPOSFeaturesMarker;

  /// @brief Field k_CalculateVerticesPositionMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CalculateVerticesPositionMarker,
                             put = setStaticF_k_CalculateVerticesPositionMarker))::Unity::Profiling::ProfilerMarker k_CalculateVerticesPositionMarker;

  /// @brief Field k_ComputeTextMetricsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ComputeTextMetricsMarker, put = setStaticF_k_ComputeTextMetricsMarker))::Unity::Profiling::ProfilerMarker k_ComputeTextMetricsMarker;

  /// @brief Field k_HandleVisibleCharacterMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleVisibleCharacterMarker, put = setStaticF_k_HandleVisibleCharacterMarker))::Unity::Profiling::ProfilerMarker k_HandleVisibleCharacterMarker;

  /// @brief Field k_HandleWhiteSpacesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleWhiteSpacesMarker, put = setStaticF_k_HandleWhiteSpacesMarker))::Unity::Profiling::ProfilerMarker k_HandleWhiteSpacesMarker;

  /// @brief Field k_HandleHorizontalLineBreakingMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleHorizontalLineBreakingMarker,
                             put = setStaticF_k_HandleHorizontalLineBreakingMarker))::Unity::Profiling::ProfilerMarker k_HandleHorizontalLineBreakingMarker;

  /// @brief Field k_HandleVerticalLineBreakingMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleVerticalLineBreakingMarker,
                             put = setStaticF_k_HandleVerticalLineBreakingMarker))::Unity::Profiling::ProfilerMarker k_HandleVerticalLineBreakingMarker;

  /// @brief Field k_SaveGlyphVertexDataMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SaveGlyphVertexDataMarker, put = setStaticF_k_SaveGlyphVertexDataMarker))::Unity::Profiling::ProfilerMarker k_SaveGlyphVertexDataMarker;

  /// @brief Field k_ComputeCharacterAdvanceMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ComputeCharacterAdvanceMarker, put = setStaticF_k_ComputeCharacterAdvanceMarker))::Unity::Profiling::ProfilerMarker k_ComputeCharacterAdvanceMarker;

  /// @brief Field k_HandleCarriageReturnMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleCarriageReturnMarker, put = setStaticF_k_HandleCarriageReturnMarker))::Unity::Profiling::ProfilerMarker k_HandleCarriageReturnMarker;

  /// @brief Field k_HandleLineTerminationMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HandleLineTerminationMarker, put = setStaticF_k_HandleLineTerminationMarker))::Unity::Profiling::ProfilerMarker k_HandleLineTerminationMarker;

  /// @brief Field k_SavePageInfoMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SavePageInfoMarker, put = setStaticF_k_SavePageInfoMarker))::Unity::Profiling::ProfilerMarker k_SavePageInfoMarker;

  /// @brief Field k_SaveProcessingStatesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SaveProcessingStatesMarker, put = setStaticF_k_SaveProcessingStatesMarker))::Unity::Profiling::ProfilerMarker k_SaveProcessingStatesMarker;

  /// @brief Field k_GenerateTextPhaseIIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextPhaseIIMarker, put = setStaticF_k_GenerateTextPhaseIIMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIMarker;

  /// @brief Field k_GenerateTextPhaseIIIMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GenerateTextPhaseIIIMarker, put = setStaticF_k_GenerateTextPhaseIIIMarker))::Unity::Profiling::ProfilerMarker k_GenerateTextPhaseIIIMarker;

  __declspec(property(get = get_sortingLayerID, put = set_sortingLayerID)) int32_t sortingLayerID;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) int32_t sortingOrder;

  __declspec(property(get = get_autoSizeTextContainer, put = set_autoSizeTextContainer)) bool autoSizeTextContainer;

  __declspec(property(get = get_textContainer))::TMPro::TextContainer* textContainer;

  __declspec(property(get = get_transform))::UnityEngine::Transform* transform;

  __declspec(property(get = get_renderer))::UnityEngine::Renderer* renderer;

  __declspec(property(get = get_mesh))::UnityEngine::Mesh* mesh;

  __declspec(property(get = get_meshFilter))::UnityEngine::MeshFilter* meshFilter;

  __declspec(property(get = get_maskType, put = set_maskType))::TMPro::MaskingTypes maskType;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  constexpr int32_t& __get__SortingLayer();

  constexpr int32_t const& __get__SortingLayer() const;

  constexpr void __set__SortingLayer(int32_t value);

  constexpr int32_t& __get__SortingLayerID();

  constexpr int32_t const& __get__SortingLayerID() const;

  constexpr void __set__SortingLayerID(int32_t value);

  constexpr int32_t& __get__SortingOrder();

  constexpr int32_t const& __get__SortingOrder() const;

  constexpr void __set__SortingOrder(int32_t value);

  constexpr ::System::Action_1<::TMPro::TMP_TextInfo*>*& __get_OnPreRenderText();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::TMPro::TMP_TextInfo*>*> const& __get_OnPreRenderText() const;

  constexpr void __set_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  constexpr bool& __get_m_currentAutoSizeMode();

  constexpr bool const& __get_m_currentAutoSizeMode() const;

  constexpr void __set_m_currentAutoSizeMode(bool value);

  constexpr bool& __get_m_hasFontAssetChanged();

  constexpr bool const& __get_m_hasFontAssetChanged() const;

  constexpr void __set_m_hasFontAssetChanged(bool value);

  constexpr float_t& __get_m_previousLossyScaleY();

  constexpr float_t const& __get_m_previousLossyScaleY() const;

  constexpr void __set_m_previousLossyScaleY(float_t value);

  constexpr ::UnityEngine::Renderer*& __get_m_renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get_m_renderer() const;

  constexpr void __set_m_renderer(::UnityEngine::Renderer* value);

  constexpr ::UnityEngine::MeshFilter*& __get_m_meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get_m_meshFilter() const;

  constexpr void __set_m_meshFilter(::UnityEngine::MeshFilter* value);

  constexpr bool& __get_m_isFirstAllocation();

  constexpr bool const& __get_m_isFirstAllocation() const;

  constexpr void __set_m_isFirstAllocation(bool value);

  constexpr int32_t& __get_m_max_characters();

  constexpr int32_t const& __get_m_max_characters() const;

  constexpr void __set_m_max_characters(int32_t value);

  constexpr int32_t& __get_m_max_numberOfLines();

  constexpr int32_t const& __get_m_max_numberOfLines() const;

  constexpr void __set_m_max_numberOfLines(int32_t value);

  constexpr ::ArrayW<::TMPro::TMP_SubMesh*, ::Array<::TMPro::TMP_SubMesh*>*>& __get_m_subTextObjects();

  constexpr ::ArrayW<::TMPro::TMP_SubMesh*, ::Array<::TMPro::TMP_SubMesh*>*> const& __get_m_subTextObjects() const;

  constexpr void __set_m_subTextObjects(::ArrayW<::TMPro::TMP_SubMesh*, ::Array<::TMPro::TMP_SubMesh*>*> value);

  constexpr ::TMPro::MaskingTypes& __get_m_maskType();

  constexpr ::TMPro::MaskingTypes const& __get_m_maskType() const;

  constexpr void __set_m_maskType(::TMPro::MaskingTypes value);

  constexpr ::UnityEngine::Matrix4x4& __get_m_EnvMapMatrix();

  constexpr ::UnityEngine::Matrix4x4 const& __get_m_EnvMapMatrix() const;

  constexpr void __set_m_EnvMapMatrix(::UnityEngine::Matrix4x4 value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_m_RectTransformCorners();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_m_RectTransformCorners() const;

  constexpr void __set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr bool& __get_m_isRegisteredForEvents();

  constexpr bool const& __get_m_isRegisteredForEvents() const;

  constexpr void __set_m_isRegisteredForEvents(bool value);

  static inline void setStaticF_k_GenerateTextMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextMarker();

  static inline void setStaticF_k_SetArraySizesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SetArraySizesMarker();

  static inline void setStaticF_k_GenerateTextPhaseIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIMarker();

  static inline void setStaticF_k_ParseMarkupTextMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ParseMarkupTextMarker();

  static inline void setStaticF_k_CharacterLookupMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CharacterLookupMarker();

  static inline void setStaticF_k_HandleGPOSFeaturesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleGPOSFeaturesMarker();

  static inline void setStaticF_k_CalculateVerticesPositionMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CalculateVerticesPositionMarker();

  static inline void setStaticF_k_ComputeTextMetricsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeTextMetricsMarker();

  static inline void setStaticF_k_HandleVisibleCharacterMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleVisibleCharacterMarker();

  static inline void setStaticF_k_HandleWhiteSpacesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleWhiteSpacesMarker();

  static inline void setStaticF_k_HandleHorizontalLineBreakingMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleHorizontalLineBreakingMarker();

  static inline void setStaticF_k_HandleVerticalLineBreakingMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleVerticalLineBreakingMarker();

  static inline void setStaticF_k_SaveGlyphVertexDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SaveGlyphVertexDataMarker();

  static inline void setStaticF_k_ComputeCharacterAdvanceMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeCharacterAdvanceMarker();

  static inline void setStaticF_k_HandleCarriageReturnMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleCarriageReturnMarker();

  static inline void setStaticF_k_HandleLineTerminationMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleLineTerminationMarker();

  static inline void setStaticF_k_SavePageInfoMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SavePageInfoMarker();

  static inline void setStaticF_k_SaveProcessingStatesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SaveProcessingStatesMarker();

  static inline void setStaticF_k_GenerateTextPhaseIIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIIMarker();

  static inline void setStaticF_k_GenerateTextPhaseIIIMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIIIMarker();

  /// @brief Method get_sortingLayerID, addr 0x2bf0ec4, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_sortingLayerID();

  /// @brief Method set_sortingLayerID, addr 0x2bf0fec, size 0xb4, virtual false, abstract: false, final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method get_sortingOrder, addr 0x2bf11ac, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

  /// @brief Method set_sortingOrder, addr 0x2bf1240, size 0xb4, virtual false, abstract: false, final false
  inline void set_sortingOrder(int32_t value);

  /// @brief Method get_autoSizeTextContainer, addr 0x2bf1400, size 0x8, virtual true, abstract: false, final false
  inline bool get_autoSizeTextContainer();

  /// @brief Method set_autoSizeTextContainer, addr 0x2bf1408, size 0xa0, virtual true, abstract: false, final false
  inline void set_autoSizeTextContainer(bool value);

  /// @brief Method get_textContainer, addr 0x2bf14a8, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextContainer* get_textContainer();

  /// @brief Method get_transform, addr 0x2bf14b0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_transform();

  /// @brief Method get_renderer, addr 0x2bf0f58, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Renderer* get_renderer();

  /// @brief Method get_mesh, addr 0x2bf1544, size 0xb0, virtual true, abstract: false, final false
  inline ::UnityEngine::Mesh* get_mesh();

  /// @brief Method get_meshFilter, addr 0x2bf15f4, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshFilter* get_meshFilter();

  /// @brief Method get_maskType, addr 0x2bf16f0, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::MaskingTypes get_maskType();

  /// @brief Method set_maskType, addr 0x2bf16f8, size 0x8, virtual false, abstract: false, final false
  inline void set_maskType(::TMPro::MaskingTypes value);

  /// @brief Method SetMask, addr 0x2bf1848, size 0x48, virtual false, abstract: false, final false
  inline void SetMask(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords);

  /// @brief Method SetMask, addr 0x2bf1930, size 0x60, virtual false, abstract: false, final false
  inline void SetMask(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords, float_t softnessX, float_t softnessY);

  /// @brief Method SetVerticesDirty, addr 0x2bf1a80, size 0xb0, virtual true, abstract: false, final false
  inline void SetVerticesDirty();

  /// @brief Method SetLayoutDirty, addr 0x2bf1b30, size 0xd0, virtual true, abstract: false, final false
  inline void SetLayoutDirty();

  /// @brief Method SetMaterialDirty, addr 0x2bf1c00, size 0x10, virtual true, abstract: false, final false
  inline void SetMaterialDirty();

  /// @brief Method SetAllDirty, addr 0x2bf1c10, size 0x44, virtual true, abstract: false, final false
  inline void SetAllDirty();

  /// @brief Method Rebuild, addr 0x2bf1c54, size 0xe8, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method UpdateMaterial, addr 0x2bf1f98, size 0x134, virtual true, abstract: false, final false
  inline void UpdateMaterial();

  /// @brief Method UpdateMeshPadding, addr 0x2bf20cc, size 0x100, virtual true, abstract: false, final false
  inline void UpdateMeshPadding();

  /// @brief Method ForceMeshUpdate, addr 0x2bf21cc, size 0x14, virtual true, abstract: false, final false
  /// @param ignoreActiveState: bool (default: false)
  /// @param forceTextReparsing: bool (default: false)
  inline void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false);

  /// @brief Method GetTextInfo, addr 0x2bf21e0, size 0x6c, virtual true, abstract: false, final false
  inline ::TMPro::TMP_TextInfo* GetTextInfo(::StringW text);

  /// @brief Method ClearMesh, addr 0x2bf224c, size 0xc0, virtual true, abstract: false, final false
  inline void ClearMesh(bool updateMesh);

  /// @brief Method add_OnPreRenderText, addr 0x2bf230c, size 0xb4, virtual true, abstract: false, final false
  inline void add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  /// @brief Method remove_OnPreRenderText, addr 0x2bf23c0, size 0xb4, virtual true, abstract: false, final false
  inline void remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value);

  /// @brief Method UpdateGeometry, addr 0x2bf2474, size 0x18, virtual true, abstract: false, final false
  inline void UpdateGeometry(::UnityEngine::Mesh* mesh, int32_t index);

  /// @brief Method UpdateVertexData, addr 0x2bf248c, size 0x198, virtual true, abstract: false, final false
  inline void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags flags);

  /// @brief Method UpdateVertexData, addr 0x2bf2624, size 0x198, virtual true, abstract: false, final false
  inline void UpdateVertexData();

  /// @brief Method UpdateFontAsset, addr 0x2bf27bc, size 0x10, virtual false, abstract: false, final false
  inline void UpdateFontAsset();

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x2bf27cc, size 0x4, virtual true, abstract: false, final true
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x2bf27d0, size 0x4, virtual true, abstract: false, final true
  inline void CalculateLayoutInputVertical();

  /// @brief Method Awake, addr 0x2bf27d4, size 0x3a8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnEnable, addr 0x2bf2b7c, size 0xfc, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2bf2c78, size 0xac, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2bf2d24, size 0xcc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method LoadFontAsset, addr 0x2bf2df0, size 0x670, virtual true, abstract: false, final false
  inline void LoadFontAsset();

  /// @brief Method UpdateEnvMapMatrix, addr 0x2bf3460, size 0x27c, virtual false, abstract: false, final false
  inline void UpdateEnvMapMatrix();

  /// @brief Method SetMask, addr 0x2bf1700, size 0x148, virtual false, abstract: false, final false
  inline void SetMask(::TMPro::MaskingTypes maskType);

  /// @brief Method SetMaskCoordinates, addr 0x2bf1890, size 0xa0, virtual false, abstract: false, final false
  inline void SetMaskCoordinates(::UnityEngine::Vector4 coords);

  /// @brief Method SetMaskCoordinates, addr 0x2bf1990, size 0xf0, virtual false, abstract: false, final false
  inline void SetMaskCoordinates(::UnityEngine::Vector4 coords, float_t softX, float_t softY);

  /// @brief Method EnableMasking, addr 0x2bf36dc, size 0xf8, virtual false, abstract: false, final false
  inline void EnableMasking();

  /// @brief Method DisableMasking, addr 0x2bf3854, size 0xf4, virtual false, abstract: false, final false
  inline void DisableMasking();

  /// @brief Method UpdateMask, addr 0x2bf37d4, size 0x80, virtual false, abstract: false, final false
  inline void UpdateMask();

  /// @brief Method GetMaterial, addr 0x2bf3a0c, size 0x110, virtual true, abstract: false, final false
  inline ::UnityEngine::Material* GetMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetMaterials, addr 0x2bf3b1c, size 0x1a8, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> GetMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> mats);

  /// @brief Method SetSharedMaterial, addr 0x2bf3cc4, size 0x38, virtual true, abstract: false, final false
  inline void SetSharedMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetSharedMaterials, addr 0x2bf3cfc, size 0x190, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> GetSharedMaterials();

  /// @brief Method SetSharedMaterials, addr 0x2bf3e8c, size 0x368, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials);

  /// @brief Method SetOutlineThickness, addr 0x2bf41f4, size 0x12c, virtual true, abstract: false, final false
  inline void SetOutlineThickness(float_t thickness);

  /// @brief Method SetFaceColor, addr 0x2bf4320, size 0x128, virtual true, abstract: false, final false
  inline void SetFaceColor(::UnityEngine::Color32 color);

  /// @brief Method SetOutlineColor, addr 0x2bf4448, size 0x128, virtual true, abstract: false, final false
  inline void SetOutlineColor(::UnityEngine::Color32 color);

  /// @brief Method CreateMaterialInstance, addr 0x2bf3948, size 0xc4, virtual false, abstract: false, final false
  inline void CreateMaterialInstance();

  /// @brief Method SetShaderDepth, addr 0x2bf4570, size 0xe8, virtual true, abstract: false, final false
  inline void SetShaderDepth();

  /// @brief Method SetCulling, addr 0x2bf4658, size 0x2a8, virtual true, abstract: false, final false
  inline void SetCulling();

  /// @brief Method SetPerspectiveCorrection, addr 0x2bf4900, size 0x84, virtual false, abstract: false, final false
  inline void SetPerspectiveCorrection();

  /// @brief Method SetArraySizes, addr 0x2bf4984, size 0x1ad0, virtual true, abstract: false, final false
  inline int32_t SetArraySizes(::ArrayW<::TMPro::__TMP_Text__UnicodeChar, ::Array<::TMPro::__TMP_Text__UnicodeChar>*> unicodeChars);

  /// @brief Method ComputeMarginSize, addr 0x2bf6454, size 0x124, virtual true, abstract: false, final false
  inline void ComputeMarginSize();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x2bf6578, size 0x1c, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnTransformParentChanged, addr 0x2bf6594, size 0x30, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x2bf65c4, size 0x17c, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method InternalUpdate, addr 0x2bf6740, size 0x9c, virtual true, abstract: false, final false
  inline void InternalUpdate();

  /// @brief Method OnPreRenderObject, addr 0x2bf1d3c, size 0x25c, virtual false, abstract: false, final false
  inline void OnPreRenderObject();

  /// @brief Method GenerateTextMesh, addr 0x2bdfd98, size 0x7878, virtual true, abstract: false, final false
  inline void GenerateTextMesh();

  /// @brief Method GetTextContainerLocalCorners, addr 0x2bf6a8c, size 0x9c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetTextContainerLocalCorners();

  /// @brief Method SetMeshFilters, addr 0x2bf6b28, size 0x1c0, virtual false, abstract: false, final false
  inline void SetMeshFilters(bool state);

  /// @brief Method SetActiveSubMeshes, addr 0x2bf6ce8, size 0x108, virtual true, abstract: false, final false
  inline void SetActiveSubMeshes(bool state);

  /// @brief Method SetActiveSubTextObjectRenderers, addr 0x2bf6960, size 0x12c, virtual false, abstract: false, final false
  inline void SetActiveSubTextObjectRenderers(bool state);

  /// @brief Method DestroySubMeshObjects, addr 0x2bf6df0, size 0xdc, virtual true, abstract: false, final false
  inline void DestroySubMeshObjects();

  /// @brief Method UpdateSubMeshSortingLayerID, addr 0x2bf10a0, size 0x10c, virtual false, abstract: false, final false
  inline void UpdateSubMeshSortingLayerID(int32_t id);

  /// @brief Method UpdateSubMeshSortingOrder, addr 0x2bf12f4, size 0x10c, virtual false, abstract: false, final false
  inline void UpdateSubMeshSortingOrder(int32_t order);

  /// @brief Method GetCompoundBounds, addr 0x2bf6ecc, size 0x248, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds GetCompoundBounds();

  /// @brief Method UpdateSDFScale, addr 0x2bf67dc, size 0x184, virtual false, abstract: false, final false
  inline void UpdateSDFScale(float_t scaleDelta);

  static inline ::TMPro::TextMeshPro* New_ctor();

  /// @brief Method .ctor, addr 0x2bf7114, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshPro", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextMeshPro(TextMeshPro&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshPro", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextMeshPro(TextMeshPro const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextMeshPro();

public:
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
  ::UnityEngine::Renderer* ___m_renderer;

  /// @brief Field m_meshFilter, offset: 0x6e8, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ___m_meshFilter;

  /// @brief Field m_isFirstAllocation, offset: 0x6f0, size: 0x1, def value: None
  bool ___m_isFirstAllocation;

  /// @brief Field m_max_characters, offset: 0x6f4, size: 0x4, def value: None
  int32_t ___m_max_characters;

  /// @brief Field m_max_numberOfLines, offset: 0x6f8, size: 0x4, def value: None
  int32_t ___m_max_numberOfLines;

  /// @brief Field m_subTextObjects, offset: 0x700, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_SubMesh*, ::Array<::TMPro::TMP_SubMesh*>*> ___m_subTextObjects;

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
