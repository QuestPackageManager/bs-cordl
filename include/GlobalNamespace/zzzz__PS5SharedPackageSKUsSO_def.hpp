#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PS5SharedPackageSKUsSO)
namespace GlobalNamespace {
class PS5PublisherSKUSettingsSO;
}
namespace GlobalNamespace {
struct __PS5SharedPackageSKUsSO__BuildType;
}
namespace GlobalNamespace {
class __PS5SharedPackageSKUsSO__PS5BuildVersion;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PS5SharedPackageSKUsSO__BuildType;
}
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO;
}
namespace GlobalNamespace {
class __PS5SharedPackageSKUsSO__PS5BuildVersion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType);
MARK_REF_PTR_T(::GlobalNamespace::PS5SharedPackageSKUsSO);
MARK_REF_PTR_T(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion);
// Type: ::BuildType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PS5SharedPackageSKUsSO::BuildType
struct CORDL_TYPE __PS5SharedPackageSKUsSO__BuildType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PS5SharedPackageSKUsSO__BuildType_Unwrapped
  enum struct ____PS5SharedPackageSKUsSO__BuildType_Unwrapped : int32_t {
    __E_Application = static_cast<int32_t>(0x0),
    __E_RemasterPatch = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PS5SharedPackageSKUsSO__BuildType_Unwrapped() const noexcept {
    return static_cast<____PS5SharedPackageSKUsSO__BuildType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PS5SharedPackageSKUsSO__BuildType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PS5SharedPackageSKUsSO__BuildType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Application value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType const Application;

  /// @brief Field RemasterPatch value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType const RemasterPatch;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PS5BuildVersion
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS5SharedPackageSKUsSO::PS5BuildVersion*
class CORDL_TYPE __PS5SharedPackageSKUsSO__PS5BuildVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field _contentVersion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__contentVersion, put = __cordl_internal_set__contentVersion))::StringW _contentVersion;

  /// @brief Field _masterVersion, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__masterVersion, put = __cordl_internal_set__masterVersion))::StringW _masterVersion;

  __declspec(property(get = get_contentVersion))::StringW contentVersion;

  __declspec(property(get = get_masterVersion))::StringW masterVersion;

  static inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__contentVersion() const;

  constexpr ::StringW& __cordl_internal_get__contentVersion();

  constexpr ::StringW const& __cordl_internal_get__masterVersion() const;

  constexpr ::StringW& __cordl_internal_get__masterVersion();

  constexpr void __cordl_internal_set__contentVersion(::StringW value);

  constexpr void __cordl_internal_set__masterVersion(::StringW value);

  /// @brief Method .ctor, addr 0x13eb518, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_contentVersion, addr 0x13eb510, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_contentVersion();

  /// @brief Method get_masterVersion, addr 0x13eb508, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_masterVersion();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PS5SharedPackageSKUsSO__PS5BuildVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PS5SharedPackageSKUsSO__PS5BuildVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PS5SharedPackageSKUsSO__PS5BuildVersion(__PS5SharedPackageSKUsSO__PS5BuildVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PS5SharedPackageSKUsSO__PS5BuildVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PS5SharedPackageSKUsSO__PS5BuildVersion(__PS5SharedPackageSKUsSO__PS5BuildVersion const&) = delete;

  /// @brief Field _masterVersion, offset: 0x10, size: 0x8, def value: None
  ::StringW ____masterVersion;

  /// @brief Field _contentVersion, offset: 0x18, size: 0x8, def value: None
  ::StringW ____contentVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion, ____masterVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion, ____contentVersion) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PS5SharedPackageSKUsSO
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS5SharedPackageSKUsSO*
class CORDL_TYPE PS5SharedPackageSKUsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using BuildType = ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType;

  using PS5BuildVersion = ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion;

  /// @brief Field _availableSKUs, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__availableSKUs,
      put = __cordl_internal_set__availableSKUs))::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> _availableSKUs;

  /// @brief Field _buildType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__buildType, put = __cordl_internal_set__buildType))::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType _buildType;

  /// @brief Field _buildVersion, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buildVersion, put = __cordl_internal_set__buildVersion))::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* _buildVersion;

  /// @brief Field _conceptId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__conceptId, put = __cordl_internal_set__conceptId))::StringW _conceptId;

  /// @brief Field _latestBuildVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__latestBuildVersion, put = __cordl_internal_set__latestBuildVersion))::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* _latestBuildVersion;

  __declspec(property(get = get_availableSKUs))::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> availableSKUs;

  __declspec(property(get = get_buildType))::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType buildType;

  __declspec(property(get = get_buildVersion))::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* buildVersion;

  __declspec(property(get = get_conceptId))::StringW conceptId;

  __declspec(property(get = get_latestBuildVersion))::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* latestBuildVersion;

  /// @brief Method GetPrimarySKU, addr 0x13eb4dc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO> GetPrimarySKU();

  static inline ::GlobalNamespace::PS5SharedPackageSKUsSO* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> const& __cordl_internal_get__availableSKUs() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*>& __cordl_internal_get__availableSKUs();

  constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType const& __cordl_internal_get__buildType() const;

  constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType& __cordl_internal_get__buildType();

  constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*& __cordl_internal_get__buildVersion();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*> const& __cordl_internal_get__buildVersion() const;

  constexpr ::StringW const& __cordl_internal_get__conceptId() const;

  constexpr ::StringW& __cordl_internal_get__conceptId();

  constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*& __cordl_internal_get__latestBuildVersion();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*> const& __cordl_internal_get__latestBuildVersion() const;

  constexpr void __cordl_internal_set__availableSKUs(::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> value);

  constexpr void __cordl_internal_set__buildType(::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType value);

  constexpr void __cordl_internal_set__buildVersion(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* value);

  constexpr void __cordl_internal_set__conceptId(::StringW value);

  constexpr void __cordl_internal_set__latestBuildVersion(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* value);

  /// @brief Method .ctor, addr 0x13eb500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_availableSKUs, addr 0x13eb4b4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> get_availableSKUs();

  /// @brief Method get_buildType, addr 0x13eb4c4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType get_buildType();

  /// @brief Method get_buildVersion, addr 0x13eb4cc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* get_buildVersion();

  /// @brief Method get_conceptId, addr 0x13eb4bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_conceptId();

  /// @brief Method get_latestBuildVersion, addr 0x13eb4d4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* get_latestBuildVersion();

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

  /// @brief Field _availableSKUs, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> ____availableSKUs;

  /// @brief Field _conceptId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____conceptId;

  /// @brief Field _buildType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType ____buildType;

  /// @brief Field _buildVersion, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* ____buildVersion;

  /// @brief Field _latestBuildVersion, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* ____latestBuildVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5SharedPackageSKUsSO, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____availableSKUs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____conceptId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____buildType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____buildVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5SharedPackageSKUsSO, ____latestBuildVersion) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, "", "PS5SharedPackageSKUsSO/BuildType");
NEED_NO_BOX(::GlobalNamespace::PS5SharedPackageSKUsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5SharedPackageSKUsSO*, "", "PS5SharedPackageSKUsSO");
NEED_NO_BOX(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, "", "PS5SharedPackageSKUsSO/PS5BuildVersion");
