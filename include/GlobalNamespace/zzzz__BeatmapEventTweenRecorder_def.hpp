#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventTweenRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventTweenRecorder)
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
struct BeatmapEventTweenRecorder_EventTweens;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventTweenRecorder;
}
namespace GlobalNamespace {
struct BeatmapEventTweenRecorder_EventTweens;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventTweenRecorder);
MARK_VAL_T(::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapEventTweenRecorder/EventTweens
struct CORDL_TYPE BeatmapEventTweenRecorder_EventTweens {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventTweenRecorder_EventTweens();

  // Ctor Parameters [CppParam { name: "color", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "translation", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fx", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapEventTweenRecorder_EventTweens(int32_t color, int32_t rotation, int32_t translation, int32_t fx) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6683 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field color, offset: 0x0, size: 0x4, def value: None
  int32_t color;

  /// @brief Field rotation, offset: 0x4, size: 0x4, def value: None
  int32_t rotation;

  /// @brief Field translation, offset: 0x8, size: 0x4, def value: None
  int32_t translation;

  /// @brief Field fx, offset: 0xc, size: 0x4, def value: None
  int32_t fx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, rotation) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, translation) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, fx) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapEventTweenRecorder::EventTweens, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventTweenRecorder
class CORDL_TYPE BeatmapEventTweenRecorder : public ::System::Object {
public:
  // Declarations
  using EventTweens = ::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens;

  /// @brief Field _activeTweens, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__activeTweens, put = __cordl_internal_set__activeTweens)) ::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens _activeTweens;

  /// @brief Field _callbackController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__callbackController, put = __cordl_internal_set__callbackController)) ::GlobalNamespace::BeatmapCallbacksController* _callbackController;

  /// @brief Field _onBeatmapEventWrapper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__onBeatmapEventWrapper, put = __cordl_internal_set__onBeatmapEventWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _onBeatmapEventWrapper;

  /// @brief Field _samples, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__samples,
                      put = __cordl_internal_set__samples)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>* _samples;

  /// @brief Method Begin, addr 0x56fdd9c, size 0x4, virtual false, abstract: false, final false
  inline void Begin(::GlobalNamespace::BeatmapCallbacksController* callbackController);

  /// @brief Method CaptureFrame, addr 0x56fde5c, size 0xa4, virtual false, abstract: false, final false
  inline void CaptureFrame();

  /// @brief Method ClearCallbacks, addr 0x56fdf94, size 0x30, virtual false, abstract: false, final false
  inline void ClearCallbacks();

  /// @brief Method Finish, addr 0x56fdf00, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, ::Array<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*> Finish();

  /// @brief Method GenerateTableReport, addr 0x56fdfc4, size 0x350, virtual false, abstract: false, final false
  static inline ::StringW GenerateTableReport(::ArrayW<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, ::Array<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*> samples);

  /// @brief Method HandleBeatmapEvent, addr 0x56fe314, size 0x2e4, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BeatmapEventData* data);

  static inline ::GlobalNamespace::BeatmapEventTweenRecorder* New_ctor(int32_t initialFrameCapacity);

  /// @brief Method SetupCallbacks, addr 0x56fdda0, size 0xbc, virtual false, abstract: false, final false
  inline void SetupCallbacks(::GlobalNamespace::BeatmapCallbacksController* callbackController);

  constexpr ::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens const& __cordl_internal_get__activeTweens() const;

  constexpr ::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens& __cordl_internal_get__activeTweens();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__callbackController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__callbackController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__onBeatmapEventWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__onBeatmapEventWrapper();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>* const& __cordl_internal_get__samples() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>*& __cordl_internal_get__samples();

  constexpr void __cordl_internal_set__activeTweens(::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens value);

  constexpr void __cordl_internal_set__callbackController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__onBeatmapEventWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__samples(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>* value);

  /// @brief Method .ctor, addr 0x56fdd18, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialFrameCapacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventTweenRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTweenRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventTweenRecorder(BeatmapEventTweenRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTweenRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventTweenRecorder(BeatmapEventTweenRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6684 };

  /// @brief Field _samples, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens>* ____samples;

  /// @brief Field _activeTweens, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens ____activeTweens;

  /// @brief Field _callbackController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____callbackController;

  /// @brief Field _onBeatmapEventWrapper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____onBeatmapEventWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventTweenRecorder, ____samples) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventTweenRecorder, ____activeTweens) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventTweenRecorder, ____callbackController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventTweenRecorder, ____onBeatmapEventWrapper) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventTweenRecorder, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventTweenRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventTweenRecorder*, "", "BeatmapEventTweenRecorder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventTweenRecorder_EventTweens, "", "BeatmapEventTweenRecorder/EventTweens");
