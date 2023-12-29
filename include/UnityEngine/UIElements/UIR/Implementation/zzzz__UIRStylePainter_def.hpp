#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRStylePainter)
namespace UnityEngine::UIElements::UIR {
class VectorImageManager;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__Entry;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__AllocMeshData;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class __MeshBuilder__AllocMeshData__Allocator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class IStylePainter;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements::UIR::Implementation {
template <typename T> struct __UIRStylePainter__TempDataAlloc_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__ClosingInfo;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRStylePainter;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__ClosingInfo;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__Entry;
}
namespace UnityEngine::UIElements::UIR::Implementation {
template <typename T> struct __UIRStylePainter__TempDataAlloc_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter);
MARK_VAL_T(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo);
MARK_VAL_T(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry);
MARK_GEN_VAL_T(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1);
// Type: ::Entry
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9922), inst: 745 }), TypeDefinitionIndex(TypeDefinitionIndex(7416)),
// TypeDefinitionIndex(TypeDefinitionIndex(7526)), TypeDefinitionIndex(TypeDefinitionIndex(9922)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9922), inst: 741 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7425)), TypeDefinitionIndex(TypeDefinitionIndex(7460))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7533)) CS Name: ::UIRStylePainter::Entry
struct CORDL_TYPE __UIRStylePainter__Entry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "vertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "indices", ty:
  // "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name:
  // "custom", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "font", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name:
  // "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name:
  // "customCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "clipRectID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc",
  // modifiers: "", def_value: None }, CppParam { name: "addFlags", ty: "::UnityEngine::UIElements::UIR::VertexFlags", modifiers: "", def_value: None }, CppParam { name: "uvIsDisplacement", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "isTextEntry", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isClipRegisterEntry", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maskDepth", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UIRStylePainter__Entry(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices,
                                     ::UnityEngine::Material* material, ::UnityEngine::Texture* custom, ::UnityEngine::Texture* font, float_t fontTexSDFScale,
                                     ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::UIElements::UIR::RenderChainCommand* customCommand,
                                     ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID, ::UnityEngine::UIElements::UIR::VertexFlags addFlags, bool uvIsDisplacement, bool isTextEntry,
                                     bool isClipRegisterEntry, int32_t stencilRef, int32_t maskDepth) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRStylePainter__Entry();

  /// @brief Field vertices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices;

  /// @brief Field indices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<uint16_t> indices;

  /// @brief Field material, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Material* material;

  /// @brief Field custom, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Texture* custom;

  /// @brief Field font, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Texture* font;

  /// @brief Field fontTexSDFScale, offset: 0x38, size: 0x4, def value: None
  float_t fontTexSDFScale;

  /// @brief Field texture, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId texture;

  /// @brief Field customCommand, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* customCommand;

  /// @brief Field clipRectID, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID;

  /// @brief Field addFlags, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::VertexFlags addFlags;

  /// @brief Field uvIsDisplacement, offset: 0x54, size: 0x1, def value: None
  bool uvIsDisplacement;

  /// @brief Field isTextEntry, offset: 0x55, size: 0x1, def value: None
  bool isTextEntry;

  /// @brief Field isClipRegisterEntry, offset: 0x56, size: 0x1, def value: None
  bool isClipRegisterEntry;

  /// @brief Field stencilRef, offset: 0x58, size: 0x4, def value: None
  int32_t stencilRef;

  /// @brief Field maskDepth, offset: 0x5c, size: 0x4, def value: None
  int32_t maskDepth;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, indices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, custom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, font) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, fontTexSDFScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, texture) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, customCommand) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, clipRectID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, addFlags) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, uvIsDisplacement) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, isTextEntry) == 0x55, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, isClipRegisterEntry) == 0x56, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, stencilRef) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, maskDepth) == 0x5c, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
// Type: ::ClosingInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7416)), TypeDefinitionIndex(TypeDefinitionIndex(9922)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9922), inst: 741
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9922), inst: 745 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7534)) CS Name: ::UIRStylePainter::ClosingInfo
struct CORDL_TYPE __UIRStylePainter__ClosingInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "needsClosing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "popViewMatrix", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "popScissorClip", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blitAndPopRenderTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "PopDefaultMaterial",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clipUnregisterDrawCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam {
  // name: "clipperRegisterVertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "clipperRegisterIndices", ty:
  // "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "clipperRegisterIndexOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "maskStencilRef", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UIRStylePainter__ClosingInfo(bool needsClosing, bool popViewMatrix, bool popScissorClip, bool blitAndPopRenderTexture, bool PopDefaultMaterial,
                                           ::UnityEngine::UIElements::UIR::RenderChainCommand* clipUnregisterDrawCommand,
                                           ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> clipperRegisterVertices,
                                           ::Unity::Collections::NativeSlice_1<uint16_t> clipperRegisterIndices, int32_t clipperRegisterIndexOffset, int32_t maskStencilRef) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRStylePainter__ClosingInfo();

  /// @brief Field needsClosing, offset: 0x0, size: 0x1, def value: None
  bool needsClosing;

  /// @brief Field popViewMatrix, offset: 0x1, size: 0x1, def value: None
  bool popViewMatrix;

  /// @brief Field popScissorClip, offset: 0x2, size: 0x1, def value: None
  bool popScissorClip;

  /// @brief Field blitAndPopRenderTexture, offset: 0x3, size: 0x1, def value: None
  bool blitAndPopRenderTexture;

  /// @brief Field PopDefaultMaterial, offset: 0x4, size: 0x1, def value: None
  bool PopDefaultMaterial;

  /// @brief Field clipUnregisterDrawCommand, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* clipUnregisterDrawCommand;

  /// @brief Field clipperRegisterVertices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> clipperRegisterVertices;

  /// @brief Field clipperRegisterIndices, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<uint16_t> clipperRegisterIndices;

  /// @brief Field clipperRegisterIndexOffset, offset: 0x30, size: 0x4, def value: None
  int32_t clipperRegisterIndexOffset;

  /// @brief Field maskStencilRef, offset: 0x34, size: 0x4, def value: None
  int32_t maskStencilRef;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, needsClosing) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, popViewMatrix) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, popScissorClip) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, blitAndPopRenderTexture) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, PopDefaultMaterial) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, clipUnregisterDrawCommand) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, clipperRegisterVertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, clipperRegisterIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, clipperRegisterIndexOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, maskStencilRef) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
// Type: ::TempDataAlloc`1
// SizeInfo { instance_size: 40, native_size: 52, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9927)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9927), inst: 4595 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7535))
// CS Name: ::UIRStylePainter::TempDataAlloc`1<T>
struct CORDL_TYPE __UIRStylePainter__TempDataAlloc_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t maxPoolElems);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method Alloc addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Unity::Collections::NativeSlice_1<T> Alloc(uint32_t count);

  /// @brief Method SessionDone addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SessionDone();

  // Ctor Parameters [CppParam { name: "maxPoolElemCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pool", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "",
  // def_value: None }, CppParam { name: "excess", ty: "::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>*", modifiers: "", def_value: None }, CppParam { name:
  // "takenFromPool", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __UIRStylePainter__TempDataAlloc_1(int32_t maxPoolElemCount, ::Unity::Collections::NativeArray_1<T> pool,
                                               ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* excess, uint32_t takenFromPool) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRStylePainter__TempDataAlloc_1();

  /// @brief Field maxPoolElemCount, offset: 0x0, size: 0x4, def value: None
  int32_t maxPoolElemCount;

  /// @brief Field pool, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> pool;

  /// @brief Field excess, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* excess;

  /// @brief Field takenFromPool, offset: 0x20, size: 0x4, def value: None
  uint32_t takenFromPool;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR::Implementation
// Type: UnityEngine.UIElements.UIR.Implementation::UIRStylePainter
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 369, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7535)), TypeDefinitionIndex(TypeDefinitionIndex(7533)), TypeDefinitionIndex(TypeDefinitionIndex(7534)),
// TypeDefinitionIndex(TypeDefinitionIndex(7416)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(7460)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(7535), inst: 745 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7535), inst: 741 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7536)) CS Name:
// ::UnityEngine.UIElements.UIR.Implementation::UIRStylePainter*
class CORDL_TYPE UIRStylePainter : public ::System::Object {
public:
  // Declarations
  template <typename T> using TempDataAlloc_1 = ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<T>;

  using ClosingInfo = ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo;

  using Entry = ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry;

  /// @brief Field m_Owner, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Owner, put = __set_m_Owner))::UnityEngine::UIElements::UIR::RenderChain* m_Owner;

  /// @brief Field m_Entries, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Entries, put = __set_m_Entries))::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* m_Entries;

  /// @brief Field m_Atlas, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Atlas, put = __set_m_Atlas))::UnityEngine::UIElements::AtlasBase* m_Atlas;

  /// @brief Field m_VectorImageManager, offset 0x28, size 0x8
  __declspec(property(get = __get_m_VectorImageManager, put = __set_m_VectorImageManager))::UnityEngine::UIElements::UIR::VectorImageManager* m_VectorImageManager;

  /// @brief Field m_CurrentEntry, offset 0x30, size 0x60
  __declspec(property(get = __get_m_CurrentEntry, put = __set_m_CurrentEntry))::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry m_CurrentEntry;

  /// @brief Field m_ClosingInfo, offset 0x90, size 0x38
  __declspec(property(get = __get_m_ClosingInfo, put = __set_m_ClosingInfo))::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo m_ClosingInfo;

  /// @brief Field m_MaskDepth, offset 0xc8, size 0x4
  __declspec(property(get = __get_m_MaskDepth, put = __set_m_MaskDepth)) int32_t m_MaskDepth;

  /// @brief Field m_StencilRef, offset 0xcc, size 0x4
  __declspec(property(get = __get_m_StencilRef, put = __set_m_StencilRef)) int32_t m_StencilRef;

  /// @brief Field m_ClipRectID, offset 0xd0, size 0x8
  __declspec(property(get = __get_m_ClipRectID, put = __set_m_ClipRectID))::UnityEngine::UIElements::UIR::BMPAlloc m_ClipRectID;

  /// @brief Field m_SVGBackgroundEntryIndex, offset 0xd8, size 0x4
  __declspec(property(get = __get_m_SVGBackgroundEntryIndex, put = __set_m_SVGBackgroundEntryIndex)) int32_t m_SVGBackgroundEntryIndex;

  /// @brief Field m_VertsPool, offset 0xe0, size 0x28
  __declspec(property(get = __get_m_VertsPool,
                      put = __set_m_VertsPool))::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex> m_VertsPool;

  /// @brief Field m_IndicesPool, offset 0x108, size 0x28
  __declspec(property(get = __get_m_IndicesPool, put = __set_m_IndicesPool))::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<uint16_t> m_IndicesPool;

  /// @brief Field m_MeshWriteDataPool, offset 0x130, size 0x8
  __declspec(property(get = __get_m_MeshWriteDataPool, put = __set_m_MeshWriteDataPool))::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* m_MeshWriteDataPool;

  /// @brief Field m_NextMeshWriteDataPoolItem, offset 0x138, size 0x4
  __declspec(property(get = __get_m_NextMeshWriteDataPoolItem, put = __set_m_NextMeshWriteDataPoolItem)) int32_t m_NextMeshWriteDataPoolItem;

  /// @brief Field m_AllocRawVertsIndicesDelegate, offset 0x140, size 0x8
  __declspec(property(get = __get_m_AllocRawVertsIndicesDelegate,
                      put = __set_m_AllocRawVertsIndicesDelegate))::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* m_AllocRawVertsIndicesDelegate;

  /// @brief Field m_AllocThroughDrawMeshDelegate, offset 0x148, size 0x8
  __declspec(property(get = __get_m_AllocThroughDrawMeshDelegate,
                      put = __set_m_AllocThroughDrawMeshDelegate))::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* m_AllocThroughDrawMeshDelegate;

  /// @brief Field m_AllocThroughDrawGradientsDelegate, offset 0x150, size 0x8
  __declspec(property(get = __get_m_AllocThroughDrawGradientsDelegate,
                      put = __set_m_AllocThroughDrawGradientsDelegate))::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* m_AllocThroughDrawGradientsDelegate;

  /// @brief Field <meshGenerationContext>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__meshGenerationContext_k__BackingField,
                      put = __set__meshGenerationContext_k__BackingField))::UnityEngine::UIElements::MeshGenerationContext* _meshGenerationContext_k__BackingField;

  /// @brief Field <currentElement>k__BackingField, offset 0x160, size 0x8
  __declspec(property(get = __get__currentElement_k__BackingField, put = __set__currentElement_k__BackingField))::UnityEngine::UIElements::VisualElement* _currentElement_k__BackingField;

  /// @brief Field <totalVertices>k__BackingField, offset 0x168, size 0x4
  __declspec(property(get = __get__totalVertices_k__BackingField, put = __set__totalVertices_k__BackingField)) int32_t _totalVertices_k__BackingField;

  /// @brief Field <totalIndices>k__BackingField, offset 0x16c, size 0x4
  __declspec(property(get = __get__totalIndices_k__BackingField, put = __set__totalIndices_k__BackingField)) int32_t _totalIndices_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0x170, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_meshGenerationContext))::UnityEngine::UIElements::MeshGenerationContext* meshGenerationContext;

  __declspec(property(get = get_currentElement, put = set_currentElement))::UnityEngine::UIElements::VisualElement* currentElement;

  __declspec(property(get = get_entries))::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* entries;

  __declspec(property(get = get_closingInfo))::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo closingInfo;

  __declspec(property(get = get_totalVertices, put = set_totalVertices)) int32_t totalVertices;

  __declspec(property(get = get_totalIndices, put = set_totalIndices)) int32_t totalIndices;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_visualElement))::UnityEngine::UIElements::VisualElement* visualElement;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStylePainter"
  constexpr operator ::UnityEngine::UIElements::IStylePainter*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::UIElements::UIR::RenderChain*& __get_m_Owner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChain*> const& __get_m_Owner() const;

  constexpr void __set_m_Owner(::UnityEngine::UIElements::UIR::RenderChain* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>*& __get_m_Entries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>*> const& __get_m_Entries() const;

  constexpr void __set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* value);

  constexpr ::UnityEngine::UIElements::AtlasBase*& __get_m_Atlas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> const& __get_m_Atlas() const;

  constexpr void __set_m_Atlas(::UnityEngine::UIElements::AtlasBase* value);

  constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& __get_m_VectorImageManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::VectorImageManager*> const& __get_m_VectorImageManager() const;

  constexpr void __set_m_VectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value);

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry& __get_m_CurrentEntry();

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry const& __get_m_CurrentEntry() const;

  constexpr void __set_m_CurrentEntry(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry value);

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo& __get_m_ClosingInfo();

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo const& __get_m_ClosingInfo() const;

  constexpr void __set_m_ClosingInfo(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo value);

  constexpr int32_t& __get_m_MaskDepth();

  constexpr int32_t const& __get_m_MaskDepth() const;

  constexpr void __set_m_MaskDepth(int32_t value);

  constexpr int32_t& __get_m_StencilRef();

  constexpr int32_t const& __get_m_StencilRef() const;

  constexpr void __set_m_StencilRef(int32_t value);

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_m_ClipRectID();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_m_ClipRectID() const;

  constexpr void __set_m_ClipRectID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr int32_t& __get_m_SVGBackgroundEntryIndex();

  constexpr int32_t const& __get_m_SVGBackgroundEntryIndex() const;

  constexpr void __set_m_SVGBackgroundEntryIndex(int32_t value);

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>& __get_m_VertsPool();

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex> const& __get_m_VertsPool() const;

  constexpr void __set_m_VertsPool(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex> value);

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<uint16_t>& __get_m_IndicesPool();

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<uint16_t> const& __get_m_IndicesPool() const;

  constexpr void __set_m_IndicesPool(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<uint16_t> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>*& __get_m_MeshWriteDataPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>*> const& __get_m_MeshWriteDataPool() const;

  constexpr void __set_m_MeshWriteDataPool(::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* value);

  constexpr int32_t& __get_m_NextMeshWriteDataPoolItem();

  constexpr int32_t const& __get_m_NextMeshWriteDataPoolItem() const;

  constexpr void __set_m_NextMeshWriteDataPoolItem(int32_t value);

  constexpr ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*& __get_m_AllocRawVertsIndicesDelegate();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*> const& __get_m_AllocRawVertsIndicesDelegate() const;

  constexpr void __set_m_AllocRawVertsIndicesDelegate(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* value);

  constexpr ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*& __get_m_AllocThroughDrawMeshDelegate();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*> const& __get_m_AllocThroughDrawMeshDelegate() const;

  constexpr void __set_m_AllocThroughDrawMeshDelegate(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* value);

  constexpr ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*& __get_m_AllocThroughDrawGradientsDelegate();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*> const& __get_m_AllocThroughDrawGradientsDelegate() const;

  constexpr void __set_m_AllocThroughDrawGradientsDelegate(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* value);

  constexpr ::UnityEngine::UIElements::MeshGenerationContext*& __get__meshGenerationContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::MeshGenerationContext*> const& __get__meshGenerationContext_k__BackingField() const;

  constexpr void __set__meshGenerationContext_k__BackingField(::UnityEngine::UIElements::MeshGenerationContext* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__currentElement_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__currentElement_k__BackingField() const;

  constexpr void __set__currentElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr int32_t& __get__totalVertices_k__BackingField();

  constexpr int32_t const& __get__totalVertices_k__BackingField() const;

  constexpr void __set__totalVertices_k__BackingField(int32_t value);

  constexpr int32_t& __get__totalIndices_k__BackingField();

  constexpr int32_t const& __get__totalIndices_k__BackingField() const;

  constexpr void __set__totalIndices_k__BackingField(int32_t value);

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  /// @brief Method GetPooledMeshWriteData addr 0x2c72d90 size 0x120 virtual false final false
  inline ::UnityEngine::UIElements::MeshWriteData* GetPooledMeshWriteData();

  /// @brief Method AllocRawVertsIndices addr 0x2c72eb0 size 0xbc virtual false final false
  inline ::UnityEngine::UIElements::MeshWriteData* AllocRawVertsIndices(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData);

  /// @brief Method AllocThroughDrawMesh addr 0x2c72f6c size 0x14 virtual false final false
  inline ::UnityEngine::UIElements::MeshWriteData* AllocThroughDrawMesh(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData);

  /// @brief Method AllocThroughDrawGradients addr 0x2c73450 size 0x10 virtual false final false
  inline ::UnityEngine::UIElements::MeshWriteData* AllocThroughDrawGradients(uint32_t vertexCount, uint32_t indexCount,
                                                                             ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData);

  static inline ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* New_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method .ctor addr 0x2c73764 size 0x368 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method get_meshGenerationContext addr 0x2c73acc size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::MeshGenerationContext* get_meshGenerationContext();

  /// @brief Method get_currentElement addr 0x2c73ad4 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_currentElement();

  /// @brief Method set_currentElement addr 0x2c73adc size 0x8 virtual false final false
  inline void set_currentElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_entries addr 0x2c73ae4 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* get_entries();

  /// @brief Method get_closingInfo addr 0x2c73aec size 0x1c virtual false final false
  inline ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo get_closingInfo();

  /// @brief Method get_totalVertices addr 0x2c73b08 size 0x8 virtual false final false
  inline int32_t get_totalVertices();

  /// @brief Method set_totalVertices addr 0x2c73b10 size 0x8 virtual false final false
  inline void set_totalVertices(int32_t value);

  /// @brief Method get_totalIndices addr 0x2c73b18 size 0x8 virtual false final false
  inline int32_t get_totalIndices();

  /// @brief Method set_totalIndices addr 0x2c73b20 size 0x8 virtual false final false
  inline void set_totalIndices(int32_t value);

  /// @brief Method get_disposed addr 0x2c73b28 size 0x8 virtual false final false
  inline bool get_disposed();

  /// @brief Method set_disposed addr 0x2c73b30 size 0xc virtual false final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose addr 0x2c73b3c size 0x64 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2c73ba0 size 0x84 virtual false final false
  inline void Dispose(bool disposing);

  /// @brief Method Begin addr 0x2c73c24 size 0x510 virtual false final false
  inline void Begin(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method LandClipUnregisterMeshDrawCommand addr 0x2c74134 size 0x74 virtual false final false
  inline void LandClipUnregisterMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method LandClipRegisterMesh addr 0x2c741a8 size 0x9c virtual false final false
  inline void LandClipRegisterMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, int32_t indexOffset);

  /// @brief Method AddGradientsEntry addr 0x2c73460 size 0x304 virtual false final false
  inline ::UnityEngine::UIElements::MeshWriteData* AddGradientsEntry(int32_t vertexCount, int32_t indexCount, ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::Material* material,
                                                                     ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags);

  /// @brief Method DrawMesh addr 0x2c72f80 size 0x4d0 virtual true final true
  inline ::UnityEngine::UIElements::MeshWriteData* DrawMesh(int32_t vertexCount, int32_t indexCount, ::UnityEngine::Texture* texture, ::UnityEngine::Material* material,
                                                            ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags);

  /// @brief Method DrawText addr 0x2c74244 size 0x138 virtual true final true
  inline void DrawText(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint);

  /// @brief Method DrawTextNative addr 0x2c7437c size 0x438 virtual false final false
  inline void DrawTextNative(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint);

  /// @brief Method DrawTextCore addr 0x2c747b4 size 0x628 virtual false final false
  inline void DrawTextCore(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint);

  /// @brief Method DrawRectangle addr 0x2c74ddc size 0x29c virtual true final true
  inline void DrawRectangle(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams);

  /// @brief Method DrawBorder addr 0x2c75b34 size 0xe0 virtual true final true
  inline void DrawBorder(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams borderParams);

  /// @brief Method DrawImmediate addr 0x2c75c14 size 0x17c virtual true final true
  inline void DrawImmediate(::System::Action* callback, bool cullingEnabled);

  /// @brief Method get_visualElement addr 0x2c75d90 size 0x8 virtual true final true
  inline ::UnityEngine::UIElements::VisualElement* get_visualElement();

  /// @brief Method DrawVisualElementBackground addr 0x2c75d98 size 0xe08 virtual false final false
  inline void DrawVisualElementBackground();

  /// @brief Method DrawVisualElementBorder addr 0x2c76ba0 size 0x974 virtual false final false
  inline void DrawVisualElementBorder();

  /// @brief Method ApplyVisualElementClipping addr 0x2c77514 size 0x24c virtual false final false
  inline void ApplyVisualElementClipping();

  /// @brief Method AdjustSpriteWinding addr 0x2c784f0 size 0x320 virtual false final false
  inline ::ArrayW<uint16_t, ::Array<uint16_t>*> AdjustSpriteWinding(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> vertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> indices);

  /// @brief Method DrawSprite addr 0x2c754dc size 0x658 virtual false final false
  inline void DrawSprite(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams);

  /// @brief Method DrawVectorImage addr 0x2c75078 size 0x464 virtual false final false
  inline void DrawVectorImage(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams);

  /// @brief Method Reset addr 0x2c78810 size 0xe4 virtual false final false
  inline void Reset();

  /// @brief Method ValidateMeshWriteData addr 0x2c788f4 size 0x4f4 virtual false final false
  inline void ValidateMeshWriteData();

  /// @brief Method GenerateStencilClipEntryForRoundedRectBackground addr 0x2c77ad4 size 0xa1c virtual false final false
  inline void GenerateStencilClipEntryForRoundedRectBackground();

  /// @brief Method GenerateStencilClipEntryForSVGBackground addr 0x2c77760 size 0x374 virtual false final false
  inline void GenerateStencilClipEntryForSVGBackground();

  // Ctor Parameters [CppParam { name: "", ty: "UIRStylePainter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRStylePainter(UIRStylePainter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRStylePainter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRStylePainter(UIRStylePainter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRStylePainter();

public:
  /// @brief Field m_Owner, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain* ___m_Owner;

  /// @brief Field m_Entries, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* ___m_Entries;

  /// @brief Field m_Atlas, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::AtlasBase* ___m_Atlas;

  /// @brief Field m_VectorImageManager, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::VectorImageManager* ___m_VectorImageManager;

  /// @brief Field m_CurrentEntry, offset: 0x30, size: 0x60, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry ___m_CurrentEntry;

  /// @brief Field m_ClosingInfo, offset: 0x90, size: 0x38, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo ___m_ClosingInfo;

  /// @brief Field m_MaskDepth, offset: 0xc8, size: 0x4, def value: None
  int32_t ___m_MaskDepth;

  /// @brief Field m_StencilRef, offset: 0xcc, size: 0x4, def value: None
  int32_t ___m_StencilRef;

  /// @brief Field m_ClipRectID, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___m_ClipRectID;

  /// @brief Field m_SVGBackgroundEntryIndex, offset: 0xd8, size: 0x4, def value: None
  int32_t ___m_SVGBackgroundEntryIndex;

  /// @brief Field m_VertsPool, offset: 0xe0, size: 0x28, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex> ___m_VertsPool;

  /// @brief Field m_IndicesPool, offset: 0x108, size: 0x28, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1<uint16_t> ___m_IndicesPool;

  /// @brief Field m_MeshWriteDataPool, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* ___m_MeshWriteDataPool;

  /// @brief Field m_NextMeshWriteDataPoolItem, offset: 0x138, size: 0x4, def value: None
  int32_t ___m_NextMeshWriteDataPoolItem;

  /// @brief Field m_AllocRawVertsIndicesDelegate, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* ___m_AllocRawVertsIndicesDelegate;

  /// @brief Field m_AllocThroughDrawMeshDelegate, offset: 0x148, size: 0x8, def value: None
  ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* ___m_AllocThroughDrawMeshDelegate;

  /// @brief Field m_AllocThroughDrawGradientsDelegate, offset: 0x150, size: 0x8, def value: None
  ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* ___m_AllocThroughDrawGradientsDelegate;

  /// @brief Field <meshGenerationContext>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshGenerationContext* ____meshGenerationContext_k__BackingField;

  /// @brief Field <currentElement>k__BackingField, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____currentElement_k__BackingField;

  /// @brief Field <totalVertices>k__BackingField, offset: 0x168, size: 0x4, def value: None
  int32_t ____totalVertices_k__BackingField;

  /// @brief Field <totalIndices>k__BackingField, offset: 0x16c, size: 0x4, def value: None
  int32_t ____totalIndices_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset: 0x170, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, 0x178>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_Owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_Entries) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_Atlas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_VectorImageManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_CurrentEntry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_ClosingInfo) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_MaskDepth) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_StencilRef) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_ClipRectID) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_SVGBackgroundEntryIndex) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_VertsPool) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_IndicesPool) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_MeshWriteDataPool) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_NextMeshWriteDataPoolItem) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_AllocRawVertsIndicesDelegate) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_AllocThroughDrawMeshDelegate) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_AllocThroughDrawGradientsDelegate) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ____meshGenerationContext_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ____currentElement_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ____totalVertices_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ____totalIndices_k__BackingField) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ____disposed_k__BackingField) == 0x170, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter/ClosingInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter/Entry");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__TempDataAlloc_1, "UnityEngine.UIElements.UIR.Implementation",
                                      "UIRStylePainter/TempDataAlloc`1");
