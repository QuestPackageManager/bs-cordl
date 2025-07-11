#pragma once
// IWYU pragma private; include "GlobalNamespace/PackPromoInfoSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PackPromoInfoSO)
namespace GlobalNamespace {
class PackPromoInfoSO_LevelPromoInfo;
}
namespace GlobalNamespace {
class PromoBannerInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PackPromoInfoSO;
}
namespace GlobalNamespace {
class PackPromoInfoSO_LevelPromoInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackPromoInfoSO);
MARK_REF_PTR_T(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackPromoInfoSO/LevelPromoInfo
class CORDL_TYPE PackPromoInfoSO_LevelPromoInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID, put = __cordl_internal_set__levelID)) ::StringW _levelID;

  /// @brief Field _promoBannerInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promoBannerInfo, put = __cordl_internal_set__promoBannerInfo)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> _promoBannerInfo;

  __declspec(property(get = get_levelID)) ::StringW levelID;

  __declspec(property(get = get_promoBannerInfo)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> promoBannerInfo;

  static inline ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__levelID() const;

  constexpr ::StringW& __cordl_internal_get__levelID();

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& __cordl_internal_get__promoBannerInfo() const;

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& __cordl_internal_get__promoBannerInfo();

  constexpr void __cordl_internal_set__levelID(::StringW value);

  constexpr void __cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value);

  /// @brief Method .ctor, addr 0x26d3fc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelID, addr 0x26d3fb4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method get_promoBannerInfo, addr 0x26d3fbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> get_promoBannerInfo();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13012 };

  /// @brief Field _levelID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelID;

  /// @brief Field _promoBannerInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoBannerInfoSO> ____promoBannerInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo, ____levelID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo, ____promoBannerInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackPromoInfoSO
class CORDL_TYPE PackPromoInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPromoInfo = ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo;

  /// @brief Field _levelsPromoInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelsPromoInfo,
                      put = __cordl_internal_set__levelsPromoInfo)) ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*>
      _levelsPromoInfo;

  /// @brief Field _promoBannerInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promoBannerInfo, put = __cordl_internal_set__promoBannerInfo)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> _promoBannerInfo;

  __declspec(property(get = get_hasLevelPromos)) bool hasLevelPromos;

  __declspec(property(get = get_levelPromoInfos)) ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> levelPromoInfos;

  __declspec(property(get = get_promoBannerInfo)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> promoBannerInfo;

  static inline ::GlobalNamespace::PackPromoInfoSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> const& __cordl_internal_get__levelsPromoInfo() const;

  constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*>& __cordl_internal_get__levelsPromoInfo();

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& __cordl_internal_get__promoBannerInfo() const;

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& __cordl_internal_get__promoBannerInfo();

  constexpr void __cordl_internal_set__levelsPromoInfo(::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> value);

  constexpr void __cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value);

  /// @brief Method .ctor, addr 0x26d3fac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasLevelPromos, addr 0x26d3f8c, size 0x20, virtual false, abstract: false, final false
  inline bool get_hasLevelPromos();

  /// @brief Method get_levelPromoInfos, addr 0x26d3f84, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> get_levelPromoInfos();

  /// @brief Method get_promoBannerInfo, addr 0x26d3f7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> get_promoBannerInfo();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13013 };

  /// @brief Field _promoBannerInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoBannerInfoSO> ____promoBannerInfo;

  /// @brief Field _levelsPromoInfo, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> ____levelsPromoInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO, ____promoBannerInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO, ____levelsPromoInfo) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackPromoInfoSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackPromoInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackPromoInfoSO*, "", "PackPromoInfoSO");
NEED_NO_BOX(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, "", "PackPromoInfoSO/LevelPromoInfo");
