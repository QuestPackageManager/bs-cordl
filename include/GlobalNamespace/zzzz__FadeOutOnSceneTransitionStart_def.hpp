#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FadeOutOnSceneTransitionStart)
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeOutOnSceneTransitionStart;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FadeOutOnSceneTransitionStart);
// Type: ::FadeOutOnSceneTransitionStart
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15314))
// CS Name: ::FadeOutOnSceneTransitionStart*
class CORDL_TYPE FadeOutOnSceneTransitionStart : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fadeInOut, offset 0x18, size 0x8
  __declspec(property(get = __get__fadeInOut, put = __set__fadeInOut))::GlobalNamespace::FadeInOutController* _fadeInOut;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOut();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOut() const;

  constexpr void __set__fadeInOut(::GlobalNamespace::FadeInOutController* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  /// @brief Method Start addr 0x268cbcc size 0x8c virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x268cc58 size 0xd4 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleGameScenesManagerTransitionDidStart addr 0x268cd2c size 0x1c virtual false final false
  inline void HandleGameScenesManagerTransitionDidStart(float_t duration);

  static inline ::GlobalNamespace::FadeOutOnSceneTransitionStart* New_ctor();

  /// @brief Method .ctor addr 0x268cd48 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FadeOutOnSceneTransitionStart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FadeOutOnSceneTransitionStart(FadeOutOnSceneTransitionStart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FadeOutOnSceneTransitionStart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FadeOutOnSceneTransitionStart(FadeOutOnSceneTransitionStart const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FadeOutOnSceneTransitionStart();

public:
  /// @brief Field _fadeInOut, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOut;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeOutOnSceneTransitionStart, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeOutOnSceneTransitionStart, ____fadeInOut) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeOutOnSceneTransitionStart, ____gameScenesManager) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FadeOutOnSceneTransitionStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeOutOnSceneTransitionStart*, "", "FadeOutOnSceneTransitionStart");
