#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryFromBinder_3_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceBinder_3)
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
template <typename TParam1, typename TParam2, typename TContract> class FactoryFromBinder_3;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryToChoiceBinder_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceBinder_3);
// Type: Zenject::FactoryToChoiceBinder`3
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10738)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10738), inst: 1811 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10851))
// CS Name: ::Zenject::FactoryToChoiceBinder`3<TParam1,TParam2,TContract>*
class CORDL_TYPE FactoryToChoiceBinder_3 : public ::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract> {
public:
  // Declarations
  static inline ::Zenject::FactoryToChoiceBinder_3<TParam1, TParam2, TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                          ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method ToSelf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* ToSelf();

  /// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete> inline ::Zenject::FactoryFromBinder_3<TParam1, TParam2, TConcrete>* To();

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryToChoiceBinder_3(FactoryToChoiceBinder_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryToChoiceBinder_3(FactoryToChoiceBinder_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryToChoiceBinder_3();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_3, "Zenject", "FactoryToChoiceBinder`3");
