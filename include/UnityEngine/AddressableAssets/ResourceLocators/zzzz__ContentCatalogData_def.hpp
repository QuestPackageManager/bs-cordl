#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogData)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogDataEntry;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
struct ContentCatalogData_Bucket;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData_CompactLocation;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData___c;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData_CompactLocation;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData___c;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
struct ContentCatalogData_Bucket;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c);
MARK_VAL_T(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_Bucket);
// Dependencies
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/Bucket
struct CORDL_TYPE ContentCatalogData_Bucket {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogData_Bucket();

  // Ctor Parameters [CppParam { name: "dataOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "entries", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value:
  // None }]
  constexpr ContentCatalogData_Bucket(int32_t dataOffset, ::ArrayW<int32_t, ::Array<int32_t>*> entries) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16202 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field dataOffset, offset: 0x0, size: 0x4, def value: None
  int32_t dataOffset;

  /// @brief Field entries, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> entries;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_Bucket, dataOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_Bucket, entries) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_Bucket, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
// Dependencies System.Object, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/CompactLocation
class CORDL_TYPE ContentCatalogData_CompactLocation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data)) ::System::Object* Data;

  __declspec(property(get = get_Dependencies)) ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* Dependencies;

  __declspec(property(get = get_DependencyHashCode)) int32_t DependencyHashCode;

  __declspec(property(get = get_HasDependencies)) bool HasDependencies;

  __declspec(property(get = get_InternalId)) ::StringW InternalId;

  __declspec(property(get = get_PrimaryKey, put = set_PrimaryKey)) ::StringW PrimaryKey;

  __declspec(property(get = get_ProviderId)) ::StringW ProviderId;

  __declspec(property(get = get_ResourceType)) ::System::Type* ResourceType;

  /// @brief Field m_Data, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) ::System::Object* m_Data;

  /// @brief Field m_Dependency, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dependency, put = __cordl_internal_set_m_Dependency)) ::System::Object* m_Dependency;

  /// @brief Field m_DependencyHashCode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DependencyHashCode, put = __cordl_internal_set_m_DependencyHashCode)) int32_t m_DependencyHashCode;

  /// @brief Field m_HashCode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HashCode, put = __cordl_internal_set_m_HashCode)) int32_t m_HashCode;

  /// @brief Field m_InternalId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalId, put = __cordl_internal_set_m_InternalId)) ::StringW m_InternalId;

  /// @brief Field m_Locator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Locator, put = __cordl_internal_set_m_Locator)) ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* m_Locator;

  /// @brief Field m_PrimaryKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrimaryKey, put = __cordl_internal_set_m_PrimaryKey)) ::StringW m_PrimaryKey;

  /// @brief Field m_ProviderId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProviderId, put = __cordl_internal_set_m_ProviderId)) ::StringW m_ProviderId;

  /// @brief Field m_Type, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::System::Type* m_Type;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() noexcept;

  /// @brief Method Hash, addr 0x44fc498, size 0x54, virtual true, abstract: false, final true
  inline int32_t Hash(::System::Type* t);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation* New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locator,
                                                                                                                 ::StringW internalId, ::StringW providerId, ::System::Object* dependencyKey,
                                                                                                                 ::System::Object* data, int32_t depHash, ::StringW primaryKey, ::System::Type* type);

  /// @brief Method ToString, addr 0x44fc490, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Object* const& __cordl_internal_get_m_Data() const;

  constexpr ::System::Object*& __cordl_internal_get_m_Data();

  constexpr ::System::Object* const& __cordl_internal_get_m_Dependency() const;

  constexpr ::System::Object*& __cordl_internal_get_m_Dependency();

  constexpr int32_t const& __cordl_internal_get_m_DependencyHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_DependencyHashCode();

  constexpr int32_t const& __cordl_internal_get_m_HashCode() const;

  constexpr int32_t& __cordl_internal_get_m_HashCode();

  constexpr ::StringW const& __cordl_internal_get_m_InternalId() const;

  constexpr ::StringW& __cordl_internal_get_m_InternalId();

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* const& __cordl_internal_get_m_Locator() const;

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*& __cordl_internal_get_m_Locator();

  constexpr ::StringW const& __cordl_internal_get_m_PrimaryKey() const;

  constexpr ::StringW& __cordl_internal_get_m_PrimaryKey();

  constexpr ::StringW const& __cordl_internal_get_m_ProviderId() const;

  constexpr ::StringW& __cordl_internal_get_m_ProviderId();

  constexpr ::System::Type* const& __cordl_internal_get_m_Type() const;

  constexpr ::System::Type*& __cordl_internal_get_m_Type();

  constexpr void __cordl_internal_set_m_Data(::System::Object* value);

  constexpr void __cordl_internal_set_m_Dependency(::System::Object* value);

  constexpr void __cordl_internal_set_m_DependencyHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_HashCode(int32_t value);

  constexpr void __cordl_internal_set_m_InternalId(::StringW value);

  constexpr void __cordl_internal_set_m_Locator(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* value);

  constexpr void __cordl_internal_set_m_PrimaryKey(::StringW value);

  constexpr void __cordl_internal_set_m_ProviderId(::StringW value);

  constexpr void __cordl_internal_set_m_Type(::System::Type* value);

  /// @brief Method .ctor, addr 0x44fab50, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locator, ::StringW internalId, ::StringW providerId, ::System::Object* dependencyKey,
                    ::System::Object* data, int32_t depHash, ::StringW primaryKey, ::System::Type* type);

  /// @brief Method get_Data, addr 0x44fc470, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_Data();

  /// @brief Method get_Dependencies, addr 0x44fc3a4, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies();

  /// @brief Method get_DependencyHashCode, addr 0x44fc468, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_DependencyHashCode();

  /// @brief Method get_HasDependencies, addr 0x44fc458, size 0x10, virtual true, abstract: false, final true
  inline bool get_HasDependencies();

  /// @brief Method get_InternalId, addr 0x44fc394, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_InternalId();

  /// @brief Method get_PrimaryKey, addr 0x44fc478, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_PrimaryKey();

  /// @brief Method get_ProviderId, addr 0x44fc39c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ProviderId();

  /// @brief Method get_ResourceType, addr 0x44fc488, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_ResourceType();

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* i___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation() noexcept;

  /// @brief Method set_PrimaryKey, addr 0x44fc480, size 0x8, virtual false, abstract: false, final false
  inline void set_PrimaryKey(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogData_CompactLocation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData_CompactLocation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentCatalogData_CompactLocation(ContentCatalogData_CompactLocation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData_CompactLocation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentCatalogData_CompactLocation(ContentCatalogData_CompactLocation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16203 };

  /// @brief Field m_Locator, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* ___m_Locator;

  /// @brief Field m_InternalId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_InternalId;

  /// @brief Field m_ProviderId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_ProviderId;

  /// @brief Field m_Dependency, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___m_Dependency;

  /// @brief Field m_Data, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___m_Data;

  /// @brief Field m_HashCode, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_HashCode;

  /// @brief Field m_DependencyHashCode, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_DependencyHashCode;

  /// @brief Field m_PrimaryKey, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_PrimaryKey;

  /// @brief Field m_Type, offset: 0x48, size: 0x8, def value: None
  ::System::Type* ___m_Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, ___m_Locator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, ___m_InternalId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, ___m_ProviderId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, ___m_Dependency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, ___m_Data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, ___m_HashCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, ___m_DependencyHashCode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, ___m_PrimaryKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, ___m_Type) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation, 0x50>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
// Dependencies System.Object
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/<>c
class CORDL_TYPE ContentCatalogData___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c* __9;

  /// @brief Field <>9__45_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__45_0, put = setStaticF___9__45_0)) ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* __9__45_0;

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c* New_ctor();

  /// @brief Method <GetData>b__45_0, addr 0x44fc550, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW _GetData_b__45_0(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* d);

  /// @brief Method .ctor, addr 0x44fc548, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* getStaticF___9__45_0();

  static inline void setStaticF___9(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c* value);

  static inline void setStaticF___9__45_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogData___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentCatalogData___c(ContentCatalogData___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentCatalogData___c(ContentCatalogData___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16204 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
// Dependencies System.Object, UnityEngine.ResourceManagement.Util.ObjectInitializationData
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
class CORDL_TYPE ContentCatalogData : public ::System::Object {
public:
  // Declarations
  using Bucket = ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_Bucket;

  using CompactLocation = ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation;

  using __c = ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c;

  __declspec(property(get = get_InstanceProviderData, put = set_InstanceProviderData)) ::UnityEngine::ResourceManagement::Util::ObjectInitializationData InstanceProviderData;

  __declspec(property(get = get_InternalIds)) ::ArrayW<::StringW, ::Array<::StringW>*> InternalIds;

  __declspec(property(get = get_ProviderId, put = set_ProviderId)) ::StringW ProviderId;

  __declspec(property(get = get_ProviderIds)) ::ArrayW<::StringW, ::Array<::StringW>*> ProviderIds;

  __declspec(property(get = get_ResourceProviderData,
                      put = set_ResourceProviderData)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* ResourceProviderData;

  __declspec(property(get = get_SceneProviderData, put = set_SceneProviderData)) ::UnityEngine::ResourceManagement::Util::ObjectInitializationData SceneProviderData;

  /// @brief Field kMagic, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kMagic, put = setStaticF_kMagic)) int32_t kMagic;

  /// @brief Field localHash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localHash, put = __cordl_internal_set_localHash)) ::StringW localHash;

  /// @brief Field location, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location;

  /// @brief Field m_BucketDataString, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BucketDataString, put = __cordl_internal_set_m_BucketDataString)) ::StringW m_BucketDataString;

  /// @brief Field m_BuildResultHash, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BuildResultHash, put = __cordl_internal_set_m_BuildResultHash)) ::StringW m_BuildResultHash;

  /// @brief Field m_Entries, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Entries,
                      put = __cordl_internal_set_m_Entries)) ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* m_Entries;

  /// @brief Field m_EntryDataString, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntryDataString, put = __cordl_internal_set_m_EntryDataString)) ::StringW m_EntryDataString;

  /// @brief Field m_ExtraDataString, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtraDataString, put = __cordl_internal_set_m_ExtraDataString)) ::StringW m_ExtraDataString;

  /// @brief Field m_InstanceProviderData, offset 0x30, size 0x30
  __declspec(property(get = __cordl_internal_get_m_InstanceProviderData,
                      put = __cordl_internal_set_m_InstanceProviderData)) ::UnityEngine::ResourceManagement::Util::ObjectInitializationData m_InstanceProviderData;

  /// @brief Field m_InternalIdPrefixes, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalIdPrefixes, put = __cordl_internal_set_m_InternalIdPrefixes)) ::ArrayW<::StringW, ::Array<::StringW>*> m_InternalIdPrefixes;

  /// @brief Field m_InternalIds, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalIds, put = __cordl_internal_set_m_InternalIds)) ::ArrayW<::StringW, ::Array<::StringW>*> m_InternalIds;

  /// @brief Field m_KeyDataString, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyDataString, put = __cordl_internal_set_m_KeyDataString)) ::StringW m_KeyDataString;

  /// @brief Field m_LocatorId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocatorId, put = __cordl_internal_set_m_LocatorId)) ::StringW m_LocatorId;

  /// @brief Field m_ProviderIds, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProviderIds, put = __cordl_internal_set_m_ProviderIds)) ::ArrayW<::StringW, ::Array<::StringW>*> m_ProviderIds;

  /// @brief Field m_ResourceProviderData, offset 0x90, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ResourceProviderData,
      put = __cordl_internal_set_m_ResourceProviderData)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* m_ResourceProviderData;

  /// @brief Field m_SceneProviderData, offset 0x60, size 0x30
  __declspec(property(get = __cordl_internal_get_m_SceneProviderData,
                      put = __cordl_internal_set_m_SceneProviderData)) ::UnityEngine::ResourceManagement::Util::ObjectInitializationData m_SceneProviderData;

  /// @brief Field m_resourceTypes, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_resourceTypes,
                      put = __cordl_internal_set_m_resourceTypes)) ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType, ::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>
      m_resourceTypes;

  /// @brief Method CleanData, addr 0x44f88d4, size 0x5c, virtual false, abstract: false, final false
  inline void CleanData();

  /// @brief Method CreateCustomLocator, addr 0x44f3404, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateCustomLocator(::StringW overrideId, ::StringW providerSuffix);

  /// @brief Method CreateLocator, addr 0x44fa2b4, size 0x73c, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateLocator(::StringW providerSuffix);

  /// @brief Method ExpandInternalId, addr 0x44faa94, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW ExpandInternalId(::ArrayW<::StringW, ::Array<::StringW>*> internalIdPrefixes, ::StringW v);

  /// @brief Method GetData, addr 0x44facec, size 0xd6c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* GetData();

  /// @brief Method LoadFromFile, addr 0x44fa240, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* LoadFromFile(::StringW path, int32_t cacheSize);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* New_ctor();

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* New_ctor(::StringW id);

  /// @brief Method SaveToFile, addr 0x44fa290, size 0x24, virtual false, abstract: false, final false
  inline void SaveToFile(::StringW path);

  constexpr ::StringW const& __cordl_internal_get_localHash() const;

  constexpr ::StringW& __cordl_internal_get_localHash();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& __cordl_internal_get_location() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_location();

  constexpr ::StringW const& __cordl_internal_get_m_BucketDataString() const;

  constexpr ::StringW& __cordl_internal_get_m_BucketDataString();

  constexpr ::StringW const& __cordl_internal_get_m_BuildResultHash() const;

  constexpr ::StringW& __cordl_internal_get_m_BuildResultHash();

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* const& __cordl_internal_get_m_Entries() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*& __cordl_internal_get_m_Entries();

  constexpr ::StringW const& __cordl_internal_get_m_EntryDataString() const;

  constexpr ::StringW& __cordl_internal_get_m_EntryDataString();

  constexpr ::StringW const& __cordl_internal_get_m_ExtraDataString() const;

  constexpr ::StringW& __cordl_internal_get_m_ExtraDataString();

  constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const& __cordl_internal_get_m_InstanceProviderData() const;

  constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& __cordl_internal_get_m_InstanceProviderData();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_InternalIdPrefixes() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_InternalIdPrefixes();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_InternalIds() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_InternalIds();

  constexpr ::StringW const& __cordl_internal_get_m_KeyDataString() const;

  constexpr ::StringW& __cordl_internal_get_m_KeyDataString();

  constexpr ::StringW const& __cordl_internal_get_m_LocatorId() const;

  constexpr ::StringW& __cordl_internal_get_m_LocatorId();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_ProviderIds() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_ProviderIds();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* const& __cordl_internal_get_m_ResourceProviderData() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*& __cordl_internal_get_m_ResourceProviderData();

  constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const& __cordl_internal_get_m_SceneProviderData() const;

  constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& __cordl_internal_get_m_SceneProviderData();

  constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType, ::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*> const& __cordl_internal_get_m_resourceTypes() const;

  constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType, ::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>& __cordl_internal_get_m_resourceTypes();

  constexpr void __cordl_internal_set_localHash(::StringW value);

  constexpr void __cordl_internal_set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr void __cordl_internal_set_m_BucketDataString(::StringW value);

  constexpr void __cordl_internal_set_m_BuildResultHash(::StringW value);

  constexpr void __cordl_internal_set_m_Entries(::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* value);

  constexpr void __cordl_internal_set_m_EntryDataString(::StringW value);

  constexpr void __cordl_internal_set_m_ExtraDataString(::StringW value);

  constexpr void __cordl_internal_set_m_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value);

  constexpr void __cordl_internal_set_m_InternalIdPrefixes(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_InternalIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_KeyDataString(::StringW value);

  constexpr void __cordl_internal_set_m_LocatorId(::StringW value);

  constexpr void __cordl_internal_set_m_ProviderIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value);

  constexpr void __cordl_internal_set_m_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value);

  constexpr void __cordl_internal_set_m_resourceTypes(::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType, ::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*> value);

  /// @brief Method .ctor, addr 0x44fa1b4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44fa12c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  static inline int32_t getStaticF_kMagic();

  /// @brief Method get_InstanceProviderData, addr 0x44fa0cc, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_InstanceProviderData();

  /// @brief Method get_InternalIds, addr 0x44fa238, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_InternalIds();

  /// @brief Method get_ProviderId, addr 0x44fa0bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProviderId();

  /// @brief Method get_ProviderIds, addr 0x44fa230, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ProviderIds();

  /// @brief Method get_ResourceProviderData, addr 0x44fa11c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* get_ResourceProviderData();

  /// @brief Method get_SceneProviderData, addr 0x44fa0f4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_SceneProviderData();

  static inline void setStaticF_kMagic(int32_t value);

  /// @brief Method set_InstanceProviderData, addr 0x44fa0e0, size 0x14, virtual false, abstract: false, final false
  inline void set_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value);

  /// @brief Method set_ProviderId, addr 0x44fa0c4, size 0x8, virtual false, abstract: false, final false
  inline void set_ProviderId(::StringW value);

  /// @brief Method set_ResourceProviderData, addr 0x44fa124, size 0x8, virtual false, abstract: false, final false
  inline void set_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value);

  /// @brief Method set_SceneProviderData, addr 0x44fa108, size 0x14, virtual false, abstract: false, final false
  inline void set_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentCatalogData(ContentCatalogData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentCatalogData(ContentCatalogData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16205 };

  /// @brief Field kBytesPerInt32 offset 0xffffffff size 0x4
  static constexpr int32_t kBytesPerInt32{ static_cast<int32_t>(0x4) };

  /// @brief Field kVersion offset 0xffffffff size 0x4
  static constexpr int32_t kVersion{ static_cast<int32_t>(0x1) };

  /// @brief Field k_EntryDataItemPerEntry offset 0xffffffff size 0x4
  static constexpr int32_t k_EntryDataItemPerEntry{ static_cast<int32_t>(0x7) };

  /// @brief Field localHash, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localHash;

  /// @brief Field location, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___location;

  /// @brief Field m_LocatorId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_LocatorId;

  /// @brief Field m_BuildResultHash, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_BuildResultHash;

  /// @brief Field m_InstanceProviderData, offset: 0x30, size: 0x30, def value: None
  ::UnityEngine::ResourceManagement::Util::ObjectInitializationData ___m_InstanceProviderData;

  /// @brief Field m_SceneProviderData, offset: 0x60, size: 0x30, def value: None
  ::UnityEngine::ResourceManagement::Util::ObjectInitializationData ___m_SceneProviderData;

  /// @brief Field m_ResourceProviderData, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* ___m_ResourceProviderData;

  /// @brief Field m_Entries, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* ___m_Entries;

  /// @brief Field m_ProviderIds, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_ProviderIds;

  /// @brief Field m_InternalIds, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_InternalIds;

  /// @brief Field m_KeyDataString, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___m_KeyDataString;

  /// @brief Field m_BucketDataString, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___m_BucketDataString;

  /// @brief Field m_EntryDataString, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___m_EntryDataString;

  /// @brief Field m_ExtraDataString, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___m_ExtraDataString;

  /// @brief Field m_resourceTypes, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType, ::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*> ___m_resourceTypes;

  /// @brief Field m_InternalIdPrefixes, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_InternalIdPrefixes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___localHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___location) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_LocatorId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_BuildResultHash) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_InstanceProviderData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_SceneProviderData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_ResourceProviderData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_Entries) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_ProviderIds) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_InternalIds) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_KeyDataString) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_BucketDataString) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_EntryDataString) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_ExtraDataString) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_resourceTypes) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_InternalIdPrefixes) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_CompactLocation*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/CompactLocation");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData___c*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData_Bucket, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/Bucket");
