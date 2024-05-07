#pragma once
// IWYU pragma private; include "Zenject/PoolableStaticMemoryPool_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPool_3_def.hpp"
CORDL_MODULE_EXPORT(PoolableStaticMemoryPool_3)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TValue> class PoolableStaticMemoryPool_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableStaticMemoryPool_3);
// Type: Zenject::PoolableStaticMemoryPool`3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TValue>
// Is value type: false
// CS Name: ::Zenject::PoolableStaticMemoryPool`3<TParam1,TParam2,TValue>*
class CORDL_TYPE PoolableStaticMemoryPool_3 : public ::Zenject::StaticMemoryPool_3<TParam1, TParam2, TValue> {
public:
  // Declarations
  static inline ::Zenject::PoolableStaticMemoryPool_3<TParam1, TParam2, TValue>* New_ctor();

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnDespawned(TValue value);

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnSpawned(TParam1 p1, TParam2 p2, TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableStaticMemoryPool_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableStaticMemoryPool_3(PoolableStaticMemoryPool_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableStaticMemoryPool_3(PoolableStaticMemoryPool_3 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_3, "Zenject", "PoolableStaticMemoryPool`3");
