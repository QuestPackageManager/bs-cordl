#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionStagesManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionStagesManager)
namespace GlobalNamespace {
class MissionStageLockView;
}
namespace GlobalNamespace {
class MissionStage;
}
namespace GlobalNamespace {
class __MissionStagesManager____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionStagesManager;
}
namespace GlobalNamespace {
class __MissionStagesManager____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionStagesManager);
MARK_REF_PTR_T(::GlobalNamespace::__MissionStagesManager____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionStagesManager::<>c*
class CORDL_TYPE __MissionStagesManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__MissionStagesManager____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>* __9__6_0;

  static inline ::GlobalNamespace::__MissionStagesManager____c* New_ctor();

  /// @brief Method <InitStages>b__6_0, addr 0x3ba62c8, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitStages_b__6_0(::GlobalNamespace::MissionStage* stage);

  /// @brief Method .ctor, addr 0x3ba62c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__MissionStagesManager____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>* getStaticF___9__6_0();

  static inline void setStaticF___9(::GlobalNamespace::__MissionStagesManager____c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionStagesManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionStagesManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionStagesManager____c(__MissionStagesManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionStagesManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionStagesManager____c(__MissionStagesManager____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4807 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionStagesManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionStagesManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionStagesManager*
class CORDL_TYPE MissionStagesManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MissionStagesManager____c;

  /// @brief Field _firstLockedMissionStage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__firstLockedMissionStage, put = __cordl_internal_set__firstLockedMissionStage)) ::UnityW<::GlobalNamespace::MissionStage> _firstLockedMissionStage;

  /// @brief Field _missionStageLockView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionStageLockView, put = __cordl_internal_set__missionStageLockView)) ::UnityW<::GlobalNamespace::MissionStageLockView> _missionStageLockView;

  /// @brief Field _missionStages, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionStages,
                      put = __cordl_internal_set__missionStages)) ::ArrayW<::UnityW<::GlobalNamespace::MissionStage>, ::Array<::UnityW<::GlobalNamespace::MissionStage>>*>
      _missionStages;

  __declspec(property(get = get_firstLockedMissionStage)) ::UnityW<::GlobalNamespace::MissionStage> firstLockedMissionStage;

  /// @brief Method InitStages, addr 0x3ba6054, size 0x144, virtual false, abstract: false, final false
  inline void InitStages();

  static inline ::GlobalNamespace::MissionStagesManager* New_ctor();

  /// @brief Method UpdateFirtsLockedMissionStage, addr 0x3ba5fc4, size 0x90, virtual false, abstract: false, final false
  inline void UpdateFirtsLockedMissionStage(int32_t numberOfClearedMissions);

  /// @brief Method UpdateStageLockPosition, addr 0x3ba6198, size 0xc, virtual false, abstract: false, final false
  inline void UpdateStageLockPosition();

  /// @brief Method UpdateStageLockPositionAnimated, addr 0x3ba4be4, size 0xf0, virtual false, abstract: false, final false
  inline void UpdateStageLockPositionAnimated(bool animated, float_t animationDuration);

  /// @brief Method UpdateStageLockText, addr 0x3ba61a4, size 0xb8, virtual false, abstract: false, final false
  inline void UpdateStageLockText(int32_t numberOfClearedMissions);

  constexpr ::UnityW<::GlobalNamespace::MissionStage> const& __cordl_internal_get__firstLockedMissionStage() const;

  constexpr ::UnityW<::GlobalNamespace::MissionStage>& __cordl_internal_get__firstLockedMissionStage();

  constexpr ::UnityW<::GlobalNamespace::MissionStageLockView> const& __cordl_internal_get__missionStageLockView() const;

  constexpr ::UnityW<::GlobalNamespace::MissionStageLockView>& __cordl_internal_get__missionStageLockView();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionStage>, ::Array<::UnityW<::GlobalNamespace::MissionStage>>*> const& __cordl_internal_get__missionStages() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionStage>, ::Array<::UnityW<::GlobalNamespace::MissionStage>>*>& __cordl_internal_get__missionStages();

  constexpr void __cordl_internal_set__firstLockedMissionStage(::UnityW<::GlobalNamespace::MissionStage> value);

  constexpr void __cordl_internal_set__missionStageLockView(::UnityW<::GlobalNamespace::MissionStageLockView> value);

  constexpr void __cordl_internal_set__missionStages(::ArrayW<::UnityW<::GlobalNamespace::MissionStage>, ::Array<::UnityW<::GlobalNamespace::MissionStage>>*> value);

  /// @brief Method .ctor, addr 0x3ba625c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_firstLockedMissionStage, addr 0x3ba5fbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionStage> get_firstLockedMissionStage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionStagesManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionStagesManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionStagesManager(MissionStagesManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionStagesManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionStagesManager(MissionStagesManager const&) = delete;

  /// @brief Field _missionStageLockView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionStageLockView> ____missionStageLockView;

  /// @brief Field _missionStages, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionStage>, ::Array<::UnityW<::GlobalNamespace::MissionStage>>*> ____missionStages;

  /// @brief Field _firstLockedMissionStage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionStage> ____firstLockedMissionStage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionStagesManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStagesManager, ____missionStageLockView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStagesManager, ____missionStages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStagesManager, ____firstLockedMissionStage) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionStagesManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionStagesManager*, "", "MissionStagesManager");
NEED_NO_BOX(::GlobalNamespace::__MissionStagesManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionStagesManager____c*, "", "MissionStagesManager/<>c");
