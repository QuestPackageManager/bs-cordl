#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__ScriptableObjectReferenceAsyncInstaller_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicInstaller)
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicInstaller);
// Type: ::BeatmapCharacteristicInstaller
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapCharacteristicInstaller*
class CORDL_TYPE BeatmapCharacteristicInstaller : public ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>> {
public:
  // Declarations
  __declspec(property(get = get_assetRuntimeKey))::StringW assetRuntimeKey;

  /// @brief Method InstallBindings, addr 0x25feaf0, size 0x7c, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadCharacteristicCollectionAsync, addr 0x25feb6c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>> LoadCharacteristicCollectionAsync();

  static inline ::GlobalNamespace::BeatmapCharacteristicInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x25febe8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetRuntimeKey, addr 0x25feab0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_assetRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicInstaller(BeatmapCharacteristicInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicInstaller(BeatmapCharacteristicInstaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicInstaller, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicInstaller*, "", "BeatmapCharacteristicInstaller");
