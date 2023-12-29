#pragma once
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11066))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6084))
// CS Name: ::EnvironmentSceneSetup*
class CORDL_TYPE EnvironmentSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::EnvironmentSceneSetupData* _sceneSetupData;

  /// @brief Field trackLaneYPositionPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_trackLaneYPositionPropertyId, put = setStaticF_trackLaneYPositionPropertyId)) int32_t trackLaneYPositionPropertyId;

  constexpr ::GlobalNamespace::EnvironmentSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData* value);

  static inline void setStaticF_trackLaneYPositionPropertyId(int32_t value);

  static inline int32_t getStaticF_trackLaneYPositionPropertyId();

  /// @brief Method InstallBindings addr 0x21c5c5c size 0x168 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::EnvironmentSceneSetup* New_ctor();

  /// @brief Method .ctor addr 0x21c5dc4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentSceneSetup(EnvironmentSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentSceneSetup(EnvironmentSceneSetup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSceneSetup();

public:
  /// @brief Field _sceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSceneSetup, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetup, ____sceneSetupData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSceneSetup*, "", "EnvironmentSceneSetup");
