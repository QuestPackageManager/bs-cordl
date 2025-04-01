#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshHandle)
namespace UnityEngine::UIElements::UIR {
class Page;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::MeshHandle);
// Dependencies UnityEngine.UIElements.UIR.Alloc, UnityEngine.UIElements.UIR.LinkedPoolItem`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.MeshHandle
class CORDL_TYPE MeshHandle : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::MeshHandle*> {
public:
  // Declarations
  /// @brief Field allocIndices, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get_allocIndices, put = __cordl_internal_set_allocIndices)) ::UnityEngine::UIElements::UIR::Alloc allocIndices;

  /// @brief Field allocPage, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_allocPage, put = __cordl_internal_set_allocPage)) ::UnityEngine::UIElements::UIR::Page* allocPage;

  /// @brief Field allocTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_allocTime, put = __cordl_internal_set_allocTime)) uint32_t allocTime;

  /// @brief Field allocVerts, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_allocVerts, put = __cordl_internal_set_allocVerts)) ::UnityEngine::UIElements::UIR::Alloc allocVerts;

  /// @brief Field triangleCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_triangleCount, put = __cordl_internal_set_triangleCount)) uint32_t triangleCount;

  /// @brief Field updateAllocID, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_updateAllocID, put = __cordl_internal_set_updateAllocID)) uint32_t updateAllocID;

  static inline ::UnityEngine::UIElements::UIR::MeshHandle* New_ctor();

  constexpr ::UnityEngine::UIElements::UIR::Alloc const& __cordl_internal_get_allocIndices() const;

  constexpr ::UnityEngine::UIElements::UIR::Alloc& __cordl_internal_get_allocIndices();

  constexpr ::UnityEngine::UIElements::UIR::Page* const& __cordl_internal_get_allocPage() const;

  constexpr ::UnityEngine::UIElements::UIR::Page*& __cordl_internal_get_allocPage();

  constexpr uint32_t const& __cordl_internal_get_allocTime() const;

  constexpr uint32_t& __cordl_internal_get_allocTime();

  constexpr ::UnityEngine::UIElements::UIR::Alloc const& __cordl_internal_get_allocVerts() const;

  constexpr ::UnityEngine::UIElements::UIR::Alloc& __cordl_internal_get_allocVerts();

  constexpr uint32_t const& __cordl_internal_get_triangleCount() const;

  constexpr uint32_t& __cordl_internal_get_triangleCount();

  constexpr uint32_t const& __cordl_internal_get_updateAllocID() const;

  constexpr uint32_t& __cordl_internal_get_updateAllocID();

  constexpr void __cordl_internal_set_allocIndices(::UnityEngine::UIElements::UIR::Alloc value);

  constexpr void __cordl_internal_set_allocPage(::UnityEngine::UIElements::UIR::Page* value);

  constexpr void __cordl_internal_set_allocTime(uint32_t value);

  constexpr void __cordl_internal_set_allocVerts(::UnityEngine::UIElements::UIR::Alloc value);

  constexpr void __cordl_internal_set_triangleCount(uint32_t value);

  constexpr void __cordl_internal_set_updateAllocID(uint32_t value);

  /// @brief Method .ctor, addr 0x49af72c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshHandle(MeshHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshHandle(MeshHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6416 };

  /// @brief Field allocVerts, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc ___allocVerts;

  /// @brief Field allocIndices, offset: 0x30, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc ___allocIndices;

  /// @brief Field triangleCount, offset: 0x48, size: 0x4, def value: None
  uint32_t ___triangleCount;

  /// @brief Field allocPage, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* ___allocPage;

  /// @brief Field allocTime, offset: 0x58, size: 0x4, def value: None
  uint32_t ___allocTime;

  /// @brief Field updateAllocID, offset: 0x5c, size: 0x4, def value: None
  uint32_t ___updateAllocID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___allocVerts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___allocIndices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___triangleCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___allocPage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___allocTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___updateAllocID) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::MeshHandle, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::MeshHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshHandle*, "UnityEngine.UIElements.UIR", "MeshHandle");
