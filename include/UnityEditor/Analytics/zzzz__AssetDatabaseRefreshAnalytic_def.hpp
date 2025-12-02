#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/AssetDatabaseRefreshAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetDatabaseRefreshAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class AssetDatabaseRefreshAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.AssetDatabaseRefreshAnalytic
class CORDL_TYPE AssetDatabaseRefreshAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field CacheServer_ArtifactFilesDownloaded, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_ArtifactFilesDownloaded, put = __cordl_internal_set_CacheServer_ArtifactFilesDownloaded)) int64_t CacheServer_ArtifactFilesDownloaded;

  /// @brief Field CacheServer_ArtifactFilesFailedToDownload, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_ArtifactFilesFailedToDownload,
                      put = __cordl_internal_set_CacheServer_ArtifactFilesFailedToDownload)) int64_t CacheServer_ArtifactFilesFailedToDownload;

  /// @brief Field CacheServer_ArtifactFilesFailedToUpload, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_ArtifactFilesFailedToUpload,
                      put = __cordl_internal_set_CacheServer_ArtifactFilesFailedToUpload)) int64_t CacheServer_ArtifactFilesFailedToUpload;

  /// @brief Field CacheServer_ArtifactFilesUploaded, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_ArtifactFilesUploaded, put = __cordl_internal_set_CacheServer_ArtifactFilesUploaded)) int64_t CacheServer_ArtifactFilesUploaded;

  /// @brief Field CacheServer_ArtifactsDownloaded, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_ArtifactsDownloaded, put = __cordl_internal_set_CacheServer_ArtifactsDownloaded)) int64_t CacheServer_ArtifactsDownloaded;

  /// @brief Field CacheServer_ArtifactsFailedToUpload, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_ArtifactsFailedToUpload, put = __cordl_internal_set_CacheServer_ArtifactsFailedToUpload)) int64_t CacheServer_ArtifactsFailedToUpload;

  /// @brief Field CacheServer_ArtifactsUploaded, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_ArtifactsUploaded, put = __cordl_internal_set_CacheServer_ArtifactsUploaded)) int64_t CacheServer_ArtifactsUploaded;

  /// @brief Field CacheServer_Connects, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_Connects, put = __cordl_internal_set_CacheServer_Connects)) int64_t CacheServer_Connects;

  /// @brief Field CacheServer_Disconnects, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_Disconnects, put = __cordl_internal_set_CacheServer_Disconnects)) int64_t CacheServer_Disconnects;

  /// @brief Field CacheServer_MetadataDownloaded, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_MetadataDownloaded, put = __cordl_internal_set_CacheServer_MetadataDownloaded)) int64_t CacheServer_MetadataDownloaded;

  /// @brief Field CacheServer_MetadataFailedToDownload, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_MetadataFailedToDownload, put = __cordl_internal_set_CacheServer_MetadataFailedToDownload)) int64_t CacheServer_MetadataFailedToDownload;

  /// @brief Field CacheServer_MetadataMatched, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_MetadataMatched, put = __cordl_internal_set_CacheServer_MetadataMatched)) int64_t CacheServer_MetadataMatched;

  /// @brief Field CacheServer_MetadataRequested, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_MetadataRequested, put = __cordl_internal_set_CacheServer_MetadataRequested)) int64_t CacheServer_MetadataRequested;

  /// @brief Field CacheServer_MetadataUploaded, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_MetadataUploaded, put = __cordl_internal_set_CacheServer_MetadataUploaded)) int64_t CacheServer_MetadataUploaded;

  /// @brief Field CacheServer_MetadataVersionsDownloaded, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheServer_MetadataVersionsDownloaded,
                      put = __cordl_internal_set_CacheServer_MetadataVersionsDownloaded)) int64_t CacheServer_MetadataVersionsDownloaded;

  /// @brief Field Imports_DomainReload, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Imports_DomainReload, put = __cordl_internal_set_Imports_DomainReload)) int64_t Imports_DomainReload;

  /// @brief Field Imports_Imported, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Imports_Imported, put = __cordl_internal_set_Imports_Imported)) int64_t Imports_Imported;

  /// @brief Field Imports_ImportedInProcess, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Imports_ImportedInProcess, put = __cordl_internal_set_Imports_ImportedInProcess)) int64_t Imports_ImportedInProcess;

  /// @brief Field Imports_ImportedOutOfProcess, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Imports_ImportedOutOfProcess, put = __cordl_internal_set_Imports_ImportedOutOfProcess)) int64_t Imports_ImportedOutOfProcess;

  /// @brief Field Imports_Refresh, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Imports_Refresh, put = __cordl_internal_set_Imports_Refresh)) int64_t Imports_Refresh;

  /// @brief Field isV2, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_isV2, put = __cordl_internal_set_isV2)) bool isV2;

  /// @brief Method CreateAssetDatabaseRefreshAnalytic, addr 0x6bf0580, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic* CreateAssetDatabaseRefreshAnalytic();

  static inline ::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic* New_ctor();

  constexpr int64_t const& __cordl_internal_get_CacheServer_ArtifactFilesDownloaded() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_ArtifactFilesDownloaded();

  constexpr int64_t const& __cordl_internal_get_CacheServer_ArtifactFilesFailedToDownload() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_ArtifactFilesFailedToDownload();

  constexpr int64_t const& __cordl_internal_get_CacheServer_ArtifactFilesFailedToUpload() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_ArtifactFilesFailedToUpload();

  constexpr int64_t const& __cordl_internal_get_CacheServer_ArtifactFilesUploaded() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_ArtifactFilesUploaded();

  constexpr int64_t const& __cordl_internal_get_CacheServer_ArtifactsDownloaded() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_ArtifactsDownloaded();

  constexpr int64_t const& __cordl_internal_get_CacheServer_ArtifactsFailedToUpload() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_ArtifactsFailedToUpload();

  constexpr int64_t const& __cordl_internal_get_CacheServer_ArtifactsUploaded() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_ArtifactsUploaded();

  constexpr int64_t const& __cordl_internal_get_CacheServer_Connects() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_Connects();

  constexpr int64_t const& __cordl_internal_get_CacheServer_Disconnects() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_Disconnects();

  constexpr int64_t const& __cordl_internal_get_CacheServer_MetadataDownloaded() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_MetadataDownloaded();

  constexpr int64_t const& __cordl_internal_get_CacheServer_MetadataFailedToDownload() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_MetadataFailedToDownload();

  constexpr int64_t const& __cordl_internal_get_CacheServer_MetadataMatched() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_MetadataMatched();

  constexpr int64_t const& __cordl_internal_get_CacheServer_MetadataRequested() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_MetadataRequested();

  constexpr int64_t const& __cordl_internal_get_CacheServer_MetadataUploaded() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_MetadataUploaded();

  constexpr int64_t const& __cordl_internal_get_CacheServer_MetadataVersionsDownloaded() const;

  constexpr int64_t& __cordl_internal_get_CacheServer_MetadataVersionsDownloaded();

  constexpr int64_t const& __cordl_internal_get_Imports_DomainReload() const;

  constexpr int64_t& __cordl_internal_get_Imports_DomainReload();

  constexpr int64_t const& __cordl_internal_get_Imports_Imported() const;

  constexpr int64_t& __cordl_internal_get_Imports_Imported();

  constexpr int64_t const& __cordl_internal_get_Imports_ImportedInProcess() const;

  constexpr int64_t& __cordl_internal_get_Imports_ImportedInProcess();

  constexpr int64_t const& __cordl_internal_get_Imports_ImportedOutOfProcess() const;

  constexpr int64_t& __cordl_internal_get_Imports_ImportedOutOfProcess();

  constexpr int64_t const& __cordl_internal_get_Imports_Refresh() const;

  constexpr int64_t& __cordl_internal_get_Imports_Refresh();

  constexpr bool const& __cordl_internal_get_isV2() const;

  constexpr bool& __cordl_internal_get_isV2();

  constexpr void __cordl_internal_set_CacheServer_ArtifactFilesDownloaded(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_ArtifactFilesFailedToDownload(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_ArtifactFilesFailedToUpload(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_ArtifactFilesUploaded(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_ArtifactsDownloaded(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_ArtifactsFailedToUpload(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_ArtifactsUploaded(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_Connects(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_Disconnects(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_MetadataDownloaded(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_MetadataFailedToDownload(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_MetadataMatched(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_MetadataRequested(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_MetadataUploaded(int64_t value);

  constexpr void __cordl_internal_set_CacheServer_MetadataVersionsDownloaded(int64_t value);

  constexpr void __cordl_internal_set_Imports_DomainReload(int64_t value);

  constexpr void __cordl_internal_set_Imports_Imported(int64_t value);

  constexpr void __cordl_internal_set_Imports_ImportedInProcess(int64_t value);

  constexpr void __cordl_internal_set_Imports_ImportedOutOfProcess(int64_t value);

  constexpr void __cordl_internal_set_Imports_Refresh(int64_t value);

  constexpr void __cordl_internal_set_isV2(bool value);

  /// @brief Method .ctor, addr 0x6bf0508, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetDatabaseRefreshAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetDatabaseRefreshAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetDatabaseRefreshAnalytic(AssetDatabaseRefreshAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetDatabaseRefreshAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetDatabaseRefreshAnalytic(AssetDatabaseRefreshAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22553 };

  /// @brief Field isV2, offset: 0x2c, size: 0x1, def value: None
  bool ___isV2;

  /// @brief Field Imports_Imported, offset: 0x30, size: 0x8, def value: None
  int64_t ___Imports_Imported;

  /// @brief Field Imports_ImportedInProcess, offset: 0x38, size: 0x8, def value: None
  int64_t ___Imports_ImportedInProcess;

  /// @brief Field Imports_ImportedOutOfProcess, offset: 0x40, size: 0x8, def value: None
  int64_t ___Imports_ImportedOutOfProcess;

  /// @brief Field Imports_Refresh, offset: 0x48, size: 0x8, def value: None
  int64_t ___Imports_Refresh;

  /// @brief Field Imports_DomainReload, offset: 0x50, size: 0x8, def value: None
  int64_t ___Imports_DomainReload;

  /// @brief Field CacheServer_MetadataRequested, offset: 0x58, size: 0x8, def value: None
  int64_t ___CacheServer_MetadataRequested;

  /// @brief Field CacheServer_MetadataDownloaded, offset: 0x60, size: 0x8, def value: None
  int64_t ___CacheServer_MetadataDownloaded;

  /// @brief Field CacheServer_MetadataFailedToDownload, offset: 0x68, size: 0x8, def value: None
  int64_t ___CacheServer_MetadataFailedToDownload;

  /// @brief Field CacheServer_MetadataUploaded, offset: 0x70, size: 0x8, def value: None
  int64_t ___CacheServer_MetadataUploaded;

  /// @brief Field CacheServer_ArtifactsFailedToUpload, offset: 0x78, size: 0x8, def value: None
  int64_t ___CacheServer_ArtifactsFailedToUpload;

  /// @brief Field CacheServer_MetadataVersionsDownloaded, offset: 0x80, size: 0x8, def value: None
  int64_t ___CacheServer_MetadataVersionsDownloaded;

  /// @brief Field CacheServer_MetadataMatched, offset: 0x88, size: 0x8, def value: None
  int64_t ___CacheServer_MetadataMatched;

  /// @brief Field CacheServer_ArtifactsDownloaded, offset: 0x90, size: 0x8, def value: None
  int64_t ___CacheServer_ArtifactsDownloaded;

  /// @brief Field CacheServer_ArtifactFilesDownloaded, offset: 0x98, size: 0x8, def value: None
  int64_t ___CacheServer_ArtifactFilesDownloaded;

  /// @brief Field CacheServer_ArtifactFilesFailedToDownload, offset: 0xa0, size: 0x8, def value: None
  int64_t ___CacheServer_ArtifactFilesFailedToDownload;

  /// @brief Field CacheServer_ArtifactsUploaded, offset: 0xa8, size: 0x8, def value: None
  int64_t ___CacheServer_ArtifactsUploaded;

  /// @brief Field CacheServer_ArtifactFilesUploaded, offset: 0xb0, size: 0x8, def value: None
  int64_t ___CacheServer_ArtifactFilesUploaded;

  /// @brief Field CacheServer_ArtifactFilesFailedToUpload, offset: 0xb8, size: 0x8, def value: None
  int64_t ___CacheServer_ArtifactFilesFailedToUpload;

  /// @brief Field CacheServer_Connects, offset: 0xc0, size: 0x8, def value: None
  int64_t ___CacheServer_Connects;

  /// @brief Field CacheServer_Disconnects, offset: 0xc8, size: 0x8, def value: None
  int64_t ___CacheServer_Disconnects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___isV2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___Imports_Imported) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___Imports_ImportedInProcess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___Imports_ImportedOutOfProcess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___Imports_Refresh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___Imports_DomainReload) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_MetadataRequested) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_MetadataDownloaded) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_MetadataFailedToDownload) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_MetadataUploaded) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_ArtifactsFailedToUpload) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_MetadataVersionsDownloaded) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_MetadataMatched) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_ArtifactsDownloaded) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_ArtifactFilesDownloaded) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_ArtifactFilesFailedToDownload) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_ArtifactsUploaded) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_ArtifactFilesUploaded) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_ArtifactFilesFailedToUpload) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_Connects) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, ___CacheServer_Disconnects) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic, 0xd0>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::AssetDatabaseRefreshAnalytic*, "UnityEditor.Analytics", "AssetDatabaseRefreshAnalytic");
