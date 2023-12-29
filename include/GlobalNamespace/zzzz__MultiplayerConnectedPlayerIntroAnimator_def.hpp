#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerIntroAnimator)
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerIntroAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator);
// Type: ::MultiplayerConnectedPlayerIntroAnimator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5230))
// CS Name: ::MultiplayerConnectedPlayerIntroAnimator*
class CORDL_TYPE MultiplayerConnectedPlayerIntroAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _introPlayableDirector, offset 0x18, size 0x8
  __declspec(property(get = __get__introPlayableDirector, put = __set__introPlayableDirector))::UnityEngine::Playables::PlayableDirector* _introPlayableDirector;

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get__introPlayableDirector();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get__introPlayableDirector() const;

  constexpr void __set__introPlayableDirector(::UnityEngine::Playables::PlayableDirector* value);

  /// @brief Method SetBeforeIntroValues addr 0x20f499c size 0x1c virtual false final false
  inline void SetBeforeIntroValues();

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* New_ctor();

  /// @brief Method .ctor addr 0x20f49b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerIntroAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerIntroAnimator(MultiplayerConnectedPlayerIntroAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerIntroAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerIntroAnimator(MultiplayerConnectedPlayerIntroAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerIntroAnimator();

public:
  /// @brief Field _introPlayableDirector, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ____introPlayableDirector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator, ____introPlayableDirector) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*, "", "MultiplayerConnectedPlayerIntroAnimator");
