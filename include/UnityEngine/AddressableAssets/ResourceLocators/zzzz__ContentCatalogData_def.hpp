#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
struct __ContentCatalogData__Bucket;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class __ContentCatalogData__CompactLocation;
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
class __ContentCatalogData__CompactLocation;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
struct __ContentCatalogData__Bucket;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation);
MARK_VAL_T(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket);
// Type: ::Bucket
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: true
// CS Name: ::ContentCatalogData::Bucket
struct CORDL_TYPE __ContentCatalogData__Bucket {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentCatalogData__Bucket();

  // Ctor Parameters [CppParam { name: "dataOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "entries", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value:
  // None }]
  constexpr __ContentCatalogData__Bucket(int32_t dataOffset, ::ArrayW<int32_t, ::Array<int32_t>*> entries) noexcept;

  /// @brief Field dataOffset, offset: 0x0, size: 0x4, def value: None
  int32_t dataOffset;

  /// @brief Field entries, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> entries;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket, dataOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket, entries) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
// Type: ::CompactLocation
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// CS Name: ::ContentCatalogData::CompactLocation*
class CORDL_TYPE __ContentCatalogData__CompactLocation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data))::System::Object* Data;

  __declspec(property(get = get_Dependencies))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* Dependencies;

  __declspec(property(get = get_DependencyHashCode)) int32_t DependencyHashCode;

  __declspec(property(get = get_HasDependencies)) bool HasDependencies;

  __declspec(property(get = get_InternalId))::StringW InternalId;

  __declspec(property(get = get_PrimaryKey, put = set_PrimaryKey))::StringW PrimaryKey;

  __declspec(property(get = get_ProviderId))::StringW ProviderId;

  __declspec(property(get = get_ResourceType))::System::Type* ResourceType;

  /// @brief Field m_Data, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data))::System::Object* m_Data;

  /// @brief Field m_Dependency, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dependency, put = __cordl_internal_set_m_Dependency))::System::Object* m_Dependency;

  /// @brief Field m_DependencyHashCode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DependencyHashCode, put = __cordl_internal_set_m_DependencyHashCode)) int32_t m_DependencyHashCode;

  /// @brief Field m_HashCode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HashCode, put = __cordl_internal_set_m_HashCode)) int32_t m_HashCode;

  /// @brief Field m_InternalId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalId, put = __cordl_internal_set_m_InternalId))::StringW m_InternalId;

  /// @brief Field m_Locator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Locator, put = __cordl_internal_set_m_Locator))::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* m_Locator;

  /// @brief Field m_PrimaryKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrimaryKey, put = __cordl_internal_set_m_PrimaryKey))::StringW m_PrimaryKey;

  /// @brief Field m_ProviderId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProviderId, put = __cordl_internal_set_m_ProviderId))::StringW m_ProviderId;

  /// @brief Field m_Type, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type))::System::Type* m_Type;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() noexcept;

  /// @brief Method Hash, addr 0x2b78ab8, size 0x54, virtual true, abstract: false, final true
  inline int32_t Hash(::System::Type* t);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation* New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locator,
                                                                                                                    ::StringW internalId, ::StringW providerId, ::System::Object* dependencyKey,
                                                                                                                    ::System::Object* data, int32_t depHash, ::StringW primaryKey,
                                                                                                                    ::System::Type* type);

  /// @brief Method ToString, addr 0x2b78ab0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Object*& __cordl_internal_get_m_Data();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_Data() const;

  constexpr ::System::Object*& __cordl_internal_get_m_Dependency();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_Dependency() const;

  constexpr int32_t const& __cordl_internal_get_m_DependencyHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_DependencyHashCode();

  constexpr int32_t const& __cordl_internal_get_m_HashCode() const;

  constexpr int32_t& __cordl_internal_get_m_HashCode();

  constexpr ::StringW const& __cordl_internal_get_m_InternalId() const;

  constexpr ::StringW& __cordl_internal_get_m_InternalId();

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*& __cordl_internal_get_m_Locator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*> const& __cordl_internal_get_m_Locator() const;

  constexpr ::StringW const& __cordl_internal_get_m_PrimaryKey() const;

  constexpr ::StringW& __cordl_internal_get_m_PrimaryKey();

  constexpr ::StringW const& __cordl_internal_get_m_ProviderId() const;

  constexpr ::StringW& __cordl_internal_get_m_ProviderId();

  constexpr ::System::Type*& __cordl_internal_get_m_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_Type() const;

  constexpr void __cordl_internal_set_m_Data(::System::Object* value);

  constexpr void __cordl_internal_set_m_Dependency(::System::Object* value);

  constexpr void __cordl_internal_set_m_DependencyHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_HashCode(int32_t value);

  constexpr void __cordl_internal_set_m_InternalId(::StringW value);

  constexpr void __cordl_internal_set_m_Locator(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* value);

  constexpr void __cordl_internal_set_m_PrimaryKey(::StringW value);

  constexpr void __cordl_internal_set_m_ProviderId(::StringW value);

  constexpr void __cordl_internal_set_m_Type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2b77f30, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locator, ::StringW internalId, ::StringW providerId, ::System::Object* dependencyKey,
                    ::System::Object* data, int32_t depHash, ::StringW primaryKey, ::System::Type* type);

  /// @brief Method get_Data, addr 0x2b78a90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_Data();

  /// @brief Method get_Dependencies, addr 0x2b78158, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies();

  /// @brief Method get_DependencyHashCode, addr 0x2b78a88, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_DependencyHashCode();

  /// @brief Method get_HasDependencies, addr 0x2b78a78, size 0x10, virtual true, abstract: false, final true
  inline bool get_HasDependencies();

  /// @brief Method get_InternalId, addr 0x2b78148, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_InternalId();

  /// @brief Method get_PrimaryKey, addr 0x2b78a98, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_PrimaryKey();

  /// @brief Method get_ProviderId, addr 0x2b78150, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ProviderId();

  /// @brief Method get_ResourceType, addr 0x2b78aa8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_ResourceType();

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* i___UnityEngine__ResourceManagement__ResourceLocations__IResourceLocation() noexcept;

  /// @brief Method set_PrimaryKey, addr 0x2b78aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_PrimaryKey(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentCatalogData__CompactLocation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogData__CompactLocation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContentCatalogData__CompactLocation(__ContentCatalogData__CompactLocation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogData__CompactLocation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContentCatalogData__CompactLocation(__ContentCatalogData__CompactLocation const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, ___m_Locator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, ___m_InternalId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, ___m_ProviderId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, ___m_Dependency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, ___m_Data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, ___m_HashCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, ___m_DependencyHashCode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, ___m_PrimaryKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, ___m_Type) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
// Type: UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogData
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogData*
class CORDL_TYPE ContentCatalogData : public ::System::Object {
public:
  // Declarations
  using Bucket = ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket;

  using CompactLocation = ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation;

  __declspec(property(get = get_InstanceProviderData, put = set_InstanceProviderData))::UnityEngine::ResourceManagement::Util::ObjectInitializationData InstanceProviderData;

  __declspec(property(get = get_InternalIds))::ArrayW<::StringW, ::Array<::StringW>*> InternalIds;

  __declspec(property(get = get_ProviderId, put = set_ProviderId))::StringW ProviderId;

  __declspec(property(get = get_ProviderIds))::ArrayW<::StringW, ::Array<::StringW>*> ProviderIds;

  __declspec(property(get = get_ResourceProviderData,
                      put = set_ResourceProviderData))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* ResourceProviderData;

  __declspec(property(get = get_SceneProviderData, put = set_SceneProviderData))::UnityEngine::ResourceManagement::Util::ObjectInitializationData SceneProviderData;

  /// @brief Field localHash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localHash, put = __cordl_internal_set_localHash))::StringW localHash;

  /// @brief Field location, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location;

  /// @brief Field m_BucketDataString, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BucketDataString, put = __cordl_internal_set_m_BucketDataString))::StringW m_BucketDataString;

  /// @brief Field m_EntryDataString, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntryDataString, put = __cordl_internal_set_m_EntryDataString))::StringW m_EntryDataString;

  /// @brief Field m_ExtraDataString, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtraDataString, put = __cordl_internal_set_m_ExtraDataString))::StringW m_ExtraDataString;

  /// @brief Field m_InstanceProviderData, offset 0x28, size 0x30
  __declspec(property(get = __cordl_internal_get_m_InstanceProviderData,
                      put = __cordl_internal_set_m_InstanceProviderData))::UnityEngine::ResourceManagement::Util::ObjectInitializationData m_InstanceProviderData;

  /// @brief Field m_InternalIdPrefixes, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalIdPrefixes, put = __cordl_internal_set_m_InternalIdPrefixes))::ArrayW<::StringW, ::Array<::StringW>*> m_InternalIdPrefixes;

  /// @brief Field m_InternalIds, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalIds, put = __cordl_internal_set_m_InternalIds))::ArrayW<::StringW, ::Array<::StringW>*> m_InternalIds;

  /// @brief Field m_KeyDataString, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyDataString, put = __cordl_internal_set_m_KeyDataString))::StringW m_KeyDataString;

  /// @brief Field m_LocatorId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocatorId, put = __cordl_internal_set_m_LocatorId))::StringW m_LocatorId;

  /// @brief Field m_ProviderIds, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProviderIds, put = __cordl_internal_set_m_ProviderIds))::ArrayW<::StringW, ::Array<::StringW>*> m_ProviderIds;

  /// @brief Field m_ResourceProviderData, offset 0x88, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_ResourceProviderData,
               put = __cordl_internal_set_m_ResourceProviderData))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* m_ResourceProviderData;

  /// @brief Field m_SceneProviderData, offset 0x58, size 0x30
  __declspec(property(get = __cordl_internal_get_m_SceneProviderData,
                      put = __cordl_internal_set_m_SceneProviderData))::UnityEngine::ResourceManagement::Util::ObjectInitializationData m_SceneProviderData;

  /// @brief Field m_resourceTypes, offset 0xc0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_resourceTypes,
      put = __cordl_internal_set_m_resourceTypes))::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType, ::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*> m_resourceTypes;

  /// @brief Method CleanData, addr 0x2b75e84, size 0x58, virtual false, abstract: false, final false
  inline void CleanData();

  /// @brief Method CreateCustomLocator, addr 0x2b70abc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateCustomLocator(::StringW overrideId, ::StringW providerSuffix);

  /// @brief Method CreateLocator, addr 0x2b77650, size 0x780, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateLocator(::StringW providerSuffix);

  /// @brief Method ExpandInternalId, addr 0x2b77e70, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW ExpandInternalId(::ArrayW<::StringW, ::Array<::StringW>*> internalIdPrefixes, ::StringW v);

  static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_localHash() const;

  constexpr ::StringW& __cordl_internal_get_localHash();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_location();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get_location() const;

  constexpr ::StringW const& __cordl_internal_get_m_BucketDataString() const;

  constexpr ::StringW& __cordl_internal_get_m_BucketDataString();

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

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*& __cordl_internal_get_m_ResourceProviderData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*> const&
  __cordl_internal_get_m_ResourceProviderData() const;

  constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const& __cordl_internal_get_m_SceneProviderData() const;

  constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& __cordl_internal_get_m_SceneProviderData();

  constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType, ::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*> const& __cordl_internal_get_m_resourceTypes() const;

  constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType, ::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>& __cordl_internal_get_m_resourceTypes();

  constexpr void __cordl_internal_set_localHash(::StringW value);

  constexpr void __cordl_internal_set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr void __cordl_internal_set_m_BucketDataString(::StringW value);

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

  /// @brief Method .ctor, addr 0x2b780cc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InstanceProviderData, addr 0x2b775d0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_InstanceProviderData();

  /// @brief Method get_InternalIds, addr 0x2b77648, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_InternalIds();

  /// @brief Method get_ProviderId, addr 0x2b775c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProviderId();

  /// @brief Method get_ProviderIds, addr 0x2b77640, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ProviderIds();

  /// @brief Method get_ResourceProviderData, addr 0x2b77630, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* get_ResourceProviderData();

  /// @brief Method get_SceneProviderData, addr 0x2b77600, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_SceneProviderData();

  /// @brief Method set_InstanceProviderData, addr 0x2b775e8, size 0x18, virtual false, abstract: false, final false
  inline void set_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value);

  /// @brief Method set_ProviderId, addr 0x2b775c8, size 0x8, virtual false, abstract: false, final false
  inline void set_ProviderId(::StringW value);

  /// @brief Method set_ResourceProviderData, addr 0x2b77638, size 0x8, virtual false, abstract: false, final false
  inline void set_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value);

  /// @brief Method set_SceneProviderData, addr 0x2b77618, size 0x18, virtual false, abstract: false, final false
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

  /// @brief Field localHash, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localHash;

  /// @brief Field location, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___location;

  /// @brief Field m_LocatorId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_LocatorId;

  /// @brief Field m_InstanceProviderData, offset: 0x28, size: 0x30, def value: None
  ::UnityEngine::ResourceManagement::Util::ObjectInitializationData ___m_InstanceProviderData;

  /// @brief Field m_SceneProviderData, offset: 0x58, size: 0x30, def value: None
  ::UnityEngine::ResourceManagement::Util::ObjectInitializationData ___m_SceneProviderData;

  /// @brief Field m_ResourceProviderData, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* ___m_ResourceProviderData;

  /// @brief Field m_ProviderIds, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_ProviderIds;

  /// @brief Field m_InternalIds, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_InternalIds;

  /// @brief Field m_KeyDataString, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___m_KeyDataString;

  /// @brief Field m_BucketDataString, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___m_BucketDataString;

  /// @brief Field m_EntryDataString, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___m_EntryDataString;

  /// @brief Field m_ExtraDataString, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___m_ExtraDataString;

  /// @brief Field m_resourceTypes, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType, ::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*> ___m_resourceTypes;

  /// @brief Field m_InternalIdPrefixes, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_InternalIdPrefixes;

  /// @brief Field kBytesPerInt32 offset 0xffffffff size 0x4
  static constexpr int32_t kBytesPerInt32{ static_cast<int32_t>(0x4) };

  /// @brief Field k_EntryDataItemPerEntry offset 0xffffffff size 0x4
  static constexpr int32_t k_EntryDataItemPerEntry{ static_cast<int32_t>(0x7) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___localHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___location) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_LocatorId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_InstanceProviderData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_SceneProviderData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_ResourceProviderData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_ProviderIds) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_InternalIds) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_KeyDataString) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_BucketDataString) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_EntryDataString) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_ExtraDataString) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_resourceTypes) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, ___m_InternalIdPrefixes) == 0xc8, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*, "UnityEngine.AddressableAssets.ResourceLocators",
                       "ContentCatalogData/CompactLocation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/Bucket");
