#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AnimatorIkHandlerManager)
namespace System {
class Object;
}
namespace Zenject {
class IAnimatorIkHandler;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class AnimatorIkHandlerManager;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AnimatorIkHandlerManager);
// Type: Zenject::AnimatorIkHandlerManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11300))
// CS Name: ::Zenject::AnimatorIkHandlerManager*
class CORDL_TYPE AnimatorIkHandlerManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _handlers, offset 0x18, size 0x8
  __declspec(property(get = __get__handlers, put = __set__handlers))::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* _handlers;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*& __get__handlers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*> const& __get__handlers() const;

  constexpr void __set__handlers(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* value);

  /// @brief Method Construct, addr 0x2f0e0bc, size 0x8, virtual false, abstract: false, final false
  inline void Construct(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* handlers);

  /// @brief Method OnAnimatorIk, addr 0x2f0e0c4, size 0x1b0, virtual false, abstract: false, final false
  inline void OnAnimatorIk();

  static inline ::Zenject::AnimatorIkHandlerManager* New_ctor();

  /// @brief Method .ctor, addr 0x2f0e274, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenInjectMethod0, addr 0x2f0e27c, size 0xdc, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f0e358, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorIkHandlerManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatorIkHandlerManager(AnimatorIkHandlerManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatorIkHandlerManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatorIkHandlerManager(AnimatorIkHandlerManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorIkHandlerManager();

public:
  /// @brief Field _handlers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* ____handlers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::AnimatorIkHandlerManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::AnimatorIkHandlerManager, ____handlers) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AnimatorIkHandlerManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AnimatorIkHandlerManager*, "Zenject", "AnimatorIkHandlerManager");
