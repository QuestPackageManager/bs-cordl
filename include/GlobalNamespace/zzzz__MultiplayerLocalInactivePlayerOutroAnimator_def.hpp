#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerOutroAnimator)
namespace GlobalNamespace {
class MultiplayerController;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerOutroAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator);
// Type: ::MultiplayerLocalInactivePlayerOutroAnimator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5268))
// CS Name: ::MultiplayerLocalInactivePlayerOutroAnimator*
class CORDL_TYPE MultiplayerLocalInactivePlayerOutroAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _outroPlayableDirector, offset 0x18, size 0x8
  __declspec(property(get = __get__outroPlayableDirector, put = __set__outroPlayableDirector))::UnityEngine::Playables::PlayableDirector* _outroPlayableDirector;

  /// @brief Field _multiplayerController, offset 0x20, size 0x8
  __declspec(property(get = __get__multiplayerController, put = __set__multiplayerController))::GlobalNamespace::MultiplayerController* _multiplayerController;

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get__outroPlayableDirector();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get__outroPlayableDirector() const;

  constexpr void __set__outroPlayableDirector(::UnityEngine::Playables::PlayableDirector* value);

  constexpr ::GlobalNamespace::MultiplayerController*& __get__multiplayerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get__multiplayerController() const;

  constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController* value);

  /// @brief Method Start addr 0x20fc990 size 0x3c virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* New_ctor();

  /// @brief Method .ctor addr 0x20fc9cc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerOutroAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerOutroAnimator(MultiplayerLocalInactivePlayerOutroAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerOutroAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerOutroAnimator(MultiplayerLocalInactivePlayerOutroAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerOutroAnimator();

public:
  /// @brief Field _outroPlayableDirector, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ____outroPlayableDirector;

  /// @brief Field _multiplayerController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* ____multiplayerController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator, ____outroPlayableDirector) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator, ____multiplayerController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*, "", "MultiplayerLocalInactivePlayerOutroAnimator");
