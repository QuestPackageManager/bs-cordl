#pragma once
// IWYU pragma private; include "UnityEngine/Pool/PooledObject_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PooledObject_1)
namespace System {
class IDisposable;
}
namespace UnityEngine::Pool {
template <typename T> class IObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Pool {
template <typename T> struct PooledObject_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Pool::PooledObject_1);
// Type: UnityEngine.Pool::PooledObject`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Pool {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::UnityEngine.Pool::PooledObject`1<T>
struct CORDL_TYPE PooledObject_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value, ::UnityEngine::Pool::IObjectPool_1<T>* pool);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PooledObject_1();

  // Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Pool", ty: "::UnityEngine::Pool::IObjectPool_1<T>*", modifiers: "", def_value: None
  // }]
  constexpr PooledObject_1(T m_ToReturn, ::UnityEngine::Pool::IObjectPool_1<T>* m_Pool) noexcept;

  /// @brief Field m_ToReturn, offset: 0x0, size: 0x8, def value: None
  T m_ToReturn;

  /// @brief Field m_Pool, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Pool::IObjectPool_1<T>* m_Pool;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11123 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Pool
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Pool::PooledObject_1, "UnityEngine.Pool", "PooledObject`1");
