#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TempMeshAllocatorImpl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TempMeshAllocatorImpl)
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
template <typename T> class TempAllocator_1;
}
namespace UnityEngine::UIElements::UIR {
struct TempMeshAllocatorImpl_ThreadData;
}
namespace UnityEngine::UIElements {
struct TempMeshAllocator;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TempMeshAllocatorImpl;
}
namespace UnityEngine::UIElements::UIR {
struct TempMeshAllocatorImpl_ThreadData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl);
MARK_VAL_T(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.TempMeshAllocatorImpl/ThreadData
struct CORDL_TYPE TempMeshAllocatorImpl_ThreadData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TempMeshAllocatorImpl_ThreadData();

  // Ctor Parameters [CppParam { name: "allocations", ty: "::System::Collections::Generic::List_1<::System::IntPtr>*", modifiers: "", def_value: None }]
  constexpr TempMeshAllocatorImpl_ThreadData(::System::Collections::Generic::List_1<::System::IntPtr>* allocations) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5349 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field allocations, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::IntPtr>* allocations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, allocations) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.TempMeshAllocatorImpl
class CORDL_TYPE TempMeshAllocatorImpl : public ::System::Object {
public:
  // Declarations
  using ThreadData = ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData;

  /// @brief Field <disposed>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_GCHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GCHandle, put = __cordl_internal_set_m_GCHandle)) ::System::Runtime::InteropServices::GCHandle m_GCHandle;

  /// @brief Field m_IndexPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexPool, put = __cordl_internal_set_m_IndexPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* m_IndexPool;

  /// @brief Field m_ThreadData, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ThreadData,
      put = __cordl_internal_set_m_ThreadData)) ::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, ::Array<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData>*>
      m_ThreadData;

  /// @brief Field m_VertexPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VertexPool,
                      put = __cordl_internal_set_m_VertexPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* m_VertexPool;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeSlice_1<T> Allocate(int32_t count, int32_t alignment);

  /// @brief Method AllocateTempMesh, addr 0x6b2629c, size 0x298, virtual false, abstract: false, final false
  inline void AllocateTempMesh(int32_t vertexCount, int32_t indexCount, ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertices,
                               ::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indices);

  /// @brief Method Clear, addr 0x6b2653c, size 0x230, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateNativeHandle, addr 0x6b26290, size 0xc, virtual false, abstract: false, final false
  inline void CreateNativeHandle(::ByRef<::UnityEngine::UIElements::TempMeshAllocator> allocator);

  /// @brief Method Dispose, addr 0x6b2677c, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6b267e4, size 0xb4, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* New_ctor();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_m_GCHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_m_GCHandle();

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* const& __cordl_internal_get_m_IndexPool() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*& __cordl_internal_get_m_IndexPool();

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, ::Array<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData>*> const&
  __cordl_internal_get_m_ThreadData() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, ::Array<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData>*>& __cordl_internal_get_m_ThreadData();

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* const& __cordl_internal_get_m_VertexPool() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*& __cordl_internal_get_m_VertexPool();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_GCHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void __cordl_internal_set_m_IndexPool(::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* value);

  constexpr void
  __cordl_internal_set_m_ThreadData(::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, ::Array<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData>*> value);

  constexpr void __cordl_internal_set_m_VertexPool(::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* value);

  /// @brief Method .ctor, addr 0x6b260a4, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disposed, addr 0x6b2676c, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x6b26774, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TempMeshAllocatorImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TempMeshAllocatorImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TempMeshAllocatorImpl(TempMeshAllocatorImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TempMeshAllocatorImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TempMeshAllocatorImpl(TempMeshAllocatorImpl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5350 };

  /// @brief Field m_GCHandle, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___m_GCHandle;

  /// @brief Field m_ThreadData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, ::Array<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData>*> ___m_ThreadData;

  /// @brief Field m_VertexPool, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* ___m_VertexPool;

  /// @brief Field m_IndexPool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* ___m_IndexPool;

  /// @brief Field <disposed>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ___m_GCHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ___m_ThreadData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ___m_VertexPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ___m_IndexPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, ____disposed_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*, "UnityEngine.UIElements.UIR", "TempMeshAllocatorImpl");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, "UnityEngine.UIElements.UIR", "TempMeshAllocatorImpl/ThreadData");
