#pragma once
// IWYU pragma private; include "GlobalNamespace/BpmController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BpmController)
namespace GlobalNamespace {
class BPMChangeBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BpmController_InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class BpmController;
}
namespace GlobalNamespace {
class BpmController_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BpmController);
MARK_REF_PTR_T(::GlobalNamespace::BpmController_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BpmController/InitData
class CORDL_TYPE BpmController_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field startBpm, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_startBpm, put = __cordl_internal_set_startBpm)) float_t startBpm;

  static inline ::GlobalNamespace::BpmController_InitData* New_ctor(float_t startBpm);

  constexpr float_t const& __cordl_internal_get_startBpm() const;

  constexpr float_t& __cordl_internal_get_startBpm();

  constexpr void __cordl_internal_set_startBpm(float_t value);

  /// @brief Method .ctor, addr 0x3b79668, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t startBpm);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BpmController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BpmController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BpmController_InitData(BpmController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BpmController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BpmController_InitData(BpmController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4183 };

  /// @brief Field startBpm, offset: 0x10, size: 0x4, def value: None
  float_t ___startBpm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BpmController_InitData, ___startBpm) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BpmController_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBpmController, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BpmController
class CORDL_TYPE BpmController : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::BpmController_InitData;

  /// @brief Field _beatmapCallbacksController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallback, put = __cordl_internal_set__beatmapDataCallback)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallback;

  /// @brief Field _currentBpm, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__currentBpm, put = __cordl_internal_set__currentBpm)) float_t _currentBpm;

  __declspec(property(get = get_currentBpm)) float_t currentBpm;

  __declspec(property(get = get_oneBeatDuration)) float_t oneBeatDuration;

  /// @brief Convert operator to "::GlobalNamespace::IBpmController"
  constexpr operator ::GlobalNamespace::IBpmController*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3b79630, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleBpmChangeBeatmapEvent, addr 0x3b7964c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleBpmChangeBeatmapEvent(::GlobalNamespace::BPMChangeBeatmapEventData* bpmChangeBeatmapEventData);

  static inline ::GlobalNamespace::BpmController* New_ctor(::GlobalNamespace::BpmController_InitData* initData, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallback() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallback();

  constexpr float_t const& __cordl_internal_get__currentBpm() const;

  constexpr float_t& __cordl_internal_get__currentBpm();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__currentBpm(float_t value);

  /// @brief Method .ctor, addr 0x3b7955c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BpmController_InitData* initData, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method get_currentBpm, addr 0x3b79534, size 0x8, virtual true, abstract: false, final true
  inline float_t get_currentBpm();

  /// @brief Method get_oneBeatDuration, addr 0x3b7953c, size 0x20, virtual true, abstract: false, final true
  inline float_t get_oneBeatDuration();

  /// @brief Convert to "::GlobalNamespace::IBpmController"
  constexpr ::GlobalNamespace::IBpmController* i___GlobalNamespace__IBpmController() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BpmController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BpmController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BpmController(BpmController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BpmController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BpmController(BpmController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4184 };

  /// @brief Field _beatmapCallbacksController, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallback, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallback;

  /// @brief Field _currentBpm, offset: 0x20, size: 0x4, def value: None
  float_t ____currentBpm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BpmController, ____beatmapCallbacksController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmController, ____beatmapDataCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmController, ____currentBpm) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BpmController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BpmController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BpmController*, "", "BpmController");
NEED_NO_BOX(::GlobalNamespace::BpmController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BpmController_InitData*, "", "BpmController/InitData");
