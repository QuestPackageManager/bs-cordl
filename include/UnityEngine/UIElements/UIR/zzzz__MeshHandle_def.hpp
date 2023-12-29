#pragma once
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
// Type: UnityEngine.UIElements.UIR::MeshHandle
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7485), inst: 343 }), TypeDefinitionIndex(TypeDefinitionIndex(7519)),
// TypeDefinitionIndex(TypeDefinitionIndex(7485))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7511)) CS Name: ::UnityEngine.UIElements.UIR::MeshHandle*
class CORDL_TYPE MeshHandle : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::MeshHandle*> {
public:
  // Declarations
  /// @brief Field allocVerts, offset 0x18, size 0x18
  __declspec(property(get = __get_allocVerts, put = __set_allocVerts))::UnityEngine::UIElements::UIR::Alloc allocVerts;

  /// @brief Field allocIndices, offset 0x30, size 0x18
  __declspec(property(get = __get_allocIndices, put = __set_allocIndices))::UnityEngine::UIElements::UIR::Alloc allocIndices;

  /// @brief Field triangleCount, offset 0x48, size 0x4
  __declspec(property(get = __get_triangleCount, put = __set_triangleCount)) uint32_t triangleCount;

  /// @brief Field allocPage, offset 0x50, size 0x8
  __declspec(property(get = __get_allocPage, put = __set_allocPage))::UnityEngine::UIElements::UIR::Page* allocPage;

  /// @brief Field allocTime, offset 0x58, size 0x4
  __declspec(property(get = __get_allocTime, put = __set_allocTime)) uint32_t allocTime;

  /// @brief Field updateAllocID, offset 0x5c, size 0x4
  __declspec(property(get = __get_updateAllocID, put = __set_updateAllocID)) uint32_t updateAllocID;

  constexpr ::UnityEngine::UIElements::UIR::Alloc& __get_allocVerts();

  constexpr ::UnityEngine::UIElements::UIR::Alloc const& __get_allocVerts() const;

  constexpr void __set_allocVerts(::UnityEngine::UIElements::UIR::Alloc value);

  constexpr ::UnityEngine::UIElements::UIR::Alloc& __get_allocIndices();

  constexpr ::UnityEngine::UIElements::UIR::Alloc const& __get_allocIndices() const;

  constexpr void __set_allocIndices(::UnityEngine::UIElements::UIR::Alloc value);

  constexpr uint32_t& __get_triangleCount();

  constexpr uint32_t const& __get_triangleCount() const;

  constexpr void __set_triangleCount(uint32_t value);

  constexpr ::UnityEngine::UIElements::UIR::Page*& __get_allocPage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> const& __get_allocPage() const;

  constexpr void __set_allocPage(::UnityEngine::UIElements::UIR::Page* value);

  constexpr uint32_t& __get_allocTime();

  constexpr uint32_t const& __get_allocTime() const;

  constexpr void __set_allocTime(uint32_t value);

  constexpr uint32_t& __get_updateAllocID();

  constexpr uint32_t const& __get_updateAllocID() const;

  constexpr void __set_updateAllocID(uint32_t value);

  static inline ::UnityEngine::UIElements::UIR::MeshHandle* New_ctor();

  /// @brief Method .ctor addr 0x2c677f0 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshHandle(MeshHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshHandle(MeshHandle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshHandle();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::MeshHandle, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___allocVerts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___allocIndices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___triangleCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___allocPage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___allocTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshHandle, ___updateAllocID) == 0x5c, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::MeshHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshHandle*, "UnityEngine.UIElements.UIR", "MeshHandle");
