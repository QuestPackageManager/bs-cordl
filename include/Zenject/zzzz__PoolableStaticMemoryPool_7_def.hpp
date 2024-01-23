#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
CORDL_MODULE_EXPORT(PoolableStaticMemoryPool_7)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class PoolableStaticMemoryPool_7;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableStaticMemoryPool_7);
// Type: Zenject::PoolableStaticMemoryPool`7
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11092)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11092), inst: 3635 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11082))
// CS Name: ::Zenject::PoolableStaticMemoryPool`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*
class CORDL_TYPE PoolableStaticMemoryPool_7 : public ::Zenject::StaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue> {
public:
  // Declarations
  static inline ::Zenject::PoolableStaticMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TValue value);

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnDespawned(TValue value);

  // Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableStaticMemoryPool_7(PoolableStaticMemoryPool_7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableStaticMemoryPool_7(PoolableStaticMemoryPool_7 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableStaticMemoryPool_7();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_7, "Zenject", "PoolableStaticMemoryPool`7");
