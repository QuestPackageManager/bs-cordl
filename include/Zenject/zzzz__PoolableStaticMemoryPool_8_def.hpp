#pragma once
// IWYU pragma private; include "Zenject/PoolableStaticMemoryPool_8.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPool_8_def.hpp"
CORDL_MODULE_EXPORT(PoolableStaticMemoryPool_8)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue> class PoolableStaticMemoryPool_8;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableStaticMemoryPool_8);
// Dependencies Zenject.StaticMemoryPool`8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
// Is value type: false
// CS Name: Zenject.PoolableStaticMemoryPool`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>
class CORDL_TYPE PoolableStaticMemoryPool_8 : public ::Zenject::StaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue> {
public:
  // Declarations
  static inline ::Zenject::PoolableStaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* New_ctor();

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnDespawned(TValue value);

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableStaticMemoryPool_8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableStaticMemoryPool_8(PoolableStaticMemoryPool_8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableStaticMemoryPool_8(PoolableStaticMemoryPool_8 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_8, "Zenject", "PoolableStaticMemoryPool`8");
