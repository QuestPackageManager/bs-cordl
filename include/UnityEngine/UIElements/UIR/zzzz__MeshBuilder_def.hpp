#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuilder)
namespace GlobalNamespace {
class __MeshBuilder__AllocMeshData__Allocator;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__AllocMeshData;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class __MeshBuilder__AllocMeshData__Allocator;
}
namespace UnityEngine::UIElements::UIR {
class MeshBuilder;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__AllocMeshData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::MeshBuilder);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData);
// Type: ::Allocator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MeshBuilder::AllocMeshData::Allocator*
class CORDL_TYPE __MeshBuilder__AllocMeshData__Allocator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x49432f0, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshWriteData* Invoke(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData);

  static inline ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4943264, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__AllocMeshData__Allocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MeshBuilder__AllocMeshData__Allocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshBuilder__AllocMeshData__Allocator(__MeshBuilder__AllocMeshData__Allocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshBuilder__AllocMeshData__Allocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshBuilder__AllocMeshData__Allocator(__MeshBuilder__AllocMeshData__Allocator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AllocMeshData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::MeshBuilder::AllocMeshData
struct CORDL_TYPE __MeshBuilder__AllocMeshData {
public:
  // Declarations
  using Allocator = ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator;

  /// @brief Method Allocate, addr 0x4943108, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshWriteData* Allocate(uint32_t vertexCount, uint32_t indexCount);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__AllocMeshData();

  // Ctor Parameters [CppParam { name: "alloc", ty: "::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*", modifiers: "", def_value: None }, CppParam { name: "texture", ty:
  // "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "svgTexture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name:
  // "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags", modifiers:
  // "", def_value: None }, CppParam { name: "colorAlloc", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }]
  constexpr __MeshBuilder__AllocMeshData(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* alloc, ::UnityW<::UnityEngine::Texture> texture, ::UnityEngine::UIElements::TextureId svgTexture,
                                         ::UnityW<::UnityEngine::Material> material, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags,
                                         ::UnityEngine::UIElements::UIR::BMPAlloc colorAlloc) noexcept;

  /// @brief Field alloc, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* alloc;

  /// @brief Field texture, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> texture;

  /// @brief Field svgTexture, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId svgTexture;

  /// @brief Field material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field flags, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags;

  /// @brief Field colorAlloc, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc colorAlloc;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6344 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, alloc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, texture) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, svgTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, flags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, colorAlloc) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::MeshBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::MeshBuilder*
class CORDL_TYPE MeshBuilder : public ::System::Object {
public:
  // Declarations
  using AllocMeshData = ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData;

  /// @brief Field s_MaxTextMeshVertices, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_MaxTextMeshVertices, put = setStaticF_s_MaxTextMeshVertices)) int32_t s_MaxTextMeshVertices;

  /// @brief Field s_VectorGraphics9Slice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphics9Slice, put = setStaticF_s_VectorGraphics9Slice)) ::Unity::Profiling::ProfilerMarker s_VectorGraphics9Slice;

  /// @brief Field s_VectorGraphicsScaleTriangle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphicsScaleTriangle, put = setStaticF_s_VectorGraphicsScaleTriangle)) ::Unity::Profiling::ProfilerMarker s_VectorGraphicsScaleTriangle;

  /// @brief Field s_VectorGraphicsSplitTriangle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphicsSplitTriangle, put = setStaticF_s_VectorGraphicsSplitTriangle)) ::Unity::Profiling::ProfilerMarker s_VectorGraphicsSplitTriangle;

  /// @brief Field s_VectorGraphicsStretch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphicsStretch, put = setStaticF_s_VectorGraphicsStretch)) ::Unity::Profiling::ProfilerMarker s_VectorGraphicsStretch;

  /// @brief Method ConvertTextVertexToUIRVertex, addr 0x4942a08, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Vertex ConvertTextVertexToUIRVertex(::UnityEngine::TextCore::Text::MeshInfo info, int32_t index, ::UnityEngine::Vector2 offset,
                                                                               ::UnityEngine::UIElements::UIR::VertexFlags flags, bool isDynamicColor);

  /// @brief Method LimitTextVertices, addr 0x4942b08, size 0x130, virtual false, abstract: false, final false
  static inline int32_t LimitTextVertices(int32_t vertexCount, bool logTruncation);

  /// @brief Method MakeText, addr 0x4942c38, size 0x4d0, virtual false, abstract: false, final false
  static inline void MakeText(::UnityEngine::TextCore::Text::MeshInfo meshInfo, ::UnityEngine::Vector2 offset, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc,
                              ::UnityEngine::UIElements::UIR::VertexFlags flags, bool isDynamicColor);

  static inline int32_t getStaticF_s_MaxTextMeshVertices();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphics9Slice();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphicsScaleTriangle();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphicsSplitTriangle();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphicsStretch();

  static inline void setStaticF_s_MaxTextMeshVertices(int32_t value);

  static inline void setStaticF_s_VectorGraphics9Slice(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_VectorGraphicsScaleTriangle(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_VectorGraphicsSplitTriangle(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_VectorGraphicsStretch(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshBuilder(MeshBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshBuilder(MeshBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::MeshBuilder, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*, "UnityEngine.UIElements.UIR", "MeshBuilder/AllocMeshData/Allocator");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::MeshBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshBuilder*, "UnityEngine.UIElements.UIR", "MeshBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, "UnityEngine.UIElements.UIR", "MeshBuilder/AllocMeshData");
