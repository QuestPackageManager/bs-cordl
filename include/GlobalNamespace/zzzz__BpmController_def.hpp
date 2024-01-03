#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BpmController)
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class __BpmController__InitData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BPMChangeBeatmapEventData;
}
namespace GlobalNamespace {
class IBpmController;
}
// Forward declare root types
namespace GlobalNamespace {
class BpmController;
}
namespace GlobalNamespace {
class __BpmController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BpmController);
MARK_REF_PTR_T(::GlobalNamespace::__BpmController__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4832))
// CS Name: ::BpmController::InitData*
class CORDL_TYPE __BpmController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field startBpm, offset 0x10, size 0x4
  __declspec(property(get = __get_startBpm, put = __set_startBpm)) float_t startBpm;

  constexpr float_t& __get_startBpm();

  constexpr float_t const& __get_startBpm() const;

  constexpr void __set_startBpm(float_t value);

  static inline ::GlobalNamespace::__BpmController__InitData* New_ctor(float_t startBpm);

  /// @brief Method .ctor, addr 0x23962a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t startBpm);

  // Ctor Parameters [CppParam { name: "", ty: "__BpmController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BpmController__InitData(__BpmController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BpmController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BpmController__InitData(__BpmController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BpmController__InitData();

public:
  /// @brief Field startBpm, offset: 0x10, size: 0x4, def value: None
  float_t ___startBpm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BpmController__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BpmController__InitData, ___startBpm) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BpmController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4833))
// CS Name: ::BpmController*
class CORDL_TYPE BpmController : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__BpmController__InitData;

  /// @brief Field _beatmapCallbacksController, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallback, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapDataCallback, put = __set__beatmapDataCallback))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallback;

  /// @brief Field _currentBpm, offset 0x20, size 0x4
  __declspec(property(get = __get__currentBpm, put = __set__currentBpm)) float_t _currentBpm;

  __declspec(property(get = get_currentBpm)) float_t currentBpm;

  __declspec(property(get = get_oneBeatDuration)) float_t oneBeatDuration;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IBpmController"
  constexpr operator ::GlobalNamespace::IBpmController*() noexcept;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallback() const;

  constexpr void __set__beatmapDataCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr float_t& __get__currentBpm();

  constexpr float_t const& __get__currentBpm() const;

  constexpr void __set__currentBpm(float_t value);

  /// @brief Method get_currentBpm, addr 0x2396178, size 0x8, virtual true, abstract: false, final true
  inline float_t get_currentBpm();

  /// @brief Method get_oneBeatDuration, addr 0x2396180, size 0x20, virtual true, abstract: false, final true
  inline float_t get_oneBeatDuration();

  static inline ::GlobalNamespace::BpmController* New_ctor(::GlobalNamespace::__BpmController__InitData* initData, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method .ctor, addr 0x23961a0, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BpmController__InitData* initData, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method Dispose, addr 0x2396270, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleBpmChangeBeatmapEvent, addr 0x239628c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleBpmChangeBeatmapEvent(::GlobalNamespace::BPMChangeBeatmapEventData* bpmChangeBeatmapEventData);

  // Ctor Parameters [CppParam { name: "", ty: "BpmController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BpmController(BpmController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BpmController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BpmController(BpmController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BpmController();

public:
  /// @brief Field _beatmapCallbacksController, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallback, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallback;

  /// @brief Field _currentBpm, offset: 0x20, size: 0x4, def value: None
  float_t ____currentBpm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BpmController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmController, ____beatmapCallbacksController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmController, ____beatmapDataCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BpmController, ____currentBpm) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BpmController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BpmController*, "", "BpmController");
NEED_NO_BOX(::GlobalNamespace::__BpmController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BpmController__InitData*, "", "BpmController/InitData");
