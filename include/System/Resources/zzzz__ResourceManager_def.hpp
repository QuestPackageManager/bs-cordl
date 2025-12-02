#pragma once
// IWYU pragma private; include "System/Resources/ResourceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Resources {
class IResourceGroveler;
}
namespace System::Resources {
class ResourceManager_CultureNameResourceSetPair;
}
namespace System::Resources {
class ResourceManager_ResourceManagerMediator;
}
namespace System::Resources {
class ResourceSet;
}
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
class Type;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Resources {
class ResourceManager;
}
namespace System::Resources {
class ResourceManager_CultureNameResourceSetPair;
}
namespace System::Resources {
class ResourceManager_ResourceManagerMediator;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::ResourceManager);
MARK_REF_PTR_T(::System::Resources::ResourceManager_CultureNameResourceSetPair);
MARK_REF_PTR_T(::System::Resources::ResourceManager_ResourceManagerMediator);
// Dependencies System.Object
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.ResourceManager/CultureNameResourceSetPair
class CORDL_TYPE ResourceManager_CultureNameResourceSetPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field lastCultureName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lastCultureName, put = __cordl_internal_set_lastCultureName)) ::StringW lastCultureName;

  /// @brief Field lastResourceSet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lastResourceSet, put = __cordl_internal_set_lastResourceSet)) ::System::Resources::ResourceSet* lastResourceSet;

  static inline ::System::Resources::ResourceManager_CultureNameResourceSetPair* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_lastCultureName() const;

  constexpr ::StringW& __cordl_internal_get_lastCultureName();

  constexpr ::System::Resources::ResourceSet* const& __cordl_internal_get_lastResourceSet() const;

  constexpr ::System::Resources::ResourceSet*& __cordl_internal_get_lastResourceSet();

  constexpr void __cordl_internal_set_lastCultureName(::StringW value);

  constexpr void __cordl_internal_set_lastResourceSet(::System::Resources::ResourceSet* value);

  /// @brief Method .ctor, addr 0x596137c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager_CultureNameResourceSetPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager_CultureNameResourceSetPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManager_CultureNameResourceSetPair(ResourceManager_CultureNameResourceSetPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager_CultureNameResourceSetPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManager_CultureNameResourceSetPair(ResourceManager_CultureNameResourceSetPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3455 };

  /// @brief Field lastCultureName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___lastCultureName;

  /// @brief Field lastResourceSet, offset: 0x18, size: 0x8, def value: None
  ::System::Resources::ResourceSet* ___lastResourceSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ResourceManager_CultureNameResourceSetPair, ___lastCultureName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager_CultureNameResourceSetPair, ___lastResourceSet) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceManager_CultureNameResourceSetPair, 0x20>, "Size mismatch!");

} // namespace System::Resources
// Dependencies System.Object
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.ResourceManager/ResourceManagerMediator
class CORDL_TYPE ResourceManager_ResourceManagerMediator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseName)) ::StringW BaseName;

  __declspec(property(get = get_BaseNameField)) ::StringW BaseNameField;

  __declspec(property(get = get_CallingAssembly)) ::System::Reflection::RuntimeAssembly* CallingAssembly;

  __declspec(property(get = get_FallbackLoc)) ::System::Resources::UltimateResourceFallbackLocation FallbackLoc;

  __declspec(property(get = get_LocationInfo)) ::System::Type* LocationInfo;

  __declspec(property(get = get_LookedForSatelliteContractVersion, put = set_LookedForSatelliteContractVersion)) bool LookedForSatelliteContractVersion;

  __declspec(property(get = get_MainAssembly)) ::System::Reflection::RuntimeAssembly* MainAssembly;

  __declspec(property(get = get_ModuleDir)) ::StringW ModuleDir;

  __declspec(property(get = get_NeutralResourcesCulture)) ::System::Globalization::CultureInfo* NeutralResourcesCulture;

  __declspec(property(get = get_SatelliteContractVersion, put = set_SatelliteContractVersion)) ::System::Version* SatelliteContractVersion;

  __declspec(property(get = get_UserResourceSet)) ::System::Type* UserResourceSet;

  /// @brief Field _rm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rm, put = __cordl_internal_set__rm)) ::System::Resources::ResourceManager* _rm;

  /// @brief Method GetResourceFileName, addr 0x595eb88, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetResourceFileName(::System::Globalization::CultureInfo* culture);

  static inline ::System::Resources::ResourceManager_ResourceManagerMediator* New_ctor(::System::Resources::ResourceManager* rm);

  /// @brief Method ObtainSatelliteContractVersion, addr 0x5960e0c, size 0x58, virtual false, abstract: false, final false
  inline ::System::Version* ObtainSatelliteContractVersion(::System::Reflection::Assembly* a);

  constexpr ::System::Resources::ResourceManager* const& __cordl_internal_get__rm() const;

  constexpr ::System::Resources::ResourceManager*& __cordl_internal_get__rm();

  constexpr void __cordl_internal_set__rm(::System::Resources::ResourceManager* value);

  /// @brief Method .ctor, addr 0x5961380, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Resources::ResourceManager* rm);

  /// @brief Method get_BaseName, addr 0x5961190, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_BaseName();

  /// @brief Method get_BaseNameField, addr 0x595ec58, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_BaseNameField();

  /// @brief Method get_CallingAssembly, addr 0x5960a84, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeAssembly* get_CallingAssembly();

  /// @brief Method get_FallbackLoc, addr 0x595f34c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Resources::UltimateResourceFallbackLocation get_FallbackLoc();

  /// @brief Method get_LocationInfo, addr 0x595ec70, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* get_LocationInfo();

  /// @brief Method get_LookedForSatelliteContractVersion, addr 0x5960df4, size 0x18, virtual false, abstract: false, final false
  inline bool get_LookedForSatelliteContractVersion();

  /// @brief Method get_MainAssembly, addr 0x595f364, size 0x88, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeAssembly* get_MainAssembly();

  /// @brief Method get_ModuleDir, addr 0x595ef50, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_ModuleDir();

  /// @brief Method get_NeutralResourcesCulture, addr 0x5960598, size 0x18, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_NeutralResourcesCulture();

  /// @brief Method get_SatelliteContractVersion, addr 0x5960f14, size 0x18, virtual false, abstract: false, final false
  inline ::System::Version* get_SatelliteContractVersion();

  /// @brief Method get_UserResourceSet, addr 0x595ef68, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* get_UserResourceSet();

  /// @brief Method set_LookedForSatelliteContractVersion, addr 0x5960e7c, size 0x1c, virtual false, abstract: false, final false
  inline void set_LookedForSatelliteContractVersion(bool value);

  /// @brief Method set_SatelliteContractVersion, addr 0x5960e64, size 0x18, virtual false, abstract: false, final false
  inline void set_SatelliteContractVersion(::System::Version* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager_ResourceManagerMediator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager_ResourceManagerMediator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManager_ResourceManagerMediator(ResourceManager_ResourceManagerMediator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager_ResourceManagerMediator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManager_ResourceManagerMediator(ResourceManager_ResourceManagerMediator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3456 };

  /// @brief Field _rm, offset: 0x10, size: 0x8, def value: None
  ::System::Resources::ResourceManager* ____rm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ResourceManager_ResourceManagerMediator, ____rm) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceManager_ResourceManagerMediator, 0x18>, "Size mismatch!");

} // namespace System::Resources
// Dependencies System.Object, System.Resources.UltimateResourceFallbackLocation
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.ResourceManager
class CORDL_TYPE ResourceManager : public ::System::Object {
public:
  // Declarations
  using CultureNameResourceSetPair = ::System::Resources::ResourceManager_CultureNameResourceSetPair;

  using ResourceManagerMediator = ::System::Resources::ResourceManager_ResourceManagerMediator;

  __declspec(property(get = get_BaseName)) ::StringW BaseName;

  /// @brief Field BaseNameField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_BaseNameField, put = __cordl_internal_set_BaseNameField)) ::StringW BaseNameField;

  /// @brief Field DEBUG, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_DEBUG, put = setStaticF_DEBUG)) int32_t DEBUG;

  __declspec(property(get = get_FallbackLocation)) ::System::Resources::UltimateResourceFallbackLocation FallbackLocation;

  /// @brief Field HeaderVersionNumber, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_HeaderVersionNumber, put = setStaticF_HeaderVersionNumber)) int32_t HeaderVersionNumber;

  /// @brief Field MagicNumber, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MagicNumber, put = setStaticF_MagicNumber)) int32_t MagicNumber;

  /// @brief Field MainAssembly, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_MainAssembly, put = __cordl_internal_set_MainAssembly)) ::System::Reflection::Assembly* MainAssembly;

  /// @brief Field MscorlibName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MscorlibName, put = setStaticF_MscorlibName)) ::StringW MscorlibName;

  /// @brief Field ResReaderTypeName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ResReaderTypeName, put = setStaticF_ResReaderTypeName)) ::StringW ResReaderTypeName;

  /// @brief Field ResSetTypeName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ResSetTypeName, put = setStaticF_ResSetTypeName)) ::StringW ResSetTypeName;

  /// @brief Field ResourceSets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ResourceSets, put = __cordl_internal_set_ResourceSets)) ::System::Collections::Hashtable* ResourceSets;

  /// @brief Field UseManifest, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_UseManifest, put = __cordl_internal_set_UseManifest)) bool UseManifest;

  /// @brief Field UseSatelliteAssem, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_UseSatelliteAssem, put = __cordl_internal_set_UseSatelliteAssem)) bool UseSatelliteAssem;

  /// @brief Field _callingAssembly, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__callingAssembly, put = __cordl_internal_set__callingAssembly)) ::System::Reflection::Assembly* _callingAssembly;

  /// @brief Field _fallbackLoc, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__fallbackLoc, put = __cordl_internal_set__fallbackLoc)) ::System::Resources::UltimateResourceFallbackLocation _fallbackLoc;

  /// @brief Field _ignoreCase, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreCase, put = __cordl_internal_set__ignoreCase)) bool _ignoreCase;

  /// @brief Field _lastUsedResourceCache, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lastUsedResourceCache,
                      put = __cordl_internal_set__lastUsedResourceCache)) ::System::Resources::ResourceManager_CultureNameResourceSetPair* _lastUsedResourceCache;

  /// @brief Field _locationInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__locationInfo, put = __cordl_internal_set__locationInfo)) ::System::Type* _locationInfo;

  /// @brief Field _lookedForSatelliteContractVersion, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__lookedForSatelliteContractVersion, put = __cordl_internal_set__lookedForSatelliteContractVersion)) bool _lookedForSatelliteContractVersion;

  /// @brief Field _minResourceSet, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__minResourceSet, put = setStaticF__minResourceSet)) ::System::Type* _minResourceSet;

  /// @brief Field _neutralResourcesCulture, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__neutralResourcesCulture, put = __cordl_internal_set__neutralResourcesCulture)) ::System::Globalization::CultureInfo* _neutralResourcesCulture;

  /// @brief Field _resourceSets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__resourceSets,
                      put = __cordl_internal_set__resourceSets)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* _resourceSets;

  /// @brief Field _satelliteContractVersion, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__satelliteContractVersion, put = __cordl_internal_set__satelliteContractVersion)) ::System::Version* _satelliteContractVersion;

  /// @brief Field _userResourceSet, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__userResourceSet, put = __cordl_internal_set__userResourceSet)) ::System::Type* _userResourceSet;

  /// @brief Field m_callingAssembly, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_callingAssembly, put = __cordl_internal_set_m_callingAssembly)) ::System::Reflection::RuntimeAssembly* m_callingAssembly;

  /// @brief Field moduleDir, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_moduleDir, put = __cordl_internal_set_moduleDir)) ::StringW moduleDir;

  /// @brief Field resourceGroveler, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceGroveler, put = __cordl_internal_set_resourceGroveler)) ::System::Resources::IResourceGroveler* resourceGroveler;

  /// @brief Method AddResourceSet, addr 0x596273c, size 0x1bc, virtual false, abstract: false, final false
  static inline void AddResourceSet(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, ::StringW cultureName,
                                    ::ByRef<::System::Resources::ResourceSet*> rs);

  /// @brief Method CommonAssemblyInit, addr 0x5961694, size 0x16c, virtual false, abstract: false, final false
  inline void CommonAssemblyInit();

  /// @brief Method CompareNames, addr 0x5960f2c, size 0x264, virtual false, abstract: false, final false
  static inline bool CompareNames(::StringW asmTypeName1, ::StringW typeName2, ::System::Reflection::AssemblyName* asmName2);

  /// @brief Method GetFirstResourceSet, addr 0x5961bc4, size 0x3ac, virtual false, abstract: false, final false
  inline ::System::Resources::ResourceSet* GetFirstResourceSet(::System::Globalization::CultureInfo* culture);

  /// @brief Method GetResourceFileName, addr 0x5961a80, size 0x144, virtual true, abstract: false, final false
  inline ::StringW GetResourceFileName(::System::Globalization::CultureInfo* culture);

  /// @brief Method GetSatelliteContractVersion, addr 0x5962908, size 0x70c, virtual false, abstract: false, final false
  static inline ::System::Version* GetSatelliteContractVersion(::System::Reflection::Assembly* a);

  /// @brief Method GetString, addr 0x5963014, size 0x474, virtual true, abstract: false, final false
  inline ::StringW GetString(::StringW name, ::System::Globalization::CultureInfo* culture);

  /// @brief Method Init, addr 0x59611ac, size 0x120, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method InternalGetResourceSet, addr 0x5961f70, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Resources::ResourceSet* InternalGetResourceSet(::System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents);

  /// @brief Method InternalGetResourceSet, addr 0x5961f8c, size 0x7b0, virtual false, abstract: false, final false
  inline ::System::Resources::ResourceSet* InternalGetResourceSet(::System::Globalization::CultureInfo* requestedCulture, bool createIfNotExists, bool tryParents,
                                                                  ::ByRef<::System::Threading::StackCrawlMark> stackMark);

  static inline ::System::Resources::ResourceManager* New_ctor();

  static inline ::System::Resources::ResourceManager* New_ctor(::StringW baseName, ::System::Reflection::Assembly* assembly);

  /// @brief Method OnDeserialized, addr 0x5961810, size 0x1f0, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserializing, addr 0x5961800, size 0x10, virtual false, abstract: false, final false
  inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnSerializing, addr 0x5961a00, size 0x70, virtual false, abstract: false, final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method SetAppXConfiguration, addr 0x5961690, size 0x4, virtual false, abstract: false, final false
  inline void SetAppXConfiguration();

  constexpr ::StringW const& __cordl_internal_get_BaseNameField() const;

  constexpr ::StringW& __cordl_internal_get_BaseNameField();

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get_MainAssembly() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get_MainAssembly();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_ResourceSets() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_ResourceSets();

  constexpr bool const& __cordl_internal_get_UseManifest() const;

  constexpr bool& __cordl_internal_get_UseManifest();

  constexpr bool const& __cordl_internal_get_UseSatelliteAssem() const;

  constexpr bool& __cordl_internal_get_UseSatelliteAssem();

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get__callingAssembly() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get__callingAssembly();

  constexpr ::System::Resources::UltimateResourceFallbackLocation const& __cordl_internal_get__fallbackLoc() const;

  constexpr ::System::Resources::UltimateResourceFallbackLocation& __cordl_internal_get__fallbackLoc();

  constexpr bool const& __cordl_internal_get__ignoreCase() const;

  constexpr bool& __cordl_internal_get__ignoreCase();

  constexpr ::System::Resources::ResourceManager_CultureNameResourceSetPair* const& __cordl_internal_get__lastUsedResourceCache() const;

  constexpr ::System::Resources::ResourceManager_CultureNameResourceSetPair*& __cordl_internal_get__lastUsedResourceCache();

  constexpr ::System::Type* const& __cordl_internal_get__locationInfo() const;

  constexpr ::System::Type*& __cordl_internal_get__locationInfo();

  constexpr bool const& __cordl_internal_get__lookedForSatelliteContractVersion() const;

  constexpr bool& __cordl_internal_get__lookedForSatelliteContractVersion();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__neutralResourcesCulture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__neutralResourcesCulture();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* const& __cordl_internal_get__resourceSets() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*& __cordl_internal_get__resourceSets();

  constexpr ::System::Version* const& __cordl_internal_get__satelliteContractVersion() const;

  constexpr ::System::Version*& __cordl_internal_get__satelliteContractVersion();

  constexpr ::System::Type* const& __cordl_internal_get__userResourceSet() const;

  constexpr ::System::Type*& __cordl_internal_get__userResourceSet();

  constexpr ::System::Reflection::RuntimeAssembly* const& __cordl_internal_get_m_callingAssembly() const;

  constexpr ::System::Reflection::RuntimeAssembly*& __cordl_internal_get_m_callingAssembly();

  constexpr ::StringW const& __cordl_internal_get_moduleDir() const;

  constexpr ::StringW& __cordl_internal_get_moduleDir();

  constexpr ::System::Resources::IResourceGroveler* const& __cordl_internal_get_resourceGroveler() const;

  constexpr ::System::Resources::IResourceGroveler*& __cordl_internal_get_resourceGroveler();

  constexpr void __cordl_internal_set_BaseNameField(::StringW value);

  constexpr void __cordl_internal_set_MainAssembly(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set_ResourceSets(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_UseManifest(bool value);

  constexpr void __cordl_internal_set_UseSatelliteAssem(bool value);

  constexpr void __cordl_internal_set__callingAssembly(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set__fallbackLoc(::System::Resources::UltimateResourceFallbackLocation value);

  constexpr void __cordl_internal_set__ignoreCase(bool value);

  constexpr void __cordl_internal_set__lastUsedResourceCache(::System::Resources::ResourceManager_CultureNameResourceSetPair* value);

  constexpr void __cordl_internal_set__locationInfo(::System::Type* value);

  constexpr void __cordl_internal_set__lookedForSatelliteContractVersion(bool value);

  constexpr void __cordl_internal_set__neutralResourcesCulture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__resourceSets(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* value);

  constexpr void __cordl_internal_set__satelliteContractVersion(::System::Version* value);

  constexpr void __cordl_internal_set__userResourceSet(::System::Type* value);

  constexpr void __cordl_internal_set_m_callingAssembly(::System::Reflection::RuntimeAssembly* value);

  constexpr void __cordl_internal_set_moduleDir(::StringW value);

  constexpr void __cordl_internal_set_resourceGroveler(::System::Resources::IResourceGroveler* value);

  /// @brief Method .ctor, addr 0x59612cc, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x59613d8, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::StringW baseName, ::System::Reflection::Assembly* assembly);

  static inline int32_t getStaticF_DEBUG();

  static inline int32_t getStaticF_HeaderVersionNumber();

  static inline int32_t getStaticF_MagicNumber();

  static inline ::StringW getStaticF_MscorlibName();

  static inline ::StringW getStaticF_ResReaderTypeName();

  static inline ::StringW getStaticF_ResSetTypeName();

  static inline ::System::Type* getStaticF__minResourceSet();

  /// @brief Method get_BaseName, addr 0x5961a70, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_BaseName();

  /// @brief Method get_FallbackLocation, addr 0x5961a78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Resources::UltimateResourceFallbackLocation get_FallbackLocation();

  static inline void setStaticF_DEBUG(int32_t value);

  static inline void setStaticF_HeaderVersionNumber(int32_t value);

  static inline void setStaticF_MagicNumber(int32_t value);

  static inline void setStaticF_MscorlibName(::StringW value);

  static inline void setStaticF_ResReaderTypeName(::StringW value);

  static inline void setStaticF_ResSetTypeName(::StringW value);

  static inline void setStaticF__minResourceSet(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManager(ResourceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManager(ResourceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3457 };

  /// @brief Field BaseNameField, offset: 0x10, size: 0x8, def value: None
  ::StringW ___BaseNameField;

  /// @brief Field ResourceSets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___ResourceSets;

  /// @brief Field _resourceSets, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* ____resourceSets;

  /// @brief Field moduleDir, offset: 0x28, size: 0x8, def value: None
  ::StringW ___moduleDir;

  /// @brief Field MainAssembly, offset: 0x30, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___MainAssembly;

  /// @brief Field _locationInfo, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____locationInfo;

  /// @brief Field _userResourceSet, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ____userResourceSet;

  /// @brief Field _neutralResourcesCulture, offset: 0x48, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____neutralResourcesCulture;

  /// @brief Field _lastUsedResourceCache, offset: 0x50, size: 0x8, def value: None
  ::System::Resources::ResourceManager_CultureNameResourceSetPair* ____lastUsedResourceCache;

  /// @brief Field _ignoreCase, offset: 0x58, size: 0x1, def value: None
  bool ____ignoreCase;

  /// @brief Field UseManifest, offset: 0x59, size: 0x1, def value: None
  bool ___UseManifest;

  /// @brief Field UseSatelliteAssem, offset: 0x5a, size: 0x1, def value: None
  bool ___UseSatelliteAssem;

  /// @brief Field _fallbackLoc, offset: 0x5c, size: 0x4, def value: None
  ::System::Resources::UltimateResourceFallbackLocation ____fallbackLoc;

  /// @brief Field _satelliteContractVersion, offset: 0x60, size: 0x8, def value: None
  ::System::Version* ____satelliteContractVersion;

  /// @brief Field _lookedForSatelliteContractVersion, offset: 0x68, size: 0x1, def value: None
  bool ____lookedForSatelliteContractVersion;

  /// @brief Field _callingAssembly, offset: 0x70, size: 0x8, def value: None
  ::System::Reflection::Assembly* ____callingAssembly;

  /// @brief Field m_callingAssembly, offset: 0x78, size: 0x8, def value: None
  ::System::Reflection::RuntimeAssembly* ___m_callingAssembly;

  /// @brief Field resourceGroveler, offset: 0x80, size: 0x8, def value: None
  ::System::Resources::IResourceGroveler* ___resourceGroveler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ResourceManager, ___BaseNameField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___ResourceSets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____resourceSets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___moduleDir) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___MainAssembly) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____locationInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____userResourceSet) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____neutralResourcesCulture) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____lastUsedResourceCache) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____ignoreCase) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___UseManifest) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___UseSatelliteAssem) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____fallbackLoc) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____satelliteContractVersion) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____lookedForSatelliteContractVersion) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____callingAssembly) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___m_callingAssembly) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___resourceGroveler) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceManager, 0x88>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceManager*, "System.Resources", "ResourceManager");
NEED_NO_BOX(::System::Resources::ResourceManager_CultureNameResourceSetPair);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceManager_CultureNameResourceSetPair*, "System.Resources", "ResourceManager/CultureNameResourceSetPair");
NEED_NO_BOX(::System::Resources::ResourceManager_ResourceManagerMediator);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceManager_ResourceManagerMediator*, "System.Resources", "ResourceManager/ResourceManagerMediator");
