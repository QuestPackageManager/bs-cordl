#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatmapDataAssetFileModel)
namespace System {
template <typename T> class Action_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapDataAssetFileModel);
// Type: ::IBeatmapDataAssetFileModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4412))
// CS Name: ::IBeatmapDataAssetFileModel*
class CORDL_TYPE IBeatmapDataAssetFileModel {
public:
  // Declarations
  /// @brief Method add_levelDataAssetDownloadUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method remove_levelDataAssetDownloadUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method GetAssetBundleFileForPreviewLevelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapDataAssetFileModel(IBeatmapDataAssetFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapDataAssetFileModel(IBeatmapDataAssetFileModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapDataAssetFileModel*, "", "IBeatmapDataAssetFileModel");
