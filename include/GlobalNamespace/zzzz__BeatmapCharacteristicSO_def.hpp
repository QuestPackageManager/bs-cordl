#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicSO)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicSO);
// Type: ::BeatmapCharacteristicSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapCharacteristicSO*
class CORDL_TYPE BeatmapCharacteristicSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _characteristicNameLocalizationKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristicNameLocalizationKey, put = __cordl_internal_set__characteristicNameLocalizationKey))::StringW _characteristicNameLocalizationKey;

  /// @brief Field _compoundIdPartName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__compoundIdPartName, put = __cordl_internal_set__compoundIdPartName))::StringW _compoundIdPartName;

  /// @brief Field _containsRotationEvents, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__containsRotationEvents, put = __cordl_internal_set__containsRotationEvents)) bool _containsRotationEvents;

  /// @brief Field _descriptionLocalizationKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__descriptionLocalizationKey, put = __cordl_internal_set__descriptionLocalizationKey))::StringW _descriptionLocalizationKey;

  /// @brief Field _icon, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__icon, put = __cordl_internal_set__icon))::UnityW<::UnityEngine::Sprite> _icon;

  /// @brief Field _numberOfColors, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfColors, put = __cordl_internal_set__numberOfColors)) int32_t _numberOfColors;

  /// @brief Field _requires360Movement, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get__requires360Movement, put = __cordl_internal_set__requires360Movement)) bool _requires360Movement;

  /// @brief Field _serializedName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedName, put = __cordl_internal_set__serializedName))::StringW _serializedName;

  /// @brief Field _sortingOrder, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__sortingOrder, put = __cordl_internal_set__sortingOrder)) int32_t _sortingOrder;

  __declspec(property(get = get_characteristicNameLocalizationKey))::StringW characteristicNameLocalizationKey;

  __declspec(property(get = get_compoundIdPartName))::StringW compoundIdPartName;

  __declspec(property(get = get_containsRotationEvents)) bool containsRotationEvents;

  __declspec(property(get = get_descriptionLocalizationKey))::StringW descriptionLocalizationKey;

  __declspec(property(get = get_icon))::UnityW<::UnityEngine::Sprite> icon;

  __declspec(property(get = get_numberOfColors)) int32_t numberOfColors;

  __declspec(property(get = get_requires360Movement)) bool requires360Movement;

  __declspec(property(get = get_serializedName))::StringW serializedName;

  __declspec(property(get = get_sortingOrder)) int32_t sortingOrder;

  static inline ::GlobalNamespace::BeatmapCharacteristicSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__characteristicNameLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__characteristicNameLocalizationKey();

  constexpr ::StringW const& __cordl_internal_get__compoundIdPartName() const;

  constexpr ::StringW& __cordl_internal_get__compoundIdPartName();

  constexpr bool const& __cordl_internal_get__containsRotationEvents() const;

  constexpr bool& __cordl_internal_get__containsRotationEvents();

  constexpr ::StringW const& __cordl_internal_get__descriptionLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__descriptionLocalizationKey();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__icon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__icon();

  constexpr int32_t const& __cordl_internal_get__numberOfColors() const;

  constexpr int32_t& __cordl_internal_get__numberOfColors();

  constexpr bool const& __cordl_internal_get__requires360Movement() const;

  constexpr bool& __cordl_internal_get__requires360Movement();

  constexpr ::StringW const& __cordl_internal_get__serializedName() const;

  constexpr ::StringW& __cordl_internal_get__serializedName();

  constexpr int32_t const& __cordl_internal_get__sortingOrder() const;

  constexpr int32_t& __cordl_internal_get__sortingOrder();

  constexpr void __cordl_internal_set__characteristicNameLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__compoundIdPartName(::StringW value);

  constexpr void __cordl_internal_set__containsRotationEvents(bool value);

  constexpr void __cordl_internal_set__descriptionLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__numberOfColors(int32_t value);

  constexpr void __cordl_internal_set__requires360Movement(bool value);

  constexpr void __cordl_internal_set__serializedName(::StringW value);

  constexpr void __cordl_internal_set__sortingOrder(int32_t value);

  /// @brief Method .ctor, addr 0x12b7c84, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_characteristicNameLocalizationKey, addr 0x12b7c4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_characteristicNameLocalizationKey();

  /// @brief Method get_compoundIdPartName, addr 0x12b7c5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_compoundIdPartName();

  /// @brief Method get_containsRotationEvents, addr 0x12b7c6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_containsRotationEvents();

  /// @brief Method get_descriptionLocalizationKey, addr 0x12b7c44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_descriptionLocalizationKey();

  /// @brief Method get_icon, addr 0x12b7c3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_icon();

  /// @brief Method get_numberOfColors, addr 0x12b7c7c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numberOfColors();

  /// @brief Method get_requires360Movement, addr 0x12b7c74, size 0x8, virtual false, abstract: false, final false
  inline bool get_requires360Movement();

  /// @brief Method get_serializedName, addr 0x12b7c54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_serializedName();

  /// @brief Method get_sortingOrder, addr 0x12b7c64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicSO(BeatmapCharacteristicSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicSO(BeatmapCharacteristicSO const&) = delete;

  /// @brief Field _icon, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____icon;

  /// @brief Field _descriptionLocalizationKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ____descriptionLocalizationKey;

  /// @brief Field _characteristicNameLocalizationKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ____characteristicNameLocalizationKey;

  /// @brief Field _serializedName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____serializedName;

  /// @brief Field _compoundIdPartName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____compoundIdPartName;

  /// @brief Field _sortingOrder, offset: 0x40, size: 0x4, def value: None
  int32_t ____sortingOrder;

  /// @brief Field _containsRotationEvents, offset: 0x44, size: 0x1, def value: None
  bool ____containsRotationEvents;

  /// @brief Field _requires360Movement, offset: 0x45, size: 0x1, def value: None
  bool ____requires360Movement;

  /// @brief Field _numberOfColors, offset: 0x48, size: 0x4, def value: None
  int32_t ____numberOfColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSO, ____icon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSO, ____descriptionLocalizationKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSO, ____characteristicNameLocalizationKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSO, ____serializedName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSO, ____compoundIdPartName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSO, ____sortingOrder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSO, ____containsRotationEvents) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSO, ____requires360Movement) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSO, ____numberOfColors) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSO*, "", "BeatmapCharacteristicSO");
