#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_def.hpp"
CORDL_MODULE_EXPORT(StaticMemoryPoolBase_1)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Zenject {
template <typename TValue> class StaticMemoryPoolBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPoolBase_1);
// Type: Zenject::StaticMemoryPoolBase`1
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11084)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11084), inst: 159 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11085))
// CS Name: ::Zenject::StaticMemoryPoolBase`1<TValue>*
class CORDL_TYPE StaticMemoryPoolBase_1 : public ::Zenject::StaticMemoryPoolBaseBase_1<TValue> {
public:
  // Declarations
  static inline ::Zenject::StaticMemoryPoolBase_1<TValue>* New_ctor(::System::Action_1<TValue>* onDespawnedMethod);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<TValue>* onDespawnedMethod);

  /// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Alloc();

  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticMemoryPoolBase_1(StaticMemoryPoolBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticMemoryPoolBase_1(StaticMemoryPoolBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticMemoryPoolBase_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPoolBase_1, "Zenject", "StaticMemoryPoolBase`1");
