#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrackController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlTrackController)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::VFX {
struct EventAttributes;
}
namespace UnityEngine::VFX {
struct Event_VisualEffectControlTrackController_ClipType;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine::VFX {
class VisualEffectControlPlayableBehaviour;
}
namespace UnityEngine::VFX {
struct VisualEffectControlTrackController_Chunk;
}
namespace UnityEngine::VFX {
struct VisualEffectControlTrackController_Clip;
}
namespace UnityEngine::VFX {
struct VisualEffectControlTrackController_Event;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController__ComputeRuntimeEvent_d__21;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController___c;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrack;
}
namespace UnityEngine::VFX {
struct VisualEffectPlayableSerializedEvent;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX {
struct Event_VisualEffectControlTrackController_ClipType;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController__ComputeRuntimeEvent_d__21;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController___c;
}
namespace UnityEngine::VFX {
struct VisualEffectControlTrackController_Chunk;
}
namespace UnityEngine::VFX {
struct VisualEffectControlTrackController_Clip;
}
namespace UnityEngine::VFX {
struct VisualEffectControlTrackController_Event;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrackController*);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrackController___c*);
MARK_VAL_T(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk);
MARK_VAL_T(::UnityEngine::VFX::VisualEffectControlTrackController_Clip);
MARK_VAL_T(::UnityEngine::VFX::VisualEffectControlTrackController_Event);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType, "UnityEngine.VFX", "VisualEffectControlTrackController/Event/ClipType");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController*, "UnityEngine.VFX", "VisualEffectControlTrackController");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*, "UnityEngine.VFX",
                    "VisualEffectControlTrackController/VisualEffectControlPlayableBehaviourComparer");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*, "UnityEngine.VFX", "VisualEffectControlTrackController/<ComputeRuntimeEvent>d__21");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController___c*, "UnityEngine.VFX", "VisualEffectControlTrackController/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, "UnityEngine.VFX", "VisualEffectControlTrackController/Chunk");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController_Clip, "UnityEngine.VFX", "VisualEffectControlTrackController/Clip");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController_Event, "UnityEngine.VFX", "VisualEffectControlTrackController/Event");
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/Event/ClipType
struct CORDL_TYPE Event_VisualEffectControlTrackController_ClipType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Event_VisualEffectControlTrackController_ClipType_Unwrapped
  enum struct __Event_VisualEffectControlTrackController_ClipType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Enter = static_cast<int32_t>(0x1),
    __E_Exit = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Event_VisualEffectControlTrackController_ClipType_Unwrapped() const noexcept {
    return static_cast<__Event_VisualEffectControlTrackController_ClipType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Event_VisualEffectControlTrackController_ClipType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Event_VisualEffectControlTrackController_ClipType(int32_t value__) noexcept;

  /// @brief Field Enter value: I32(1)
  static ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType const Enter;

  /// @brief Field Exit value: I32(2)
  static ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType const Exit;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19929 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.VFX.VisualEffectControlTrackController::Event::ClipType
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/Event
struct CORDL_TYPE VisualEffectControlTrackController_Event {
public:
  // Declarations
  using ClipType = ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrackController_Event();

  // Ctor Parameters [CppParam { name: "nameId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "attribute", ty: "::UnityEngine::VFX::VFXEventAttribute*", modifiers: "", def_value:
  // None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "clipIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "clipType", ty:
  // "::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType", modifiers: "", def_value: None }]
  constexpr VisualEffectControlTrackController_Event(int32_t nameId, ::UnityEngine::VFX::VFXEventAttribute* attribute, double_t time, int32_t clipIndex,
                                                     ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType clipType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19930 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field nameId, offset: 0x0, size: 0x4, def value: None
  int32_t nameId;

  /// @brief Field attribute, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::VFX::VFXEventAttribute* attribute;

  /// @brief Field time, offset: 0x10, size: 0x8, def value: None
  double_t time;

  /// @brief Field clipIndex, offset: 0x18, size: 0x4, def value: None
  int32_t clipIndex;

  /// @brief Field clipType, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType clipType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Event, nameId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Event, attribute) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Event, time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Event, clipIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Event, clipType) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController_Event) == 0x20, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/Clip
struct CORDL_TYPE VisualEffectControlTrackController_Clip {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrackController_Clip();

  // Ctor Parameters [CppParam { name: "enter", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "exit", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualEffectControlTrackController_Clip(int32_t enter, int32_t exit) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19931 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field enter, offset: 0x0, size: 0x4, def value: None
  int32_t enter;

  /// @brief Field exit, offset: 0x4, size: 0x4, def value: None
  int32_t exit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Clip, enter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Clip, exit) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController_Clip) == 0x8, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.VFX.VisualEffectControlTrackController::Clip, UnityEngine.VFX.VisualEffectControlTrackController::Event
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/Chunk
struct CORDL_TYPE VisualEffectControlTrackController_Chunk {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrackController_Chunk();

  // Ctor Parameters [CppParam { name: "scrubbing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "reinitEnter", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "reinitExit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "startSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "begin", ty: "double_t", modifiers:
  // "", def_value: None }, CppParam { name: "end", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "prewarmCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "prewarmDeltaTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "prewarmOffset", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "prewarmEvent", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "events", ty: "::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Event>", modifiers: "", def_value: None }, CppParam {
  // name: "clips", ty: "::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Clip>", modifiers: "", def_value: None }]
  constexpr VisualEffectControlTrackController_Chunk(bool scrubbing, bool reinitEnter, bool reinitExit, uint32_t startSeed, double_t begin, double_t end, uint32_t prewarmCount,
                                                     float_t prewarmDeltaTime, double_t prewarmOffset, int32_t prewarmEvent,
                                                     ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Event> events,
                                                     ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Clip> clips) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19932 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field scrubbing, offset: 0x0, size: 0x1, def value: None
  bool scrubbing;

  /// @brief Field reinitEnter, offset: 0x1, size: 0x1, def value: None
  bool reinitEnter;

  /// @brief Field reinitExit, offset: 0x2, size: 0x1, def value: None
  bool reinitExit;

  /// @brief Field startSeed, offset: 0x4, size: 0x4, def value: None
  uint32_t startSeed;

  /// @brief Field begin, offset: 0x8, size: 0x8, def value: None
  double_t begin;

  /// @brief Field end, offset: 0x10, size: 0x8, def value: None
  double_t end;

  /// @brief Field prewarmCount, offset: 0x18, size: 0x4, def value: None
  uint32_t prewarmCount;

  /// @brief Field prewarmDeltaTime, offset: 0x1c, size: 0x4, def value: None
  float_t prewarmDeltaTime;

  /// @brief Field prewarmOffset, offset: 0x20, size: 0x8, def value: None
  double_t prewarmOffset;

  /// @brief Field prewarmEvent, offset: 0x28, size: 0x4, def value: None
  int32_t prewarmEvent;

  /// @brief Field events, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Event> events;

  /// @brief Field clips, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Clip> clips;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, scrubbing) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, reinitEnter) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, reinitExit) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, startSeed) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, begin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, end) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, prewarmCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, prewarmDeltaTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, prewarmOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, prewarmEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, events) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, clips) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk) == 0x40, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/VisualEffectControlPlayableBehaviourComparer
class CORDL_TYPE VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>*() noexcept;

  /// @brief Method Compare, addr 0x69d1d28, size 0x74, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* x, ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* y);

  static inline ::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer* New_ctor();

  /// @brief Method .ctor, addr 0x69d1ba0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>*
  i___System__Collections__Generic__IComparer_1___UnityEngine__VFX__VisualEffectControlPlayableBehaviour__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer(VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer(VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/<>c
class CORDL_TYPE VisualEffectControlTrackController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::VFX::VisualEffectControlTrackController___c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0)) ::System::Comparison_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>* __9__24_0;

  /// @brief Field <>9__24_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_1,
                      put = setStaticF___9__24_1)) ::System::Comparison_1<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>* __9__24_1;

  static inline ::UnityEngine::VFX::VisualEffectControlTrackController___c* New_ctor();

  /// @brief Method <Init>b__24_0, addr 0x69d1e58, size 0x64, virtual false, abstract: false, final false
  inline int32_t _Init_b__24_0(::UnityEngine::VFX::VisualEffectControlTrackController_Event x, ::UnityEngine::VFX::VisualEffectControlTrackController_Event y);

  /// @brief Method <Init>b__24_1, addr 0x69d1df4, size 0x64, virtual false, abstract: false, final false
  inline int32_t _Init_b__24_1(::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t> x,
                               ::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t> y);

  /// @brief Method .ctor, addr 0x69d1df0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::VFX::VisualEffectControlTrackController___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>* getStaticF___9__24_0();

  static inline ::System::Comparison_1<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>* getStaticF___9__24_1();

  static inline void setStaticF___9(::UnityEngine::VFX::VisualEffectControlTrackController___c* value);

  static inline void setStaticF___9__24_0(::System::Comparison_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>* value);

  static inline void setStaticF___9__24_1(::System::Comparison_1<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrackController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectControlTrackController___c(VisualEffectControlTrackController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectControlTrackController___c(VisualEffectControlTrackController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.Object, UnityEngine.VFX.VisualEffectControlTrackController::Event
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/<ComputeRuntimeEvent>d__21
class CORDL_TYPE VisualEffectControlTrackController__ComputeRuntimeEvent_d__21 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectControlTrackController_Event__get_Current)) ::UnityEngine::VFX::VisualEffectControlTrackController_Event
      System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectControlTrackController_Event__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::VFX::VisualEffectControlTrackController_Event __2__current;

  /// @brief Field <>3__behavior, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___3__behavior, put = __cordl_internal_set___3__behavior)) ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* __3__behavior;

  /// @brief Field <>3__vfx, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get___3__vfx, put = __cordl_internal_set___3__vfx)) ::UnityW<::UnityEngine::VFX::VisualEffect> __3__vfx;

  /// @brief Field <>7__wrap1, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field behavior, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_behavior, put = __cordl_internal_set_behavior)) ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* behavior;

  /// @brief Field vfx, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_vfx, put = __cordl_internal_set_vfx)) ::UnityW<::UnityEngine::VFX::VisualEffect> vfx;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x69d1ed8, size 0x388, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.VFX.VisualEffectControlTrackController.Event>.GetEnumerator, addr 0x69d23c0, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*
  System_Collections_Generic_IEnumerable_UnityEngine_VFX_VisualEffectControlTrackController_Event__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.VFX.VisualEffectControlTrackController.Event>.get_Current, addr 0x69d2314, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::VFX::VisualEffectControlTrackController_Event System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectControlTrackController_Event__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x69d2460, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x69d2324, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x69d235c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x69d1ebc, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Event const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Event& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* const& __cordl_internal_get___3__behavior() const;

  constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*& __cordl_internal_get___3__behavior();

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get___3__vfx() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get___3__vfx();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* const& __cordl_internal_get_behavior() const;

  constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*& __cordl_internal_get_behavior();

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get_vfx() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get_vfx();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::VFX::VisualEffectControlTrackController_Event value);

  constexpr void __cordl_internal_set___3__behavior(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* value);

  constexpr void __cordl_internal_set___3__vfx(::UnityW<::UnityEngine::VFX::VisualEffect> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_behavior(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* value);

  constexpr void __cordl_internal_set_vfx(::UnityW<::UnityEngine::VFX::VisualEffect> value);

  /// @brief Method <>m__Finally1, addr 0x69d2260, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x69d08e8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__VFX__VisualEffectControlTrackController_Event_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__VFX__VisualEffectControlTrackController_Event_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrackController__ComputeRuntimeEvent_d__21();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController__ComputeRuntimeEvent_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectControlTrackController__ComputeRuntimeEvent_d__21(VisualEffectControlTrackController__ComputeRuntimeEvent_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController__ComputeRuntimeEvent_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectControlTrackController__ComputeRuntimeEvent_d__21(VisualEffectControlTrackController__ComputeRuntimeEvent_d__21 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19935 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::VFX::VisualEffectControlTrackController_Event _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field behavior, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* ___behavior;

  /// @brief Field <>3__behavior, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* _____3__behavior;

  /// @brief Field vfx, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffect> ___vfx;

  /// @brief Field <>3__vfx, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffect> _____3__vfx;

  /// @brief Field <>7__wrap1, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, ___behavior) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____3__behavior) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, ___vfx) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____3__vfx) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____7__wrap1) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21) == 0x68, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.Object, UnityEngine.VFX.VisualEffectControlTrackController::Chunk
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController
class CORDL_TYPE VisualEffectControlTrackController : public ::System::Object {
public:
  // Declarations
  using Chunk = ::UnityEngine::VFX::VisualEffectControlTrackController_Chunk;

  using Clip = ::UnityEngine::VFX::VisualEffectControlTrackController_Clip;

  using Event = ::UnityEngine::VFX::VisualEffectControlTrackController_Event;

  using VisualEffectControlPlayableBehaviourComparer = ::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer;

  using _ComputeRuntimeEvent_d__21 = ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21;

  using __c = ::UnityEngine::VFX::VisualEffectControlTrackController___c;

  /// @brief Field kEpsilonEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kEpsilonEvent, put = setStaticF_kEpsilonEvent)) double_t kEpsilonEvent;

  /// @brief Field m_BackupReseedOnPlay, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BackupReseedOnPlay, put = __cordl_internal_set_m_BackupReseedOnPlay)) bool m_BackupReseedOnPlay;

  /// @brief Field m_BackupStartSeed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BackupStartSeed, put = __cordl_internal_set_m_BackupStartSeed)) uint32_t m_BackupStartSeed;

  /// @brief Field m_Chunks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Chunks, put = __cordl_internal_set_m_Chunks)) ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk> m_Chunks;

  /// @brief Field m_EventListIndexCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventListIndexCache, put = __cordl_internal_set_m_EventListIndexCache)) ::System::Collections::Generic::List_1<int32_t>* m_EventListIndexCache;

  /// @brief Field m_LastChunk, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastChunk, put = __cordl_internal_set_m_LastChunk)) int32_t m_LastChunk;

  /// @brief Field m_LastEvent, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastEvent, put = __cordl_internal_set_m_LastEvent)) int32_t m_LastEvent;

  /// @brief Field m_LastPlayableTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastPlayableTime, put = __cordl_internal_set_m_LastPlayableTime)) double_t m_LastPlayableTime;

  /// @brief Field m_Target, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::VFX::VisualEffect> m_Target;

  /// @brief Method ComputeAttribute, addr 0x69d07cc, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXEventAttribute* ComputeAttribute(::UnityEngine::VFX::VisualEffect* vfx, ::UnityEngine::VFX::EventAttributes attributes);

  /// @brief Method ComputeRuntimeEvent, addr 0x69d086c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*
  ComputeRuntimeEvent(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* behavior, ::UnityEngine::VFX::VisualEffect* vfx);

  /// @brief Method GetEventsIndex, addr 0x69d0614, size 0x13c, virtual false, abstract: false, final false
  static inline void GetEventsIndex(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk chunk, double_t minTime, double_t maxTime, int32_t lastIndex,
                                    ::System::Collections::Generic::List_1<int32_t>* eventListIndex);

  /// @brief Method Init, addr 0x69d0908, size 0x1298, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Playables::Playable playable, ::UnityEngine::VFX::VisualEffect* vfx, ::UnityEngine::VFX::VisualEffectControlTrack* parentTrack);

  /// @brief Method IsTimeInChunk, addr 0x69cfd54, size 0x44, virtual false, abstract: false, final false
  inline bool IsTimeInChunk(double_t time, int32_t index);

  static inline ::UnityEngine::VFX::VisualEffectControlTrackController* New_ctor();

  /// @brief Method OnEnterChunk, addr 0x69cf814, size 0xe0, virtual false, abstract: false, final false
  inline void OnEnterChunk(int32_t currentChunk);

  /// @brief Method OnLeaveChunk, addr 0x69cf8f4, size 0xcc, virtual false, abstract: false, final false
  inline void OnLeaveChunk(int32_t previousChunkIndex, bool leavingGoingBeforeClip);

  /// @brief Method ProcessEvent, addr 0x69d0750, size 0x7c, virtual false, abstract: false, final false
  inline void ProcessEvent(int32_t eventIndex, ::UnityEngine::VFX::VisualEffectControlTrackController_Chunk currentChunk);

  /// @brief Method ProcessNoScrubbingEvents, addr 0x69cf9c0, size 0x2c4, virtual false, abstract: false, final false
  inline void ProcessNoScrubbingEvents(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk chunk, double_t oldTime, double_t newTime);

  /// @brief Method Release, addr 0x69d1c3c, size 0xc, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method RestoreVFXState, addr 0x69cfc84, size 0xd0, virtual false, abstract: false, final false
  inline void RestoreVFXState(bool restorePause, bool restoreSeedState);

  /// @brief Method Update, addr 0x69cfd98, size 0x87c, virtual false, abstract: false, final false
  inline void Update(double_t playableTime, float_t deltaTime);

  constexpr bool const& __cordl_internal_get_m_BackupReseedOnPlay() const;

  constexpr bool& __cordl_internal_get_m_BackupReseedOnPlay();

  constexpr uint32_t const& __cordl_internal_get_m_BackupStartSeed() const;

  constexpr uint32_t& __cordl_internal_get_m_BackupStartSeed();

  constexpr ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk> const& __cordl_internal_get_m_Chunks() const;

  constexpr ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk>& __cordl_internal_get_m_Chunks();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_EventListIndexCache() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_EventListIndexCache();

  constexpr int32_t const& __cordl_internal_get_m_LastChunk() const;

  constexpr int32_t& __cordl_internal_get_m_LastChunk();

  constexpr int32_t const& __cordl_internal_get_m_LastEvent() const;

  constexpr int32_t& __cordl_internal_get_m_LastEvent();

  constexpr double_t const& __cordl_internal_get_m_LastPlayableTime() const;

  constexpr double_t& __cordl_internal_get_m_LastPlayableTime();

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get_m_Target() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get_m_Target();

  constexpr void __cordl_internal_set_m_BackupReseedOnPlay(bool value);

  constexpr void __cordl_internal_set_m_BackupStartSeed(uint32_t value);

  constexpr void __cordl_internal_set_m_Chunks(::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk> value);

  constexpr void __cordl_internal_set_m_EventListIndexCache(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_LastChunk(int32_t value);

  constexpr void __cordl_internal_set_m_LastEvent(int32_t value);

  constexpr void __cordl_internal_set_m_LastPlayableTime(double_t value);

  constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::VFX::VisualEffect> value);

  /// @brief Method .ctor, addr 0x69d1c48, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  static inline double_t getStaticF_kEpsilonEvent();

  static inline void setStaticF_kEpsilonEvent(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrackController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectControlTrackController(VisualEffectControlTrackController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectControlTrackController(VisualEffectControlTrackController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19936 };

  /// @brief Field kErrorIndex offset 0xffffffff size 0x4
  static constexpr int32_t kErrorIndex{ static_cast<int32_t>(0x80000000) };

  /// @brief Field m_LastChunk, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_LastChunk;

  /// @brief Field m_LastEvent, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_LastEvent;

  /// @brief Field m_LastPlayableTime, offset: 0x18, size: 0x8, def value: None
  double_t ___m_LastPlayableTime;

  /// @brief Field m_EventListIndexCache, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_EventListIndexCache;

  /// @brief Field m_Target, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffect> ___m_Target;

  /// @brief Field m_BackupReseedOnPlay, offset: 0x30, size: 0x1, def value: None
  bool ___m_BackupReseedOnPlay;

  /// @brief Field m_BackupStartSeed, offset: 0x34, size: 0x4, def value: None
  uint32_t ___m_BackupStartSeed;

  /// @brief Field m_Chunks, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk> ___m_Chunks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_LastChunk) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_LastEvent) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_LastPlayableTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_EventListIndexCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_Target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_BackupReseedOnPlay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_BackupStartSeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_Chunks) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController) == 0x40, "Size mismatch!");

} // namespace UnityEngine::VFX
