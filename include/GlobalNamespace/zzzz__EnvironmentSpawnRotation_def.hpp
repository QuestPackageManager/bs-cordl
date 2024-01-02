#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentSpawnRotation)
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentSpawnRotation);
// Type: ::EnvironmentSpawnRotation
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4983))
// CS Name: ::EnvironmentSpawnRotation*
class CORDL_TYPE EnvironmentSpawnRotation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _aheadTime, offset 0x18, size 0x4
  __declspec(property(get = __get__aheadTime, put = __set__aheadTime)) float_t _aheadTime;

  /// @brief Field _smooth, offset 0x1c, size 0x4
  __declspec(property(get = __get__smooth, put = __set__smooth)) float_t _smooth;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _currentRotation, offset 0x30, size 0x4
  __declspec(property(get = __get__currentRotation, put = __set__currentRotation)) float_t _currentRotation;

  /// @brief Field _prevRotation, offset 0x34, size 0x4
  __declspec(property(get = __get__prevRotation, put = __set__prevRotation)) float_t _prevRotation;

  /// @brief Field _targetRotation, offset 0x38, size 0x4
  __declspec(property(get = __get__targetRotation, put = __set__targetRotation)) float_t _targetRotation;

  /// @brief Field _spawnRotationID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__spawnRotationID, put = setStaticF__spawnRotationID)) int32_t _spawnRotationID;

  /// @brief Field _numberOfActiveEnvironmentSpawnRotationObjects, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__numberOfActiveEnvironmentSpawnRotationObjects,
                             put = setStaticF__numberOfActiveEnvironmentSpawnRotationObjects)) int32_t _numberOfActiveEnvironmentSpawnRotationObjects;

  __declspec(property(get = get_targetRotation)) float_t targetRotation;

  constexpr float_t& __get__aheadTime();

  constexpr float_t const& __get__aheadTime() const;

  constexpr void __set__aheadTime(float_t value);

  constexpr float_t& __get__smooth();

  constexpr float_t const& __get__smooth() const;

  constexpr void __set__smooth(float_t value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr float_t& __get__currentRotation();

  constexpr float_t const& __get__currentRotation() const;

  constexpr void __set__currentRotation(float_t value);

  constexpr float_t& __get__prevRotation();

  constexpr float_t const& __get__prevRotation() const;

  constexpr void __set__prevRotation(float_t value);

  constexpr float_t& __get__targetRotation();

  constexpr float_t const& __get__targetRotation() const;

  constexpr void __set__targetRotation(float_t value);

  static inline void setStaticF__spawnRotationID(int32_t value);

  static inline int32_t getStaticF__spawnRotationID();

  static inline void setStaticF__numberOfActiveEnvironmentSpawnRotationObjects(int32_t value);

  static inline int32_t getStaticF__numberOfActiveEnvironmentSpawnRotationObjects();

  /// @brief Method get_targetRotation, addr 0x23b3c0c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_targetRotation();

  /// @brief Method OnEnable, addr 0x23b3c14, size 0x60, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x23b3c74, size 0x60, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Start, addr 0x23b3cd4, size 0x164, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23b3e38, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleSpawnRotationBeatmapEvent, addr 0x23b3e54, size 0x104, virtual false, abstract: false, final false
  inline void HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);

  /// @brief Method FixedUpdate, addr 0x23b3f58, size 0x90, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x23b3fe8, size 0x128, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::EnvironmentSpawnRotation* New_ctor();

  /// @brief Method .ctor, addr 0x23b4110, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSpawnRotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentSpawnRotation(EnvironmentSpawnRotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSpawnRotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentSpawnRotation(EnvironmentSpawnRotation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSpawnRotation();

public:
  /// @brief Field _aheadTime, offset: 0x18, size: 0x4, def value: None
  float_t ____aheadTime;

  /// @brief Field _smooth, offset: 0x1c, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief Field _currentRotation, offset: 0x30, size: 0x4, def value: None
  float_t ____currentRotation;

  /// @brief Field _prevRotation, offset: 0x34, size: 0x4, def value: None
  float_t ____prevRotation;

  /// @brief Field _targetRotation, offset: 0x38, size: 0x4, def value: None
  float_t ____targetRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSpawnRotation, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____aheadTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____smooth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____beatmapDataCallbackWrapper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____currentRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____prevRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____targetRotation) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentSpawnRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSpawnRotation*, "", "EnvironmentSpawnRotation");
