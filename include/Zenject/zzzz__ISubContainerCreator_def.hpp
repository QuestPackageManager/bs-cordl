#pragma once
// IWYU pragma private; include "Zenject/ISubContainerCreator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISubContainerCreator)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
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
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ISubContainerCreator
class CORDL_TYPE ISubContainerCreator {
public:
  // Declarations
  /// @brief Method CreateSubContainer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "ISubContainerCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISubContainerCreator(ISubContainerCreator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14564 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::ISubContainerCreator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ISubContainerCreator*, "Zenject", "ISubContainerCreator");
