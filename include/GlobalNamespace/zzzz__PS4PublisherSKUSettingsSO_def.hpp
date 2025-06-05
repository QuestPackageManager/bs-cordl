#pragma once
// IWYU pragma private; include "GlobalNamespace/PS4PublisherSKUSettingsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS4ApplicationCategory_def.hpp"
#include "GlobalNamespace/zzzz__SonyPublisherSKUSettingsSO_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PS4PublisherSKUSettingsSO)
namespace GlobalNamespace {
struct PS4ApplicationCategory;
}
namespace GlobalNamespace {
class PS4PublisherSKUSettingsSO_PS4BuildVersion;
}
namespace GlobalNamespace {
class SonyVersion;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4PublisherSKUSettingsSO;
}
namespace GlobalNamespace {
class PS4PublisherSKUSettingsSO_PS4BuildVersion;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4PublisherSKUSettingsSO);
MARK_REF_PTR_T(::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS4PublisherSKUSettingsSO/PS4BuildVersion
class CORDL_TYPE PS4PublisherSKUSettingsSO_PS4BuildVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field _applicationVersion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__applicationVersion, put = __cordl_internal_set__applicationVersion)) ::GlobalNamespace::SonyVersion* _applicationVersion;

  /// @brief Field _masterVersion, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__masterVersion, put = __cordl_internal_set__masterVersion)) ::GlobalNamespace::SonyVersion* _masterVersion;

  __declspec(property(get = get_applicationVersion)) ::GlobalNamespace::SonyVersion* applicationVersion;

  __declspec(property(get = get_masterVersion)) ::GlobalNamespace::SonyVersion* masterVersion;

  /// @brief Method CopyValueFrom, addr 0x26eb834, size 0x48, virtual false, abstract: false, final false
  inline void CopyValueFrom(::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* newVersion);

  /// @brief Method IncreaseAppVersion, addr 0x26eb87c, size 0x1c, virtual false, abstract: false, final false
  inline void IncreaseAppVersion();

  static inline ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* New_ctor();

  constexpr ::GlobalNamespace::SonyVersion* const& __cordl_internal_get__applicationVersion() const;

  constexpr ::GlobalNamespace::SonyVersion*& __cordl_internal_get__applicationVersion();

  constexpr ::GlobalNamespace::SonyVersion* const& __cordl_internal_get__masterVersion() const;

  constexpr ::GlobalNamespace::SonyVersion*& __cordl_internal_get__masterVersion();

  constexpr void __cordl_internal_set__applicationVersion(::GlobalNamespace::SonyVersion* value);

  constexpr void __cordl_internal_set__masterVersion(::GlobalNamespace::SonyVersion* value);

  /// @brief Method .ctor, addr 0x26eb898, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_applicationVersion, addr 0x26eb82c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyVersion* get_applicationVersion();

  /// @brief Method get_masterVersion, addr 0x26eb824, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyVersion* get_masterVersion();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4PublisherSKUSettingsSO_PS4BuildVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS4PublisherSKUSettingsSO_PS4BuildVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4PublisherSKUSettingsSO_PS4BuildVersion(PS4PublisherSKUSettingsSO_PS4BuildVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4PublisherSKUSettingsSO_PS4BuildVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4PublisherSKUSettingsSO_PS4BuildVersion(PS4PublisherSKUSettingsSO_PS4BuildVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13161 };

  /// @brief Field _masterVersion, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SonyVersion* ____masterVersion;

  /// @brief Field _applicationVersion, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SonyVersion* ____applicationVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion, ____masterVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion, ____applicationVersion) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PS4ApplicationCategory, SonyPublisherSKUSettingsSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS4PublisherSKUSettingsSO
class CORDL_TYPE PS4PublisherSKUSettingsSO : public ::GlobalNamespace::SonyPublisherSKUSettingsSO {
public:
  // Declarations
  using PS4BuildVersion = ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion;

  /// @brief Field _applicationCategory, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__applicationCategory, put = __cordl_internal_set__applicationCategory)) ::GlobalNamespace::PS4ApplicationCategory _applicationCategory;

  /// @brief Field _buildVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__buildVersion, put = __cordl_internal_set__buildVersion)) ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* _buildVersion;

  /// @brief Field _defaultAgeRestriction, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultAgeRestriction, put = __cordl_internal_set__defaultAgeRestriction)) int32_t _defaultAgeRestriction;

  /// @brief Field _latestBuildVersion, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__latestBuildVersion,
                      put = __cordl_internal_set__latestBuildVersion)) ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* _latestBuildVersion;

  /// @brief Field _npTitleFilenamePath, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__npTitleFilenamePath, put = __cordl_internal_set__npTitleFilenamePath)) ::StringW _npTitleFilenamePath;

  /// @brief Field _parentalLockLevel, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__parentalLockLevel, put = __cordl_internal_set__parentalLockLevel)) int32_t _parentalLockLevel;

  __declspec(property(get = get_applicationCategory)) ::GlobalNamespace::PS4ApplicationCategory applicationCategory;

  __declspec(property(get = get_buildVersion)) ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* buildVersion;

  __declspec(property(get = get_defaultAgeRestriction)) int32_t defaultAgeRestriction;

  __declspec(property(get = get_latestBuildVersion)) ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* latestBuildVersion;

  __declspec(property(get = get_npTitleFilenamePath)) ::StringW npTitleFilenamePath;

  __declspec(property(get = get_parentalLockLevel)) int32_t parentalLockLevel;

  static inline ::GlobalNamespace::PS4PublisherSKUSettingsSO* New_ctor();

  constexpr ::GlobalNamespace::PS4ApplicationCategory const& __cordl_internal_get__applicationCategory() const;

  constexpr ::GlobalNamespace::PS4ApplicationCategory& __cordl_internal_get__applicationCategory();

  constexpr ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* const& __cordl_internal_get__buildVersion() const;

  constexpr ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion*& __cordl_internal_get__buildVersion();

  constexpr int32_t const& __cordl_internal_get__defaultAgeRestriction() const;

  constexpr int32_t& __cordl_internal_get__defaultAgeRestriction();

  constexpr ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* const& __cordl_internal_get__latestBuildVersion() const;

  constexpr ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion*& __cordl_internal_get__latestBuildVersion();

  constexpr ::StringW const& __cordl_internal_get__npTitleFilenamePath() const;

  constexpr ::StringW& __cordl_internal_get__npTitleFilenamePath();

  constexpr int32_t const& __cordl_internal_get__parentalLockLevel() const;

  constexpr int32_t& __cordl_internal_get__parentalLockLevel();

  constexpr void __cordl_internal_set__applicationCategory(::GlobalNamespace::PS4ApplicationCategory value);

  constexpr void __cordl_internal_set__buildVersion(::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* value);

  constexpr void __cordl_internal_set__defaultAgeRestriction(int32_t value);

  constexpr void __cordl_internal_set__latestBuildVersion(::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* value);

  constexpr void __cordl_internal_set__npTitleFilenamePath(::StringW value);

  constexpr void __cordl_internal_set__parentalLockLevel(int32_t value);

  /// @brief Method .ctor, addr 0x26eb81c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_applicationCategory, addr 0x26eb814, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PS4ApplicationCategory get_applicationCategory();

  /// @brief Method get_buildVersion, addr 0x26eb7ec, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* get_buildVersion();

  /// @brief Method get_defaultAgeRestriction, addr 0x26eb80c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_defaultAgeRestriction();

  /// @brief Method get_latestBuildVersion, addr 0x26eb7f4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* get_latestBuildVersion();

  /// @brief Method get_npTitleFilenamePath, addr 0x26eb804, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_npTitleFilenamePath();

  /// @brief Method get_parentalLockLevel, addr 0x26eb7fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_parentalLockLevel();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4PublisherSKUSettingsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS4PublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4PublisherSKUSettingsSO(PS4PublisherSKUSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4PublisherSKUSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4PublisherSKUSettingsSO(PS4PublisherSKUSettingsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13162 };

  /// @brief Field _buildVersion, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* ____buildVersion;

  /// @brief Field _latestBuildVersion, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion* ____latestBuildVersion;

  /// @brief Field _parentalLockLevel, offset: 0x48, size: 0x4, def value: None
  int32_t ____parentalLockLevel;

  /// @brief Field _npTitleFilenamePath, offset: 0x50, size: 0x8, def value: None
  ::StringW ____npTitleFilenamePath;

  /// @brief Field _defaultAgeRestriction, offset: 0x58, size: 0x4, def value: None
  int32_t ____defaultAgeRestriction;

  /// @brief Field _applicationCategory, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::PS4ApplicationCategory ____applicationCategory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____buildVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____latestBuildVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____parentalLockLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____npTitleFilenamePath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____defaultAgeRestriction) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____applicationCategory) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4PublisherSKUSettingsSO, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4PublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4PublisherSKUSettingsSO*, "", "PS4PublisherSKUSettingsSO");
NEED_NO_BOX(::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4PublisherSKUSettingsSO_PS4BuildVersion*, "", "PS4PublisherSKUSettingsSO/PS4BuildVersion");
