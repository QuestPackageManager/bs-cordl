#pragma once
// IWYU pragma private; include "GlobalNamespace/VideoProjectionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(VideoProjectionInstaller)
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoProjectionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VideoProjectionInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: VideoProjectionInstaller
class CORDL_TYPE VideoProjectionInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::EnvironmentSceneSetupData* _sceneSetupData;

  /// @brief Method InstallBindings, addr 0x3ba92fc, size 0xc0, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::VideoProjectionInstaller* New_ctor();

  constexpr ::GlobalNamespace::EnvironmentSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::EnvironmentSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData* value);

  /// @brief Method .ctor, addr 0x3ba93bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoProjectionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoProjectionInstaller(VideoProjectionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoProjectionInstaller(VideoProjectionInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4356 };

  /// @brief Field _sceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VideoProjectionInstaller, ____sceneSetupData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VideoProjectionInstaller, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VideoProjectionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionInstaller*, "", "VideoProjectionInstaller");
