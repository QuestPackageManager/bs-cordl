#pragma once
// IWYU pragma private; include "Zenject/ConcreteIdBinderGeneric_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
CORDL_MODULE_EXPORT(ConcreteIdBinderGeneric_1)
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class ConcreteIdBinderGeneric_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ConcreteIdBinderGeneric_1);
// Type: Zenject::ConcreteIdBinderGeneric`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::Zenject::ConcreteIdBinderGeneric`1<TContract>*
class CORDL_TYPE ConcreteIdBinderGeneric_1 : public ::Zenject::ConcreteBinderGeneric_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method WithId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteBinderGeneric_1<TContract>* WithId(::System::Object* identifier);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteIdBinderGeneric_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ConcreteIdBinderGeneric_1, "Zenject", "ConcreteIdBinderGeneric`1");
