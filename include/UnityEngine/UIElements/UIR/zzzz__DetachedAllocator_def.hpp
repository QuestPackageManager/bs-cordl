#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/DetachedAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DetachedAllocator)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class TempAllocator_1;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class DetachedAllocator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::DetachedAllocator);
// Type: UnityEngine.UIElements.UIR::DetachedAllocator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::DetachedAllocator*
class CORDL_TYPE DetachedAllocator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Disposed, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Disposed, put = __cordl_internal_set_m_Disposed)) bool m_Disposed;

  /// @brief Field m_IndexPool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexPool, put = __cordl_internal_set_m_IndexPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* m_IndexPool;

  /// @brief Field m_MeshWriteDataCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MeshWriteDataCount, put = __cordl_internal_set_m_MeshWriteDataCount)) int32_t m_MeshWriteDataCount;

  /// @brief Field m_MeshWriteDataPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshWriteDataPool,
                      put = __cordl_internal_set_m_MeshWriteDataPool)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* m_MeshWriteDataPool;

  /// @brief Field m_VertsPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VertsPool, put = __cordl_internal_set_m_VertsPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* m_VertsPool;

  /// @brief Method Dispose, addr 0x492cb0c, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x492cb70, size 0x90, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  constexpr bool const& __cordl_internal_get_m_Disposed() const;

  constexpr bool& __cordl_internal_get_m_Disposed();

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*& __cordl_internal_get_m_IndexPool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*> const& __cordl_internal_get_m_IndexPool() const;

  constexpr int32_t const& __cordl_internal_get_m_MeshWriteDataCount() const;

  constexpr int32_t& __cordl_internal_get_m_MeshWriteDataCount();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>*& __cordl_internal_get_m_MeshWriteDataPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>*> const& __cordl_internal_get_m_MeshWriteDataPool() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*& __cordl_internal_get_m_VertsPool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*> const& __cordl_internal_get_m_VertsPool() const;

  constexpr void __cordl_internal_set_m_Disposed(bool value);

  constexpr void __cordl_internal_set_m_IndexPool(::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* value);

  constexpr void __cordl_internal_set_m_MeshWriteDataCount(int32_t value);

  constexpr void __cordl_internal_set_m_MeshWriteDataPool(::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* value);

  constexpr void __cordl_internal_set_m_VertsPool(::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DetachedAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DetachedAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DetachedAllocator(DetachedAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DetachedAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DetachedAllocator(DetachedAllocator const&) = delete;

  /// @brief Field m_VertsPool, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* ___m_VertsPool;

  /// @brief Field m_IndexPool, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* ___m_IndexPool;

  /// @brief Field m_MeshWriteDataPool, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* ___m_MeshWriteDataPool;

  /// @brief Field m_MeshWriteDataCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_MeshWriteDataCount;

  /// @brief Field m_Disposed, offset: 0x2c, size: 0x1, def value: None
  bool ___m_Disposed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6326 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::DetachedAllocator, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_VertsPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_IndexPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_MeshWriteDataPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_MeshWriteDataCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_Disposed) == 0x2c, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::DetachedAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DetachedAllocator*, "UnityEngine.UIElements.UIR", "DetachedAllocator");
