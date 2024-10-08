#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentSceneSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentSceneSetup)
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentSceneSetup);
// Type: ::EnvironmentSceneSetup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentSceneSetup*
class CORDL_TYPE EnvironmentSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::EnvironmentSceneSetupData* _sceneSetupData;

  /// @brief Field trackLaneYPositionPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_trackLaneYPositionPropertyId, put = setStaticF_trackLaneYPositionPropertyId)) int32_t trackLaneYPositionPropertyId;

  /// @brief Method InstallBindings, addr 0x3ac211c, size 0x184, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::EnvironmentSceneSetup* New_ctor();

  constexpr ::GlobalNamespace::EnvironmentSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData* value);

  /// @brief Method .ctor, addr 0x3ac22a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_trackLaneYPositionPropertyId();

  static inline void setStaticF_trackLaneYPositionPropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentSceneSetup(EnvironmentSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentSceneSetup(EnvironmentSceneSetup const&) = delete;

  /// @brief Field _sceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentSceneSetupData* ____sceneSetupData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5194 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSceneSetup, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetup, ____sceneSetupData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSceneSetup*, "", "EnvironmentSceneSetup");
