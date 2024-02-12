#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ZenjectMoqExtensions)
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1;
}
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class ZenjectMoqExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenjectMoqExtensions);
// Type: Zenject::ZenjectMoqExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10059))
// CS Name: ::Zenject::ZenjectMoqExtensions*
class CORDL_TYPE ZenjectMoqExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromMock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> static inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMock(::Zenject::FromBinderGeneric_1<TContract>* binder);

  /// @brief Method FromMock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> static inline ::Zenject::ConditionCopyNonLazyBinder* FromMock(::Zenject::FactoryFromBinder_1<TContract>* binder);

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectMoqExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectMoqExtensions(ZenjectMoqExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectMoqExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectMoqExtensions(ZenjectMoqExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectMoqExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectMoqExtensions, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenjectMoqExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectMoqExtensions*, "Zenject", "ZenjectMoqExtensions");
