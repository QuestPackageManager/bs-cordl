#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataSO)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataSO);
// Type: ::MultiplayerBadgeDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerBadgeDataSO*
class CORDL_TYPE MultiplayerBadgeDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _icon, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__icon, put = __cordl_internal_set__icon))::UnityW<::UnityEngine::Sprite> _icon;

  /// @brief Field _subtitleLocalizationKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__subtitleLocalizationKey, put = __cordl_internal_set__subtitleLocalizationKey))::StringW _subtitleLocalizationKey;

  /// @brief Field _titleLocalizationKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__titleLocalizationKey, put = __cordl_internal_set__titleLocalizationKey))::StringW _titleLocalizationKey;

  __declspec(property(get = get_icon))::UnityW<::UnityEngine::Sprite> icon;

  __declspec(property(get = get_subtitleLocalizationKey))::StringW subtitleLocalizationKey;

  __declspec(property(get = get_titleLocalizationKey))::StringW titleLocalizationKey;

  /// @brief Method CalculateBadgeData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                          ::GlobalNamespace::PlayerDataModel* playerDataModel, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                          float_t randomMultiplier);

  static inline ::GlobalNamespace::MultiplayerBadgeDataSO* New_ctor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__icon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__icon();

  constexpr ::StringW const& __cordl_internal_get__subtitleLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__subtitleLocalizationKey();

  constexpr ::StringW const& __cordl_internal_get__titleLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__titleLocalizationKey();

  constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__subtitleLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__titleLocalizationKey(::StringW value);

  /// @brief Method .ctor, addr 0x13d9424, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_icon, addr 0x13db130, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_icon();

  /// @brief Method get_subtitleLocalizationKey, addr 0x13db140, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_subtitleLocalizationKey();

  /// @brief Method get_titleLocalizationKey, addr 0x13db138, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_titleLocalizationKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataSO(MultiplayerBadgeDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataSO(MultiplayerBadgeDataSO const&) = delete;

  /// @brief Field _titleLocalizationKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ____titleLocalizationKey;

  /// @brief Field _subtitleLocalizationKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ____subtitleLocalizationKey;

  /// @brief Field _icon, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____icon;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataSO, ____titleLocalizationKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataSO, ____subtitleLocalizationKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataSO, ____icon) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataSO*, "", "MultiplayerBadgeDataSO");
