#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceManagerRuntimeData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationData;
}
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class ResourceManagerRuntimeData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData);
// Type: UnityEngine.AddressableAssets.Initialization::ResourceManagerRuntimeData
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13983))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14125))
// CS Name: ::UnityEngine.AddressableAssets.Initialization::ResourceManagerRuntimeData*
class CORDL_TYPE ResourceManagerRuntimeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_buildTarget, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_buildTarget, put = __cordl_internal_set_m_buildTarget))::StringW m_buildTarget;

  /// @brief Field m_SettingsHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SettingsHash, put = __cordl_internal_set_m_SettingsHash))::StringW m_SettingsHash;

  /// @brief Field m_CatalogLocations, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_CatalogLocations,
               put = __cordl_internal_set_m_CatalogLocations))::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* m_CatalogLocations;

  /// @brief Field m_ProfileEvents, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ProfileEvents, put = __cordl_internal_set_m_ProfileEvents)) bool m_ProfileEvents;

  /// @brief Field m_LogResourceManagerExceptions, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LogResourceManagerExceptions, put = __cordl_internal_set_m_LogResourceManagerExceptions)) bool m_LogResourceManagerExceptions;

  /// @brief Field m_ExtraInitializationData, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ExtraInitializationData,
      put = __cordl_internal_set_m_ExtraInitializationData))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* m_ExtraInitializationData;

  /// @brief Field m_DisableCatalogUpdateOnStart, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableCatalogUpdateOnStart, put = __cordl_internal_set_m_DisableCatalogUpdateOnStart)) bool m_DisableCatalogUpdateOnStart;

  /// @brief Field m_IsLocalCatalogInBundle, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsLocalCatalogInBundle, put = __cordl_internal_set_m_IsLocalCatalogInBundle)) bool m_IsLocalCatalogInBundle;

  /// @brief Field m_CertificateHandlerType, offset 0x40, size 0x20
  __declspec(property(get = __cordl_internal_get_m_CertificateHandlerType,
                      put = __cordl_internal_set_m_CertificateHandlerType))::UnityEngine::ResourceManagement::Util::SerializedType m_CertificateHandlerType;

  /// @brief Field m_AddressablesVersion, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddressablesVersion, put = __cordl_internal_set_m_AddressablesVersion))::StringW m_AddressablesVersion;

  /// @brief Field m_maxConcurrentWebRequests, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxConcurrentWebRequests, put = __cordl_internal_set_m_maxConcurrentWebRequests)) int32_t m_maxConcurrentWebRequests;

  /// @brief Field m_CatalogRequestsTimeout, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CatalogRequestsTimeout, put = __cordl_internal_set_m_CatalogRequestsTimeout)) int32_t m_CatalogRequestsTimeout;

  __declspec(property(get = get_BuildTarget, put = set_BuildTarget))::StringW BuildTarget;

  __declspec(property(get = get_SettingsHash, put = set_SettingsHash))::StringW SettingsHash;

  __declspec(property(get = get_CatalogLocations))::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* CatalogLocations;

  __declspec(property(get = get_ProfileEvents, put = set_ProfileEvents)) bool ProfileEvents;

  __declspec(property(get = get_LogResourceManagerExceptions, put = set_LogResourceManagerExceptions)) bool LogResourceManagerExceptions;

  __declspec(property(get = get_InitializationObjects))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* InitializationObjects;

  __declspec(property(get = get_DisableCatalogUpdateOnStartup, put = set_DisableCatalogUpdateOnStartup)) bool DisableCatalogUpdateOnStartup;

  __declspec(property(get = get_IsLocalCatalogInBundle, put = set_IsLocalCatalogInBundle)) bool IsLocalCatalogInBundle;

  __declspec(property(get = get_CertificateHandlerType, put = set_CertificateHandlerType))::System::Type* CertificateHandlerType;

  __declspec(property(get = get_AddressablesVersion, put = set_AddressablesVersion))::StringW AddressablesVersion;

  __declspec(property(get = get_MaxConcurrentWebRequests, put = set_MaxConcurrentWebRequests)) int32_t MaxConcurrentWebRequests;

  __declspec(property(get = get_CatalogRequestsTimeout, put = set_CatalogRequestsTimeout)) int32_t CatalogRequestsTimeout;

  constexpr ::StringW& __cordl_internal_get_m_buildTarget();

  constexpr ::StringW const& __cordl_internal_get_m_buildTarget() const;

  constexpr void __cordl_internal_set_m_buildTarget(::StringW value);

  constexpr ::StringW& __cordl_internal_get_m_SettingsHash();

  constexpr ::StringW const& __cordl_internal_get_m_SettingsHash() const;

  constexpr void __cordl_internal_set_m_SettingsHash(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>*& __cordl_internal_get_m_CatalogLocations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>*> const&
  __cordl_internal_get_m_CatalogLocations() const;

  constexpr void __cordl_internal_set_m_CatalogLocations(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* value);

  constexpr bool& __cordl_internal_get_m_ProfileEvents();

  constexpr bool const& __cordl_internal_get_m_ProfileEvents() const;

  constexpr void __cordl_internal_set_m_ProfileEvents(bool value);

  constexpr bool& __cordl_internal_get_m_LogResourceManagerExceptions();

  constexpr bool const& __cordl_internal_get_m_LogResourceManagerExceptions() const;

  constexpr void __cordl_internal_set_m_LogResourceManagerExceptions(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*& __cordl_internal_get_m_ExtraInitializationData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*> const&
  __cordl_internal_get_m_ExtraInitializationData() const;

  constexpr void __cordl_internal_set_m_ExtraInitializationData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value);

  constexpr bool& __cordl_internal_get_m_DisableCatalogUpdateOnStart();

  constexpr bool const& __cordl_internal_get_m_DisableCatalogUpdateOnStart() const;

  constexpr void __cordl_internal_set_m_DisableCatalogUpdateOnStart(bool value);

  constexpr bool& __cordl_internal_get_m_IsLocalCatalogInBundle();

  constexpr bool const& __cordl_internal_get_m_IsLocalCatalogInBundle() const;

  constexpr void __cordl_internal_set_m_IsLocalCatalogInBundle(bool value);

  constexpr ::UnityEngine::ResourceManagement::Util::SerializedType& __cordl_internal_get_m_CertificateHandlerType();

  constexpr ::UnityEngine::ResourceManagement::Util::SerializedType const& __cordl_internal_get_m_CertificateHandlerType() const;

  constexpr void __cordl_internal_set_m_CertificateHandlerType(::UnityEngine::ResourceManagement::Util::SerializedType value);

  constexpr ::StringW& __cordl_internal_get_m_AddressablesVersion();

  constexpr ::StringW const& __cordl_internal_get_m_AddressablesVersion() const;

  constexpr void __cordl_internal_set_m_AddressablesVersion(::StringW value);

  constexpr int32_t& __cordl_internal_get_m_maxConcurrentWebRequests();

  constexpr int32_t const& __cordl_internal_get_m_maxConcurrentWebRequests() const;

  constexpr void __cordl_internal_set_m_maxConcurrentWebRequests(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_CatalogRequestsTimeout();

  constexpr int32_t const& __cordl_internal_get_m_CatalogRequestsTimeout() const;

  constexpr void __cordl_internal_set_m_CatalogRequestsTimeout(int32_t value);

  /// @brief Method get_BuildTarget, addr 0x2a33b5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BuildTarget();

  /// @brief Method set_BuildTarget, addr 0x2a33b64, size 0x8, virtual false, abstract: false, final false
  inline void set_BuildTarget(::StringW value);

  /// @brief Method get_SettingsHash, addr 0x2a33b6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SettingsHash();

  /// @brief Method set_SettingsHash, addr 0x2a33b74, size 0x8, virtual false, abstract: false, final false
  inline void set_SettingsHash(::StringW value);

  /// @brief Method get_CatalogLocations, addr 0x2a33b7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* get_CatalogLocations();

  /// @brief Method get_ProfileEvents, addr 0x2a33b84, size 0x8, virtual false, abstract: false, final false
  inline bool get_ProfileEvents();

  /// @brief Method set_ProfileEvents, addr 0x2a33b8c, size 0xc, virtual false, abstract: false, final false
  inline void set_ProfileEvents(bool value);

  /// @brief Method get_LogResourceManagerExceptions, addr 0x2a33b98, size 0x8, virtual false, abstract: false, final false
  inline bool get_LogResourceManagerExceptions();

  /// @brief Method set_LogResourceManagerExceptions, addr 0x2a33ba0, size 0xc, virtual false, abstract: false, final false
  inline void set_LogResourceManagerExceptions(bool value);

  /// @brief Method get_InitializationObjects, addr 0x2a33bac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* get_InitializationObjects();

  /// @brief Method get_DisableCatalogUpdateOnStartup, addr 0x2a33bb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_DisableCatalogUpdateOnStartup();

  /// @brief Method set_DisableCatalogUpdateOnStartup, addr 0x2a33bbc, size 0xc, virtual false, abstract: false, final false
  inline void set_DisableCatalogUpdateOnStartup(bool value);

  /// @brief Method get_IsLocalCatalogInBundle, addr 0x2a33bc8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsLocalCatalogInBundle();

  /// @brief Method set_IsLocalCatalogInBundle, addr 0x2a33bd0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsLocalCatalogInBundle(bool value);

  /// @brief Method get_CertificateHandlerType, addr 0x2a33bdc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Type* get_CertificateHandlerType();

  /// @brief Method set_CertificateHandlerType, addr 0x2a33be8, size 0xc, virtual false, abstract: false, final false
  inline void set_CertificateHandlerType(::System::Type* value);

  /// @brief Method get_AddressablesVersion, addr 0x2a33bf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AddressablesVersion();

  /// @brief Method set_AddressablesVersion, addr 0x2a33bfc, size 0x8, virtual false, abstract: false, final false
  inline void set_AddressablesVersion(::StringW value);

  /// @brief Method get_MaxConcurrentWebRequests, addr 0x2a33c04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxConcurrentWebRequests();

  /// @brief Method set_MaxConcurrentWebRequests, addr 0x2a33c0c, size 0x1c, virtual false, abstract: false, final false
  inline void set_MaxConcurrentWebRequests(int32_t value);

  /// @brief Method get_CatalogRequestsTimeout, addr 0x2a33c28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CatalogRequestsTimeout();

  /// @brief Method set_CatalogRequestsTimeout, addr 0x2a33c30, size 0x1c, virtual false, abstract: false, final false
  inline void set_CatalogRequestsTimeout(int32_t value);

  static inline ::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData* New_ctor();

  /// @brief Method .ctor, addr 0x2a33c4c, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerRuntimeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManagerRuntimeData(ResourceManagerRuntimeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerRuntimeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManagerRuntimeData(ResourceManagerRuntimeData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManagerRuntimeData();

public:
  /// @brief Field m_buildTarget, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_buildTarget;

  /// @brief Field m_SettingsHash, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_SettingsHash;

  /// @brief Field m_CatalogLocations, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* ___m_CatalogLocations;

  /// @brief Field m_ProfileEvents, offset: 0x28, size: 0x1, def value: None
  bool ___m_ProfileEvents;

  /// @brief Field m_LogResourceManagerExceptions, offset: 0x29, size: 0x1, def value: None
  bool ___m_LogResourceManagerExceptions;

  /// @brief Field m_ExtraInitializationData, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* ___m_ExtraInitializationData;

  /// @brief Field m_DisableCatalogUpdateOnStart, offset: 0x38, size: 0x1, def value: None
  bool ___m_DisableCatalogUpdateOnStart;

  /// @brief Field m_IsLocalCatalogInBundle, offset: 0x39, size: 0x1, def value: None
  bool ___m_IsLocalCatalogInBundle;

  /// @brief Field m_CertificateHandlerType, offset: 0x40, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::Util::SerializedType ___m_CertificateHandlerType;

  /// @brief Field m_AddressablesVersion, offset: 0x60, size: 0x8, def value: None
  ::StringW ___m_AddressablesVersion;

  /// @brief Field m_maxConcurrentWebRequests, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_maxConcurrentWebRequests;

  /// @brief Field m_CatalogRequestsTimeout, offset: 0x6c, size: 0x4, def value: None
  int32_t ___m_CatalogRequestsTimeout;

  /// @brief Field kCatalogAddress offset 0xffffffff size 0x8
  static constexpr ::ConstString kCatalogAddress{ u"AddressablesMainContentCatalog" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_buildTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_SettingsHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_CatalogLocations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_ProfileEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_LogResourceManagerExceptions) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_ExtraInitializationData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_DisableCatalogUpdateOnStart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_IsLocalCatalogInBundle) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_CertificateHandlerType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_AddressablesVersion) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_maxConcurrentWebRequests) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, ___m_CatalogRequestsTimeout) == 0x6c, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*, "UnityEngine.AddressableAssets.Initialization", "ResourceManagerRuntimeData");
