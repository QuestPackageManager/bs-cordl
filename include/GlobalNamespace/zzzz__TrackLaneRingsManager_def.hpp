#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackLaneRingsManager)
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class TrackLaneRing;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRingsManager);
// Type: ::TrackLaneRingsManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5109))
// CS Name: ::TrackLaneRingsManager*
class CORDL_TYPE TrackLaneRingsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _trackLaneRingPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__trackLaneRingPrefab, put = __set__trackLaneRingPrefab))::GlobalNamespace::TrackLaneRing* _trackLaneRingPrefab;

  /// @brief Field _ringCount, offset 0x20, size 0x4
  __declspec(property(get = __get__ringCount, put = __set__ringCount)) int32_t _ringCount;

  /// @brief Field _ringPositionStep, offset 0x24, size 0x4
  __declspec(property(get = __get__ringPositionStep, put = __set__ringPositionStep)) float_t _ringPositionStep;

  /// @brief Field _spawnAsChildren, offset 0x28, size 0x1
  __declspec(property(get = __get__spawnAsChildren, put = __set__spawnAsChildren)) bool _spawnAsChildren;

  /// @brief Field _container, offset 0x30, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _rings, offset 0x38, size 0x8
  __declspec(property(get = __get__rings, put = __set__rings))::ArrayW<::GlobalNamespace::TrackLaneRing*, ::Array<::GlobalNamespace::TrackLaneRing*>*> _rings;

  __declspec(property(get = get_ringPositionStep)) float_t ringPositionStep;

  __declspec(property(get = get_Rings))::ArrayW<::GlobalNamespace::TrackLaneRing*, ::Array<::GlobalNamespace::TrackLaneRing*>*> Rings;

  constexpr ::GlobalNamespace::TrackLaneRing*& __get__trackLaneRingPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TrackLaneRing*> const& __get__trackLaneRingPrefab() const;

  constexpr void __set__trackLaneRingPrefab(::GlobalNamespace::TrackLaneRing* value);

  constexpr int32_t& __get__ringCount();

  constexpr int32_t const& __get__ringCount() const;

  constexpr void __set__ringCount(int32_t value);

  constexpr float_t& __get__ringPositionStep();

  constexpr float_t const& __get__ringPositionStep() const;

  constexpr void __set__ringPositionStep(float_t value);

  constexpr bool& __get__spawnAsChildren();

  constexpr bool const& __get__spawnAsChildren() const;

  constexpr void __set__spawnAsChildren(bool value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::ArrayW<::GlobalNamespace::TrackLaneRing*, ::Array<::GlobalNamespace::TrackLaneRing*>*>& __get__rings();

  constexpr ::ArrayW<::GlobalNamespace::TrackLaneRing*, ::Array<::GlobalNamespace::TrackLaneRing*>*> const& __get__rings() const;

  constexpr void __set__rings(::ArrayW<::GlobalNamespace::TrackLaneRing*, ::Array<::GlobalNamespace::TrackLaneRing*>*> value);

  /// @brief Method get_ringPositionStep addr 0x227eab0 size 0x8 virtual false final false
  inline float_t get_ringPositionStep();

  /// @brief Method get_Rings addr 0x227eab8 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::TrackLaneRing*, ::Array<::GlobalNamespace::TrackLaneRing*>*> get_Rings();

  /// @brief Method Start addr 0x227eac0 size 0x2b0 virtual false final false
  inline void Start();

  /// @brief Method FixedUpdate addr 0x227ed70 size 0x9c virtual false final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate addr 0x227ee0c size 0x9c virtual false final false
  inline void LateUpdate();

  /// @brief Method OnDrawGizmosSelected addr 0x227eea8 size 0x284 virtual false final false
  inline void OnDrawGizmosSelected();

  static inline ::GlobalNamespace::TrackLaneRingsManager* New_ctor();

  /// @brief Method .ctor addr 0x227f12c size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackLaneRingsManager(TrackLaneRingsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackLaneRingsManager(TrackLaneRingsManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackLaneRingsManager();

public:
  /// @brief Field _trackLaneRingPrefab, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TrackLaneRing* ____trackLaneRingPrefab;

  /// @brief Field _ringCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____ringCount;

  /// @brief Field _ringPositionStep, offset: 0x24, size: 0x4, def value: None
  float_t ____ringPositionStep;

  /// @brief Field _spawnAsChildren, offset: 0x28, size: 0x1, def value: None
  bool ____spawnAsChildren;

  /// @brief Field _container, offset: 0x30, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _rings, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::TrackLaneRing*, ::Array<::GlobalNamespace::TrackLaneRing*>*> ____rings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____trackLaneRingPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____ringCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____ringPositionStep) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____spawnAsChildren) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____container) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsManager, ____rings) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsManager*, "", "TrackLaneRingsManager");
