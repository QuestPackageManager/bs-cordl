#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISubContainerCreator)
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class ISubContainerCreator;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ISubContainerCreator);
// Type: Zenject::ISubContainerCreator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11241))
// CS Name: ::Zenject::ISubContainerCreator*
class CORDL_TYPE ISubContainerCreator {
public:
  // Declarations
  /// @brief Method CreateSubContainer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "ISubContainerCreator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISubContainerCreator(ISubContainerCreator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISubContainerCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISubContainerCreator(ISubContainerCreator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::ISubContainerCreator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ISubContainerCreator*, "Zenject", "ISubContainerCreator");
