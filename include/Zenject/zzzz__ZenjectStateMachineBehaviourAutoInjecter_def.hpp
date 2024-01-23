#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Zenject::ZenjectStateMachineBehaviourAutoInjecter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11364))
// CS Name: ::Zenject::ZenjectStateMachineBehaviourAutoInjecter*
class CORDL_TYPE ZenjectStateMachineBehaviourAutoInjecter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator))::UnityW<::UnityEngine::Animator> _animator;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  /// @brief Method Construct, addr 0x2f20e30, size 0x64, virtual false, abstract: false, final false
  inline void Construct(::Zenject::DiContainer* container);

  /// @brief Method Start, addr 0x2f20e94, size 0xe8, virtual false, abstract: false, final false
  inline void Start();

  static inline ::Zenject::ZenjectStateMachineBehaviourAutoInjecter* New_ctor();

  /// @brief Method .ctor, addr 0x2f20f7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenInjectMethod0, addr 0x2f20f84, size 0xe8, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f2106c, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectStateMachineBehaviourAutoInjecter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectStateMachineBehaviourAutoInjecter(ZenjectStateMachineBehaviourAutoInjecter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectStateMachineBehaviourAutoInjecter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectStateMachineBehaviourAutoInjecter(ZenjectStateMachineBehaviourAutoInjecter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectStateMachineBehaviourAutoInjecter();

public:
  /// @brief Field _container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectStateMachineBehaviourAutoInjecter, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::ZenjectStateMachineBehaviourAutoInjecter, ____container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectStateMachineBehaviourAutoInjecter, ____animator) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenjectStateMachineBehaviourAutoInjecter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectStateMachineBehaviourAutoInjecter*, "Zenject", "ZenjectStateMachineBehaviourAutoInjecter");
