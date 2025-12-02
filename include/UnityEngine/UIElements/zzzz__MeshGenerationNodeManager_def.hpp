#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationNodeManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationNodeManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
class EntryRecorder;
}
namespace UnityEngine::UIElements::UIR {
class Entry;
}
namespace UnityEngine::UIElements {
class MeshGenerationNodeImpl;
}
namespace UnityEngine::UIElements {
struct MeshGenerationNode;
}
namespace UnityEngine::UIElements {
struct UnsafeMeshGenerationNode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshGenerationNodeManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshGenerationNodeManager);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MeshGenerationNodeManager
class CORDL_TYPE MeshGenerationNodeManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_EntryRecorder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntryRecorder, put = __cordl_internal_set_m_EntryRecorder)) ::UnityEngine::UIElements::UIR::EntryRecorder* m_EntryRecorder;

  /// @brief Field m_Nodes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Nodes, put = __cordl_internal_set_m_Nodes)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshGenerationNodeImpl*>* m_Nodes;

  /// @brief Field m_UsedCounter, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UsedCounter, put = __cordl_internal_set_m_UsedCounter)) int32_t m_UsedCounter;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateImpl, addr 0x6ba19a0, size 0x19c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshGenerationNodeImpl* CreateImpl(::UnityEngine::UIElements::UIR::Entry* parentEntry, bool safe);

  /// @brief Method CreateNode, addr 0x6ba0c94, size 0x28, virtual false, abstract: false, final false
  inline void CreateNode(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::ByRef<::UnityEngine::UIElements::MeshGenerationNode> node);

  /// @brief Method CreateUnsafeNode, addr 0x6ba0d04, size 0x28, virtual false, abstract: false, final false
  inline void CreateUnsafeNode(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::ByRef<::UnityEngine::UIElements::UnsafeMeshGenerationNode> node);

  /// @brief Method Dispose, addr 0x6ba1bd4, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6ba1c3c, size 0x10c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::MeshGenerationNodeManager* New_ctor(::UnityEngine::UIElements::UIR::EntryRecorder* entryRecorder);

  /// @brief Method ResetAll, addr 0x6ba1b3c, size 0x88, virtual false, abstract: false, final false
  inline void ResetAll();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::EntryRecorder* const& __cordl_internal_get_m_EntryRecorder() const;

  constexpr ::UnityEngine::UIElements::UIR::EntryRecorder*& __cordl_internal_get_m_EntryRecorder();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshGenerationNodeImpl*>* const& __cordl_internal_get_m_Nodes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshGenerationNodeImpl*>*& __cordl_internal_get_m_Nodes();

  constexpr int32_t const& __cordl_internal_get_m_UsedCounter() const;

  constexpr int32_t& __cordl_internal_get_m_UsedCounter();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_EntryRecorder(::UnityEngine::UIElements::UIR::EntryRecorder* value);

  constexpr void __cordl_internal_set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshGenerationNodeImpl*>* value);

  constexpr void __cordl_internal_set_m_UsedCounter(int32_t value);

  /// @brief Method .ctor, addr 0x6ba1918, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::EntryRecorder* entryRecorder);

  /// @brief Method get_disposed, addr 0x6ba1bc4, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x6ba1bcc, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationNodeManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationNodeManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshGenerationNodeManager(MeshGenerationNodeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationNodeManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshGenerationNodeManager(MeshGenerationNodeManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4675 };

  /// @brief Field m_Nodes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshGenerationNodeImpl*>* ___m_Nodes;

  /// @brief Field m_UsedCounter, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_UsedCounter;

  /// @brief Field m_EntryRecorder, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::EntryRecorder* ___m_EntryRecorder;

  /// @brief Field <disposed>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationNodeManager, ___m_Nodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationNodeManager, ___m_UsedCounter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationNodeManager, ___m_EntryRecorder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationNodeManager, ____disposed_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationNodeManager, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MeshGenerationNodeManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationNodeManager*, "UnityEngine.UIElements", "MeshGenerationNodeManager");
