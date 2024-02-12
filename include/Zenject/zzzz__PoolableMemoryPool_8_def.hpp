#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPool_8_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PoolableMemoryPool_8)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue> class PoolableMemoryPool_8;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableMemoryPool_8);
// Type: Zenject::PoolableMemoryPool`8
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10187)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10187), inst: 3513 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10214))
// CS Name: ::Zenject::PoolableMemoryPool`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*
class CORDL_TYPE PoolableMemoryPool_8 : public ::Zenject::MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue> {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDespawned(TValue item);

  /// @brief Method Reinitialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue item);

  static inline ::Zenject::PoolableMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableMemoryPool_8(PoolableMemoryPool_8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableMemoryPool_8(PoolableMemoryPool_8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableMemoryPool_8();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPool_8, "Zenject", "PoolableMemoryPool`8");
