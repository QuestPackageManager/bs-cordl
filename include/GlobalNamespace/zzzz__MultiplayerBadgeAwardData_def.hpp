#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class IComparable;
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
// Type: ::MultiplayerBadgeAwardData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5111))
// CS Name: ::MultiplayerBadgeAwardData*
class CORDL_TYPE MultiplayerBadgeAwardData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _awardedPlayer, offset 0x10, size 0x8
  __declspec(property(get = __get__awardedPlayer, put = __set__awardedPlayer))::GlobalNamespace::IConnectedPlayer* _awardedPlayer;

  /// @brief Field _weight, offset 0x18, size 0x4
  __declspec(property(get = __get__weight, put = __set__weight)) float_t _weight;

  /// @brief Field _title, offset 0x20, size 0x8
  __declspec(property(get = __get__title, put = __set__title))::StringW _title;

  /// @brief Field _subtitle, offset 0x28, size 0x8
  __declspec(property(get = __get__subtitle, put = __set__subtitle))::StringW _subtitle;

  /// @brief Field _icon, offset 0x30, size 0x8
  __declspec(property(get = __get__icon, put = __set__icon))::UnityEngine::Sprite* _icon;

  /// @brief Field _badgeData, offset 0x38, size 0x8
  __declspec(property(get = __get__badgeData, put = __set__badgeData))::GlobalNamespace::MultiplayerBadgeDataSO* _badgeData;

  __declspec(property(get = get_awardedPlayer))::GlobalNamespace::IConnectedPlayer* awardedPlayer;

  __declspec(property(get = get_titleLocalizationKey))::StringW titleLocalizationKey;

  __declspec(property(get = get_title))::StringW title;

  __declspec(property(get = get_subtitle))::StringW subtitle;

  __declspec(property(get = get_icon))::UnityEngine::Sprite* icon;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__awardedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__awardedPlayer() const;

  constexpr void __set__awardedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr float_t& __get__weight();

  constexpr float_t const& __get__weight() const;

  constexpr void __set__weight(float_t value);

  constexpr ::StringW& __get__title();

  constexpr ::StringW const& __get__title() const;

  constexpr void __set__title(::StringW value);

  constexpr ::StringW& __get__subtitle();

  constexpr ::StringW const& __get__subtitle() const;

  constexpr void __set__subtitle(::StringW value);

  constexpr ::UnityEngine::Sprite*& __get__icon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__icon() const;

  constexpr void __set__icon(::UnityEngine::Sprite* value);

  constexpr ::GlobalNamespace::MultiplayerBadgeDataSO*& __get__badgeData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgeDataSO*> const& __get__badgeData() const;

  constexpr void __set__badgeData(::GlobalNamespace::MultiplayerBadgeDataSO* value);

  /// @brief Method get_awardedPlayer, addr 0x23cf92c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* get_awardedPlayer();

  /// @brief Method get_titleLocalizationKey, addr 0x23cf934, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_titleLocalizationKey();

  /// @brief Method get_title, addr 0x23cf950, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_title();

  /// @brief Method get_subtitle, addr 0x23cf958, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_subtitle();

  /// @brief Method get_icon, addr 0x23cf960, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Sprite* get_icon();

  static inline ::GlobalNamespace::MultiplayerBadgeAwardData* New_ctor(::GlobalNamespace::IConnectedPlayer* awardedPlayer, float_t weight, ::StringW title, ::StringW subtitle,
                                                                       ::GlobalNamespace::MultiplayerBadgeDataSO* badgeData);

  /// @brief Method .ctor, addr 0x23cdbfc, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* awardedPlayer, float_t weight, ::StringW title, ::StringW subtitle, ::GlobalNamespace::MultiplayerBadgeDataSO* badgeData);

  /// @brief Method CompareTo, addr 0x23cf968, size 0xf0, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeAwardData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeAwardData(MultiplayerBadgeAwardData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeAwardData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeAwardData(MultiplayerBadgeAwardData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeAwardData();

public:
  /// @brief Field _awardedPlayer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____awardedPlayer;

  /// @brief Field _weight, offset: 0x18, size: 0x4, def value: None
  float_t ____weight;

  /// @brief Field _title, offset: 0x20, size: 0x8, def value: None
  ::StringW ____title;

  /// @brief Field _subtitle, offset: 0x28, size: 0x8, def value: None
  ::StringW ____subtitle;

  /// @brief Field _icon, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____icon;

  /// @brief Field _badgeData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerBadgeDataSO* ____badgeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeAwardData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____awardedPlayer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____title) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____subtitle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____icon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeAwardData, ____badgeData) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeAwardData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeAwardData*, "", "MultiplayerBadgeAwardData");
