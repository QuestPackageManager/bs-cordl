#pragma once
// IWYU pragma private; include "Zenject/ZenjectStateMachineBehaviourAutoInjecter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ZenjectStateMachineBehaviourAutoInjecter)
namespace System {
class Object;
}
namespace UnityEngine {
class Animator;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ZenjectStateMachineBehaviourAutoInjecter;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenjectStateMachineBehaviourAutoInjecter);
// Dependencies UnityEngine.MonoBehaviour
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenjectStateMachineBehaviourAutoInjecter
class CORDL_TYPE ZenjectStateMachineBehaviourAutoInjecter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Method Construct, addr 0x6c69f88, size 0x68, virtual false, abstract: false, final false
  inline void Construct(::Zenject::DiContainer* container);

  static inline ::Zenject::ZenjectStateMachineBehaviourAutoInjecter* New_ctor();

  /// @brief Method Start, addr 0x6c69ff0, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6c6a1dc, size 0x2cc, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenInjectMethod0, addr 0x6c6a0e4, size 0xf8, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x6c6a0e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectStateMachineBehaviourAutoInjecter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectStateMachineBehaviourAutoInjecter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectStateMachineBehaviourAutoInjecter(ZenjectStateMachineBehaviourAutoInjecter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectStateMachineBehaviourAutoInjecter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectStateMachineBehaviourAutoInjecter(ZenjectStateMachineBehaviourAutoInjecter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14687 };

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _animator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ZenjectStateMachineBehaviourAutoInjecter, ____container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectStateMachineBehaviourAutoInjecter, ____animator) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectStateMachineBehaviourAutoInjecter, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenjectStateMachineBehaviourAutoInjecter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectStateMachineBehaviourAutoInjecter*, "Zenject", "ZenjectStateMachineBehaviourAutoInjecter");
