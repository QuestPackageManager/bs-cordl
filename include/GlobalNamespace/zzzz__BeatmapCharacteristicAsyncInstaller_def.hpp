#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicAsyncInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__ScriptableObjectReferenceAsyncInstaller_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicAsyncInstaller)
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicAsyncInstaller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*, "", "BeatmapCharacteristicAsyncInstaller");
// Dependencies BGLib.AppFlow.Initialization.ScriptableObjectReferenceAsyncInstaller`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicAsyncInstaller
class CORDL_TYPE BeatmapCharacteristicAsyncInstaller
    : public ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>> {
public:
  // Declarations
  __declspec(property(get = get_assetRuntimeKey)) ::StringW assetRuntimeKey;

  /// @brief Method InstallBindings, addr 0x37689ec, size 0x98, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadCharacteristicCollectionAsync, addr 0x3768a84, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>> LoadCharacteristicCollectionAsync();

  static inline ::GlobalNamespace::BeatmapCharacteristicAsyncInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x3768b08, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetRuntimeKey, addr 0x37689a8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_assetRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicAsyncInstaller(BeatmapCharacteristicAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicAsyncInstaller(BeatmapCharacteristicAsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20953 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicAsyncInstaller) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
