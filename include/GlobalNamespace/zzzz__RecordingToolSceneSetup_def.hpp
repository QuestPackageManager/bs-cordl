#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSceneSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSceneSetup)
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSceneSetup);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolSceneSetup
class CORDL_TYPE RecordingToolSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::RecordingToolSceneSetupData* _sceneSetupData;

  /// @brief Method InstallBindings, addr 0x3b47ecc, size 0xc0, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::RecordingToolSceneSetup* New_ctor();

  constexpr ::GlobalNamespace::RecordingToolSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::RecordingToolSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData* value);

  /// @brief Method .ctor, addr 0x3b47f8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSceneSetup(RecordingToolSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSceneSetup(RecordingToolSceneSetup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5235 };

  /// @brief Field _sceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolSceneSetup, ____sceneSetupData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSceneSetup, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSceneSetup*, "", "RecordingToolSceneSetup");
