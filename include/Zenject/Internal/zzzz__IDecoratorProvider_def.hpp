#pragma once
// IWYU pragma private; include "Zenject/Internal/IDecoratorProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDecoratorProvider)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject::Internal {
class IDecoratorProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::IDecoratorProvider);
// Dependencies
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.IDecoratorProvider
class CORDL_TYPE IDecoratorProvider {
public:
  // Declarations
  /// @brief Method GetAllInstances, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetAllInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "IDecoratorProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDecoratorProvider(IDecoratorProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12711 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::IDecoratorProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::IDecoratorProvider*, "Zenject.Internal", "IDecoratorProvider");
