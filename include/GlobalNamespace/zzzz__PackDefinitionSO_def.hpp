#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackDefinitionSO)
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class LeaderboardIdsSO;
}
namespace GlobalNamespace {
class OculusLevelProductPacksSO;
}
namespace GlobalNamespace {
class PS4LevelProductPacksSO;
}
namespace GlobalNamespace {
class PS5LevelProductPacksSO;
}
namespace GlobalNamespace {
class PerceivedLoudnessSO;
}
namespace GlobalNamespace {
class PromoInfoSO;
}
namespace GlobalNamespace {
class RelativeSfxVolumeSO;
}
namespace GlobalNamespace {
class SonyLeaderboardIdsSO;
}
namespace GlobalNamespace {
class SonyLevelProductPackSourceSO;
}
namespace GlobalNamespace {
class SteamLevelProductPacksSO;
}
namespace GlobalNamespace {
class __PackDefinitionSO__LeaderboardIds;
}
namespace GlobalNamespace {
class __PackDefinitionSO__LevelProductPacks;
}
namespace GlobalNamespace {
class __PackDefinitionSO__LevelPromoInfo;
}
namespace GlobalNamespace {
struct __PackDefinitionSO__Tags;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PackDefinitionSO__Tags;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
class __PackDefinitionSO__LeaderboardIds;
}
namespace GlobalNamespace {
class __PackDefinitionSO__LevelProductPacks;
}
namespace GlobalNamespace {
class __PackDefinitionSO__LevelPromoInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PackDefinitionSO__Tags);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionSO);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo);
// Type: ::Tags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10827))
// CS Name: ::PackDefinitionSO::Tags
struct CORDL_TYPE __PackDefinitionSO__Tags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PackDefinitionSO__Tags_Unwrapped
  enum struct ____PackDefinitionSO__Tags_Unwrapped : int32_t {
    __E_OST = static_cast<int32_t>(0x1),
    __E_DLC = static_cast<int32_t>(0x2),
    __E_Owned = static_cast<int32_t>(0x4),
    __E_Debug = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PackDefinitionSO__Tags_Unwrapped() const noexcept {
    return static_cast<____PackDefinitionSO__Tags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PackDefinitionSO__Tags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionSO__Tags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OST value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PackDefinitionSO__Tags const OST;

  /// @brief Field DLC value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PackDefinitionSO__Tags const DLC;

  /// @brief Field Owned value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__PackDefinitionSO__Tags const Owned;

  /// @brief Field Debug value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__PackDefinitionSO__Tags const Debug;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionSO__Tags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__Tags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LeaderboardIds
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10828))
// CS Name: ::PackDefinitionSO::LeaderboardIds*
class CORDL_TYPE __PackDefinitionSO__LeaderboardIds : public ::System::Object {
public:
  // Declarations
  /// @brief Field _riftLeaderboardIds, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__riftLeaderboardIds, put = __cordl_internal_set__riftLeaderboardIds))::UnityW<::GlobalNamespace::LeaderboardIdsSO> _riftLeaderboardIds;

  /// @brief Field _questLeaderboardIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__questLeaderboardIds, put = __cordl_internal_set__questLeaderboardIds))::UnityW<::GlobalNamespace::LeaderboardIdsSO> _questLeaderboardIds;

  /// @brief Field _steamLeaderboardIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__steamLeaderboardIds, put = __cordl_internal_set__steamLeaderboardIds))::UnityW<::GlobalNamespace::LeaderboardIdsSO> _steamLeaderboardIds;

  /// @brief Field _ps4LeaderboardIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4LeaderboardIds, put = __cordl_internal_set__ps4LeaderboardIds))::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> _ps4LeaderboardIds;

  /// @brief Field _ps5LeaderboardIds, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5LeaderboardIds, put = __cordl_internal_set__ps5LeaderboardIds))::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> _ps5LeaderboardIds;

  __declspec(property(get = get_riftLeaderboardIds, put = set_riftLeaderboardIds))::UnityW<::GlobalNamespace::LeaderboardIdsSO> riftLeaderboardIds;

  __declspec(property(get = get_questLeaderboardIds, put = set_questLeaderboardIds))::UnityW<::GlobalNamespace::LeaderboardIdsSO> questLeaderboardIds;

  __declspec(property(get = get_steamLeaderboardIds, put = set_steamLeaderboardIds))::UnityW<::GlobalNamespace::LeaderboardIdsSO> steamLeaderboardIds;

  __declspec(property(get = get_ps4LeaderboardIds, put = set_ps4LeaderboardIds))::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> ps4LeaderboardIds;

  __declspec(property(get = get_ps5LeaderboardIds, put = set_ps5LeaderboardIds))::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> ps5LeaderboardIds;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get__riftLeaderboardIds();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get__riftLeaderboardIds() const;

  constexpr void __cordl_internal_set__riftLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get__questLeaderboardIds();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get__questLeaderboardIds() const;

  constexpr void __cordl_internal_set__questLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get__steamLeaderboardIds();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get__steamLeaderboardIds() const;

  constexpr void __cordl_internal_set__steamLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>& __cordl_internal_get__ps4LeaderboardIds();

  constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> const& __cordl_internal_get__ps4LeaderboardIds() const;

  constexpr void __cordl_internal_set__ps4LeaderboardIds(::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> value);

  constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>& __cordl_internal_get__ps5LeaderboardIds();

  constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> const& __cordl_internal_get__ps5LeaderboardIds() const;

  constexpr void __cordl_internal_set__ps5LeaderboardIds(::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> value);

  /// @brief Method get_riftLeaderboardIds, addr 0x128f81c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> get_riftLeaderboardIds();

  /// @brief Method set_riftLeaderboardIds, addr 0x128f824, size 0x8, virtual false, abstract: false, final false
  inline void set_riftLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value);

  /// @brief Method get_questLeaderboardIds, addr 0x128f82c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> get_questLeaderboardIds();

  /// @brief Method set_questLeaderboardIds, addr 0x128f834, size 0x8, virtual false, abstract: false, final false
  inline void set_questLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value);

  /// @brief Method get_steamLeaderboardIds, addr 0x128f83c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> get_steamLeaderboardIds();

  /// @brief Method set_steamLeaderboardIds, addr 0x128f844, size 0x8, virtual false, abstract: false, final false
  inline void set_steamLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value);

  /// @brief Method get_ps4LeaderboardIds, addr 0x128f84c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> get_ps4LeaderboardIds();

  /// @brief Method set_ps4LeaderboardIds, addr 0x128f854, size 0x8, virtual false, abstract: false, final false
  inline void set_ps4LeaderboardIds(::GlobalNamespace::SonyLeaderboardIdsSO* value);

  /// @brief Method get_ps5LeaderboardIds, addr 0x128f85c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> get_ps5LeaderboardIds();

  /// @brief Method set_ps5LeaderboardIds, addr 0x128f864, size 0x8, virtual false, abstract: false, final false
  inline void set_ps5LeaderboardIds(::GlobalNamespace::SonyLeaderboardIdsSO* value);

  static inline ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* New_ctor();

  /// @brief Method .ctor, addr 0x128f86c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionSO__LeaderboardIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionSO__LeaderboardIds(__PackDefinitionSO__LeaderboardIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionSO__LeaderboardIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionSO__LeaderboardIds(__PackDefinitionSO__LeaderboardIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionSO__LeaderboardIds();

public:
  /// @brief Field _riftLeaderboardIds, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsSO> ____riftLeaderboardIds;

  /// @brief Field _questLeaderboardIds, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsSO> ____questLeaderboardIds;

  /// @brief Field _steamLeaderboardIds, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsSO> ____steamLeaderboardIds;

  /// @brief Field _ps4LeaderboardIds, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> ____ps4LeaderboardIds;

  /// @brief Field _ps5LeaderboardIds, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> ____ps5LeaderboardIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds, ____riftLeaderboardIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds, ____questLeaderboardIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds, ____steamLeaderboardIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds, ____ps4LeaderboardIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds, ____ps5LeaderboardIds) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelProductPacks
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10829))
// CS Name: ::PackDefinitionSO::LevelProductPacks*
class CORDL_TYPE __PackDefinitionSO__LevelProductPacks : public ::System::Object {
public:
  // Declarations
  /// @brief Field _steamLevelProductPacks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__steamLevelProductPacks,
                      put = __cordl_internal_set__steamLevelProductPacks))::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> _steamLevelProductPacks;

  /// @brief Field _oculusLevelProductPacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusLevelProductPacks,
                      put = __cordl_internal_set__oculusLevelProductPacks))::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> _oculusLevelProductPacks;

  /// @brief Field _sonyLevelProductPackSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyLevelProductPackSource,
                      put = __cordl_internal_set__sonyLevelProductPackSource))::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> _sonyLevelProductPackSource;

  /// @brief Field _ps4LevelProductPacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4LevelProductPacks, put = __cordl_internal_set__ps4LevelProductPacks))::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> _ps4LevelProductPacks;

  /// @brief Field _ps5LevelProductPacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5LevelProductPacks, put = __cordl_internal_set__ps5LevelProductPacks))::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> _ps5LevelProductPacks;

  __declspec(property(get = get_steamLevelProductPacks, put = set_steamLevelProductPacks))::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> steamLevelProductPacks;

  __declspec(property(get = get_oculusLevelProductPacks, put = set_oculusLevelProductPacks))::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> oculusLevelProductPacks;

  __declspec(property(get = get_ps4LevelProductPacks, put = set_ps4LevelProductPacks))::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> ps4LevelProductPacks;

  __declspec(property(get = get_ps5LevelProductPacks, put = set_ps5LevelProductPacks))::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> ps5LevelProductPacks;

  __declspec(property(get = get_sonyLevelProductPackSource, put = set_sonyLevelProductPackSource))::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> sonyLevelProductPackSource;

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>& __cordl_internal_get__steamLevelProductPacks();

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> const& __cordl_internal_get__steamLevelProductPacks() const;

  constexpr void __cordl_internal_set__steamLevelProductPacks(::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> value);

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>& __cordl_internal_get__oculusLevelProductPacks();

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> const& __cordl_internal_get__oculusLevelProductPacks() const;

  constexpr void __cordl_internal_set__oculusLevelProductPacks(::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> value);

  constexpr ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO>& __cordl_internal_get__sonyLevelProductPackSource();

  constexpr ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> const& __cordl_internal_get__sonyLevelProductPackSource() const;

  constexpr void __cordl_internal_set__sonyLevelProductPackSource(::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> value);

  constexpr ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>& __cordl_internal_get__ps4LevelProductPacks();

  constexpr ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> const& __cordl_internal_get__ps4LevelProductPacks() const;

  constexpr void __cordl_internal_set__ps4LevelProductPacks(::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> value);

  constexpr ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>& __cordl_internal_get__ps5LevelProductPacks();

  constexpr ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> const& __cordl_internal_get__ps5LevelProductPacks() const;

  constexpr void __cordl_internal_set__ps5LevelProductPacks(::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> value);

  /// @brief Method get_steamLevelProductPacks, addr 0x128f874, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> get_steamLevelProductPacks();

  /// @brief Method set_steamLevelProductPacks, addr 0x128f87c, size 0x8, virtual false, abstract: false, final false
  inline void set_steamLevelProductPacks(::GlobalNamespace::SteamLevelProductPacksSO* value);

  /// @brief Method get_oculusLevelProductPacks, addr 0x128f884, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> get_oculusLevelProductPacks();

  /// @brief Method set_oculusLevelProductPacks, addr 0x128f88c, size 0x8, virtual false, abstract: false, final false
  inline void set_oculusLevelProductPacks(::GlobalNamespace::OculusLevelProductPacksSO* value);

  /// @brief Method get_ps4LevelProductPacks, addr 0x128f894, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> get_ps4LevelProductPacks();

  /// @brief Method set_ps4LevelProductPacks, addr 0x128f89c, size 0x8, virtual false, abstract: false, final false
  inline void set_ps4LevelProductPacks(::GlobalNamespace::PS4LevelProductPacksSO* value);

  /// @brief Method get_ps5LevelProductPacks, addr 0x128f8a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> get_ps5LevelProductPacks();

  /// @brief Method set_ps5LevelProductPacks, addr 0x128f8ac, size 0x8, virtual false, abstract: false, final false
  inline void set_ps5LevelProductPacks(::GlobalNamespace::PS5LevelProductPacksSO* value);

  /// @brief Method get_sonyLevelProductPackSource, addr 0x128f8b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> get_sonyLevelProductPackSource();

  /// @brief Method set_sonyLevelProductPackSource, addr 0x128f8bc, size 0x8, virtual false, abstract: false, final false
  inline void set_sonyLevelProductPackSource(::GlobalNamespace::SonyLevelProductPackSourceSO* value);

  static inline ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* New_ctor();

  /// @brief Method .ctor, addr 0x128f8c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionSO__LevelProductPacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionSO__LevelProductPacks(__PackDefinitionSO__LevelProductPacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionSO__LevelProductPacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionSO__LevelProductPacks(__PackDefinitionSO__LevelProductPacks const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionSO__LevelProductPacks();

public:
  /// @brief Field _steamLevelProductPacks, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> ____steamLevelProductPacks;

  /// @brief Field _oculusLevelProductPacks, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> ____oculusLevelProductPacks;

  /// @brief Field _sonyLevelProductPackSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> ____sonyLevelProductPackSource;

  /// @brief Field _ps4LevelProductPacks, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> ____ps4LevelProductPacks;

  /// @brief Field _ps5LevelProductPacks, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> ____ps5LevelProductPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks, ____steamLevelProductPacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks, ____oculusLevelProductPacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks, ____sonyLevelProductPackSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks, ____ps4LevelProductPacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks, ____ps5LevelProductPacks) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPromoInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10830))
// CS Name: ::PackDefinitionSO::LevelPromoInfo*
class CORDL_TYPE __PackDefinitionSO__LevelPromoInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID, put = __cordl_internal_set__levelID))::StringW _levelID;

  /// @brief Field _promoInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promoInfo, put = __cordl_internal_set__promoInfo))::UnityW<::GlobalNamespace::PromoInfoSO> _promoInfo;

  __declspec(property(get = get_levelID))::StringW levelID;

  __declspec(property(get = get_promoInfo))::UnityW<::GlobalNamespace::PromoInfoSO> promoInfo;

  constexpr ::StringW& __cordl_internal_get__levelID();

  constexpr ::StringW const& __cordl_internal_get__levelID() const;

  constexpr void __cordl_internal_set__levelID(::StringW value);

  constexpr ::UnityW<::GlobalNamespace::PromoInfoSO>& __cordl_internal_get__promoInfo();

  constexpr ::UnityW<::GlobalNamespace::PromoInfoSO> const& __cordl_internal_get__promoInfo() const;

  constexpr void __cordl_internal_set__promoInfo(::UnityW<::GlobalNamespace::PromoInfoSO> value);

  /// @brief Method get_levelID, addr 0x128f8cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method get_promoInfo, addr 0x128f8d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PromoInfoSO> get_promoInfo();

  static inline ::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo* New_ctor();

  /// @brief Method .ctor, addr 0x128f8dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionSO__LevelPromoInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionSO__LevelPromoInfo(__PackDefinitionSO__LevelPromoInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionSO__LevelPromoInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionSO__LevelPromoInfo(__PackDefinitionSO__LevelPromoInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionSO__LevelPromoInfo();

public:
  /// @brief Field _levelID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelID;

  /// @brief Field _promoInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoInfoSO> ____promoInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo, ____levelID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo, ____promoInfo) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PackDefinitionSO
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10827)), TypeDefinitionIndex(TypeDefinitionIndex(15602))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10831))
// CS Name: ::PackDefinitionSO*
class CORDL_TYPE PackDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPromoInfo = ::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo;

  using LevelProductPacks = ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks;

  using LeaderboardIds = ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds;

  using Tags = ::GlobalNamespace::__PackDefinitionSO__Tags;

  /// @brief Field _beatmapLevelPack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPack, put = __cordl_internal_set__beatmapLevelPack))::UnityW<::GlobalNamespace::BeatmapLevelPackSO> _beatmapLevelPack;

  /// @brief Field _order, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__order, put = __cordl_internal_set__order)) int32_t _order;

  /// @brief Field _leaderboardIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIds, put = __cordl_internal_set__leaderboardIds))::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* _leaderboardIds;

  /// @brief Field _levelProductPacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductPacks, put = __cordl_internal_set__levelProductPacks))::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* _levelProductPacks;

  /// @brief Field _tags, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags))::GlobalNamespace::__PackDefinitionSO__Tags _tags;

  /// @brief Field _packPromoInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__packPromoInfo, put = __cordl_internal_set__packPromoInfo))::UnityW<::GlobalNamespace::PromoInfoSO> _packPromoInfo;

  /// @brief Field _levelsPromoInfo, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__levelsPromoInfo,
      put = __cordl_internal_set__levelsPromoInfo))::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> _levelsPromoInfo;

  /// @brief Field _perceivedLoudnessPerLevel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevel,
                      put = __cordl_internal_set__perceivedLoudnessPerLevel))::UnityW<::GlobalNamespace::PerceivedLoudnessSO> _perceivedLoudnessPerLevel;

  /// @brief Field _relativeSfxVolumePerLevel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__relativeSfxVolumePerLevel,
                      put = __cordl_internal_set__relativeSfxVolumePerLevel))::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> _relativeSfxVolumePerLevel;

  __declspec(property(get = get_content, put = set_content))::UnityW<::GlobalNamespace::BeatmapLevelPackSO> content;

  __declspec(property(get = get_order, put = set_order)) int32_t order;

  __declspec(property(get = get_tags, put = set_tags))::GlobalNamespace::__PackDefinitionSO__Tags tags;

  __declspec(property(get = get_leaderboardIds))::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* leaderboardIds;

  __declspec(property(get = get_levelProductPacks))::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* levelProductPacks;

  __declspec(property(get = get_packPromoInfo))::UnityW<::GlobalNamespace::PromoInfoSO> packPromoInfo;

  __declspec(property(get = get_levelsPromoInfo))::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> levelsPromoInfo;

  __declspec(property(get = get_isOST)) bool isOST;

  __declspec(property(get = get_isDLC)) bool isDLC;

  __declspec(property(get = get_isOwned)) bool isOwned;

  __declspec(property(get = get_isDebug)) bool isDebug;

  __declspec(property(get = get_perceivedLoudness, put = set_perceivedLoudness))::UnityW<::GlobalNamespace::PerceivedLoudnessSO> perceivedLoudness;

  __declspec(property(get = get_relativeSfxVolume))::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> relativeSfxVolume;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO>& __cordl_internal_get__beatmapLevelPack();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> const& __cordl_internal_get__beatmapLevelPack() const;

  constexpr void __cordl_internal_set__beatmapLevelPack(::UnityW<::GlobalNamespace::BeatmapLevelPackSO> value);

  constexpr int32_t& __cordl_internal_get__order();

  constexpr int32_t const& __cordl_internal_get__order() const;

  constexpr void __cordl_internal_set__order(int32_t value);

  constexpr ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*& __cordl_internal_get__leaderboardIds();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*> const& __cordl_internal_get__leaderboardIds() const;

  constexpr void __cordl_internal_set__leaderboardIds(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* value);

  constexpr ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*& __cordl_internal_get__levelProductPacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*> const& __cordl_internal_get__levelProductPacks() const;

  constexpr void __cordl_internal_set__levelProductPacks(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* value);

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get__tags();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get__tags() const;

  constexpr void __cordl_internal_set__tags(::GlobalNamespace::__PackDefinitionSO__Tags value);

  constexpr ::UnityW<::GlobalNamespace::PromoInfoSO>& __cordl_internal_get__packPromoInfo();

  constexpr ::UnityW<::GlobalNamespace::PromoInfoSO> const& __cordl_internal_get__packPromoInfo() const;

  constexpr void __cordl_internal_set__packPromoInfo(::UnityW<::GlobalNamespace::PromoInfoSO> value);

  constexpr ::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*>& __cordl_internal_get__levelsPromoInfo();

  constexpr ::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> const& __cordl_internal_get__levelsPromoInfo() const;

  constexpr void __cordl_internal_set__levelsPromoInfo(::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> value);

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO>& __cordl_internal_get__perceivedLoudnessPerLevel();

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> const& __cordl_internal_get__perceivedLoudnessPerLevel() const;

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevel(::UnityW<::GlobalNamespace::PerceivedLoudnessSO> value);

  constexpr ::UnityW<::GlobalNamespace::RelativeSfxVolumeSO>& __cordl_internal_get__relativeSfxVolumePerLevel();

  constexpr ::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> const& __cordl_internal_get__relativeSfxVolumePerLevel() const;

  constexpr void __cordl_internal_set__relativeSfxVolumePerLevel(::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> value);

  /// @brief Method get_content, addr 0x128f6f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> get_content();

  /// @brief Method set_content, addr 0x128f6f8, size 0x8, virtual false, abstract: false, final false
  inline void set_content(::GlobalNamespace::BeatmapLevelPackSO* value);

  /// @brief Method get_order, addr 0x128f700, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_order();

  /// @brief Method set_order, addr 0x128f708, size 0x8, virtual false, abstract: false, final false
  inline void set_order(int32_t value);

  /// @brief Method get_tags, addr 0x128f710, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PackDefinitionSO__Tags get_tags();

  /// @brief Method set_tags, addr 0x128f718, size 0x8, virtual false, abstract: false, final false
  inline void set_tags(::GlobalNamespace::__PackDefinitionSO__Tags value);

  /// @brief Method get_leaderboardIds, addr 0x128f720, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* get_leaderboardIds();

  /// @brief Method get_levelProductPacks, addr 0x128f728, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* get_levelProductPacks();

  /// @brief Method get_packPromoInfo, addr 0x128f730, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PromoInfoSO> get_packPromoInfo();

  /// @brief Method get_levelsPromoInfo, addr 0x128f738, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> get_levelsPromoInfo();

  /// @brief Method get_isOST, addr 0x128f740, size 0xc, virtual false, abstract: false, final false
  inline bool get_isOST();

  /// @brief Method get_isDLC, addr 0x128f74c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isDLC();

  /// @brief Method get_isOwned, addr 0x128f758, size 0xc, virtual false, abstract: false, final false
  inline bool get_isOwned();

  /// @brief Method get_isDebug, addr 0x128f764, size 0xc, virtual false, abstract: false, final false
  inline bool get_isDebug();

  /// @brief Method get_perceivedLoudness, addr 0x128f770, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> get_perceivedLoudness();

  /// @brief Method set_perceivedLoudness, addr 0x128f778, size 0x8, virtual false, abstract: false, final false
  inline void set_perceivedLoudness(::GlobalNamespace::PerceivedLoudnessSO* value);

  /// @brief Method get_relativeSfxVolume, addr 0x128f780, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> get_relativeSfxVolume();

  /// @brief Method Create, addr 0x128f788, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::PackDefinitionSO> Create(::StringW name, int32_t order, ::GlobalNamespace::__PackDefinitionSO__Tags tags);

  static inline ::GlobalNamespace::PackDefinitionSO* New_ctor();

  /// @brief Method .ctor, addr 0x128f814, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionSO(PackDefinitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionSO(PackDefinitionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionSO();

public:
  /// @brief Field _beatmapLevelPack, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> ____beatmapLevelPack;

  /// @brief Field _order, offset: 0x20, size: 0x4, def value: None
  int32_t ____order;

  /// @brief Field _leaderboardIds, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* ____leaderboardIds;

  /// @brief Field _levelProductPacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* ____levelProductPacks;

  /// @brief Field _tags, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags ____tags;

  /// @brief Field _packPromoInfo, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoInfoSO> ____packPromoInfo;

  /// @brief Field _levelsPromoInfo, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> ____levelsPromoInfo;

  /// @brief Field _perceivedLoudnessPerLevel, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> ____perceivedLoudnessPerLevel;

  /// @brief Field _relativeSfxVolumePerLevel, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> ____relativeSfxVolumePerLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionSO, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____beatmapLevelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____order) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____leaderboardIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____levelProductPacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____tags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____packPromoInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____levelsPromoInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____perceivedLoudnessPerLevel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____relativeSfxVolumePerLevel) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionSO__Tags, "", "PackDefinitionSO/Tags");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionSO*, "", "PackDefinitionSO");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*, "", "PackDefinitionSO/LeaderboardIds");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*, "", "PackDefinitionSO/LevelProductPacks");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, "", "PackDefinitionSO/LevelPromoInfo");
