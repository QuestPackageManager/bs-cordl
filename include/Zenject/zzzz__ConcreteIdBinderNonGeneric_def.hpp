#pragma once
// IWYU pragma private; include "Zenject\ConcreteIdBinderNonGeneric.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ConcreteBinderNonGeneric_def.hpp"
CORDL_MODULE_EXPORT(ConcreteIdBinderNonGeneric)
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
class ConcreteBinderNonGeneric;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class ConcreteIdBinderNonGeneric;
}
// Write type traits
MARK_REF_T(::Zenject::ConcreteIdBinderNonGeneric*);
DEFINE_IL2CPP_CLASS(::Zenject::ConcreteIdBinderNonGeneric*, "Zenject", "ConcreteIdBinderNonGeneric");
// Dependencies Zenject.ConcreteBinderNonGeneric
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConcreteIdBinderNonGeneric
class CORDL_TYPE ConcreteIdBinderNonGeneric : public ::Zenject::ConcreteBinderNonGeneric {
public:
  // Declarations
  static inline ::Zenject::ConcreteIdBinderNonGeneric* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method WithId, addr 0x6e4af8c, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteBinderNonGeneric* WithId(::System::Object* identifier);

  /// @brief Method .ctor, addr 0x6e4af80, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteIdBinderNonGeneric();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderNonGeneric", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteIdBinderNonGeneric(ConcreteIdBinderNonGeneric&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderNonGeneric", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteIdBinderNonGeneric(ConcreteIdBinderNonGeneric const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14027 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::ConcreteIdBinderNonGeneric) == 0x30, "Size mismatch!");

} // namespace Zenject
