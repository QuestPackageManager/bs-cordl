#pragma once
// IWYU pragma private; include "Zenject/IBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBindingFinalizer)
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class IBindingFinalizer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IBindingFinalizer);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IBindingFinalizer
class CORDL_TYPE IBindingFinalizer {
public:
  // Declarations
  __declspec(property(get = get_BindingInheritanceMethod)) ::Zenject::BindingInheritanceMethods BindingInheritanceMethod;

  /// @brief Method FinalizeBinding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void FinalizeBinding(::Zenject::DiContainer* container);

  /// @brief Method get_BindingInheritanceMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();

  // Ctor Parameters [CppParam { name: "", ty: "IBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBindingFinalizer(IBindingFinalizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12294 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IBindingFinalizer*, "Zenject", "IBindingFinalizer");
