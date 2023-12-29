#pragma once
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
// Type: ::RecordingToolSceneSetup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11066))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6100))
// CS Name: ::RecordingToolSceneSetup*
class CORDL_TYPE RecordingToolSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::RecordingToolSceneSetupData* _sceneSetupData;

  constexpr ::GlobalNamespace::RecordingToolSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData* value);

  /// @brief Method InstallBindings addr 0x21c8630 size 0xc4 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::RecordingToolSceneSetup* New_ctor();

  /// @brief Method .ctor addr 0x21c86f4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSceneSetup(RecordingToolSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSceneSetup(RecordingToolSceneSetup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSceneSetup();

public:
  /// @brief Field _sceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSceneSetup, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSceneSetup, ____sceneSetupData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSceneSetup*, "", "RecordingToolSceneSetup");
