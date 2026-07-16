#pragma once
// IWYU pragma private; include "Zenject/AnimatorIkHandlerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AnimatorIkHandlerManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class IAnimatorIkHandler;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class AnimatorIkHandlerManager;
}
// Write type traits
MARK_REF_T(::Zenject::AnimatorIkHandlerManager*);
DEFINE_IL2CPP_CLASS(::Zenject::AnimatorIkHandlerManager*, "Zenject", "AnimatorIkHandlerManager");
// Dependencies UnityEngine.MonoBehaviour
namespace Zenject {
// Is value type: false
// CS Name: Zenject.AnimatorIkHandlerManager
class CORDL_TYPE AnimatorIkHandlerManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _handlers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__handlers, put = __cordl_internal_set__handlers)) ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* _handlers;

  /// @brief Method Construct, addr 0x6e89d74, size 0x8, virtual false, abstract: false, final false
  inline void Construct(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* handlers);

  static inline ::Zenject::AnimatorIkHandlerManager* New_ctor();

  /// @brief Method OnAnimatorIk, addr 0x6e89d7c, size 0x170, virtual false, abstract: false, final false
  inline void OnAnimatorIk();

  constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* const& __cordl_internal_get__handlers() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*& __cordl_internal_get__handlers();

  constexpr void __cordl_internal_set__handlers(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e89fdc, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenInjectMethod0, addr 0x6e89ef0, size 0xec, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1);

  /// @brief Method .ctor, addr 0x6e89eec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorIkHandlerManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimatorIkHandlerManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorIkHandlerManager(AnimatorIkHandlerManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorIkHandlerManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorIkHandlerManager(AnimatorIkHandlerManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14627 };

  /// @brief Field _handlers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* ____handlers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::AnimatorIkHandlerManager, ____handlers) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Zenject::AnimatorIkHandlerManager) == 0x28, "Size mismatch!");

} // namespace Zenject
