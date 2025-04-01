#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Initialization/ResourceManagerRuntimeData.hpp"
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
// Dependencies System.Object, UnityEngine.ResourceManagement.Util.SerializedType
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData
class CORDL_TYPE ResourceManagerRuntimeData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AddressablesVersion, put = set_AddressablesVersion)) ::StringW AddressablesVersion;

  __declspec(property(get = get_BuildTarget, put = set_BuildTarget)) ::StringW BuildTarget;

  __declspec(property(get = get_CatalogLocations)) ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* CatalogLocations;

  __declspec(property(get = get_CatalogRequestsTimeout, put = set_CatalogRequestsTimeout)) int32_t CatalogRequestsTimeout;

  __declspec(property(get = get_CertificateHandlerType, put = set_CertificateHandlerType)) ::System::Type* CertificateHandlerType;

  __declspec(property(get = get_DisableCatalogUpdateOnStartup, put = set_DisableCatalogUpdateOnStartup)) bool DisableCatalogUpdateOnStartup;

  __declspec(property(get = get_InitializationObjects)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* InitializationObjects;

  __declspec(property(get = get_IsLocalCatalogInBundle, put = set_IsLocalCatalogInBundle)) bool IsLocalCatalogInBundle;

  __declspec(property(get = get_LogResourceManagerExceptions, put = set_LogResourceManagerExceptions)) bool LogResourceManagerExceptions;

  __declspec(property(get = get_MaxConcurrentWebRequests, put = set_MaxConcurrentWebRequests)) int32_t MaxConcurrentWebRequests;

  __declspec(property(get = get_ProfileEvents, put = set_ProfileEvents)) bool ProfileEvents;

  __declspec(property(get = get_SettingsHash, put = set_SettingsHash)) ::StringW SettingsHash;

  /// @brief Field m_AddressablesVersion, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddressablesVersion, put = __cordl_internal_set_m_AddressablesVersion)) ::StringW m_AddressablesVersion;

  /// @brief Field m_CatalogLocations, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CatalogLocations,
      put = __cordl_internal_set_m_CatalogLocations)) ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* m_CatalogLocations;

  /// @brief Field m_CatalogRequestsTimeout, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CatalogRequestsTimeout, put = __cordl_internal_set_m_CatalogRequestsTimeout)) int32_t m_CatalogRequestsTimeout;

  /// @brief Field m_CertificateHandlerType, offset 0x40, size 0x20
  __declspec(property(get = __cordl_internal_get_m_CertificateHandlerType,
                      put = __cordl_internal_set_m_CertificateHandlerType)) ::UnityEngine::ResourceManagement::Util::SerializedType m_CertificateHandlerType;

  /// @brief Field m_DisableCatalogUpdateOnStart, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableCatalogUpdateOnStart, put = __cordl_internal_set_m_DisableCatalogUpdateOnStart)) bool m_DisableCatalogUpdateOnStart;

  /// @brief Field m_ExtraInitializationData, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ExtraInitializationData,
      put = __cordl_internal_set_m_ExtraInitializationData)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* m_ExtraInitializationData;

  /// @brief Field m_IsLocalCatalogInBundle, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsLocalCatalogInBundle, put = __cordl_internal_set_m_IsLocalCatalogInBundle)) bool m_IsLocalCatalogInBundle;

  /// @brief Field m_LogResourceManagerExceptions, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LogResourceManagerExceptions, put = __cordl_internal_set_m_LogResourceManagerExceptions)) bool m_LogResourceManagerExceptions;

  /// @brief Field m_ProfileEvents, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ProfileEvents, put = __cordl_internal_set_m_ProfileEvents)) bool m_ProfileEvents;

  /// @brief Field m_SettingsHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SettingsHash, put = __cordl_internal_set_m_SettingsHash)) ::StringW m_SettingsHash;

  /// @brief Field m_buildTarget, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_buildTarget, put = __cordl_internal_set_m_buildTarget)) ::StringW m_buildTarget;

  /// @brief Field m_maxConcurrentWebRequests, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxConcurrentWebRequests, put = __cordl_internal_set_m_maxConcurrentWebRequests)) int32_t m_maxConcurrentWebRequests;

  static inline ::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_m_AddressablesVersion() const;

  constexpr ::StringW& __cordl_internal_get_m_AddressablesVersion();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* const& __cordl_internal_get_m_CatalogLocations() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>*& __cordl_internal_get_m_CatalogLocations();

  constexpr int32_t const& __cordl_internal_get_m_CatalogRequestsTimeout() const;

  constexpr int32_t& __cordl_internal_get_m_CatalogRequestsTimeout();

  constexpr ::UnityEngine::ResourceManagement::Util::SerializedType const& __cordl_internal_get_m_CertificateHandlerType() const;

  constexpr ::UnityEngine::ResourceManagement::Util::SerializedType& __cordl_internal_get_m_CertificateHandlerType();

  constexpr bool const& __cordl_internal_get_m_DisableCatalogUpdateOnStart() const;

  constexpr bool& __cordl_internal_get_m_DisableCatalogUpdateOnStart();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* const& __cordl_internal_get_m_ExtraInitializationData() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*& __cordl_internal_get_m_ExtraInitializationData();

  constexpr bool const& __cordl_internal_get_m_IsLocalCatalogInBundle() const;

  constexpr bool& __cordl_internal_get_m_IsLocalCatalogInBundle();

  constexpr bool const& __cordl_internal_get_m_LogResourceManagerExceptions() const;

  constexpr bool& __cordl_internal_get_m_LogResourceManagerExceptions();

  constexpr bool const& __cordl_internal_get_m_ProfileEvents() const;

  constexpr bool& __cordl_internal_get_m_ProfileEvents();

  constexpr ::StringW const& __cordl_internal_get_m_SettingsHash() const;

  constexpr ::StringW& __cordl_internal_get_m_SettingsHash();

  constexpr ::StringW const& __cordl_internal_get_m_buildTarget() const;

  constexpr ::StringW& __cordl_internal_get_m_buildTarget();

  constexpr int32_t const& __cordl_internal_get_m_maxConcurrentWebRequests() const;

  constexpr int32_t& __cordl_internal_get_m_maxConcurrentWebRequests();

  constexpr void __cordl_internal_set_m_AddressablesVersion(::StringW value);

  constexpr void __cordl_internal_set_m_CatalogLocations(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* value);

  constexpr void __cordl_internal_set_m_CatalogRequestsTimeout(int32_t value);

  constexpr void __cordl_internal_set_m_CertificateHandlerType(::UnityEngine::ResourceManagement::Util::SerializedType value);

  constexpr void __cordl_internal_set_m_DisableCatalogUpdateOnStart(bool value);

  constexpr void __cordl_internal_set_m_ExtraInitializationData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value);

  constexpr void __cordl_internal_set_m_IsLocalCatalogInBundle(bool value);

  constexpr void __cordl_internal_set_m_LogResourceManagerExceptions(bool value);

  constexpr void __cordl_internal_set_m_ProfileEvents(bool value);

  constexpr void __cordl_internal_set_m_SettingsHash(::StringW value);

  constexpr void __cordl_internal_set_m_buildTarget(::StringW value);

  constexpr void __cordl_internal_set_m_maxConcurrentWebRequests(int32_t value);

  /// @brief Method .ctor, addr 0x44fe314, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AddressablesVersion, addr 0x44fe2bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AddressablesVersion();

  /// @brief Method get_BuildTarget, addr 0x44fe230, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BuildTarget();

  /// @brief Method get_CatalogLocations, addr 0x44fe250, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*>* get_CatalogLocations();

  /// @brief Method get_CatalogRequestsTimeout, addr 0x44fe2f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CatalogRequestsTimeout();

  /// @brief Method get_CertificateHandlerType, addr 0x44fc9fc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Type* get_CertificateHandlerType();

  /// @brief Method get_DisableCatalogUpdateOnStartup, addr 0x44fe288, size 0x8, virtual false, abstract: false, final false
  inline bool get_DisableCatalogUpdateOnStartup();

  /// @brief Method get_InitializationObjects, addr 0x44fe280, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* get_InitializationObjects();

  /// @brief Method get_IsLocalCatalogInBundle, addr 0x44fe29c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsLocalCatalogInBundle();

  /// @brief Method get_LogResourceManagerExceptions, addr 0x44fe26c, size 0x8, virtual false, abstract: false, final false
  inline bool get_LogResourceManagerExceptions();

  /// @brief Method get_MaxConcurrentWebRequests, addr 0x44fe2cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxConcurrentWebRequests();

  /// @brief Method get_ProfileEvents, addr 0x44fe258, size 0x8, virtual false, abstract: false, final false
  inline bool get_ProfileEvents();

  /// @brief Method get_SettingsHash, addr 0x44fe240, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SettingsHash();

  /// @brief Method set_AddressablesVersion, addr 0x44fe2c4, size 0x8, virtual false, abstract: false, final false
  inline void set_AddressablesVersion(::StringW value);

  /// @brief Method set_BuildTarget, addr 0x44fe238, size 0x8, virtual false, abstract: false, final false
  inline void set_BuildTarget(::StringW value);

  /// @brief Method set_CatalogRequestsTimeout, addr 0x44fe2f8, size 0x1c, virtual false, abstract: false, final false
  inline void set_CatalogRequestsTimeout(int32_t value);

  /// @brief Method set_CertificateHandlerType, addr 0x44fe2b0, size 0xc, virtual false, abstract: false, final false
  inline void set_CertificateHandlerType(::System::Type* value);

  /// @brief Method set_DisableCatalogUpdateOnStartup, addr 0x44fe290, size 0xc, virtual false, abstract: false, final false
  inline void set_DisableCatalogUpdateOnStartup(bool value);

  /// @brief Method set_IsLocalCatalogInBundle, addr 0x44fe2a4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsLocalCatalogInBundle(bool value);

  /// @brief Method set_LogResourceManagerExceptions, addr 0x44fe274, size 0xc, virtual false, abstract: false, final false
  inline void set_LogResourceManagerExceptions(bool value);

  /// @brief Method set_MaxConcurrentWebRequests, addr 0x44fe2d4, size 0x1c, virtual false, abstract: false, final false
  inline void set_MaxConcurrentWebRequests(int32_t value);

  /// @brief Method set_ProfileEvents, addr 0x44fe260, size 0xc, virtual false, abstract: false, final false
  inline void set_ProfileEvents(bool value);

  /// @brief Method set_SettingsHash, addr 0x44fe248, size 0x8, virtual false, abstract: false, final false
  inline void set_SettingsHash(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManagerRuntimeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerRuntimeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManagerRuntimeData(ResourceManagerRuntimeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerRuntimeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManagerRuntimeData(ResourceManagerRuntimeData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16226 };

  /// @brief Field kCatalogAddress offset 0xffffffff size 0x8
  static constexpr ::ConstString kCatalogAddress{ u"AddressablesMainContentCatalog" };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, 0x70>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*, "UnityEngine.AddressableAssets.Initialization", "ResourceManagerRuntimeData");
