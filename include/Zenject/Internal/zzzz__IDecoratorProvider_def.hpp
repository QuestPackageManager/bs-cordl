#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDecoratorProvider)
namespace Zenject {
class IProvider;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject::Internal {
class IDecoratorProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::IDecoratorProvider);
// Type: Zenject.Internal::IDecoratorProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11369))
// CS Name: ::Zenject.Internal::IDecoratorProvider*
class CORDL_TYPE IDecoratorProvider {
public:
  // Declarations
  /// @brief Method GetAllInstances, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetAllInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "IDecoratorProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDecoratorProvider(IDecoratorProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDecoratorProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDecoratorProvider(IDecoratorProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::IDecoratorProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::IDecoratorProvider*, "Zenject.Internal", "IDecoratorProvider");
