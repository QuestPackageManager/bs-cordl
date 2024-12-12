#pragma once
// IWYU pragma private; include "Zenject/AnimatorMoveHandlerManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnimatorMoveHandlerManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class IAnimatorMoveHandler;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class AnimatorMoveHandlerManager;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AnimatorMoveHandlerManager);
// Dependencies UnityEngine.MonoBehaviour
namespace Zenject {
// Is value type: false
// CS Name: Zenject.AnimatorMoveHandlerManager
class CORDL_TYPE AnimatorMoveHandlerManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _handlers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__handlers, put = __cordl_internal_set__handlers)) ::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>* _handlers;

  /// @brief Method Construct, addr 0x4b422f0, size 0x8, virtual false, abstract: false, final false
  inline void Construct(::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>* handlers);

  static inline ::Zenject::AnimatorMoveHandlerManager* New_ctor();

  /// @brief Method OnAnimatorMove, addr 0x4b422f8, size 0x1b0, virtual false, abstract: false, final false
  inline void OnAnimatorMove();

  constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>* const& __cordl_internal_get__handlers() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*& __cordl_internal_get__handlers();

  constexpr void __cordl_internal_set__handlers(::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4258c, size 0x2fc, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenInjectMethod0, addr 0x4b424b0, size 0xdc, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x4b424a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorMoveHandlerManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatorMoveHandlerManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorMoveHandlerManager(AnimatorMoveHandlerManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorMoveHandlerManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorMoveHandlerManager(AnimatorMoveHandlerManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12639 };

  /// @brief Field _handlers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>* ____handlers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::AnimatorMoveHandlerManager, ____handlers) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::AnimatorMoveHandlerManager, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AnimatorMoveHandlerManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AnimatorMoveHandlerManager*, "Zenject", "AnimatorMoveHandlerManager");
