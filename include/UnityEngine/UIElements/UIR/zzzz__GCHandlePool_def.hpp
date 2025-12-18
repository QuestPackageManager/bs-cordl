#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GCHandlePool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GCHandlePool)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GCHandlePool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::GCHandlePool);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.GCHandlePool
class CORDL_TYPE GCHandlePool : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field k_AllocBatchSize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_k_AllocBatchSize, put = __cordl_internal_set_k_AllocBatchSize)) int32_t k_AllocBatchSize;

  /// @brief Field m_Handles, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Handles, put = __cordl_internal_set_m_Handles)) ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>* m_Handles;

  /// @brief Field m_UsedHandlesCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UsedHandlesCount, put = __cordl_internal_set_m_UsedHandlesCount)) int32_t m_UsedHandlesCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x6b076c4, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6b0772c, size 0x130, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Get, addr 0x6b073ec, size 0x1e0, virtual false, abstract: false, final false
  inline ::System::Runtime::InteropServices::GCHandle Get(::System::Object* target);

  /// @brief Method GetIntPtr, addr 0x6b075cc, size 0x10, virtual false, abstract: false, final false
  inline ::System::IntPtr GetIntPtr(::System::Object* target);

  static inline ::UnityEngine::UIElements::UIR::GCHandlePool* New_ctor(int32_t capacity, int32_t allocBatchSize);

  /// @brief Method ReturnAll, addr 0x6b075dc, size 0xd8, virtual false, abstract: false, final false
  inline void ReturnAll();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_k_AllocBatchSize() const;

  constexpr int32_t& __cordl_internal_get_k_AllocBatchSize();

  constexpr ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>* const& __cordl_internal_get_m_Handles() const;

  constexpr ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*& __cordl_internal_get_m_Handles();

  constexpr int32_t const& __cordl_internal_get_m_UsedHandlesCount() const;

  constexpr int32_t& __cordl_internal_get_m_UsedHandlesCount();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_k_AllocBatchSize(int32_t value);

  constexpr void __cordl_internal_set_m_Handles(::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>* value);

  constexpr void __cordl_internal_set_m_UsedHandlesCount(int32_t value);

  /// @brief Method .ctor, addr 0x6b07360, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, int32_t allocBatchSize);

  /// @brief Method get_disposed, addr 0x6b076b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x6b076bc, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GCHandlePool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GCHandlePool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GCHandlePool(GCHandlePool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GCHandlePool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GCHandlePool(GCHandlePool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5275 };

  /// @brief Field m_Handles, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>* ___m_Handles;

  /// @brief Field m_UsedHandlesCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_UsedHandlesCount;

  /// @brief Field k_AllocBatchSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___k_AllocBatchSize;

  /// @brief Field <disposed>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::GCHandlePool, ___m_Handles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GCHandlePool, ___m_UsedHandlesCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GCHandlePool, ___k_AllocBatchSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GCHandlePool, ____disposed_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GCHandlePool, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GCHandlePool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GCHandlePool*, "UnityEngine.UIElements.UIR", "GCHandlePool");
