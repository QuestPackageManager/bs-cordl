#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceBinder_1)
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class FactoryFromBinderUntyped;
}
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FactoryToChoiceBinder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceBinder_1);
// Type: Zenject::FactoryToChoiceBinder`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9858)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9858), inst: 1747 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9990))
// CS Name: ::Zenject::FactoryToChoiceBinder`1<TContract>*
class CORDL_TYPE FactoryToChoiceBinder_1 : public ::Zenject::FactoryFromBinder_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::FactoryToChoiceBinder_1<TContract>* New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method ToSelf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryFromBinder_1<TContract>* ToSelf();

  /// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryFromBinderUntyped* To(::System::Type* concreteType);

  /// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete> inline ::Zenject::FactoryFromBinder_1<TConcrete>* To();

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryToChoiceBinder_1(FactoryToChoiceBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryToChoiceBinder_1(FactoryToChoiceBinder_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryToChoiceBinder_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_1, "Zenject", "FactoryToChoiceBinder`1");
