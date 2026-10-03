#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandListManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureSlotCount_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommandListManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::UIElements::UIR {
struct CommandFlags;
}
namespace UnityEngine::UIElements::UIR {
class CommandList;
}
namespace UnityEngine::UIElements {
struct TextureSlotCount;
}
namespace UnityEngine::UIElements {
class UIRenderer;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class CommandListManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::CommandListManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::CommandListManager*, "UnityEngine.UIElements.UIR", "CommandListManager");
// Dependencies System.Collections.Generic.List`1<T>, System.IntPtr, System.Object, UnityEngine.UIElements.TextureSlotCount
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.CommandListManager
class CORDL_TYPE CommandListManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_defaultCommandList)) ::UnityEngine::UIElements::UIR::CommandList* defaultCommandList;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_CommandListPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandListPool,
                      put = __cordl_internal_set_m_CommandListPool)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::CommandList*>* m_CommandListPool;

  /// @brief Field m_CommandListsArray, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandListsArray,
                      put = __cordl_internal_set_m_CommandListsArray)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>
      m_CommandListsArray;

  /// @brief Field m_CurrentFrameCommandLists, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentFrameCommandLists,
                      put = __cordl_internal_set_m_CurrentFrameCommandLists)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>* m_CurrentFrameCommandLists;

  /// @brief Field m_CurrentIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentIndex, put = __cordl_internal_set_m_CurrentIndex)) uint32_t m_CurrentIndex;

  /// @brief Field m_DefaultCommandList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultCommandList, put = __cordl_internal_set_m_DefaultCommandList)) ::UnityEngine::UIElements::UIR::CommandList* m_DefaultCommandList;

  /// @brief Field m_DefaultStencilState, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultStencilState, put = __cordl_internal_set_m_DefaultStencilState)) ::System::IntPtr m_DefaultStencilState;

  /// @brief Field m_TextureSlotCount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureSlotCount, put = __cordl_internal_set_m_TextureSlotCount)) ::UnityEngine::UIElements::TextureSlotCount m_TextureSlotCount;

  /// @brief Field m_UIRenderersWithDrawCallData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UIRenderersWithDrawCallData,
                      put = __cordl_internal_set_m_UIRenderersWithDrawCallData)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>* m_UIRenderersWithDrawCallData;

  /// @brief Field m_VertexDecl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VertexDecl, put = __cordl_internal_set_m_VertexDecl)) ::System::IntPtr m_VertexDecl;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AdvanceFrame, addr 0x71625e8, size 0x13c, virtual false, abstract: false, final false
  inline void AdvanceFrame();

  /// @brief Method BeginSerialize, addr 0x71628cc, size 0x28, virtual false, abstract: false, final false
  inline void BeginSerialize(::UnityEngine::UIElements::TextureSlotCount textureSlotCount);

  /// @brief Method Dispose, addr 0x7162b1c, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x7162b24, size 0x52c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndSerialize, addr 0x71628f4, size 0x218, virtual false, abstract: false, final false
  inline void EndSerialize();

  /// @brief Method GetOrCreateCommandList, addr 0x7162488, size 0x160, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::CommandList* GetOrCreateCommandList(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::Material* material,
                                                                             ::UnityEngine::UIElements::UIR::CommandFlags commandFlags);

  static inline ::UnityEngine::UIElements::UIR::CommandListManager* New_ctor(::System::IntPtr vertexDecl, ::System::IntPtr defaultStencilState);

  /// @brief Method ResetUIRendererDrawCallData, addr 0x7162724, size 0x1a8, virtual false, abstract: false, final false
  inline void ResetUIRendererDrawCallData();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::CommandList*>* const& __cordl_internal_get_m_CommandListPool() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::CommandList*>*& __cordl_internal_get_m_CommandListPool();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*> const& __cordl_internal_get_m_CommandListsArray() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>& __cordl_internal_get_m_CommandListsArray();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>* const& __cordl_internal_get_m_CurrentFrameCommandLists() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*& __cordl_internal_get_m_CurrentFrameCommandLists();

  constexpr uint32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr uint32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr ::UnityEngine::UIElements::UIR::CommandList* const& __cordl_internal_get_m_DefaultCommandList() const;

  constexpr ::UnityEngine::UIElements::UIR::CommandList*& __cordl_internal_get_m_DefaultCommandList();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_DefaultStencilState() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_DefaultStencilState();

  constexpr ::UnityEngine::UIElements::TextureSlotCount const& __cordl_internal_get_m_TextureSlotCount() const;

  constexpr ::UnityEngine::UIElements::TextureSlotCount& __cordl_internal_get_m_TextureSlotCount();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>* const& __cordl_internal_get_m_UIRenderersWithDrawCallData() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>*& __cordl_internal_get_m_UIRenderersWithDrawCallData();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_VertexDecl() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_VertexDecl();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_CommandListPool(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::CommandList*>* value);

  constexpr void __cordl_internal_set_m_CommandListsArray(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*> value);

  constexpr void __cordl_internal_set_m_CurrentFrameCommandLists(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>* value);

  constexpr void __cordl_internal_set_m_CurrentIndex(uint32_t value);

  constexpr void __cordl_internal_set_m_DefaultCommandList(::UnityEngine::UIElements::UIR::CommandList* value);

  constexpr void __cordl_internal_set_m_DefaultStencilState(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_TextureSlotCount(::UnityEngine::UIElements::TextureSlotCount value);

  constexpr void __cordl_internal_set_m_UIRenderersWithDrawCallData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>* value);

  constexpr void __cordl_internal_set_m_VertexDecl(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x716228c, size 0x1f4, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr vertexDecl, ::System::IntPtr defaultStencilState);

  /// @brief Method get_defaultCommandList, addr 0x7162480, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::CommandList* get_defaultCommandList();

  /// [CompilerGenerated]
  /// @brief Method get_disposed, addr 0x7162b0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// [CompilerGenerated]
  /// @brief Method set_disposed, addr 0x7162b14, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandListManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandListManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandListManager(CommandListManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandListManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandListManager(CommandListManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5389 };

  /// @brief Field m_VertexDecl, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_VertexDecl;

  /// @brief Field m_DefaultStencilState, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___m_DefaultStencilState;

  /// @brief Field m_CurrentIndex, offset: 0x20, size: 0x4, def value: None
  uint32_t ___m_CurrentIndex;

  /// @brief Field m_CommandListPool, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::CommandList*>* ___m_CommandListPool;

  /// @brief Field m_DefaultCommandList, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::CommandList* ___m_DefaultCommandList;

  /// @brief Field m_CommandListsArray, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*> ___m_CommandListsArray;

  /// @brief Field m_CurrentFrameCommandLists, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>* ___m_CurrentFrameCommandLists;

  /// @brief Field m_UIRenderersWithDrawCallData, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>* ___m_UIRenderersWithDrawCallData;

  /// @brief Field m_TextureSlotCount, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureSlotCount ___m_TextureSlotCount;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <disposed>k__BackingField, offset: 0x54, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ___m_VertexDecl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ___m_DefaultStencilState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ___m_CurrentIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ___m_CommandListPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ___m_DefaultCommandList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ___m_CommandListsArray) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ___m_CurrentFrameCommandLists) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ___m_UIRenderersWithDrawCallData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ___m_TextureSlotCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CommandListManager, ____disposed_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::CommandListManager) == 0x58, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
