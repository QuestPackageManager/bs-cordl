#pragma once
// IWYU pragma private; include "Zenject/ConcreteBinderNonGeneric.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ConcreteBinderNonGeneric)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FromBinderNonGeneric;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
class ConcreteBinderNonGeneric;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConcreteBinderNonGeneric);
// Type: Zenject::ConcreteBinderNonGeneric
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ConcreteBinderNonGeneric*
class CORDL_TYPE ConcreteBinderNonGeneric : public ::Zenject::FromBinderNonGeneric {
public:
  // Declarations
  static inline ::Zenject::ConcreteBinderNonGeneric* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete> inline ::Zenject::FromBinderNonGeneric* To();

  /// @brief Method To, addr 0x365ddf8, size 0x4, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderNonGeneric* To(::ArrayW<::System::Type*, ::Array<::System::Type*>*> concreteTypes);

  /// @brief Method To, addr 0x365ddfc, size 0x10c, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderNonGeneric* To(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes);

  /// @brief Method To, addr 0x365df08, size 0x144, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderNonGeneric* To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator);

  /// @brief Method ToSelf, addr 0x365dcb8, size 0x124, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderNonGeneric* ToSelf();

  /// @brief Method <ToSelf>b__1_0, addr 0x365e2e4, size 0xa4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ToSelf_b__1_0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method .ctor, addr 0x365dc54, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteBinderNonGeneric();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderNonGeneric", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteBinderNonGeneric(ConcreteBinderNonGeneric&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderNonGeneric", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteBinderNonGeneric(ConcreteBinderNonGeneric const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConcreteBinderNonGeneric, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ConcreteBinderNonGeneric);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConcreteBinderNonGeneric*, "Zenject", "ConcreteBinderNonGeneric");
