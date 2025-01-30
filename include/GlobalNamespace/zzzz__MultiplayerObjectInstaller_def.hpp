#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerObjectInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerObjectInstaller)
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerObjectInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerObjectInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerObjectInstaller
class CORDL_TYPE MultiplayerObjectInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _fireworkItemControllerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fireworkItemControllerPrefab, put = __cordl_internal_set__fireworkItemControllerPrefab)) ::UnityW<::GlobalNamespace::FireworkItemController>
      _fireworkItemControllerPrefab;

  /// @brief Field _inEnvironmentTextsPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__inEnvironmentTextsPrefab, put = __cordl_internal_set__inEnvironmentTextsPrefab)) ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>
      _inEnvironmentTextsPrefab;

  /// @brief Field _multiplayerResultsPyramidViewAvatarPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerResultsPyramidViewAvatarPrefab,
                      put = __cordl_internal_set__multiplayerResultsPyramidViewAvatarPrefab)) ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>
      _multiplayerResultsPyramidViewAvatarPrefab;

  /// @brief Method InstallBindings, addr 0x3bdda18, size 0x144, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerObjectInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::FireworkItemController> const& __cordl_internal_get__fireworkItemControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::FireworkItemController>& __cordl_internal_get__fireworkItemControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> const& __cordl_internal_get__inEnvironmentTextsPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>& __cordl_internal_get__inEnvironmentTextsPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> const& __cordl_internal_get__multiplayerResultsPyramidViewAvatarPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>& __cordl_internal_get__multiplayerResultsPyramidViewAvatarPrefab();

  constexpr void __cordl_internal_set__fireworkItemControllerPrefab(::UnityW<::GlobalNamespace::FireworkItemController> value);

  constexpr void __cordl_internal_set__inEnvironmentTextsPrefab(::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> value);

  constexpr void __cordl_internal_set__multiplayerResultsPyramidViewAvatarPrefab(::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> value);

  /// @brief Method .ctor, addr 0x3bddb5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerObjectInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerObjectInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerObjectInstaller(MultiplayerObjectInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerObjectInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerObjectInstaller(MultiplayerObjectInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4593 };

  /// @brief Field _inEnvironmentTextsPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> ____inEnvironmentTextsPrefab;

  /// @brief Field _fireworkItemControllerPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FireworkItemController> ____fireworkItemControllerPrefab;

  /// @brief Field _multiplayerResultsPyramidViewAvatarPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> ____multiplayerResultsPyramidViewAvatarPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerObjectInstaller, ____inEnvironmentTextsPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerObjectInstaller, ____fireworkItemControllerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerObjectInstaller, ____multiplayerResultsPyramidViewAvatarPrefab) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerObjectInstaller, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerObjectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerObjectInstaller*, "", "MultiplayerObjectInstaller");
