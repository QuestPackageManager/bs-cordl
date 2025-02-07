#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SelectionPickerRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SelectionPickerRenderer)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer_ISelectionPickerRenderer;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer_SelectionPickerRendererHDRP;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer_SelectionPickerRendererStandard;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer___c;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer___c__DisplayClass19_0;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer_ISelectionPickerRenderer;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer_SelectionPickerRendererHDRP;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer_SelectionPickerRendererStandard;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer___c;
}
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectionPickerRenderer);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectionPickerRenderer___c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer/ISelectionPickerRenderer
class CORDL_TYPE SelectionPickerRenderer_ISelectionPickerRenderer {
public:
  // Declarations
  /// @brief Method RenderLookupTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> RenderLookupTexture(::UnityEngine::Camera* camera, ::UnityEngine::Shader* shader, ::StringW tag, int32_t width, int32_t height);

  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer_ISelectionPickerRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectionPickerRenderer_ISelectionPickerRenderer(SelectionPickerRenderer_ISelectionPickerRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder
// Dependencies System.Object, UnityEngine.ProBuilder.SelectionPickerRenderer::ISelectionPickerRenderer
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer/SelectionPickerRendererHDRP
class CORDL_TYPE SelectionPickerRenderer_SelectionPickerRendererHDRP : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer"
  constexpr operator ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*() noexcept;

  static inline ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP* New_ctor();

  /// @brief Method RenderLookupTexture, addr 0x4735550, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Texture2D> RenderLookupTexture(::UnityEngine::Camera* camera, ::UnityEngine::Shader* shader, ::StringW tag, int32_t width, int32_t height);

  /// @brief Method .ctor, addr 0x4735558, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer"
  constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* i___UnityEngine__ProBuilder__SelectionPickerRenderer_ISelectionPickerRenderer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionPickerRenderer_SelectionPickerRendererHDRP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer_SelectionPickerRendererHDRP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectionPickerRenderer_SelectionPickerRendererHDRP(SelectionPickerRenderer_SelectionPickerRendererHDRP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer_SelectionPickerRendererHDRP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectionPickerRenderer_SelectionPickerRendererHDRP(SelectionPickerRenderer_SelectionPickerRendererHDRP const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14303 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object, UnityEngine.ProBuilder.SelectionPickerRenderer::ISelectionPickerRenderer
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer/SelectionPickerRendererStandard
class CORDL_TYPE SelectionPickerRenderer_SelectionPickerRendererStandard : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer"
  constexpr operator ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*() noexcept;

  static inline ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard* New_ctor();

  /// @brief Method RenderLookupTexture, addr 0x4735560, size 0x3c0, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Texture2D> RenderLookupTexture(::UnityEngine::Camera* camera, ::UnityEngine::Shader* shader, ::StringW tag, int32_t width, int32_t height);

  /// @brief Method .ctor, addr 0x4735920, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer"
  constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* i___UnityEngine__ProBuilder__SelectionPickerRenderer_ISelectionPickerRenderer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionPickerRenderer_SelectionPickerRendererStandard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer_SelectionPickerRendererStandard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectionPickerRenderer_SelectionPickerRendererStandard(SelectionPickerRenderer_SelectionPickerRendererStandard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer_SelectionPickerRendererStandard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectionPickerRenderer_SelectionPickerRendererStandard(SelectionPickerRenderer_SelectionPickerRendererStandard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14304 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer/<>c
class CORDL_TYPE SelectionPickerRenderer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::SelectionPickerRenderer___c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__24_0;

  static inline ::UnityEngine::ProBuilder::SelectionPickerRenderer___c* New_ctor();

  /// @brief Method <GenerateFacePickingObjects>b__24_0, addr 0x473598c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _GenerateFacePickingObjects_b__24_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x4735984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::SelectionPickerRenderer___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__24_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::SelectionPickerRenderer___c* value);

  static inline void setStaticF___9__24_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionPickerRenderer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectionPickerRenderer___c(SelectionPickerRenderer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectionPickerRenderer___c(SelectionPickerRenderer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14305 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectionPickerRenderer___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer/<>c__DisplayClass19_0
class CORDL_TYPE SelectionPickerRenderer___c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field positions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_positions, put = __cordl_internal_set_positions)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions;

  /// @brief Field sharedVertices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sharedVertices,
                      put = __cordl_internal_set_sharedVertices)) ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
      sharedVertices;

  static inline ::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0* New_ctor();

  /// @brief Method <PickVerticesInRect>b__0, addr 0x47359ac, size 0x68, virtual false, abstract: false, final false
  inline int32_t _PickVerticesInRect_b__0(int32_t x);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_positions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_positions();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const& __cordl_internal_get_sharedVertices() const;

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& __cordl_internal_get_sharedVertices();

  constexpr void __cordl_internal_set_positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_sharedVertices(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  /// @brief Method .ctor, addr 0x47359a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionPickerRenderer___c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectionPickerRenderer___c__DisplayClass19_0(SelectionPickerRenderer___c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectionPickerRenderer___c__DisplayClass19_0(SelectionPickerRenderer___c__DisplayClass19_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14306 };

  /// @brief Field positions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___positions;

  /// @brief Field sharedVertices, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> ___sharedVertices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0, ___positions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0, ___sharedVertices) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object, UnityEngine.Color, UnityEngine.RenderTextureFormat
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SelectionPickerRenderer
class CORDL_TYPE SelectionPickerRenderer : public ::System::Object {
public:
  // Declarations
  using ISelectionPickerRenderer = ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer;

  using SelectionPickerRendererHDRP = ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP;

  using SelectionPickerRendererStandard = ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard;

  using __c = ::UnityEngine::ProBuilder::SelectionPickerRenderer___c;

  using __c__DisplayClass19_0 = ::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0;

  /// @brief Field k_Blackf, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_Blackf, put = setStaticF_k_Blackf)) ::UnityEngine::Color k_Blackf;

  /// @brief Field k_Whitef, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_Whitef, put = setStaticF_k_Whitef)) ::UnityEngine::Color k_Whitef;

  /// @brief Field s_Initialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_Initialized, put = setStaticF_s_Initialized)) bool s_Initialized;

  /// @brief Field s_PickerRenderer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PickerRenderer, put = setStaticF_s_PickerRenderer)) ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* s_PickerRenderer;

  /// @brief Field s_PreferredFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PreferredFormats, put = setStaticF_s_PreferredFormats)) ::ArrayW<::UnityEngine::RenderTextureFormat, ::Array<::UnityEngine::RenderTextureFormat>*>
      s_PreferredFormats;

  /// @brief Field s_RenderTextureFormat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_RenderTextureFormat, put = setStaticF_s_RenderTextureFormat)) ::UnityEngine::RenderTextureFormat s_RenderTextureFormat;

  /// @brief Method BuildEdgeMesh, addr 0x4734fa8, size 0x4e8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> BuildEdgeMesh(
      ::UnityEngine::ProBuilder::ProBuilderMesh* pb,
      ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>* map,
      ::ByRef<uint32_t> index);

  /// @brief Method BuildVertexMesh, addr 0x4734808, size 0x7a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh>
  BuildVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh* pb,
                  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>* map,
                  ::ByRef<uint32_t> index);

  /// @brief Method DecodeRGBA, addr 0x4733458, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t DecodeRGBA(::UnityEngine::Color32 color);

  /// @brief Method EncodeRGBA, addr 0x47347f4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 EncodeRGBA(uint32_t hash);

  /// @brief Method GenerateEdgePickingObjects, addr 0x47343c4, size 0x430, virtual false, abstract: false, final false
  static inline void GenerateEdgePickingObjects(
      ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
      ::ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>
          map,
      ::ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>> depthObjects,
      ::ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>> pickerObjects);

  /// @brief Method GenerateFacePickingObjects, addr 0x4733a2c, size 0x568, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> GenerateFacePickingObjects(
      ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection,
      ::ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>
          map);

  /// @brief Method GenerateVertexPickingObjects, addr 0x4733f94, size 0x430, virtual false, abstract: false, final false
  static inline void GenerateVertexPickingObjects(
      ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
      ::ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*> map,
      ::ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>> depthObjects,
      ::ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>> pickerObjects);

  /// @brief Method PickEdgesInRect, addr 0x473240c, size 0x798, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*
  PickEdgesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection,
                  bool doDepthTest, int32_t renderTextureWidth, int32_t renderTextureHeight);

  /// @brief Method PickFacesInRect, addr 0x4731558, size 0x5d0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*
  PickFacesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection,
                  int32_t renderTextureWidth, int32_t renderTextureHeight);

  /// @brief Method PickVerticesInRect, addr 0x472fcac, size 0x968, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<int32_t>*>*
  PickVerticesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection,
                     bool doDepthTest, int32_t renderTextureWidth, int32_t renderTextureHeight);

  /// @brief Method RenderSelectionPickerTexture, addr 0x473374c, size 0x2e0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> RenderSelectionPickerTexture(
      ::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
      ::ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>
          map,
      int32_t width, int32_t height);

  /// @brief Method RenderSelectionPickerTexture, addr 0x473346c, size 0x2e0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> RenderSelectionPickerTexture(
      ::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
      ::ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*> map, int32_t width,
      int32_t height);

  /// @brief Method RenderSelectionPickerTexture, addr 0x473320c, size 0x24c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> RenderSelectionPickerTexture(
      ::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection,
      ::ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>
          map,
      int32_t width, int32_t height);

  /// @brief Method ShouldUseHDRP, addr 0x4733204, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldUseHDRP();

  static inline ::UnityEngine::Color getStaticF_k_Blackf();

  static inline ::UnityEngine::Color getStaticF_k_Whitef();

  static inline bool getStaticF_s_Initialized();

  static inline ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* getStaticF_s_PickerRenderer();

  static inline ::ArrayW<::UnityEngine::RenderTextureFormat, ::Array<::UnityEngine::RenderTextureFormat>*> getStaticF_s_PreferredFormats();

  static inline ::UnityEngine::RenderTextureFormat getStaticF_s_RenderTextureFormat();

  /// @brief Method get_pickerRenderer, addr 0x4733134, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* get_pickerRenderer();

  /// @brief Method get_renderTextureFormat, addr 0x4732fd0, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureFormat get_renderTextureFormat();

  /// @brief Method get_textureFormat, addr 0x473312c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextureFormat get_textureFormat();

  static inline void setStaticF_k_Blackf(::UnityEngine::Color value);

  static inline void setStaticF_k_Whitef(::UnityEngine::Color value);

  static inline void setStaticF_s_Initialized(bool value);

  static inline void setStaticF_s_PickerRenderer(::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* value);

  static inline void setStaticF_s_PreferredFormats(::ArrayW<::UnityEngine::RenderTextureFormat, ::Array<::UnityEngine::RenderTextureFormat>*> value);

  static inline void setStaticF_s_RenderTextureFormat(::UnityEngine::RenderTextureFormat value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionPickerRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectionPickerRenderer(SelectionPickerRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectionPickerRenderer(SelectionPickerRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14307 };

  /// @brief Field k_FacePickerOcclusionTintUniform offset 0xffffffff size 0x8
  static constexpr ::ConstString k_FacePickerOcclusionTintUniform{ u"_Tint" };

  /// @brief Field k_MinEdgePixelsForValidSelection offset 0xffffffff size 0x4
  static constexpr uint32_t k_MinEdgePixelsForValidSelection{ static_cast<uint32_t>(0x1u) };

  /// @brief Field k_PickerHashMax offset 0xffffffff size 0x4
  static constexpr uint32_t k_PickerHashMax{ static_cast<uint32_t>(0xffffffu) };

  /// @brief Field k_PickerHashMin offset 0xffffffff size 0x4
  static constexpr uint32_t k_PickerHashMin{ static_cast<uint32_t>(0x1u) };

  /// @brief Field k_PickerHashNone offset 0xffffffff size 0x4
  static constexpr uint32_t k_PickerHashNone{ static_cast<uint32_t>(0x0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectionPickerRenderer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPickerRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPickerRenderer*, "UnityEngine.ProBuilder", "SelectionPickerRenderer");
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/ISelectionPickerRenderer");
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/SelectionPickerRendererHDRP");
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/SelectionPickerRendererStandard");
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPickerRenderer___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPickerRenderer___c*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/<>c__DisplayClass19_0");
