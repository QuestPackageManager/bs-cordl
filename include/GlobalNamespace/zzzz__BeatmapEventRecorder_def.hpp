#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventRecorder)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct BeatmapEventRecorder_EventCounts;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventRecorder;
}
namespace GlobalNamespace {
struct BeatmapEventRecorder_EventCounts;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventRecorder);
MARK_VAL_T(::GlobalNamespace::BeatmapEventRecorder_EventCounts);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapEventRecorder/EventCounts
struct CORDL_TYPE BeatmapEventRecorder_EventCounts {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventRecorder_EventCounts();

  // Ctor Parameters [CppParam { name: "bpm", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "jumpSpeed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "basic",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "boost", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "rotation", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "translation", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fx", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapEventRecorder_EventCounts(int32_t bpm, int32_t jumpSpeed, int32_t basic, int32_t boost, int32_t color, int32_t rotation, int32_t translation, int32_t fx) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6681 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field bpm, offset: 0x0, size: 0x4, def value: None
  int32_t bpm;

  /// @brief Field jumpSpeed, offset: 0x4, size: 0x4, def value: None
  int32_t jumpSpeed;

  /// @brief Field basic, offset: 0x8, size: 0x4, def value: None
  int32_t basic;

  /// @brief Field boost, offset: 0xc, size: 0x4, def value: None
  int32_t boost;

  /// @brief Field color, offset: 0x10, size: 0x4, def value: None
  int32_t color;

  /// @brief Field rotation, offset: 0x14, size: 0x4, def value: None
  int32_t rotation;

  /// @brief Field translation, offset: 0x18, size: 0x4, def value: None
  int32_t translation;

  /// @brief Field fx, offset: 0x1c, size: 0x4, def value: None
  int32_t fx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder_EventCounts, bpm) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder_EventCounts, jumpSpeed) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder_EventCounts, basic) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder_EventCounts, boost) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder_EventCounts, color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder_EventCounts, rotation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder_EventCounts, translation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder_EventCounts, fx) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventRecorder_EventCounts, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapEventRecorder::EventCounts, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventRecorder
class CORDL_TYPE BeatmapEventRecorder : public ::System::Object {
public:
  // Declarations
  using EventCounts = ::GlobalNamespace::BeatmapEventRecorder_EventCounts;

  /// @brief Field _callbackController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__callbackController, put = __cordl_internal_set__callbackController)) ::GlobalNamespace::BeatmapCallbacksController* _callbackController;

  /// @brief Field _currentCounts, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get__currentCounts, put = __cordl_internal_set__currentCounts)) ::GlobalNamespace::BeatmapEventRecorder_EventCounts _currentCounts;

  /// @brief Field _delayedCounts, offset 0x38, size 0x20
  __declspec(property(get = __cordl_internal_get__delayedCounts, put = __cordl_internal_set__delayedCounts)) ::GlobalNamespace::BeatmapEventRecorder_EventCounts _delayedCounts;

  /// @brief Field _onBeatmapEventWrapper, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__onBeatmapEventWrapper, put = __cordl_internal_set__onBeatmapEventWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _onBeatmapEventWrapper;

  /// @brief Field _samples, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__samples, put = __cordl_internal_set__samples)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventRecorder_EventCounts>* _samples;

  /// @brief Method Begin, addr 0x56fd28c, size 0x4, virtual false, abstract: false, final false
  inline void Begin(::GlobalNamespace::BeatmapCallbacksController* callbackController);

  /// @brief Method CaptureFrame, addr 0x56fd34c, size 0xec, virtual false, abstract: false, final false
  inline void CaptureFrame();

  /// @brief Method ClearCallbacks, addr 0x56fd4dc, size 0x30, virtual false, abstract: false, final false
  inline void ClearCallbacks();

  /// @brief Method Finish, addr 0x56fd438, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts, ::Array<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*> Finish();

  /// @brief Method GenerateTableReport, addr 0x56fd50c, size 0x540, virtual false, abstract: false, final false
  static inline ::StringW GenerateTableReport(::ArrayW<::GlobalNamespace::BeatmapEventRecorder_EventCounts, ::Array<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*> samples);

  /// @brief Method HandleBeatmapEvent, addr 0x56fda4c, size 0x2cc, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BeatmapEventData* data);

  static inline ::GlobalNamespace::BeatmapEventRecorder* New_ctor(int32_t initialFrameCapacity);

  /// @brief Method SetupCallbacks, addr 0x56fd290, size 0xbc, virtual false, abstract: false, final false
  inline void SetupCallbacks(::GlobalNamespace::BeatmapCallbacksController* callbackController);

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__callbackController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__callbackController();

  constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts const& __cordl_internal_get__currentCounts() const;

  constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts& __cordl_internal_get__currentCounts();

  constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts const& __cordl_internal_get__delayedCounts() const;

  constexpr ::GlobalNamespace::BeatmapEventRecorder_EventCounts& __cordl_internal_get__delayedCounts();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__onBeatmapEventWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__onBeatmapEventWrapper();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventRecorder_EventCounts>* const& __cordl_internal_get__samples() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventRecorder_EventCounts>*& __cordl_internal_get__samples();

  constexpr void __cordl_internal_set__callbackController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__currentCounts(::GlobalNamespace::BeatmapEventRecorder_EventCounts value);

  constexpr void __cordl_internal_set__delayedCounts(::GlobalNamespace::BeatmapEventRecorder_EventCounts value);

  constexpr void __cordl_internal_set__onBeatmapEventWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__samples(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventRecorder_EventCounts>* value);

  /// @brief Method .ctor, addr 0x56fd208, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialFrameCapacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventRecorder(BeatmapEventRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventRecorder(BeatmapEventRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6682 };

  /// @brief Field _samples, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventRecorder_EventCounts>* ____samples;

  /// @brief Field _currentCounts, offset: 0x18, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapEventRecorder_EventCounts ____currentCounts;

  /// @brief Field _delayedCounts, offset: 0x38, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapEventRecorder_EventCounts ____delayedCounts;

  /// @brief Field _callbackController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____callbackController;

  /// @brief Field _onBeatmapEventWrapper, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____onBeatmapEventWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder, ____samples) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder, ____currentCounts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder, ____delayedCounts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder, ____callbackController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventRecorder, ____onBeatmapEventWrapper) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventRecorder, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventRecorder*, "", "BeatmapEventRecorder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventRecorder_EventCounts, "", "BeatmapEventRecorder/EventCounts");
