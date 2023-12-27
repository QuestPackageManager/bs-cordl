#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSceneSetupData)
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSceneSetupData);
// Type: ::RecordingToolSceneSetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6056))
// CS Name: ::RecordingToolSceneSetupData*
class CORDL_TYPE RecordingToolSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field _nextScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __get__nextScenesTransitionSetupData, put = __set__nextScenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* _nextScenesTransitionSetupData;

  __declspec(property(get = get_nextScenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get__nextScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get__nextScenesTransitionSetupData() const;

  constexpr void __set__nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  /// @brief Method get_nextScenesTransitionSetupData addr 0x231cd94 size 0x8 virtual false final false
  inline ::GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();

  static inline ::GlobalNamespace::RecordingToolSceneSetupData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  /// @brief Method .ctor addr 0x231cd9c size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSceneSetupData(RecordingToolSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSceneSetupData(RecordingToolSceneSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSceneSetupData();

public:
  /// @brief Field _nextScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ____nextScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSceneSetupData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSceneSetupData*, "", "RecordingToolSceneSetupData");
