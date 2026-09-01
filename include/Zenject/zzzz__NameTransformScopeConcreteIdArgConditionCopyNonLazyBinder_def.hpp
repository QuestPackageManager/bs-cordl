#pragma once
// IWYU pragma private; include "Zenject\NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__TransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class TransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_T(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*);
DEFINE_IL2CPP_CLASS(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder");
// Dependencies Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  static inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method WithGameObjectName, addr 0x6e5cba8, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder* WithGameObjectName(::StringW gameObjectName);

  /// @brief Method .ctor, addr 0x6e5cb90, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14272 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder) == 0x28, "Size mismatch!");

} // namespace Zenject
