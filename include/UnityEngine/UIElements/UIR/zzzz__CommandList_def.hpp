#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__MemoryLabel_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandFlags_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommandList)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
struct CommandFlags;
}
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class NativeList_1;
}
namespace UnityEngine::UIElements::UIR {
struct SerializedCommand;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class Utility_GPUBuffer_1;
}
namespace UnityEngine::UIElements {
class UIRenderer;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class CommandList;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::CommandList*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::CommandList*, "UnityEngine.UIElements.UIR", "CommandList");
// Dependencies System.IntPtr, System.Object, System.Runtime.InteropServices.GCHandle, Unity.Collections.MemoryLabel, UnityEngine.UIElements.UIR.CommandFlags, UnityEngine.Vector4
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.CommandList
class CORDL_TYPE CommandList : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field constantProps, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_constantProps, put = __cordl_internal_set_constantProps)) ::UnityEngine::MaterialPropertyBlock* constantProps;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field flags, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) ::UnityEngine::UIElements::UIR::CommandFlags flags;

  /// @brief Field handle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) ::System::Runtime::InteropServices::GCHandle handle;

  /// @brief Field k_MemoryLabel, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_MemoryLabel, put = setStaticF_k_MemoryLabel)) ::Unity::Collections::MemoryLabel k_MemoryLabel;

  /// @brief Field m_Commands, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Commands,
                      put = __cordl_internal_set_m_Commands)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::SerializedCommand>* m_Commands;

  /// @brief Field m_DrawRanges, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawRanges,
                      put = __cordl_internal_set_m_DrawRanges)) ::UnityEngine::UIElements::UIR::NativeList_1<::UnityEngine::UIElements::UIR::DrawBufferRange>* m_DrawRanges;

  /// @brief Field m_GpuTextureData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GpuTextureData, put = __cordl_internal_set_m_GpuTextureData)) ::ArrayW<::UnityEngine::Vector4> m_GpuTextureData;

  /// @brief Field m_Material, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_Owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Owner, put = __cordl_internal_set_m_Owner)) ::UnityEngine::UIElements::VisualElement* m_Owner;

  /// @brief Field m_Renderer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Renderer, put = __cordl_internal_set_m_Renderer)) ::UnityW<::UnityEngine::UIElements::UIRenderer> m_Renderer;

  /// @brief Field m_StencilState, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilState, put = __cordl_internal_set_m_StencilState)) ::System::IntPtr m_StencilState;

  /// @brief Field m_VertexDecl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VertexDecl, put = __cordl_internal_set_m_VertexDecl)) ::System::IntPtr m_VertexDecl;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ApplyBatchProps, addr 0x7161eb8, size 0xf0, virtual false, abstract: false, final false
  inline void ApplyBatchProps();

  /// @brief Method ApplyUserProps, addr 0x7161db4, size 0x104, virtual false, abstract: false, final false
  inline void ApplyUserProps(::UnityEngine::MaterialPropertyBlock* userProps);

  /// @brief Method Dispose, addr 0x7162150, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x7162158, size 0x90, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawRanges, addr 0x7161fa8, size 0x198, virtual false, abstract: false, final false
  inline void DrawRanges(::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<uint16_t>* ib, ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<::UnityEngine::UIElements::Vertex>* vb,
                         ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange> ranges);

  /// @brief Method Execute, addr 0x716164c, size 0x5d0, virtual false, abstract: false, final false
  inline void Execute();

  /// @brief Method Init, addr 0x71614e8, size 0x164, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::Material* material, ::UnityEngine::UIElements::UIR::CommandFlags commandFlags);

  static inline ::UnityEngine::UIElements::UIR::CommandList* New_ctor(::System::IntPtr vertexDecl, ::System::IntPtr stencilState);

  /// @brief Method Reset, addr 0x7161444, size 0xa4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetTexture, addr 0x7161c1c, size 0x198, virtual false, abstract: false, final false
  inline void SetTexture(int32_t name, ::UnityEngine::Texture* texture, int32_t gpuDataOffset, ::UnityEngine::Vector4 gpuData0, ::UnityEngine::Vector4 gpuData1);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_constantProps() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_constantProps();

  constexpr ::UnityEngine::UIElements::UIR::CommandFlags const& __cordl_internal_get_flags() const;

  constexpr ::UnityEngine::UIElements::UIR::CommandFlags& __cordl_internal_get_flags();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_handle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_handle();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::SerializedCommand>* const& __cordl_internal_get_m_Commands() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::SerializedCommand>*& __cordl_internal_get_m_Commands();

  constexpr ::UnityEngine::UIElements::UIR::NativeList_1<::UnityEngine::UIElements::UIR::DrawBufferRange>* const& __cordl_internal_get_m_DrawRanges() const;

  constexpr ::UnityEngine::UIElements::UIR::NativeList_1<::UnityEngine::UIElements::UIR::DrawBufferRange>*& __cordl_internal_get_m_DrawRanges();

  constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_m_GpuTextureData() const;

  constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_m_GpuTextureData();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Owner() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Owner();

  constexpr ::UnityW<::UnityEngine::UIElements::UIRenderer> const& __cordl_internal_get_m_Renderer() const;

  constexpr ::UnityW<::UnityEngine::UIElements::UIRenderer>& __cordl_internal_get_m_Renderer();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_StencilState() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_StencilState();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_VertexDecl() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_VertexDecl();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_constantProps(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_flags(::UnityEngine::UIElements::UIR::CommandFlags value);

  constexpr void __cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void __cordl_internal_set_m_Commands(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::SerializedCommand>* value);

  constexpr void __cordl_internal_set_m_DrawRanges(::UnityEngine::UIElements::UIR::NativeList_1<::UnityEngine::UIElements::UIR::DrawBufferRange>* value);

  constexpr void __cordl_internal_set_m_GpuTextureData(::ArrayW<::UnityEngine::Vector4> value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Owner(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Renderer(::UnityW<::UnityEngine::UIElements::UIRenderer> value);

  constexpr void __cordl_internal_set_m_StencilState(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_VertexDecl(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x7161270, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr vertexDecl, ::System::IntPtr stencilState);

  static inline ::Unity::Collections::MemoryLabel getStaticF_k_MemoryLabel();

  /// [CompilerGenerated]
  /// @brief Method get_disposed, addr 0x7162140, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_k_MemoryLabel(::Unity::Collections::MemoryLabel value);

  /// [CompilerGenerated]
  /// @brief Method set_disposed, addr 0x7162148, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandList", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandList(CommandList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandList", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandList(CommandList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5388 };

  /// @brief Field m_Owner, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Owner;

  /// @brief Field m_Renderer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::UIRenderer> ___m_Renderer;

  /// @brief Field m_VertexDecl, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr ___m_VertexDecl;

  /// @brief Field m_StencilState, offset: 0x28, size: 0x8, def value: None
  ::System::IntPtr ___m_StencilState;

  /// @brief Field constantProps, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___constantProps;

  /// @brief Field handle, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___handle;

  /// @brief Field m_Material, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field flags, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::CommandFlags ___flags;

  /// @brief Field m_Commands, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::SerializedCommand>* ___m_Commands;

  /// @brief Field m_GpuTextureData, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4> ___m_GpuTextureData;

  /// @brief Field m_DrawRanges, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::NativeList_1<::UnityEngine::UIElements::UIR::DrawBufferRange>* ___m_DrawRanges;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <disposed>k__BackingField, offset: 0x68, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___m_Owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___m_Renderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___m_VertexDecl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___m_StencilState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___constantProps) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___handle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___m_Material) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___flags) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___m_Commands) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___m_GpuTextureData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ___m_DrawRanges) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandList, ____disposed_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::CommandList) == 0x70, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
