#pragma once
// IWYU pragma private; include "Zenject/ConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(ConcreteIdArgConditionCopyNonLazyBinder)
namespace System {
class Object;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class ConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_T(::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*);
DEFINE_IL2CPP_CLASS(::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "ConcreteIdArgConditionCopyNonLazyBinder");
// Dependencies Zenject.ArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE ConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ArgConditionCopyNonLazyBinder {
public:
  // Declarations
  static inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method WithConcreteId, addr 0x6e47a24, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::ArgConditionCopyNonLazyBinder* WithConcreteId(::System::Object* id);

  /// @brief Method .ctor, addr 0x6e47a1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteIdArgConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteIdArgConditionCopyNonLazyBinder(ConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteIdArgConditionCopyNonLazyBinder(ConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::ConcreteIdArgConditionCopyNonLazyBinder) == 0x20, "Size mismatch!");

} // namespace Zenject
