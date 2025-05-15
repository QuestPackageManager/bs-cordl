#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5SharedPackageSKUsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PS5SharedPackageSKUsSO)
namespace GlobalNamespace {
class PS5PublisherSKUSettingsSO;
}
namespace GlobalNamespace {
struct PS5SharedPackageSKUsSO_BuildType;
}
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO_PS5BuildVersion;
}
namespace GlobalNamespace {
class SonyContentVersion;
}
namespace GlobalNamespace {
class SonyVersion;
}
// Forward declare root types
namespace GlobalNamespace {
struct PS5SharedPackageSKUsSO_BuildType;
}
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO;
}
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO_PS5BuildVersion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType);
MARK_REF_PTR_T(::GlobalNamespace::PS5SharedPackageSKUsSO);
MARK_REF_PTR_T(::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PS5SharedPackageSKUsSO/BuildType
struct CORDL_TYPE PS5SharedPackageSKUsSO_BuildType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PS5SharedPackageSKUsSO_BuildType_Unwrapped
  enum struct __PS5SharedPackageSKUsSO_BuildType_Unwrapped : int32_t {
    __E_Application = static_cast<int32_t>(0x0),
    __E_RemasterPatch = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PS5SharedPackageSKUsSO_BuildType_Unwrapped() const noexcept {
    return static_cast<__PS5SharedPackageSKUsSO_BuildType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5SharedPackageSKUsSO_BuildType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PS5SharedPackageSKUsSO_BuildType(int32_t value__) noexcept;

  /// @brief Field Application value: I32(0)
  static ::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType const Application;

  /// @brief Field RemasterPatch value: I32(1)
  static ::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType const RemasterPatch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13171 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS5SharedPackageSKUsSO/PS5BuildVersion
class CORDL_TYPE PS5SharedPackageSKUsSO_PS5BuildVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field _contentVersion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__contentVersion, put = __cordl_internal_set__contentVersion)) ::GlobalNamespace::SonyContentVersion* _contentVersion;

  /// @brief Field _masterVersion, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__masterVersion, put = __cordl_internal_set__masterVersion)) ::GlobalNamespace::SonyVersion* _masterVersion;

  __declspec(property(get = get_contentVersion)) ::GlobalNamespace::SonyContentVersion* contentVersion;

  __declspec(property(get = get_masterVersion)) ::GlobalNamespace::SonyVersion* masterVersion;

  /// @brief Method CopyValueFrom, addr 0x26eb97c, size 0x58, virtual false, abstract: false, final false
  inline void CopyValueFrom(::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* newVersion);

  /// @brief Method IncreaseContentVersion, addr 0x26eb9f8, size 0x38, virtual false, abstract: false, final false
  inline void IncreaseContentVersion();

  static inline ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* New_ctor();

  constexpr ::GlobalNamespace::SonyContentVersion* const& __cordl_internal_get__contentVersion() const;

  constexpr ::GlobalNamespace::SonyContentVersion*& __cordl_internal_get__contentVersion();

  constexpr ::GlobalNamespace::SonyVersion* const& __cordl_internal_get__masterVersion() const;

  constexpr ::GlobalNamespace::SonyVersion*& __cordl_internal_get__masterVersion();

  constexpr void __cordl_internal_set__contentVersion(::GlobalNamespace::SonyContentVersion* value);

  constexpr void __cordl_internal_set__masterVersion(::GlobalNamespace::SonyVersion* value);

  /// @brief Method .ctor, addr 0x26eba54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_contentVersion, addr 0x26eb974, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyContentVersion* get_contentVersion();

  /// @brief Method get_masterVersion, addr 0x26eb96c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyVersion* get_masterVersion();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5SharedPackageSKUsSO_PS5BuildVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS5SharedPackageSKUsSO_PS5BuildVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5SharedPackageSKUsSO_PS5BuildVersion(PS5SharedPackageSKUsSO_PS5BuildVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5SharedPackageSKUsSO_PS5BuildVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5SharedPackageSKUsSO_PS5BuildVersion(PS5SharedPackageSKUsSO_PS5BuildVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13172 };

  /// @brief Field _masterVersion, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SonyVersion* ____masterVersion;

  /// @brief Field _contentVersion, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SonyContentVersion* ____contentVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion, ____masterVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion, ____contentVersion) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PS5SharedPackageSKUsSO::BuildType, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS5SharedPackageSKUsSO
class CORDL_TYPE PS5SharedPackageSKUsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using BuildType = ::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType;

  using PS5BuildVersion = ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion;

  /// @brief Field _availableSKUs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__availableSKUs,
                      put = __cordl_internal_set__availableSKUs)) ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*>
      _availableSKUs;

  /// @brief Field _buildType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__buildType, put = __cordl_internal_set__buildType)) ::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType _buildType;

  /// @brief Field _buildVersion, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buildVersion, put = __cordl_internal_set__buildVersion)) ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* _buildVersion;

  /// @brief Field _conceptId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__conceptId, put = __cordl_internal_set__conceptId)) ::StringW _conceptId;

  /// @brief Field _latestBuildVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__latestBuildVersion, put = __cordl_internal_set__latestBuildVersion)) ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* _latestBuildVersion;

  __declspec(property(get = get_availableSKUs)) ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> availableSKUs;

  __declspec(property(get = get_buildType)) ::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType buildType;

  __declspec(property(get = get_buildVersion)) ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* buildVersion;

  __declspec(property(get = get_conceptId)) ::StringW conceptId;

  __declspec(property(get = get_latestBuildVersion)) ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* latestBuildVersion;

  /// @brief Method GetPrimarySKU, addr 0x26eb940, size 0x24, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO> GetPrimarySKU();

  static inline ::GlobalNamespace::PS5SharedPackageSKUsSO* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> const& __cordl_internal_get__availableSKUs() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*>& __cordl_internal_get__availableSKUs();

  constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType const& __cordl_internal_get__buildType() const;

  constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType& __cordl_internal_get__buildType();

  constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* const& __cordl_internal_get__buildVersion() const;

  constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion*& __cordl_internal_get__buildVersion();

  constexpr ::StringW const& __cordl_internal_get__conceptId() const;

  constexpr ::StringW& __cordl_internal_get__conceptId();

  constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* const& __cordl_internal_get__latestBuildVersion() const;

  constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion*& __cordl_internal_get__latestBuildVersion();

  constexpr void __cordl_internal_set__availableSKUs(::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> value);

  constexpr void __cordl_internal_set__buildType(::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType value);

  constexpr void __cordl_internal_set__buildVersion(::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* value);

  constexpr void __cordl_internal_set__conceptId(::StringW value);

  constexpr void __cordl_internal_set__latestBuildVersion(::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* value);

  /// @brief Method .ctor, addr 0x26eb964, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_availableSKUs, addr 0x26eb918, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> get_availableSKUs();

  /// @brief Method get_buildType, addr 0x26eb928, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType get_buildType();

  /// @brief Method get_buildVersion, addr 0x26eb930, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* get_buildVersion();

  /// @brief Method get_conceptId, addr 0x26eb920, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_conceptId();

  /// @brief Method get_latestBuildVersion, addr 0x26eb938, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* get_latestBuildVersion();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5SharedPackageSKUsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS5SharedPackageSKUsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5SharedPackageSKUsSO(PS5SharedPackageSKUsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5SharedPackageSKUsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5SharedPackageSKUsSO(PS5SharedPackageSKUsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13173 };

  /// @brief Field _availableSKUs, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> ____availableSKUs;

  /// @brief Field _conceptId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____conceptId;

  /// @brief Field _buildType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType ____buildType;

  /// @brief Field _buildVersion, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* ____buildVersion;

  /// @brief Field _latestBuildVersion, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion* ____latestBuildVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____availableSKUs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____conceptId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____buildType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____buildVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____latestBuildVersion) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5SharedPackageSKUsSO, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5SharedPackageSKUsSO_BuildType, "", "PS5SharedPackageSKUsSO/BuildType");
NEED_NO_BOX(::GlobalNamespace::PS5SharedPackageSKUsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5SharedPackageSKUsSO*, "", "PS5SharedPackageSKUsSO");
NEED_NO_BOX(::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5SharedPackageSKUsSO_PS5BuildVersion*, "", "PS5SharedPackageSKUsSO/PS5BuildVersion");
