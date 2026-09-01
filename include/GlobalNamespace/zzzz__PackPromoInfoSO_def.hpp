#pragma once
// IWYU pragma private; include "GlobalNamespace\PackPromoInfoSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackPromoInfoSO)
namespace GlobalNamespace {
struct LevelPromoInfo_PackPromoInfoSO_PromoMode;
}
namespace GlobalNamespace {
class PackPromoInfoSO_LevelPromoInfo;
}
namespace GlobalNamespace {
class PromoBannerInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct LevelPromoInfo_PackPromoInfoSO_PromoMode;
}
namespace GlobalNamespace {
class PackPromoInfoSO;
}
namespace GlobalNamespace {
class PackPromoInfoSO_LevelPromoInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode);
MARK_REF_T(::GlobalNamespace::PackPromoInfoSO*);
MARK_REF_T(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode, "", "PackPromoInfoSO/LevelPromoInfo/PromoMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PackPromoInfoSO*, "", "PackPromoInfoSO");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, "", "PackPromoInfoSO/LevelPromoInfo");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PackPromoInfoSO/LevelPromoInfo/PromoMode
struct CORDL_TYPE LevelPromoInfo_PackPromoInfoSO_PromoMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LevelPromoInfo_PackPromoInfoSO_PromoMode_Unwrapped
  enum struct __LevelPromoInfo_PackPromoInfoSO_PromoMode_Unwrapped : int32_t {
    __E_Included = static_cast<int32_t>(0x0),
    __E_Excluded = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LevelPromoInfo_PackPromoInfoSO_PromoMode_Unwrapped() const noexcept {
    return static_cast<__LevelPromoInfo_PackPromoInfoSO_PromoMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelPromoInfo_PackPromoInfoSO_PromoMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LevelPromoInfo_PackPromoInfoSO_PromoMode(int32_t value__) noexcept;

  /// @brief Field Excluded value: I32(1)
  static ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode const Excluded;

  /// @brief Field Included value: I32(0)
  static ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode const Included;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15023 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PackPromoInfoSO::LevelPromoInfo::PromoMode, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackPromoInfoSO/LevelPromoInfo
class CORDL_TYPE PackPromoInfoSO_LevelPromoInfo : public ::System::Object {
public:
  // Declarations
  using PromoMode = ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode;

  /// @brief Field _levelID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID, put = __cordl_internal_set__levelID)) ::StringW _levelID;

  /// @brief Field _promoBannerInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promoBannerInfo, put = __cordl_internal_set__promoBannerInfo)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> _promoBannerInfo;

  /// @brief Field _promoMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__promoMode, put = __cordl_internal_set__promoMode)) ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode _promoMode;

  __declspec(property(get = get_isExcluded)) bool isExcluded;

  __declspec(property(get = get_levelID)) ::StringW levelID;

  __declspec(property(get = get_promoBannerInfo, put = set_promoBannerInfo)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> promoBannerInfo;

  __declspec(property(get = get_promoMode)) ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode promoMode;

  static inline ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* New_ctor(::StringW levelID, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo);

  constexpr ::StringW const& __cordl_internal_get__levelID() const;

  constexpr ::StringW& __cordl_internal_get__levelID();

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& __cordl_internal_get__promoBannerInfo() const;

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& __cordl_internal_get__promoBannerInfo();

  constexpr ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode const& __cordl_internal_get__promoMode() const;

  constexpr ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode& __cordl_internal_get__promoMode();

  constexpr void __cordl_internal_set__levelID(::StringW value);

  constexpr void __cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value);

  constexpr void __cordl_internal_set__promoMode(::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode value);

  /// @brief Method .ctor, addr 0x372f5f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo);

  /// @brief Method get_isExcluded, addr 0x372f5e4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isExcluded();

  /// @brief Method get_levelID, addr 0x372f5c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method get_promoBannerInfo, addr 0x372f5cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> get_promoBannerInfo();

  /// @brief Method get_promoMode, addr 0x372f5dc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode get_promoMode();

  /// @brief Method set_promoBannerInfo, addr 0x372f5d4, size 0x8, virtual false, abstract: false, final false
  inline void set_promoBannerInfo(::GlobalNamespace::PromoBannerInfoSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackPromoInfoSO_LevelPromoInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackPromoInfoSO_LevelPromoInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackPromoInfoSO_LevelPromoInfo(PackPromoInfoSO_LevelPromoInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackPromoInfoSO_LevelPromoInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackPromoInfoSO_LevelPromoInfo(PackPromoInfoSO_LevelPromoInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15024 };

  /// @brief Field _levelID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelID;

  /// @brief Field _promoBannerInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoBannerInfoSO> ____promoBannerInfo;

  /// @brief Field _promoMode, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::LevelPromoInfo_PackPromoInfoSO_PromoMode ____promoMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo, ____levelID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo, ____promoBannerInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo, ____promoMode) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PackPromoInfoSO::LevelPromoInfo, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackPromoInfoSO
class CORDL_TYPE PackPromoInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPromoInfo = ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo;

  /// @brief Field _levelsPromoInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelsPromoInfo, put = __cordl_internal_set__levelsPromoInfo)) ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> _levelsPromoInfo;

  /// @brief Field _promoBannerInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promoBannerInfo, put = __cordl_internal_set__promoBannerInfo)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> _promoBannerInfo;

  __declspec(property(get = get_hasLevelPromos)) bool hasLevelPromos;

  __declspec(property(get = get_levelPromoInfos)) ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> levelPromoInfos;

  __declspec(property(get = get_promoBannerInfo, put = set_promoBannerInfo)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> promoBannerInfo;

  /// @brief Method AddLevelPromoInfo, addr 0x372f4c4, size 0xf8, virtual false, abstract: false, final false
  inline void AddLevelPromoInfo(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* levelPromoInfo);

  static inline ::GlobalNamespace::PackPromoInfoSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> const& __cordl_internal_get__levelsPromoInfo() const;

  constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>& __cordl_internal_get__levelsPromoInfo();

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& __cordl_internal_get__promoBannerInfo() const;

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& __cordl_internal_get__promoBannerInfo();

  constexpr void __cordl_internal_set__levelsPromoInfo(::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> value);

  constexpr void __cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value);

  /// @brief Method .ctor, addr 0x372f5bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasLevelPromos, addr 0x372f4a4, size 0x20, virtual false, abstract: false, final false
  inline bool get_hasLevelPromos();

  /// @brief Method get_levelPromoInfos, addr 0x372f400, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> get_levelPromoInfos();

  /// @brief Method get_promoBannerInfo, addr 0x372f3f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> get_promoBannerInfo();

  /// @brief Method set_promoBannerInfo, addr 0x372f3f8, size 0x8, virtual false, abstract: false, final false
  inline void set_promoBannerInfo(::GlobalNamespace::PromoBannerInfoSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackPromoInfoSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackPromoInfoSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackPromoInfoSO(PackPromoInfoSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackPromoInfoSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackPromoInfoSO(PackPromoInfoSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15025 };

  /// @brief Field _promoBannerInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoBannerInfoSO> ____promoBannerInfo;

  /// @brief Field _levelsPromoInfo, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*> ____levelsPromoInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO, ____promoBannerInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO, ____levelsPromoInfo) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PackPromoInfoSO) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
