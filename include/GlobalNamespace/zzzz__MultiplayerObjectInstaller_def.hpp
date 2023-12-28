#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerObjectInstaller)
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
namespace GlobalNamespace {
class FireworkItemController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerObjectInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerObjectInstaller);
// Type: ::MultiplayerObjectInstaller
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5228))
// CS Name: ::MultiplayerObjectInstaller*
class CORDL_TYPE MultiplayerObjectInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _inEnvironmentTextsPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__inEnvironmentTextsPrefab, put = __set__inEnvironmentTextsPrefab))::GlobalNamespace::MultiplayerScoreRingItem* _inEnvironmentTextsPrefab;

  /// @brief Field _fireworkItemControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__fireworkItemControllerPrefab, put = __set__fireworkItemControllerPrefab))::GlobalNamespace::FireworkItemController* _fireworkItemControllerPrefab;

  /// @brief Field _multiplayerResultsPyramidViewAvatarPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__multiplayerResultsPyramidViewAvatarPrefab,
                      put = __set__multiplayerResultsPyramidViewAvatarPrefab))::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* _multiplayerResultsPyramidViewAvatarPrefab;

  constexpr ::GlobalNamespace::MultiplayerScoreRingItem*& __get__inEnvironmentTextsPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreRingItem*> const& __get__inEnvironmentTextsPrefab() const;

  constexpr void __set__inEnvironmentTextsPrefab(::GlobalNamespace::MultiplayerScoreRingItem* value);

  constexpr ::GlobalNamespace::FireworkItemController*& __get__fireworkItemControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> const& __get__fireworkItemControllerPrefab() const;

  constexpr void __set__fireworkItemControllerPrefab(::GlobalNamespace::FireworkItemController* value);

  constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*& __get__multiplayerResultsPyramidViewAvatarPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> const& __get__multiplayerResultsPyramidViewAvatarPrefab() const;

  constexpr void __set__multiplayerResultsPyramidViewAvatarPrefab(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* value);

  /// @brief Method InstallBindings addr 0x22529fc size 0x144 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerObjectInstaller* New_ctor();

  /// @brief Method .ctor addr 0x2252b40 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerObjectInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerObjectInstaller(MultiplayerObjectInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerObjectInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerObjectInstaller(MultiplayerObjectInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerObjectInstaller();

public:
  /// @brief Field _inEnvironmentTextsPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreRingItem* ____inEnvironmentTextsPrefab;

  /// @brief Field _fireworkItemControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::FireworkItemController* ____fireworkItemControllerPrefab;

  /// @brief Field _multiplayerResultsPyramidViewAvatarPrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* ____multiplayerResultsPyramidViewAvatarPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerObjectInstaller, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerObjectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerObjectInstaller*, "", "MultiplayerObjectInstaller");
