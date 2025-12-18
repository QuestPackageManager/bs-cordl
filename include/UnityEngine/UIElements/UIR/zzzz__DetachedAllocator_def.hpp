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
namespace System {
class IDisposable;
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
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.DetachedAllocator
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

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x6b0a3dc, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6b0a444, size 0xa0, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::DetachedAllocator* New_ctor();

  constexpr bool const& __cordl_internal_get_m_Disposed() const;

  constexpr bool& __cordl_internal_get_m_Disposed();

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* const& __cordl_internal_get_m_IndexPool() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*& __cordl_internal_get_m_IndexPool();

  constexpr int32_t const& __cordl_internal_get_m_MeshWriteDataCount() const;

  constexpr int32_t& __cordl_internal_get_m_MeshWriteDataCount();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* const& __cordl_internal_get_m_MeshWriteDataPool() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>*& __cordl_internal_get_m_MeshWriteDataPool();

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* const& __cordl_internal_get_m_VertsPool() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*& __cordl_internal_get_m_VertsPool();

  constexpr void __cordl_internal_set_m_Disposed(bool value);

  constexpr void __cordl_internal_set_m_IndexPool(::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* value);

  constexpr void __cordl_internal_set_m_MeshWriteDataCount(int32_t value);

  constexpr void __cordl_internal_set_m_MeshWriteDataPool(::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* value);

  constexpr void __cordl_internal_set_m_VertsPool(::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* value);

  /// @brief Method .ctor, addr 0x6b0a2b8, size 0x124, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5284 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_VertsPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_IndexPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_MeshWriteDataPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_MeshWriteDataCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DetachedAllocator, ___m_Disposed) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::DetachedAllocator, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::DetachedAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DetachedAllocator*, "UnityEngine.UIElements.UIR", "DetachedAllocator");
