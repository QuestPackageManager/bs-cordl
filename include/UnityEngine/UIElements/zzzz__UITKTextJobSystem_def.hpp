#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextJobSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UITKTextJobSystem)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
namespace UnityEngine::UIElements::UIR {
class MeshGenerationCallback;
}
namespace UnityEngine::UIElements {
struct TempMeshAllocator;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
struct UITKTextJobSystem_GenerateTextJobData;
}
namespace UnityEngine::UIElements {
class UITKTextJobSystem_ManagedJobData;
}
namespace UnityEngine::UIElements {
struct UITKTextJobSystem_PrepareTextJobData;
}
namespace UnityEngine::UIElements {
class UITKTextJobSystem___c;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UITKTextJobSystem;
}
namespace UnityEngine::UIElements {
class UITKTextJobSystem_ManagedJobData;
}
namespace UnityEngine::UIElements {
class UITKTextJobSystem___c;
}
namespace UnityEngine::UIElements {
struct UITKTextJobSystem_GenerateTextJobData;
}
namespace UnityEngine::UIElements {
struct UITKTextJobSystem_PrepareTextJobData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UITKTextJobSystem);
MARK_REF_PTR_T(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData);
MARK_REF_PTR_T(::UnityEngine::UIElements::UITKTextJobSystem___c);
MARK_VAL_T(::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData);
MARK_VAL_T(::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData);
// Dependencies System.Object, UnityEngine.UIElements.MeshGenerationNode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UITKTextJobSystem/ManagedJobData
class CORDL_TYPE UITKTextJobSystem_ManagedJobData : public ::System::Object {
public:
  // Declarations
  /// @brief Field indices, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_indices, put = __cordl_internal_set_indices)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* indices;

  /// @brief Field materials, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_materials, put = __cordl_internal_set_materials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials;

  /// @brief Field node, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::UnityEngine::UIElements::MeshGenerationNode node;

  /// @brief Field prepareSuccess, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_prepareSuccess, put = __cordl_internal_set_prepareSuccess)) bool prepareSuccess;

  /// @brief Field renderModes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_renderModes,
                      put = __cordl_internal_set_renderModes)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* renderModes;

  /// @brief Field vertices, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_vertices,
                      put = __cordl_internal_set_vertices)) ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* vertices;

  /// @brief Field visualElement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_visualElement, put = __cordl_internal_set_visualElement)) ::UnityEngine::UIElements::TextElement* visualElement;

  static inline ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* New_ctor();

  /// @brief Method Release, addr 0x6a74a7c, size 0x170, virtual false, abstract: false, final false
  inline void Release();

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* const& __cordl_internal_get_indices() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*& __cordl_internal_get_indices();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_materials() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_materials();

  constexpr ::UnityEngine::UIElements::MeshGenerationNode const& __cordl_internal_get_node() const;

  constexpr ::UnityEngine::UIElements::MeshGenerationNode& __cordl_internal_get_node();

  constexpr bool const& __cordl_internal_get_prepareSuccess() const;

  constexpr bool& __cordl_internal_get_prepareSuccess();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* const& __cordl_internal_get_renderModes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*& __cordl_internal_get_renderModes();

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* const& __cordl_internal_get_vertices() const;

  constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*& __cordl_internal_get_vertices();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_visualElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_visualElement();

  constexpr void __cordl_internal_set_indices(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* value);

  constexpr void __cordl_internal_set_materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set_node(::UnityEngine::UIElements::MeshGenerationNode value);

  constexpr void __cordl_internal_set_prepareSuccess(bool value);

  constexpr void __cordl_internal_set_renderModes(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* value);

  constexpr void __cordl_internal_set_vertices(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* value);

  constexpr void __cordl_internal_set_visualElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x6a75340, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UITKTextJobSystem_ManagedJobData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UITKTextJobSystem_ManagedJobData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UITKTextJobSystem_ManagedJobData(UITKTextJobSystem_ManagedJobData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UITKTextJobSystem_ManagedJobData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UITKTextJobSystem_ManagedJobData(UITKTextJobSystem_ManagedJobData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5095 };

  /// @brief Field visualElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___visualElement;

  /// @brief Field node, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshGenerationNode ___node;

  /// @brief Field materials, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* ___materials;

  /// @brief Field renderModes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* ___renderModes;

  /// @brief Field vertices, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* ___vertices;

  /// @brief Field indices, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* ___indices;

  /// @brief Field prepareSuccess, offset: 0x40, size: 0x1, def value: None
  bool ___prepareSuccess;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData, ___visualElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData, ___materials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData, ___renderModes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData, ___vertices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData, ___indices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData, ___prepareSuccess) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Runtime.InteropServices.GCHandle
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UITKTextJobSystem/PrepareTextJobData
struct CORDL_TYPE UITKTextJobSystem_PrepareTextJobData {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6a75344, size 0x154, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UITKTextJobSystem_PrepareTextJobData();

  // Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
  constexpr UITKTextJobSystem_PrepareTextJobData(::System::Runtime::InteropServices::GCHandle managedJobDataHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5096 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field managedJobDataHandle, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle managedJobDataHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData, managedJobDataHandle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Runtime.InteropServices.GCHandle, UnityEngine.UIElements.TempMeshAllocator
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UITKTextJobSystem/GenerateTextJobData
struct CORDL_TYPE UITKTextJobSystem_GenerateTextJobData {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6a75498, size 0x1dc, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UITKTextJobSystem_GenerateTextJobData();

  // Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }, CppParam { name: "alloc", ty:
  // "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: None }]
  constexpr UITKTextJobSystem_GenerateTextJobData(::System::Runtime::InteropServices::GCHandle managedJobDataHandle, ::UnityEngine::UIElements::TempMeshAllocator alloc) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5097 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field managedJobDataHandle, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle managedJobDataHandle;

  /// @brief Field alloc, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TempMeshAllocator alloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData, managedJobDataHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData, alloc) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UITKTextJobSystem/<>c
class CORDL_TYPE UITKTextJobSystem___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UITKTextJobSystem___c* __9;

  static inline ::UnityEngine::UIElements::UITKTextJobSystem___c* New_ctor();

  /// @brief Method <.cctor>b__25_0, addr 0x6a756cc, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* __cctor_b__25_0();

  /// @brief Method <.cctor>b__25_1, addr 0x6a75710, size 0x14, virtual false, abstract: false, final false
  inline void __cctor_b__25_1(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* inst);

  /// @brief Method <.cctor>b__25_2, addr 0x6a75724, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* __cctor_b__25_2();

  /// @brief Method <.cctor>b__25_3, addr 0x6a75794, size 0x74, virtual false, abstract: false, final false
  inline void __cctor_b__25_3(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* list);

  /// @brief Method <.cctor>b__25_4, addr 0x6a75808, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* __cctor_b__25_4();

  /// @brief Method <.cctor>b__25_5, addr 0x6a75878, size 0x54, virtual false, abstract: false, final false
  inline void __cctor_b__25_5(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* list);

  /// @brief Method <.cctor>b__25_6, addr 0x6a758cc, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* __cctor_b__25_6();

  /// @brief Method <.cctor>b__25_7, addr 0x6a7593c, size 0x54, virtual false, abstract: false, final false
  inline void __cctor_b__25_7(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* list);

  /// @brief Method <.cctor>b__25_8, addr 0x6a75990, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* __cctor_b__25_8();

  /// @brief Method <.cctor>b__25_9, addr 0x6a75a00, size 0x54, virtual false, abstract: false, final false
  inline void __cctor_b__25_9(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* list);

  /// @brief Method .ctor, addr 0x6a756c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UITKTextJobSystem___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::UITKTextJobSystem___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UITKTextJobSystem___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UITKTextJobSystem___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UITKTextJobSystem___c(UITKTextJobSystem___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UITKTextJobSystem___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UITKTextJobSystem___c(UITKTextJobSystem___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5098 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UITKTextJobSystem___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UITKTextJobSystem
class CORDL_TYPE UITKTextJobSystem : public ::System::Object {
public:
  // Declarations
  using GenerateTextJobData = ::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData;

  using ManagedJobData = ::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData;

  using PrepareTextJobData = ::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData;

  using __c = ::UnityEngine::UIElements::UITKTextJobSystem___c;

  /// @brief Field hasPendingTextWork, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPendingTextWork, put = __cordl_internal_set_hasPendingTextWork)) bool hasPendingTextWork;

  /// @brief Field k_ExecuteMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ExecuteMarker, put = setStaticF_k_ExecuteMarker)) ::Unity::Profiling::ProfilerMarker k_ExecuteMarker;

  /// @brief Field k_PrepareJobifiedMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_PrepareJobifiedMarker, put = setStaticF_k_PrepareJobifiedMarker)) ::Unity::Profiling::ProfilerMarker k_PrepareJobifiedMarker;

  /// @brief Field k_PrepareMainThreadMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_PrepareMainThreadMarker, put = setStaticF_k_PrepareMainThreadMarker)) ::Unity::Profiling::ProfilerMarker k_PrepareMainThreadMarker;

  /// @brief Field k_UpdateMainThreadMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateMainThreadMarker, put = setStaticF_k_UpdateMainThreadMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateMainThreadMarker;

  /// @brief Field m_AddDrawEntriesCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddDrawEntriesCallback,
                      put = __cordl_internal_set_m_AddDrawEntriesCallback)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback* m_AddDrawEntriesCallback;

  /// @brief Field m_GenerateTextJobifiedCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GenerateTextJobifiedCallback,
                      put = __cordl_internal_set_m_GenerateTextJobifiedCallback)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback* m_GenerateTextJobifiedCallback;

  /// @brief Field m_PrepareTextJobifiedCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrepareTextJobifiedCallback,
                      put = __cordl_internal_set_m_PrepareTextJobifiedCallback)) ::UnityEngine::UIElements::UIR::MeshGenerationCallback* m_PrepareTextJobifiedCallback;

  /// @brief Field s_IndicesPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_IndicesPool,
                      put = setStaticF_s_IndicesPool)) ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>* s_IndicesPool;

  /// @brief Field s_JobDataPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_JobDataPool, put = setStaticF_s_JobDataPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* s_JobDataPool;

  /// @brief Field s_MaterialPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MaterialPool,
                      put = setStaticF_s_MaterialPool)) ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* s_MaterialPool;

  /// @brief Field s_RenderModesPool, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_RenderModesPool,
      put = setStaticF_s_RenderModesPool)) ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>* s_RenderModesPool;

  /// @brief Field s_VerticesPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VerticesPool, put = setStaticF_s_VerticesPool)) ::UnityEngine::Pool::ObjectPool_1<
      ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>* s_VerticesPool;

  /// @brief Field textJobDatas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textJobDatas,
                      put = __cordl_internal_set_textJobDatas)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* textJobDatas;

  /// @brief Field textJobDatasHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textJobDatasHandle, put = __cordl_internal_set_textJobDatasHandle)) ::System::Runtime::InteropServices::GCHandle textJobDatasHandle;

  /// @brief Method AddDrawEntries, addr 0x6a74574, size 0x2f0, virtual false, abstract: false, final false
  inline void AddDrawEntries(Il2CppObject* mgc, ::System::Object* _);

  /// @brief Method ConvertMeshInfoToUIRVertex, addr 0x6a73a34, size 0xb40, virtual false, abstract: false, final false
  static inline void ConvertMeshInfoToUIRVertex(::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> meshInfos,
                                                ::UnityEngine::UIElements::TempMeshAllocator alloc, ::UnityEngine::UIElements::TextElement* visualElement,
                                                ::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*> materials,
                                                ::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*> verticesArray,
                                                ::ByRef<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*> indicesArray,
                                                ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*> renderModes);

  /// @brief Method GenerateText, addr 0x6a73444, size 0x18c, virtual false, abstract: false, final false
  inline void GenerateText(Il2CppObject* mgc, ::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method GenerateTextJobified, addr 0x6a7371c, size 0x318, virtual false, abstract: false, final false
  inline void GenerateTextJobified(Il2CppObject* mgc, ::System::Object* _);

  static inline ::UnityEngine::UIElements::UITKTextJobSystem* New_ctor();

  /// @brief Method OnGetManagedJob, addr 0x6a73428, size 0x1c, virtual false, abstract: false, final false
  static inline void OnGetManagedJob(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData* managedJobData);

  /// @brief Method PrepareTextJobified, addr 0x6a735d0, size 0x14c, virtual false, abstract: false, final false
  inline void PrepareTextJobified(Il2CppObject* mgc, ::System::Object* _);

  constexpr bool const& __cordl_internal_get_hasPendingTextWork() const;

  constexpr bool& __cordl_internal_get_hasPendingTextWork();

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_AddDrawEntriesCallback() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_AddDrawEntriesCallback();

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_GenerateTextJobifiedCallback() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_GenerateTextJobifiedCallback();

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& __cordl_internal_get_m_PrepareTextJobifiedCallback() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& __cordl_internal_get_m_PrepareTextJobifiedCallback();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* const& __cordl_internal_get_textJobDatas() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>*& __cordl_internal_get_textJobDatas();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_textJobDatasHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_textJobDatasHandle();

  constexpr void __cordl_internal_set_hasPendingTextWork(bool value);

  constexpr void __cordl_internal_set_m_AddDrawEntriesCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value);

  constexpr void __cordl_internal_set_m_GenerateTextJobifiedCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value);

  constexpr void __cordl_internal_set_m_PrepareTextJobifiedCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* value);

  constexpr void __cordl_internal_set_textJobDatas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* value);

  constexpr void __cordl_internal_set_textJobDatasHandle(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x6a732f4, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ExecuteMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_PrepareJobifiedMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_PrepareMainThreadMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateMainThreadMarker();

  static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>* getStaticF_s_IndicesPool();

  static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* getStaticF_s_JobDataPool();

  static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* getStaticF_s_MaterialPool();

  static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>* getStaticF_s_RenderModesPool();

  static inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>* getStaticF_s_VerticesPool();

  static inline void setStaticF_k_ExecuteMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_PrepareJobifiedMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_PrepareMainThreadMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateMainThreadMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_IndicesPool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>* value);

  static inline void setStaticF_s_JobDataPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* value);

  static inline void setStaticF_s_MaterialPool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>* value);

  static inline void setStaticF_s_RenderModesPool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>* value);

  static inline void
  setStaticF_s_VerticesPool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UITKTextJobSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UITKTextJobSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UITKTextJobSystem(UITKTextJobSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UITKTextJobSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UITKTextJobSystem(UITKTextJobSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5099 };

  /// @brief Field textJobDatasHandle, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___textJobDatasHandle;

  /// @brief Field textJobDatas, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*>* ___textJobDatas;

  /// @brief Field hasPendingTextWork, offset: 0x20, size: 0x1, def value: None
  bool ___hasPendingTextWork;

  /// @brief Field m_PrepareTextJobifiedCallback, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationCallback* ___m_PrepareTextJobifiedCallback;

  /// @brief Field m_GenerateTextJobifiedCallback, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationCallback* ___m_GenerateTextJobifiedCallback;

  /// @brief Field m_AddDrawEntriesCallback, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationCallback* ___m_AddDrawEntriesCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem, ___textJobDatasHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem, ___textJobDatas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem, ___hasPendingTextWork) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem, ___m_PrepareTextJobifiedCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem, ___m_GenerateTextJobifiedCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextJobSystem, ___m_AddDrawEntriesCallback) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UITKTextJobSystem, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UITKTextJobSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UITKTextJobSystem*, "UnityEngine.UIElements", "UITKTextJobSystem");
NEED_NO_BOX(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UITKTextJobSystem_ManagedJobData*, "UnityEngine.UIElements", "UITKTextJobSystem/ManagedJobData");
NEED_NO_BOX(::UnityEngine::UIElements::UITKTextJobSystem___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UITKTextJobSystem___c*, "UnityEngine.UIElements", "UITKTextJobSystem/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UITKTextJobSystem_GenerateTextJobData, "UnityEngine.UIElements", "UITKTextJobSystem/GenerateTextJobData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UITKTextJobSystem_PrepareTextJobData, "UnityEngine.UIElements", "UITKTextJobSystem/PrepareTextJobData");
