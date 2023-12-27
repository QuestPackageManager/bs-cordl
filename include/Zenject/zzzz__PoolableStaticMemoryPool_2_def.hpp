#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPool_2_def.hpp"
CORDL_MODULE_EXPORT(PoolableStaticMemoryPool_2)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TValue> class PoolableStaticMemoryPool_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableStaticMemoryPool_2);
// Type: Zenject::PoolableStaticMemoryPool`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11087)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11087), inst: 3625 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11077))
// CS Name: ::Zenject::PoolableStaticMemoryPool`2<TParam1,TValue>*
class CORDL_TYPE PoolableStaticMemoryPool_2 : public ::Zenject::StaticMemoryPool_2<TParam1, TValue> {
public:
  // Declarations
  static inline ::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void OnSpawned(TParam1 p1, TValue value);

  /// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void OnDespawned(TValue value);

  // Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableStaticMemoryPool_2(PoolableStaticMemoryPool_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableStaticMemoryPool_2(PoolableStaticMemoryPool_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableStaticMemoryPool_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_2, "Zenject", "PoolableStaticMemoryPool`2");
