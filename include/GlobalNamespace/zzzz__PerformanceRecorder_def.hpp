#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerformanceRecorder)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class IGamePause;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceRecorder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceRecorder);
// Type: ::PerformanceRecorder
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5945))
// CS Name: ::PerformanceRecorder*
class CORDL_TYPE PerformanceRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field minFpsWindow, offset 0x18, size 0x4
  __declspec(property(get = __get_minFpsWindow, put = __set_minFpsWindow)) float_t minFpsWindow;

  /// @brief Field <gamePause>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__gamePause_k__BackingField, put = __set__gamePause_k__BackingField))::GlobalNamespace::IGamePause* _gamePause_k__BackingField;

  /// @brief Field <sceneSetupData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__sceneSetupData_k__BackingField, put = __set__sceneSetupData_k__BackingField))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData_k__BackingField;

  /// @brief Field frameTimes, offset 0x30, size 0x8
  __declspec(property(get = __get_frameTimes, put = __set_frameTimes))::System::Collections::Generic::List_1<float_t>* frameTimes;

  __declspec(property(get = get_gamePause, put = set_gamePause))::GlobalNamespace::IGamePause* gamePause;

  __declspec(property(get = get_sceneSetupData, put = set_sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;

  constexpr float_t& __get_minFpsWindow();

  constexpr float_t const& __get_minFpsWindow() const;

  constexpr void __set_minFpsWindow(float_t value);

  constexpr ::GlobalNamespace::IGamePause*& __get__gamePause_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __get__gamePause_k__BackingField() const;

  constexpr void __set__gamePause_k__BackingField(::GlobalNamespace::IGamePause* value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData_k__BackingField() const;

  constexpr void __set__sceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::System::Collections::Generic::List_1<float_t>*& __get_frameTimes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& __get_frameTimes() const;

  constexpr void __set_frameTimes(::System::Collections::Generic::List_1<float_t>* value);

  /// @brief Method get_gamePause addr 0x2303fb8 size 0x8 virtual false final false
  inline ::GlobalNamespace::IGamePause* get_gamePause();

  /// @brief Method set_gamePause addr 0x2303fc0 size 0x8 virtual false final false
  inline void set_gamePause(::GlobalNamespace::IGamePause* value);

  /// @brief Method get_sceneSetupData addr 0x2303fc8 size 0x8 virtual false final false
  inline ::GlobalNamespace::GameplayCoreSceneSetupData* get_sceneSetupData();

  /// @brief Method set_sceneSetupData addr 0x2303fd0 size 0x8 virtual false final false
  inline void set_sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method OnEnable addr 0x2303fd8 size 0x50 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2304028 size 0x4 virtual false final false
  inline void OnDisable();

  /// @brief Method Update addr 0x2304250 size 0x124 virtual false final false
  inline void Update();

  /// @brief Method GenerateReports addr 0x230402c size 0x224 virtual false final false
  inline void GenerateReports();

  static inline ::GlobalNamespace::PerformanceRecorder* New_ctor();

  /// @brief Method .ctor addr 0x2304b38 size 0x80 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceRecorder(PerformanceRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceRecorder(PerformanceRecorder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceRecorder();

public:
  /// @brief Field minFpsWindow, offset: 0x18, size: 0x4, def value: None
  float_t ___minFpsWindow;

  /// @brief Field <gamePause>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause_k__BackingField;

  /// @brief Field <sceneSetupData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData_k__BackingField;

  /// @brief Field frameTimes, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ___frameTimes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceRecorder, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceRecorder*, "", "PerformanceRecorder");
