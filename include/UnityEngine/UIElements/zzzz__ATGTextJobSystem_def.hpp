#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ATGTextJobSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include "beatsaber-hook/shared/valuew.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ATGTextJobSystem)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::Text {
struct ATGMeshInfo;
}
namespace UnityEngine::UIElements::UIR {
class MeshGenerationCallback;
}
namespace UnityEngine::UIElements {
struct ATGTextJobSystem_ConvertToUIRVertexJobData;
}
namespace UnityEngine::UIElements {
struct ATGTextJobSystem_GenerateTextJobData;
}
namespace UnityEngine::UIElements {
class ATGTextJobSystem_ManagedJobData;
}
namespace UnityEngine::UIElements {
struct ATGTextJobSystem_PrepareShapingJob;
}
namespace UnityEngine::UIElements {
class ATGTextJobSystem___c;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct TempMeshAllocator;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ATGTextJobSystem;
}
namespace UnityEngine::UIElements {
class ATGTextJobSystem_ManagedJobData;
}
namespace UnityEngine::UIElements {
class ATGTextJobSystem___c;
}
namespace UnityEngine::UIElements {
struct ATGTextJobSystem_ConvertToUIRVertexJobData;
}
namespace UnityEngine::UIElements {
struct ATGTextJobSystem_GenerateTextJobData;
}
namespace UnityEngine::UIElements {
struct ATGTextJobSystem_PrepareShapingJob;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ATGTextJobSystem*);
MARK_REF_T(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*);
MARK_REF_T(::UnityEngine::UIElements::ATGTextJobSystem___c*);
MARK_VAL_T(::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData);
MARK_VAL_T(::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData);
MARK_VAL_T(::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ATGTextJobSystem*, "UnityEngine.UIElements", "ATGTextJobSystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*, "UnityEngine.UIElements", "ATGTextJobSystem/ManagedJobData");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ATGTextJobSystem___c*, "UnityEngine.UIElements", "ATGTextJobSystem/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData, "UnityEngine.UIElements", "ATGTextJobSystem/ConvertToUIRVertexJobData");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData, "UnityEngine.UIElements", "ATGTextJobSystem/GenerateTextJobData");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob, "UnityEngine.UIElements", "ATGTextJobSystem/PrepareShapingJob");
// Dependencies System.Object, UnityEngine.UIElements.MeshGenerationNode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ATGTextJobSystem/ManagedJobData
class CORDL_TYPE ATGTextJobSystem_ManagedJobData : public ::System::Object {
public:
  // Declarations
  /// @brief Field atlases, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_atlases, put = __cordl_internal_set_atlases)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* atlases;

  /// @brief Field hasMissingGlyphs, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_hasMissingGlyphs, put = __cordl_internal_set_hasMissingGlyphs)) bool hasMissingGlyphs;

  /// @brief Field hasMultipleColorsByMesh, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_hasMultipleColorsByMesh, put = __cordl_internal_set_hasMultipleColorsByMesh)) ::System::Collections::Generic::List_1<bool>* hasMultipleColorsByMesh;

  /// @brief Field indices, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_indices, put = __cordl_internal_set_indices)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* indices;

  /// @brief Field missingGlyphsPerFontAsset, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get_missingGlyphsPerFontAsset,
      put = __cordl_internal_set_missingGlyphsPerFontAsset)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* missingGlyphsPerFontAsset;

  /// @brief Field node, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::UnityEngine::UIElements::MeshGenerationNode node;

  /// @brief Field renderModes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_renderModes,
                      put = __cordl_internal_set_renderModes)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* renderModes;

  /// @brief Field sdfScales, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_sdfScales, put = __cordl_internal_set_sdfScales)) ::System::Collections::Generic::List_1<float_t>* sdfScales;

  /// @brief Field success, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_success, put = __cordl_internal_set_success)) bool success;

  /// @brief Field textElement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textElement, put = __cordl_internal_set_textElement)) ::UnityEngine::UIElements::TextElement* textElement;

  /// @brief Field textElementIndicesByMesh, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_textElementIndicesByMesh, put = __cordl_internal_set_textElementIndicesByMesh)) ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>* textElementIndicesByMesh;

  /// @brief Field textInfo, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_textInfo, put = __cordl_internal_set_textInfo)) ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> textInfo;

  /// @brief Field vertices, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_vertices,
                      put = __cordl_internal_set_vertices)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* vertices;

  /// @brief Method Clear, addr 0x7124be8, size 0x408, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_atlases() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_atlases();

  constexpr bool const& __cordl_internal_get_hasMissingGlyphs() const;

  constexpr bool& __cordl_internal_get_hasMissingGlyphs();

  constexpr ::System::Collections::Generic::List_1<bool>* const& __cordl_internal_get_hasMultipleColorsByMesh() const;

  constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_hasMultipleColorsByMesh();

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* const& __cordl_internal_get_indices() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*& __cordl_internal_get_indices();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* const& __cordl_internal_get_missingGlyphsPerFontAsset() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*& __cordl_internal_get_missingGlyphsPerFontAsset();

  constexpr ::UnityEngine::UIElements::MeshGenerationNode const& __cordl_internal_get_node() const;

  constexpr ::UnityEngine::UIElements::MeshGenerationNode& __cordl_internal_get_node();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* const& __cordl_internal_get_renderModes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*& __cordl_internal_get_renderModes();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_sdfScales() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_sdfScales();

  constexpr bool const& __cordl_internal_get_success() const;

  constexpr bool& __cordl_internal_get_success();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_textElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_textElement();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>* const&
  __cordl_internal_get_textElementIndicesByMesh() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*& __cordl_internal_get_textElementIndicesByMesh();

  constexpr ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> const& __cordl_internal_get_textInfo() const;

  constexpr ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">& __cordl_internal_get_textInfo();

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* const& __cordl_internal_get_vertices() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*& __cordl_internal_get_vertices();

  constexpr void __cordl_internal_set_atlases(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* value);

  constexpr void __cordl_internal_set_hasMissingGlyphs(bool value);

  constexpr void __cordl_internal_set_hasMultipleColorsByMesh(::System::Collections::Generic::List_1<bool>* value);

  constexpr void __cordl_internal_set_indices(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* value);

  constexpr void __cordl_internal_set_missingGlyphsPerFontAsset(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* value);

  constexpr void __cordl_internal_set_node(::UnityEngine::UIElements::MeshGenerationNode value);

  constexpr void __cordl_internal_set_renderModes(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* value);

  constexpr void __cordl_internal_set_sdfScales(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set_success(bool value);

  constexpr void __cordl_internal_set_textElement(::UnityEngine::UIElements::TextElement* value);

  constexpr void
  __cordl_internal_set_textElementIndicesByMesh(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>* value);

  constexpr void __cordl_internal_set_textInfo(::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> value);

  constexpr void __cordl_internal_set_vertices(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* value);

  /// @brief Method .ctor, addr 0x7124ff0, size 0x290, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ATGTextJobSystem_ManagedJobData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem_ManagedJobData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ATGTextJobSystem_ManagedJobData(ATGTextJobSystem_ManagedJobData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem_ManagedJobData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ATGTextJobSystem_ManagedJobData(ATGTextJobSystem_ManagedJobData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5170 };

  /// @brief Field textElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___textElement;

  /// @brief Field node, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshGenerationNode ___node;

  /// @brief Field textInfo, offset: 0x20, size: 0x18, def value: None
  ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> ___textInfo;

  /// @brief Field success, offset: 0x38, size: 0x1, def value: None
  bool ___success;

  /// @brief Field atlases, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* ___atlases;

  /// @brief Field sdfScales, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ___sdfScales;

  /// @brief Field vertices, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* ___vertices;

  /// @brief Field indices, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* ___indices;

  /// @brief Field renderModes, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* ___renderModes;

  /// @brief Field textElementIndicesByMesh, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>* ___textElementIndicesByMesh;

  /// @brief Field hasMultipleColorsByMesh, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<bool>* ___hasMultipleColorsByMesh;

  /// @brief Field missingGlyphsPerFontAsset, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* ___missingGlyphsPerFontAsset;

  /// @brief Field hasMissingGlyphs, offset: 0x80, size: 0x1, def value: None
  bool ___hasMissingGlyphs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___textElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___textInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___success) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___atlases) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___sdfScales) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___vertices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___indices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___renderModes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___textElementIndicesByMesh) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___hasMultipleColorsByMesh) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___missingGlyphsPerFontAsset) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData, ___hasMissingGlyphs) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData) == 0x88, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Runtime.InteropServices.GCHandle
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ATGTextJobSystem/PrepareShapingJob
struct CORDL_TYPE ATGTextJobSystem_PrepareShapingJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x7125280, size 0x118, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ATGTextJobSystem_PrepareShapingJob();

  // Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }]
  constexpr ATGTextJobSystem_PrepareShapingJob(::System::Runtime::InteropServices::GCHandle managedJobDataHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5171 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field managedJobDataHandle, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle managedJobDataHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob, managedJobDataHandle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob) == 0x8, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Runtime.InteropServices.GCHandle, UnityEngine.UIElements.TempMeshAllocator
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ATGTextJobSystem/GenerateTextJobData
struct CORDL_TYPE ATGTextJobSystem_GenerateTextJobData {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x71226f8, size 0x2bc, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ATGTextJobSystem_GenerateTextJobData();

  // Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "alloc", ty:
  // "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: None, comment: None }]
  constexpr ATGTextJobSystem_GenerateTextJobData(::System::Runtime::InteropServices::GCHandle managedJobDataHandle, ::UnityEngine::UIElements::TempMeshAllocator alloc) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5172 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field managedJobDataHandle, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle managedJobDataHandle;

  /// [ReadOnly]
  /// @brief Field alloc, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TempMeshAllocator alloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData, managedJobDataHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData, alloc) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Runtime.InteropServices.GCHandle, UnityEngine.UIElements.TempMeshAllocator
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ATGTextJobSystem/ConvertToUIRVertexJobData
struct CORDL_TYPE ATGTextJobSystem_ConvertToUIRVertexJobData {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x7125398, size 0x1ec, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ATGTextJobSystem_ConvertToUIRVertexJobData();

  // Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "alloc", ty:
  // "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: None, comment: None }]
  constexpr ATGTextJobSystem_ConvertToUIRVertexJobData(::System::Runtime::InteropServices::GCHandle managedJobDataHandle, ::UnityEngine::UIElements::TempMeshAllocator alloc) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5173 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field managedJobDataHandle, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle managedJobDataHandle;

  /// [ReadOnly]
  /// @brief Field alloc, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TempMeshAllocator alloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData, managedJobDataHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData, alloc) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ATGTextJobSystem/<>c
class CORDL_TYPE ATGTextJobSystem___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::ATGTextJobSystem___c* __9;

  static inline ::UnityEngine::UIElements::ATGTextJobSystem___c* New_ctor();

  /// @brief Method <.cctor>b__26_0, addr 0x71255dc, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* __cctor_b__26_0();

  /// @brief Method <.cctor>b__26_1, addr 0x7125630, size 0x14, virtual false, abstract: false, final false
  inline void __cctor_b__26_1(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* inst);

  /// @brief Method <.cctor>b__26_2, addr 0x7125644, size 0x94, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* __cctor_b__26_2();

  /// @brief Method <.cctor>b__26_3, addr 0x71256d8, size 0x14c, virtual false, abstract: false, final false
  inline void __cctor_b__26_3(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>* dict);

  /// @brief Method .ctor, addr 0x71255d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ATGTextJobSystem___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::ATGTextJobSystem___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ATGTextJobSystem___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ATGTextJobSystem___c(ATGTextJobSystem___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ATGTextJobSystem___c(ATGTextJobSystem___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5174 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ATGTextJobSystem___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ATGTextJobSystem
class CORDL_TYPE ATGTextJobSystem : public ::System::Object {
public:
  // Declarations
  using ConvertToUIRVertexJobData = ::UnityEngine::UIElements::ATGTextJobSystem_ConvertToUIRVertexJobData;

  using GenerateTextJobData = ::UnityEngine::UIElements::ATGTextJobSystem_GenerateTextJobData;

  using ManagedJobData = ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData;

  using PrepareShapingJob = ::UnityEngine::UIElements::ATGTextJobSystem_PrepareShapingJob;

  using __c = ::UnityEngine::UIElements::ATGTextJobSystem___c;

  /// @brief Field hasPendingTextWork, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPendingTextWork, put = __cordl_internal_set_hasPendingTextWork)) bool hasPendingTextWork;

  /// @brief Field k_ATGTextJobMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ATGTextJobMarker, put = setStaticF_k_ATGTextJobMarker)) ::Unity::Profiling::ProfilerMarker k_ATGTextJobMarker;

  /// @brief Field k_GenerateTextMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateTextMarker, put = setStaticF_k_GenerateTextMarker)) ::Unity::Profiling::ProfilerMarker k_GenerateTextMarker;

  /// @brief Field k_IsMultiThreaded, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_k_IsMultiThreaded, put = setStaticF_k_IsMultiThreaded)) bool k_IsMultiThreaded;

  /// @brief Field k_PrepareShapingMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_PrepareShapingMarker, put = setStaticF_k_PrepareShapingMarker)) ::Unity::Profiling::ProfilerMarker k_PrepareShapingMarker;

  /// @brief Field m_AddDrawEntriesCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddDrawEntriesCallback,
                      put = __cordl_internal_set_m_AddDrawEntriesCallback)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback* m_AddDrawEntriesCallback;

  /// @brief Field m_GenerateTextJobifiedCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GenerateTextJobifiedCallback,
                      put = __cordl_internal_set_m_GenerateTextJobifiedCallback)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback* m_GenerateTextJobifiedCallback;

  /// @brief Field m_PopulateGlyphsCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PopulateGlyphsCallback,
                      put = __cordl_internal_set_m_PopulateGlyphsCallback)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback* m_PopulateGlyphsCallback;

  /// @brief Field m_PrepareShapingDataList, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrepareShapingDataList,
                      put = __cordl_internal_set_m_PrepareShapingDataList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextElement*>* m_PrepareShapingDataList;

  /// @brief Field s_AggregatedMissingGlyphsPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_AggregatedMissingGlyphsPool, put = setStaticF_s_AggregatedMissingGlyphsPool)) ::UnityEngine::Pool::ObjectPool_1<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>* s_AggregatedMissingGlyphsPool;

  /// @brief Field s_GlyphsToAddBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GlyphsToAddBuffer, put = setStaticF_s_GlyphsToAddBuffer)) ::System::Collections::Generic::List_1<uint32_t>* s_GlyphsToAddBuffer;

  /// @brief Field s_JobDataPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_JobDataPool, put = setStaticF_s_JobDataPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* s_JobDataPool;

  /// @brief Field textJobDatas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textJobDatas,
                      put = __cordl_internal_set_textJobDatas)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* textJobDatas;

  /// @brief Field textJobDatasHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textJobDatasHandle, put = __cordl_internal_set_textJobDatasHandle)) ::System::Runtime::InteropServices::GCHandle textJobDatasHandle;

  /// @brief Method AddDrawEntries, addr 0x7123254, size 0x3c4, virtual false, abstract: false, final false
  inline void AddDrawEntries(Il2CppObject* mgc, ::System::Object* _);

  /// @brief Method ConvertMeshInfoToUIRVertex, addr 0x71239d0, size 0xe48, virtual false, abstract: false, final false
  static inline void ConvertMeshInfoToUIRVertex(
      ::System::Span_1<::UnityEngine::TextCore::Text::ATGMeshInfo> meshInfos, ::UnityEngine::UIElements::TempMeshAllocator alloc, ::UnityEngine::UIElements::TextElement* visualElement,
      ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>* textElementIndicesByMesh,
      ::System::Collections::Generic::List_1<bool>* hasMultipleColorsByMesh, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*> atlases,
      ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*> verticesArray,
      ::by_ref<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*> indicesArray,
      ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*> renderModes, ::by_ref<::System::Collections::Generic::List_1<float_t>*> sdfScales);

  /// @brief Method GenerateText, addr 0x7122300, size 0x1b8, virtual false, abstract: false, final false
  inline void GenerateText(Il2CppObject* mgc, ::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method GenerateTextJobified, addr 0x71224b8, size 0x240, virtual false, abstract: false, final false
  inline void GenerateTextJobified(Il2CppObject* mgc, ::System::Object* _);

  static inline ::UnityEngine::UIElements::ATGTextJobSystem* New_ctor();

  /// @brief Method PopulateGlyphs, addr 0x71229b4, size 0x8a0, virtual false, abstract: false, final false
  inline void PopulateGlyphs(Il2CppObject* mgc, ::System::Object* _);

  /// @brief Method PrepareShapingBeforeLayout, addr 0x7121d54, size 0x538, virtual false, abstract: false, final false
  inline void PrepareShapingBeforeLayout(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method PrepareTextElementForJobsOnMainThread, addr 0x7121c1c, size 0x138, virtual false, abstract: false, final false
  static inline bool PrepareTextElementForJobsOnMainThread(::UnityEngine::UIElements::TextElement* textElement);

  constexpr bool const& __cordl_internal_get_hasPendingTextWork() const;

  constexpr bool& __cordl_internal_get_hasPendingTextWork();

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_AddDrawEntriesCallback() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_AddDrawEntriesCallback();

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_GenerateTextJobifiedCallback() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_GenerateTextJobifiedCallback();

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_PopulateGlyphsCallback() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_PopulateGlyphsCallback();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextElement*>* const& __cordl_internal_get_m_PrepareShapingDataList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextElement*>*& __cordl_internal_get_m_PrepareShapingDataList();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* const& __cordl_internal_get_textJobDatas() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*& __cordl_internal_get_textJobDatas();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_textJobDatasHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_textJobDatasHandle();

  constexpr void __cordl_internal_set_hasPendingTextWork(bool value);

  constexpr void __cordl_internal_set_m_AddDrawEntriesCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value);

  constexpr void __cordl_internal_set_m_GenerateTextJobifiedCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value);

  constexpr void __cordl_internal_set_m_PopulateGlyphsCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value);

  constexpr void __cordl_internal_set_m_PrepareShapingDataList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextElement*>* value);

  constexpr void __cordl_internal_set_textJobDatas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* value);

  constexpr void __cordl_internal_set_textJobDatasHandle(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x7121aa0, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ATGTextJobMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextMarker();

  static inline bool getStaticF_k_IsMultiThreaded();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_PrepareShapingMarker();

  static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>*
  getStaticF_s_AggregatedMissingGlyphsPool();

  static inline ::System::Collections::Generic::List_1<uint32_t>* getStaticF_s_GlyphsToAddBuffer();

  static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* getStaticF_s_JobDataPool();

  static inline void setStaticF_k_ATGTextJobMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateTextMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_IsMultiThreaded(bool value);

  static inline void setStaticF_k_PrepareShapingMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void
  setStaticF_s_AggregatedMissingGlyphsPool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::HashSet_1<uint32_t>*>*>* value);

  static inline void setStaticF_s_GlyphsToAddBuffer(::System::Collections::Generic::List_1<uint32_t>* value);

  static inline void setStaticF_s_JobDataPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ATGTextJobSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ATGTextJobSystem(ATGTextJobSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ATGTextJobSystem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ATGTextJobSystem(ATGTextJobSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5175 };

  /// @brief Field textJobDatasHandle, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___textJobDatasHandle;

  /// @brief Field textJobDatas, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* ___textJobDatas;

  /// @brief Field hasPendingTextWork, offset: 0x20, size: 0x1, def value: None
  bool ___hasPendingTextWork;

  /// @brief Field m_GenerateTextJobifiedCallback, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationCallback* ___m_GenerateTextJobifiedCallback;

  /// @brief Field m_PopulateGlyphsCallback, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationCallback* ___m_PopulateGlyphsCallback;

  /// @brief Field m_AddDrawEntriesCallback, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationCallback* ___m_AddDrawEntriesCallback;

  /// @brief Field m_PrepareShapingDataList, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextElement*>* ___m_PrepareShapingDataList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___textJobDatasHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___textJobDatas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___hasPendingTextWork) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___m_GenerateTextJobifiedCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___m_PopulateGlyphsCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___m_AddDrawEntriesCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ATGTextJobSystem, ___m_PrepareShapingDataList) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ATGTextJobSystem) == 0x48, "Size mismatch!");

} // namespace UnityEngine::UIElements
