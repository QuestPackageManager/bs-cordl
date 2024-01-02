#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Zenject::ConcreteIdArgConditionCopyNonLazyBinder);
// Type: Zenject::ConcreteIdArgConditionCopyNonLazyBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10669))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10675))
// CS Name: ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*
class CORDL_TYPE ConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ArgConditionCopyNonLazyBinder {
public:
  // Declarations
  static inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method .ctor, addr 0x2ec73ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method WithConcreteId, addr 0x2ec73f4, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::ArgConditionCopyNonLazyBinder* WithConcreteId(::System::Object* id);

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteIdArgConditionCopyNonLazyBinder(ConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteIdArgConditionCopyNonLazyBinder(ConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteIdArgConditionCopyNonLazyBinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "ConcreteIdArgConditionCopyNonLazyBinder");
