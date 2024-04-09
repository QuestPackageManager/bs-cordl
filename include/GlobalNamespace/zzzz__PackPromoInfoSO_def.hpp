#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PackPromoInfoSO)
namespace GlobalNamespace {
class PromoBannerInfoSO;
}
namespace GlobalNamespace {
class __PackPromoInfoSO__LevelPromoInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class PackPromoInfoSO;
}
namespace GlobalNamespace {
class __PackPromoInfoSO__LevelPromoInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackPromoInfoSO);
MARK_REF_PTR_T(::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo);
// Type: ::LevelPromoInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackPromoInfoSO::LevelPromoInfo*
class CORDL_TYPE __PackPromoInfoSO__LevelPromoInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID, put = __cordl_internal_set__levelID))::StringW _levelID;

  /// @brief Field _promoBannerInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promoBannerInfo, put = __cordl_internal_set__promoBannerInfo))::UnityW<::GlobalNamespace::PromoBannerInfoSO> _promoBannerInfo;

  __declspec(property(get = get_levelID))::StringW levelID;

  __declspec(property(get = get_promoBannerInfo))::UnityW<::GlobalNamespace::PromoBannerInfoSO> promoBannerInfo;

  static inline ::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__levelID() const;

  constexpr ::StringW& __cordl_internal_get__levelID();

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& __cordl_internal_get__promoBannerInfo() const;

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& __cordl_internal_get__promoBannerInfo();

  constexpr void __cordl_internal_set__levelID(::StringW value);

  constexpr void __cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value);

  /// @brief Method .ctor, addr 0x13d22a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelID, addr 0x13d2298, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method get_promoBannerInfo, addr 0x13d22a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> get_promoBannerInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackPromoInfoSO__LevelPromoInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackPromoInfoSO__LevelPromoInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackPromoInfoSO__LevelPromoInfo(__PackPromoInfoSO__LevelPromoInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackPromoInfoSO__LevelPromoInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackPromoInfoSO__LevelPromoInfo(__PackPromoInfoSO__LevelPromoInfo const&) = delete;

  /// @brief Field _levelID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelID;

  /// @brief Field _promoBannerInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoBannerInfoSO> ____promoBannerInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo, ____levelID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo, ____promoBannerInfo) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PackPromoInfoSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackPromoInfoSO*
class CORDL_TYPE PackPromoInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPromoInfo = ::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo;

  /// @brief Field _levelsPromoInfo, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__levelsPromoInfo,
      put = __cordl_internal_set__levelsPromoInfo))::ArrayW<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*>*> _levelsPromoInfo;

  /// @brief Field _promoBannerInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promoBannerInfo, put = __cordl_internal_set__promoBannerInfo))::UnityW<::GlobalNamespace::PromoBannerInfoSO> _promoBannerInfo;

  __declspec(property(get = get_levelPromoInfos))::ArrayW<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*>*> levelPromoInfos;

  __declspec(property(get = get_promoBannerInfo))::UnityW<::GlobalNamespace::PromoBannerInfoSO> promoBannerInfo;

  static inline ::GlobalNamespace::PackPromoInfoSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*>*> const& __cordl_internal_get__levelsPromoInfo() const;

  constexpr ::ArrayW<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*>*>& __cordl_internal_get__levelsPromoInfo();

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& __cordl_internal_get__promoBannerInfo() const;

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& __cordl_internal_get__promoBannerInfo();

  constexpr void __cordl_internal_set__levelsPromoInfo(::ArrayW<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*>*> value);

  constexpr void __cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value);

  /// @brief Method .ctor, addr 0x13d2290, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelPromoInfos, addr 0x13d2288, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*>*> get_levelPromoInfos();

  /// @brief Method get_promoBannerInfo, addr 0x13d2280, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _promoBannerInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoBannerInfoSO> ____promoBannerInfo;

  /// @brief Field _levelsPromoInfo, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*>*> ____levelsPromoInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackPromoInfoSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO, ____promoBannerInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackPromoInfoSO, ____levelsPromoInfo) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackPromoInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackPromoInfoSO*, "", "PackPromoInfoSO");
NEED_NO_BOX(::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*, "", "PackPromoInfoSO/LevelPromoInfo");
