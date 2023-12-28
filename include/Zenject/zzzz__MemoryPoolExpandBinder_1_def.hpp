#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
CORDL_MODULE_EXPORT(MemoryPoolExpandBinder_1)
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
template <typename TContract> class FactoryArgumentsToChoiceBinder_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class MemoryPoolExpandBinder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPoolExpandBinder_1);
// Type: Zenject::MemoryPoolExpandBinder`1
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10703), inst: 1771 }), TypeDefinitionIndex(TypeDefinitionIndex(10703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10866))
// CS Name: ::Zenject::MemoryPoolExpandBinder`1<TContract>*
class CORDL_TYPE MemoryPoolExpandBinder_1 : public ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract> {
public:
  // Declarations
  /// @brief Field <MemoryPoolBindInfo>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__MemoryPoolBindInfo_k__BackingField, put = __set__MemoryPoolBindInfo_k__BackingField))::Zenject::MemoryPoolBindInfo* _MemoryPoolBindInfo_k__BackingField;

  __declspec(property(get = get_MemoryPoolBindInfo, put = set_MemoryPoolBindInfo))::Zenject::MemoryPoolBindInfo* MemoryPoolBindInfo;

  constexpr ::Zenject::MemoryPoolBindInfo*& __get__MemoryPoolBindInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::MemoryPoolBindInfo*> const& __get__MemoryPoolBindInfo_k__BackingField() const;

  constexpr void __set__MemoryPoolBindInfo_k__BackingField(::Zenject::MemoryPoolBindInfo* value);

  static inline ::Zenject::MemoryPoolExpandBinder_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                         ::Zenject::MemoryPoolBindInfo* poolBindInfo);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::Zenject::MemoryPoolBindInfo* poolBindInfo);

  /// @brief Method get_MemoryPoolBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::MemoryPoolBindInfo* get_MemoryPoolBindInfo();

  /// @brief Method set_MemoryPoolBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_MemoryPoolBindInfo(::Zenject::MemoryPoolBindInfo* value);

  /// @brief Method ExpandByOneAtATime addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* ExpandByOneAtATime(bool showExpandWarning);

  /// @brief Method ExpandByDoubling addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* ExpandByDoubling(bool showExpandWarning);

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolExpandBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolExpandBinder_1(MemoryPoolExpandBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolExpandBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolExpandBinder_1(MemoryPoolExpandBinder_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolExpandBinder_1();

public:
  /// @brief Field <MemoryPoolBindInfo>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Zenject::MemoryPoolBindInfo* ____MemoryPoolBindInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPoolExpandBinder_1, "Zenject", "MemoryPoolExpandBinder`1");
