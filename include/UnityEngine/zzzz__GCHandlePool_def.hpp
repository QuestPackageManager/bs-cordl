#pragma once
// IWYU pragma private; include "UnityEngine\GCHandlePool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GCHandlePool)
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class GCHandlePool;
}
// Write type traits
MARK_REF_T(::UnityEngine::GCHandlePool*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GCHandlePool*, "UnityEngine", "GCHandlePool");
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GCHandlePool
class CORDL_TYPE GCHandlePool : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_current, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_current, put = __cordl_internal_set_m_current)) int32_t m_current;

  /// @brief Field m_handles, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_handles, put = __cordl_internal_set_m_handles)) ::ArrayW<::System::Runtime::InteropServices::GCHandle> m_handles;

  /// @brief Method Alloc, addr 0x6a3b4a4, size 0x70, virtual false, abstract: false, final false
  inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* o);

  /// @brief Method AllocHandleIfNotNull, addr 0x6a3b514, size 0x10, virtual false, abstract: false, final false
  inline ::System::IntPtr AllocHandleIfNotNull(::System::Object* o);

  /// @brief Method Free, addr 0x6a399a8, size 0xe8, virtual false, abstract: false, final false
  inline void Free(::System::Runtime::InteropServices::GCHandle h);

  static inline ::UnityEngine::GCHandlePool* New_ctor();

  constexpr int32_t const& __cordl_internal_get_m_current() const;

  constexpr int32_t& __cordl_internal_get_m_current();

  constexpr ::ArrayW<::System::Runtime::InteropServices::GCHandle> const& __cordl_internal_get_m_handles() const;

  constexpr ::ArrayW<::System::Runtime::InteropServices::GCHandle>& __cordl_internal_get_m_handles();

  constexpr void __cordl_internal_set_m_current(int32_t value);

  constexpr void __cordl_internal_set_m_handles(::ArrayW<::System::Runtime::InteropServices::GCHandle> value);

  /// @brief Method .ctor, addr 0x6a39140, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20213 };

  /// @brief Field m_handles, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::InteropServices::GCHandle> ___m_handles;

  /// @brief Field m_current, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GCHandlePool, ___m_handles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GCHandlePool, ___m_current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GCHandlePool) == 0x20, "Size mismatch!");

} // namespace UnityEngine
