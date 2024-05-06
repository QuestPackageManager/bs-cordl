#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/BeatAvatarSystemSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BeatAvatarSystemSettings)
namespace UnityEngine::AddressableAssets {
class AssetReferenceGameObject;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystemSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings);
// Type: BeatSaber.BeatAvatarAdapter::BeatAvatarSystemSettings
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// CS Name: ::BeatSaber.BeatAvatarAdapter::BeatAvatarSystemSettings*
class CORDL_TYPE BeatAvatarSystemSettings : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _avatarEditorPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarEditorPrefab, put = __cordl_internal_set__avatarEditorPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* _avatarEditorPrefab;

  /// @brief Field _avatarForUnityEditorPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarForUnityEditorPrefab,
                      put = __cordl_internal_set__avatarForUnityEditorPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* _avatarForUnityEditorPrefab;

  /// @brief Field _avatarGameplayPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarGameplayPrefab,
                      put = __cordl_internal_set__avatarGameplayPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* _avatarGameplayPrefab;

  /// @brief Field _avatarHologramPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarHologramPrefab,
                      put = __cordl_internal_set__avatarHologramPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* _avatarHologramPrefab;

  /// @brief Field _avatarResultsPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarResultsPrefab,
                      put = __cordl_internal_set__avatarResultsPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* _avatarResultsPrefab;

  /// @brief Field _avatarSelectionViewPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSelectionViewPrefab,
                      put = __cordl_internal_set__avatarSelectionViewPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* _avatarSelectionViewPrefab;

  __declspec(property(get = get_avatarEditorPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* avatarEditorPrefab;

  __declspec(property(get = get_avatarForUnityEditorPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* avatarForUnityEditorPrefab;

  __declspec(property(get = get_avatarGameplayPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* avatarGameplayPrefab;

  __declspec(property(get = get_avatarHologramPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* avatarHologramPrefab;

  __declspec(property(get = get_avatarResultsPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* avatarResultsPrefab;

  __declspec(property(get = get_avatarSelectionViewPrefab))::UnityEngine::AddressableAssets::AssetReferenceGameObject* avatarSelectionViewPrefab;

  static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* New_ctor();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject*& __cordl_internal_get__avatarEditorPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> const& __cordl_internal_get__avatarEditorPrefab() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject*& __cordl_internal_get__avatarForUnityEditorPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> const& __cordl_internal_get__avatarForUnityEditorPrefab() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject*& __cordl_internal_get__avatarGameplayPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> const& __cordl_internal_get__avatarGameplayPrefab() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject*& __cordl_internal_get__avatarHologramPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> const& __cordl_internal_get__avatarHologramPrefab() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject*& __cordl_internal_get__avatarResultsPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> const& __cordl_internal_get__avatarResultsPrefab() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject*& __cordl_internal_get__avatarSelectionViewPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> const& __cordl_internal_get__avatarSelectionViewPrefab() const;

  constexpr void __cordl_internal_set__avatarEditorPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject* value);

  constexpr void __cordl_internal_set__avatarForUnityEditorPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject* value);

  constexpr void __cordl_internal_set__avatarGameplayPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject* value);

  constexpr void __cordl_internal_set__avatarHologramPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject* value);

  constexpr void __cordl_internal_set__avatarResultsPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject* value);

  constexpr void __cordl_internal_set__avatarSelectionViewPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject* value);

  /// @brief Method .ctor, addr 0x104764c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_avatarEditorPrefab, addr 0x1047634, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarEditorPrefab();

  /// @brief Method get_avatarForUnityEditorPrefab, addr 0x1047644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarForUnityEditorPrefab();

  /// @brief Method get_avatarGameplayPrefab, addr 0x104761c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarGameplayPrefab();

  /// @brief Method get_avatarHologramPrefab, addr 0x104762c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarHologramPrefab();

  /// @brief Method get_avatarResultsPrefab, addr 0x1047624, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarResultsPrefab();

  /// @brief Method get_avatarSelectionViewPrefab, addr 0x104763c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* get_avatarSelectionViewPrefab();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarSystemSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystemSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarSystemSettings(BeatAvatarSystemSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystemSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarSystemSettings(BeatAvatarSystemSettings const&) = delete;

  /// @brief Field _avatarGameplayPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceGameObject* ____avatarGameplayPrefab;

  /// @brief Field _avatarResultsPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceGameObject* ____avatarResultsPrefab;

  /// @brief Field _avatarHologramPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceGameObject* ____avatarHologramPrefab;

  /// @brief Field _avatarEditorPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceGameObject* ____avatarEditorPrefab;

  /// @brief Field _avatarSelectionViewPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceGameObject* ____avatarSelectionViewPrefab;

  /// @brief Field _avatarForUnityEditorPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceGameObject* ____avatarForUnityEditorPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings, 0x48>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings, ____avatarGameplayPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings, ____avatarResultsPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings, ____avatarHologramPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings, ____avatarEditorPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings, ____avatarSelectionViewPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings, ____avatarForUnityEditorPrefab) == 0x40, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*, "BeatSaber.BeatAvatarAdapter", "BeatAvatarSystemSettings");
