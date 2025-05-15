#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeAwardData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgeAwardData)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerBadgeDataSO;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeAwardData);
// Dependencies System.IComparable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBadgeAwardData
class CORDL_TYPE MultiplayerBadgeAwardData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _awardedPlayer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__awardedPlayer, put = __cordl_internal_set__awardedPlayer)) ::GlobalNamespace::IConnectedPlayer* _awardedPlayer;

  /// @brief Field _badgeData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeData, put = __cordl_internal_set__badgeData)) ::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO> _badgeData;

  /// @brief Field _icon, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__icon, put = __cordl_internal_set__icon)) ::UnityW<::UnityEngine::Sprite> _icon;

  /// @brief Field _subtitle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__subtitle, put = __cordl_internal_set__subtitle)) ::StringW _subtitle;

  /// @brief Field _title, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__title, put = __cordl_internal_set__title)) ::StringW _title;

  /// @brief Field _weight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__weight, put = __cordl_internal_set__weight)) float_t _weight;

  __declspec(property(get = get_awardedPlayer)) ::GlobalNamespace::IConnectedPlayer* awardedPlayer;

  __declspec(property(get = get_icon)) ::UnityW<::UnityEngine::Sprite> icon;

  __declspec(property(get = get_subtitle)) ::StringW subtitle;

  __declspec(property(get = get_title)) ::StringW title;

  __declspec(property(get = get_titleLocalizationKey)) ::StringW titleLocalizationKey;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x26dab98, size 0xe8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  static inline ::GlobalNamespace::MultiplayerBadgeAwardData* New_ctor(::GlobalNamespace::IConnectedPlayer* awardedPlayer, float_t weight, ::StringW title, ::StringW subtitle,
                                                                       ::GlobalNamespace::MultiplayerBadgeDataSO* badgeData);

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__awardedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__awardedPlayer();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO> const& __cordl_internal_get__badgeData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>& __cordl_internal_get__badgeData();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__icon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__icon();

  constexpr ::StringW const& __cordl_internal_get__subtitle() const;

  constexpr ::StringW& __cordl_internal_get__subtitle();

  constexpr ::StringW const& __cordl_internal_get__title() const;

  constexpr ::StringW& __cordl_internal_get__title();

  constexpr float_t const& __cordl_internal_get__weight() const;

  constexpr float_t& __cordl_internal_get__weight();

  constexpr void __cordl_internal_set__awardedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__badgeData(::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO> value);

  constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__subtitle(::StringW value);

  constexpr void __cordl_internal_set__title(::StringW value);

  constexpr void __cordl_internal_set__weight(float_t value);

  /// @brief Method .ctor, addr 0x26d8de8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* awardedPlayer, float_t weight, ::StringW title, ::StringW subtitle, ::GlobalNamespace::MultiplayerBadgeDataSO* badgeData);

  /// @brief Method get_awardedPlayer, addr 0x26dab5c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* get_awardedPlayer();

  /// @brief Method get_icon, addr 0x26dab90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_icon();

  /// @brief Method get_subtitle, addr 0x26dab88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_subtitle();

  /// @brief Method get_title, addr 0x26dab80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_title();

  /// @brief Method get_titleLocalizationKey, addr 0x26dab64, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_titleLocalizationKey();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeAwardData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeAwardData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeAwardData(MultiplayerBadgeAwardData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeAwardData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeAwardData(MultiplayerBadgeAwardData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13084 };

  /// @brief Field _awardedPlayer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____awardedPlayer;

  /// @brief Field _weight, offset: 0x18, size: 0x4, def value: None
  float_t ____weight;

  /// @brief Field _title, offset: 0x20, size: 0x8, def value: None
  ::StringW ____title;

  /// @brief Field _subtitle, offset: 0x28, size: 0x8, def value: None
  ::StringW ____subtitle;

  /// @brief Field _icon, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____icon;

  /// @brief Field _badgeData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO> ____badgeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____awardedPlayer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____title) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____subtitle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____icon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____badgeData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeAwardData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeAwardData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeAwardData*, "", "MultiplayerBadgeAwardData");
