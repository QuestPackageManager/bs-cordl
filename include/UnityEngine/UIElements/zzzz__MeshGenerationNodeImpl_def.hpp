#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationNodeImpl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationNodeImpl)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
class EntryRecorder;
}
namespace UnityEngine::UIElements::UIR {
class Entry;
}
namespace UnityEngine::UIElements {
struct MeshGenerationNode;
}
namespace UnityEngine::UIElements {
struct UnsafeMeshGenerationNode;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshGenerationNodeImpl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshGenerationNodeImpl);
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MeshGenerationNodeImpl
class CORDL_TYPE MeshGenerationNodeImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_EntryRecorder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntryRecorder, put = __cordl_internal_set_m_EntryRecorder)) ::UnityEngine::UIElements::UIR::EntryRecorder* m_EntryRecorder;

  /// @brief Field m_ParentEntry, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParentEntry, put = __cordl_internal_set_m_ParentEntry)) ::UnityEngine::UIElements::UIR::Entry* m_ParentEntry;

  /// @brief Field m_SelfHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelfHandle, put = __cordl_internal_set_m_SelfHandle)) ::System::Runtime::InteropServices::GCHandle m_SelfHandle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x6c0a6f0, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6c0a758, size 0x44, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawGradients, addr 0x6c0a454, size 0x10c, virtual false, abstract: false, final false
  inline void DrawGradients(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices,
                            ::UnityEngine::UIElements::VectorImage* gradientsOwner);

  /// @brief Method DrawMesh, addr 0x6c0a2d0, size 0xcc, virtual false, abstract: false, final false
  inline void DrawMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture,
                       bool skipAtlas);

  /// @brief Method GetNode, addr 0x6c0a6c0, size 0xc, virtual false, abstract: false, final false
  inline void GetNode(::ByRef<::UnityEngine::UIElements::MeshGenerationNode> node);

  /// @brief Method GetParentEntry, addr 0x6c0a6d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Entry* GetParentEntry();

  /// @brief Method GetUnsafeNode, addr 0x6c0a6cc, size 0xc, virtual false, abstract: false, final false
  inline void GetUnsafeNode(::ByRef<::UnityEngine::UIElements::UnsafeMeshGenerationNode> node);

  /// @brief Method Init, addr 0x6c0a5a0, size 0x9c, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::UnityEngine::UIElements::UIR::EntryRecorder* entryRecorder, bool safe);

  static inline ::UnityEngine::UIElements::MeshGenerationNodeImpl* New_ctor();

  /// @brief Method Reset, addr 0x6c0a63c, size 0x84, virtual false, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::EntryRecorder* const& __cordl_internal_get_m_EntryRecorder() const;

  constexpr ::UnityEngine::UIElements::UIR::EntryRecorder*& __cordl_internal_get_m_EntryRecorder();

  constexpr ::UnityEngine::UIElements::UIR::Entry* const& __cordl_internal_get_m_ParentEntry() const;

  constexpr ::UnityEngine::UIElements::UIR::Entry*& __cordl_internal_get_m_ParentEntry();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_m_SelfHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_m_SelfHandle();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_EntryRecorder(::UnityEngine::UIElements::UIR::EntryRecorder* value);

  constexpr void __cordl_internal_set_m_ParentEntry(::UnityEngine::UIElements::UIR::Entry* value);

  constexpr void __cordl_internal_set_m_SelfHandle(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x6c0a580, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disposed, addr 0x6c0a6e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x6c0a6e8, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationNodeImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationNodeImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshGenerationNodeImpl(MeshGenerationNodeImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationNodeImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshGenerationNodeImpl(MeshGenerationNodeImpl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4674 };

  /// @brief Field m_SelfHandle, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___m_SelfHandle;

  /// @brief Field m_ParentEntry, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Entry* ___m_ParentEntry;

  /// @brief Field m_EntryRecorder, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::EntryRecorder* ___m_EntryRecorder;

  /// @brief Field <disposed>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationNodeImpl, ___m_SelfHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationNodeImpl, ___m_ParentEntry) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationNodeImpl, ___m_EntryRecorder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationNodeImpl, ____disposed_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationNodeImpl, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MeshGenerationNodeImpl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationNodeImpl*, "UnityEngine.UIElements", "MeshGenerationNodeImpl");
