#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_def.hpp"
CORDL_MODULE_EXPORT(MemoryPoolIdInitialSizeMaxSizeBinder_1)
namespace System {
class Object;
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
class MemoryPoolBindInfo;
}
namespace Zenject {
template <typename TContract> class MemoryPoolInitialSizeMaxSizeBinder_1;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class MemoryPoolIdInitialSizeMaxSizeBinder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1);
// Type: Zenject::MemoryPoolIdInitialSizeMaxSizeBinder`1
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10868), inst: 4472 }), TypeDefinitionIndex(TypeDefinitionIndex(10868))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10869))
// CS Name: ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder`1<TContract>*
class CORDL_TYPE MemoryPoolIdInitialSizeMaxSizeBinder_1 : public ::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                       ::Zenject::FactoryBindInfo* factoryBindInfo, ::Zenject::MemoryPoolBindInfo* poolBindInfo);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::Zenject::MemoryPoolBindInfo* poolBindInfo);

  /// @brief Method WithId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* WithId(::System::Object* identifier);

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolIdInitialSizeMaxSizeBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolIdInitialSizeMaxSizeBinder_1(MemoryPoolIdInitialSizeMaxSizeBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolIdInitialSizeMaxSizeBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolIdInitialSizeMaxSizeBinder_1(MemoryPoolIdInitialSizeMaxSizeBinder_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolIdInitialSizeMaxSizeBinder_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1, "Zenject", "MemoryPoolIdInitialSizeMaxSizeBinder`1");
