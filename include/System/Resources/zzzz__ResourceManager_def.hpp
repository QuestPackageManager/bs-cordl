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
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
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
  static inline ::System::Resources::ResourceManager_CultureNameResourceSetPair* New_ctor();

  /// @brief Method .ctor, addr 0x3d1d8c4, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3435 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceManager_CultureNameResourceSetPair, 0x10>, "Size mismatch!");

} // namespace System::Resources
// Dependencies System.Object
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.ResourceManager/ResourceManagerMediator
class CORDL_TYPE ResourceManager_ResourceManagerMediator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _rm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rm, put = __cordl_internal_set__rm)) ::System::Resources::ResourceManager* _rm;

  static inline ::System::Resources::ResourceManager_ResourceManagerMediator* New_ctor(::System::Resources::ResourceManager* rm);

  constexpr ::System::Resources::ResourceManager* const& __cordl_internal_get__rm() const;

  constexpr ::System::Resources::ResourceManager*& __cordl_internal_get__rm();

  constexpr void __cordl_internal_set__rm(::System::Resources::ResourceManager* value);

  /// @brief Method .ctor, addr 0x3d1d8cc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Resources::ResourceManager* rm);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3436 };

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

  /// @brief Field DEBUG, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_DEBUG, put = setStaticF_DEBUG)) int32_t DEBUG;

  /// @brief Field HeaderVersionNumber, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_HeaderVersionNumber, put = setStaticF_HeaderVersionNumber)) int32_t HeaderVersionNumber;

  /// @brief Field MagicNumber, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MagicNumber, put = setStaticF_MagicNumber)) int32_t MagicNumber;

  /// @brief Field MainAssembly, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_MainAssembly, put = __cordl_internal_set_MainAssembly)) ::System::Reflection::Assembly* MainAssembly;

  /// @brief Field MscorlibName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MscorlibName, put = setStaticF_MscorlibName)) ::StringW MscorlibName;

  /// @brief Field ResReaderTypeName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ResReaderTypeName, put = setStaticF_ResReaderTypeName)) ::StringW ResReaderTypeName;

  /// @brief Field ResSetTypeName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ResSetTypeName, put = setStaticF_ResSetTypeName)) ::StringW ResSetTypeName;

  /// @brief Field ResourceSets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ResourceSets, put = __cordl_internal_set_ResourceSets)) ::System::Collections::Hashtable* ResourceSets;

  /// @brief Field UseManifest, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_UseManifest, put = __cordl_internal_set_UseManifest)) bool UseManifest;

  /// @brief Field UseSatelliteAssem, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_UseSatelliteAssem, put = __cordl_internal_set_UseSatelliteAssem)) bool UseSatelliteAssem;

  /// @brief Field _callingAssembly, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__callingAssembly, put = __cordl_internal_set__callingAssembly)) ::System::Reflection::Assembly* _callingAssembly;

  /// @brief Field _fallbackLoc, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__fallbackLoc, put = __cordl_internal_set__fallbackLoc)) ::System::Resources::UltimateResourceFallbackLocation _fallbackLoc;

  /// @brief Field _lastUsedResourceCache, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lastUsedResourceCache,
                      put = __cordl_internal_set__lastUsedResourceCache)) ::System::Resources::ResourceManager_CultureNameResourceSetPair* _lastUsedResourceCache;

  /// @brief Field _minResourceSet, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__minResourceSet, put = setStaticF__minResourceSet)) ::System::Type* _minResourceSet;

  /// @brief Field _neutralResourcesCulture, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__neutralResourcesCulture, put = __cordl_internal_set__neutralResourcesCulture)) ::System::Globalization::CultureInfo* _neutralResourcesCulture;

  /// @brief Field _resourceSets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__resourceSets,
                      put = __cordl_internal_set__resourceSets)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* _resourceSets;

  /// @brief Field m_callingAssembly, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_callingAssembly, put = __cordl_internal_set_m_callingAssembly)) ::System::Reflection::RuntimeAssembly* m_callingAssembly;

  /// @brief Field resourceGroveler, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceGroveler, put = __cordl_internal_set_resourceGroveler)) ::System::Resources::IResourceGroveler* resourceGroveler;

  /// @brief Method CompareNames, addr 0x3d1db84, size 0x25c, virtual false, abstract: false, final false
  static inline bool CompareNames(::StringW asmTypeName1, ::StringW typeName2, ::System::Reflection::AssemblyName* asmName2);

  /// @brief Method Init, addr 0x3d1d6dc, size 0x118, virtual false, abstract: false, final false
  inline void Init();

  static inline ::System::Resources::ResourceManager* New_ctor();

  /// @brief Method OnDeserialized, addr 0x3d1d950, size 0x1cc, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserializing, addr 0x3d1d940, size 0x10, virtual false, abstract: false, final false
  inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnSerializing, addr 0x3d1db1c, size 0x68, virtual false, abstract: false, final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);

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

  constexpr ::System::Resources::ResourceManager_CultureNameResourceSetPair* const& __cordl_internal_get__lastUsedResourceCache() const;

  constexpr ::System::Resources::ResourceManager_CultureNameResourceSetPair*& __cordl_internal_get__lastUsedResourceCache();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__neutralResourcesCulture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__neutralResourcesCulture();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* const& __cordl_internal_get__resourceSets() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*& __cordl_internal_get__resourceSets();

  constexpr ::System::Reflection::RuntimeAssembly* const& __cordl_internal_get_m_callingAssembly() const;

  constexpr ::System::Reflection::RuntimeAssembly*& __cordl_internal_get_m_callingAssembly();

  constexpr ::System::Resources::IResourceGroveler* const& __cordl_internal_get_resourceGroveler() const;

  constexpr ::System::Resources::IResourceGroveler*& __cordl_internal_get_resourceGroveler();

  constexpr void __cordl_internal_set_MainAssembly(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set_ResourceSets(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_UseManifest(bool value);

  constexpr void __cordl_internal_set_UseSatelliteAssem(bool value);

  constexpr void __cordl_internal_set__callingAssembly(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set__fallbackLoc(::System::Resources::UltimateResourceFallbackLocation value);

  constexpr void __cordl_internal_set__lastUsedResourceCache(::System::Resources::ResourceManager_CultureNameResourceSetPair* value);

  constexpr void __cordl_internal_set__neutralResourcesCulture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__resourceSets(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* value);

  constexpr void __cordl_internal_set_m_callingAssembly(::System::Reflection::RuntimeAssembly* value);

  constexpr void __cordl_internal_set_resourceGroveler(::System::Resources::IResourceGroveler* value);

  /// @brief Method .ctor, addr 0x3d1d7f8, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_DEBUG();

  static inline int32_t getStaticF_HeaderVersionNumber();

  static inline int32_t getStaticF_MagicNumber();

  static inline ::StringW getStaticF_MscorlibName();

  static inline ::StringW getStaticF_ResReaderTypeName();

  static inline ::StringW getStaticF_ResSetTypeName();

  static inline ::System::Type* getStaticF__minResourceSet();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3437 };

  /// @brief Field ResourceSets, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___ResourceSets;

  /// @brief Field _resourceSets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* ____resourceSets;

  /// @brief Field MainAssembly, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___MainAssembly;

  /// @brief Field _neutralResourcesCulture, offset: 0x28, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____neutralResourcesCulture;

  /// @brief Field _lastUsedResourceCache, offset: 0x30, size: 0x8, def value: None
  ::System::Resources::ResourceManager_CultureNameResourceSetPair* ____lastUsedResourceCache;

  /// @brief Field UseManifest, offset: 0x38, size: 0x1, def value: None
  bool ___UseManifest;

  /// @brief Field UseSatelliteAssem, offset: 0x39, size: 0x1, def value: None
  bool ___UseSatelliteAssem;

  /// @brief Field _fallbackLoc, offset: 0x3c, size: 0x4, def value: None
  ::System::Resources::UltimateResourceFallbackLocation ____fallbackLoc;

  /// @brief Field _callingAssembly, offset: 0x40, size: 0x8, def value: None
  ::System::Reflection::Assembly* ____callingAssembly;

  /// @brief Field m_callingAssembly, offset: 0x48, size: 0x8, def value: None
  ::System::Reflection::RuntimeAssembly* ___m_callingAssembly;

  /// @brief Field resourceGroveler, offset: 0x50, size: 0x8, def value: None
  ::System::Resources::IResourceGroveler* ___resourceGroveler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ResourceManager, ___ResourceSets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____resourceSets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___MainAssembly) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____neutralResourcesCulture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____lastUsedResourceCache) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___UseManifest) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___UseSatelliteAssem) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____fallbackLoc) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ____callingAssembly) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___m_callingAssembly) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Resources::ResourceManager, ___resourceGroveler) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceManager, 0x58>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceManager*, "System.Resources", "ResourceManager");
NEED_NO_BOX(::System::Resources::ResourceManager_CultureNameResourceSetPair);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceManager_CultureNameResourceSetPair*, "System.Resources", "ResourceManager/CultureNameResourceSetPair");
NEED_NO_BOX(::System::Resources::ResourceManager_ResourceManagerMediator);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceManager_ResourceManagerMediator*, "System.Resources", "ResourceManager/ResourceManagerMediator");
