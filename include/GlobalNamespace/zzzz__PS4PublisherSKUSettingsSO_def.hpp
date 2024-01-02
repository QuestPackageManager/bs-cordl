#pragma once
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
class __PS4PublisherSKUSettingsSO__PS4BuildVersion;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4PublisherSKUSettingsSO;
}
namespace GlobalNamespace {
class __PS4PublisherSKUSettingsSO__PS4BuildVersion;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4PublisherSKUSettingsSO);
MARK_REF_PTR_T(::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion);
// Type: ::PS4BuildVersion
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4555))
// CS Name: ::PS4PublisherSKUSettingsSO::PS4BuildVersion*
class CORDL_TYPE __PS4PublisherSKUSettingsSO__PS4BuildVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field _masterVersion, offset 0x10, size 0x8
  __declspec(property(get = __get__masterVersion, put = __set__masterVersion))::StringW _masterVersion;

  /// @brief Field _applicationVersion, offset 0x18, size 0x8
  __declspec(property(get = __get__applicationVersion, put = __set__applicationVersion))::StringW _applicationVersion;

  __declspec(property(get = get_masterVersion))::StringW masterVersion;

  __declspec(property(get = get_applicationVersion))::StringW applicationVersion;

  constexpr ::StringW& __get__masterVersion();

  constexpr ::StringW const& __get__masterVersion() const;

  constexpr void __set__masterVersion(::StringW value);

  constexpr ::StringW& __get__applicationVersion();

  constexpr ::StringW const& __get__applicationVersion() const;

  constexpr void __set__applicationVersion(::StringW value);

  /// @brief Method get_masterVersion, addr 0x2368250, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_masterVersion();

  /// @brief Method get_applicationVersion, addr 0x2368258, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_applicationVersion();

  static inline ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* New_ctor();

  /// @brief Method .ctor, addr 0x2368260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PS4PublisherSKUSettingsSO__PS4BuildVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PS4PublisherSKUSettingsSO__PS4BuildVersion(__PS4PublisherSKUSettingsSO__PS4BuildVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PS4PublisherSKUSettingsSO__PS4BuildVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PS4PublisherSKUSettingsSO__PS4BuildVersion(__PS4PublisherSKUSettingsSO__PS4BuildVersion const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PS4PublisherSKUSettingsSO__PS4BuildVersion();

public:
  /// @brief Field _masterVersion, offset: 0x10, size: 0x8, def value: None
  ::StringW ____masterVersion;

  /// @brief Field _applicationVersion, offset: 0x18, size: 0x8, def value: None
  ::StringW ____applicationVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion, ____masterVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion, ____applicationVersion) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PS4PublisherSKUSettingsSO
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4602)), TypeDefinitionIndex(TypeDefinitionIndex(4554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4556))
// CS Name: ::PS4PublisherSKUSettingsSO*
class CORDL_TYPE PS4PublisherSKUSettingsSO : public ::GlobalNamespace::SonyPublisherSKUSettingsSO {
public:
  // Declarations
  using PS4BuildVersion = ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion;

  /// @brief Field _buildVersion, offset 0x38, size 0x8
  __declspec(property(get = __get__buildVersion, put = __set__buildVersion))::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* _buildVersion;

  /// @brief Field _latestBuildVersion, offset 0x40, size 0x8
  __declspec(property(get = __get__latestBuildVersion, put = __set__latestBuildVersion))::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* _latestBuildVersion;

  /// @brief Field _parentalLockLevel, offset 0x48, size 0x4
  __declspec(property(get = __get__parentalLockLevel, put = __set__parentalLockLevel)) int32_t _parentalLockLevel;

  /// @brief Field _npTitleFilenamePath, offset 0x50, size 0x8
  __declspec(property(get = __get__npTitleFilenamePath, put = __set__npTitleFilenamePath))::StringW _npTitleFilenamePath;

  /// @brief Field _defaultAgeRestriction, offset 0x58, size 0x4
  __declspec(property(get = __get__defaultAgeRestriction, put = __set__defaultAgeRestriction)) int32_t _defaultAgeRestriction;

  /// @brief Field _applicationCategory, offset 0x5c, size 0x4
  __declspec(property(get = __get__applicationCategory, put = __set__applicationCategory))::GlobalNamespace::PS4ApplicationCategory _applicationCategory;

  __declspec(property(get = get_buildVersion))::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* buildVersion;

  __declspec(property(get = get_latestBuildVersion))::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* latestBuildVersion;

  __declspec(property(get = get_parentalLockLevel)) int32_t parentalLockLevel;

  __declspec(property(get = get_npTitleFilenamePath))::StringW npTitleFilenamePath;

  __declspec(property(get = get_defaultAgeRestriction)) int32_t defaultAgeRestriction;

  __declspec(property(get = get_applicationCategory))::GlobalNamespace::PS4ApplicationCategory applicationCategory;

  constexpr ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*& __get__buildVersion();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*> const& __get__buildVersion() const;

  constexpr void __set__buildVersion(::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* value);

  constexpr ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*& __get__latestBuildVersion();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*> const& __get__latestBuildVersion() const;

  constexpr void __set__latestBuildVersion(::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* value);

  constexpr int32_t& __get__parentalLockLevel();

  constexpr int32_t const& __get__parentalLockLevel() const;

  constexpr void __set__parentalLockLevel(int32_t value);

  constexpr ::StringW& __get__npTitleFilenamePath();

  constexpr ::StringW const& __get__npTitleFilenamePath() const;

  constexpr void __set__npTitleFilenamePath(::StringW value);

  constexpr int32_t& __get__defaultAgeRestriction();

  constexpr int32_t const& __get__defaultAgeRestriction() const;

  constexpr void __set__defaultAgeRestriction(int32_t value);

  constexpr ::GlobalNamespace::PS4ApplicationCategory& __get__applicationCategory();

  constexpr ::GlobalNamespace::PS4ApplicationCategory const& __get__applicationCategory() const;

  constexpr void __set__applicationCategory(::GlobalNamespace::PS4ApplicationCategory value);

  /// @brief Method get_buildVersion, addr 0x2368210, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* get_buildVersion();

  /// @brief Method get_latestBuildVersion, addr 0x2368218, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* get_latestBuildVersion();

  /// @brief Method get_parentalLockLevel, addr 0x2368220, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_parentalLockLevel();

  /// @brief Method get_npTitleFilenamePath, addr 0x2368228, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_npTitleFilenamePath();

  /// @brief Method get_defaultAgeRestriction, addr 0x2368230, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_defaultAgeRestriction();

  /// @brief Method get_applicationCategory, addr 0x2368238, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PS4ApplicationCategory get_applicationCategory();

  static inline ::GlobalNamespace::PS4PublisherSKUSettingsSO* New_ctor();

  /// @brief Method .ctor, addr 0x2368240, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS4PublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4PublisherSKUSettingsSO(PS4PublisherSKUSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4PublisherSKUSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4PublisherSKUSettingsSO(PS4PublisherSKUSettingsSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4PublisherSKUSettingsSO();

public:
  /// @brief Field _buildVersion, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* ____buildVersion;

  /// @brief Field _latestBuildVersion, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* ____latestBuildVersion;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4PublisherSKUSettingsSO, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____buildVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____latestBuildVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____parentalLockLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____npTitleFilenamePath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____defaultAgeRestriction) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4PublisherSKUSettingsSO, ____applicationCategory) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4PublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4PublisherSKUSettingsSO*, "", "PS4PublisherSKUSettingsSO");
NEED_NO_BOX(::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*, "", "PS4PublisherSKUSettingsSO/PS4BuildVersion");
