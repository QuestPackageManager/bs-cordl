#pragma once
// IWYU pragma private; include "GlobalNamespace/TrackLaneRingsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackLaneRingsManager)
namespace GlobalNamespace {
class TrackLaneRing;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRingsManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrackLaneRingsManager
class CORDL_TYPE TrackLaneRingsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Rings)) ::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>, ::Array<::UnityW<::GlobalNamespace::TrackLaneRing>>*> Rings;

  /// @brief Field _container, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _ringCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__ringCount, put = __cordl_internal_set__ringCount)) int32_t _ringCount;

  /// @brief Field _ringPositionStep, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__ringPositionStep, put = __cordl_internal_set__ringPositionStep)) float_t _ringPositionStep;

  /// @brief Field _rings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rings, put = __cordl_internal_set__rings)) ::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>, ::Array<::UnityW<::GlobalNamespace::TrackLaneRing>>*>
      _rings;

  /// @brief Field _spawnAsChildren, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__spawnAsChildren, put = __cordl_internal_set__spawnAsChildren)) bool _spawnAsChildren;

  /// @brief Field _trackLaneRingPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trackLaneRingPrefab, put = __cordl_internal_set__trackLaneRingPrefab)) ::UnityW<::GlobalNamespace::TrackLaneRing> _trackLaneRingPrefab;

  __declspec(property(get = get_ringPositionStep)) float_t ringPositionStep;

  /// @brief Method FixedUpdate, addr 0x3b9fbd8, size 0x9c, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x3b9fc74, size 0x9c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::TrackLaneRingsManager* New_ctor();

  /// @brief Method OnDrawGizmosSelected, addr 0x3b9fd10, size 0x284, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method Start, addr 0x3b9f928, size 0x2b0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr int32_t const& __cordl_internal_get__ringCount() const;

  constexpr int32_t& __cordl_internal_get__ringCount();

  constexpr float_t const& __cordl_internal_get__ringPositionStep() const;

  constexpr float_t& __cordl_internal_get__ringPositionStep();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>, ::Array<::UnityW<::GlobalNamespace::TrackLaneRing>>*> const& __cordl_internal_get__rings() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>, ::Array<::UnityW<::GlobalNamespace::TrackLaneRing>>*>& __cordl_internal_get__rings();

  constexpr bool const& __cordl_internal_get__spawnAsChildren() const;

  constexpr bool& __cordl_internal_get__spawnAsChildren();

  constexpr ::UnityW<::GlobalNamespace::TrackLaneRing> const& __cordl_internal_get__trackLaneRingPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::TrackLaneRing>& __cordl_internal_get__trackLaneRingPrefab();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__ringCount(int32_t value);

  constexpr void __cordl_internal_set__ringPositionStep(float_t value);

  constexpr void __cordl_internal_set__rings(::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>, ::Array<::UnityW<::GlobalNamespace::TrackLaneRing>>*> value);

  constexpr void __cordl_internal_set__spawnAsChildren(bool value);

  constexpr void __cordl_internal_set__trackLaneRingPrefab(::UnityW<::GlobalNamespace::TrackLaneRing> value);

  /// @brief Method .ctor, addr 0x3b9ff94, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Rings, addr 0x3b9f920, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>, ::Array<::UnityW<::GlobalNamespace::TrackLaneRing>>*> get_Rings();

  /// @brief Method get_ringPositionStep, addr 0x3b9f918, size 0x8, virtual false, abstract: false, final false
  inline float_t get_ringPositionStep();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackLaneRingsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackLaneRingsManager(TrackLaneRingsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackLaneRingsManager(TrackLaneRingsManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4381 };

  /// @brief Field _trackLaneRingPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TrackLaneRing> ____trackLaneRingPrefab;

  /// @brief Field _ringCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____ringCount;

  /// @brief Field _ringPositionStep, offset: 0x2c, size: 0x4, def value: None
  float_t ____ringPositionStep;

  /// @brief Field _spawnAsChildren, offset: 0x30, size: 0x1, def value: None
  bool ____spawnAsChildren;

  /// @brief Field _container, offset: 0x38, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _rings, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>, ::Array<::UnityW<::GlobalNamespace::TrackLaneRing>>*> ____rings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____trackLaneRingPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____ringCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____ringPositionStep) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____spawnAsChildren) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____container) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____rings) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsManager, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsManager*, "", "TrackLaneRingsManager");
