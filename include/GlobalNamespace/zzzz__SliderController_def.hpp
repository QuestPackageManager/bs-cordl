#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderController)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class FixedUpdateVector3SmoothValue;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class ISliderDidDissolveEvent;
}
namespace GlobalNamespace {
class ISliderDidFinishJumpEvent;
}
namespace GlobalNamespace {
class ISliderDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class ISliderHeadDidMovePastCutMarkEvent;
}
namespace GlobalNamespace {
class ISliderTailDidMovePastCutMarkEvent;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class SliderIntensityEffect;
}
namespace GlobalNamespace {
class SliderMeshController;
}
namespace GlobalNamespace {
class SliderMovement;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
struct __SliderController__LengthType;
}
namespace GlobalNamespace {
class __SliderController__Pool;
}
namespace GlobalNamespace {
class __SliderController__Pool__Long;
}
namespace GlobalNamespace {
class __SliderController__Pool__Medium;
}
namespace GlobalNamespace {
class __SliderController__Pool__Short;
}
namespace GlobalNamespace {
class __SliderController___DissolveCoroutine_d__70;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace Zenject {
template <typename TValue> class MonoMemoryPool_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SliderController__LengthType;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class __SliderController__Pool;
}
namespace GlobalNamespace {
class __SliderController__Pool__Long;
}
namespace GlobalNamespace {
class __SliderController__Pool__Medium;
}
namespace GlobalNamespace {
class __SliderController__Pool__Short;
}
namespace GlobalNamespace {
class __SliderController___DissolveCoroutine_d__70;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SliderController__LengthType);
MARK_REF_PTR_T(::GlobalNamespace::SliderController);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController__Pool);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController__Pool__Long);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController__Pool__Medium);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController__Pool__Short);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70);
// Type: ::LengthType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SliderController::LengthType
struct CORDL_TYPE __SliderController__LengthType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SliderController__LengthType_Unwrapped
  enum struct ____SliderController__LengthType_Unwrapped : int32_t {
    __E_Short = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_Long = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SliderController__LengthType_Unwrapped() const noexcept {
    return static_cast<____SliderController__LengthType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__LengthType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SliderController__LengthType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Long value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SliderController__LengthType const Long;

  /// @brief Field Medium value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SliderController__LengthType const Medium;

  /// @brief Field Short value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SliderController__LengthType const Short;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__LengthType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController__LengthType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Short
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderController::Pool::Short*
class CORDL_TYPE __SliderController__Pool__Short : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__SliderController__Pool__Short* New_ctor();

  /// @brief Method .ctor, addr 0x25aaa20, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__Pool__Short();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Short", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController__Pool__Short(__SliderController__Pool__Short&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Short", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController__Pool__Short(__SliderController__Pool__Short const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__Pool__Short, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Medium
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderController::Pool::Medium*
class CORDL_TYPE __SliderController__Pool__Medium : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__SliderController__Pool__Medium* New_ctor();

  /// @brief Method .ctor, addr 0x25aaa68, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__Pool__Medium();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Medium", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController__Pool__Medium(__SliderController__Pool__Medium&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Medium", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController__Pool__Medium(__SliderController__Pool__Medium const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__Pool__Medium, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Long
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderController::Pool::Long*
class CORDL_TYPE __SliderController__Pool__Long : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__SliderController__Pool__Long* New_ctor();

  /// @brief Method .ctor, addr 0x25aaab0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__Pool__Long();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Long", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController__Pool__Long(__SliderController__Pool__Long&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Long", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController__Pool__Long(__SliderController__Pool__Long const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__Pool__Long, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderController::Pool*
class CORDL_TYPE __SliderController__Pool : public ::System::Object {
public:
  // Declarations
  using Long = ::GlobalNamespace::__SliderController__Pool__Long;

  using Medium = ::GlobalNamespace::__SliderController__Pool__Medium;

  using Short = ::GlobalNamespace::__SliderController__Pool__Short;

  /// @brief Field _longPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__longPool, put = __cordl_internal_set__longPool))::GlobalNamespace::__SliderController__Pool__Long* _longPool;

  /// @brief Field _mediumPool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mediumPool, put = __cordl_internal_set__mediumPool))::GlobalNamespace::__SliderController__Pool__Medium* _mediumPool;

  /// @brief Field _shortPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__shortPool, put = __cordl_internal_set__shortPool))::GlobalNamespace::__SliderController__Pool__Short* _shortPool;

  /// @brief Method GetLengthFromSliderData, addr 0x25aa9c8, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__SliderController__LengthType GetLengthFromSliderData(::GlobalNamespace::SliderData* sliderNoteData,
                                                                                          ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData);

  /// @brief Method GetPool, addr 0x25aa928, size 0xa0, virtual false, abstract: false, final false
  inline ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>>* GetPool(::GlobalNamespace::__SliderController__LengthType lengthType);

  static inline ::GlobalNamespace::__SliderController__Pool* New_ctor(::GlobalNamespace::__SliderController__Pool__Short* shortPool, ::GlobalNamespace::__SliderController__Pool__Medium* mediumPool,
                                                                      ::GlobalNamespace::__SliderController__Pool__Long* longPool);

  constexpr ::GlobalNamespace::__SliderController__Pool__Long*& __cordl_internal_get__longPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Long*> const& __cordl_internal_get__longPool() const;

  constexpr ::GlobalNamespace::__SliderController__Pool__Medium*& __cordl_internal_get__mediumPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Medium*> const& __cordl_internal_get__mediumPool() const;

  constexpr ::GlobalNamespace::__SliderController__Pool__Short*& __cordl_internal_get__shortPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Short*> const& __cordl_internal_get__shortPool() const;

  constexpr void __cordl_internal_set__longPool(::GlobalNamespace::__SliderController__Pool__Long* value);

  constexpr void __cordl_internal_set__mediumPool(::GlobalNamespace::__SliderController__Pool__Medium* value);

  constexpr void __cordl_internal_set__shortPool(::GlobalNamespace::__SliderController__Pool__Short* value);

  /// @brief Method .ctor, addr 0x25aa8ec, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__SliderController__Pool__Short* shortPool, ::GlobalNamespace::__SliderController__Pool__Medium* mediumPool,
                    ::GlobalNamespace::__SliderController__Pool__Long* longPool);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController__Pool(__SliderController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController__Pool(__SliderController__Pool const&) = delete;

  /// @brief Field _shortPool, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__SliderController__Pool__Short* ____shortPool;

  /// @brief Field _mediumPool, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__SliderController__Pool__Medium* ____mediumPool;

  /// @brief Field _longPool, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__SliderController__Pool__Long* ____longPool;

  /// @brief Field kMinDistanceToUseLong offset 0xffffffff size 0x4
  static constexpr float_t kMinDistanceToUseLong{ 15.0 };

  /// @brief Field kMinDistanceToUseMedium offset 0xffffffff size 0x4
  static constexpr float_t kMinDistanceToUseMedium{ 5.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__Pool, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController__Pool, ____shortPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController__Pool, ____mediumPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController__Pool, ____longPool) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DissolveCoroutine>d__70
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderController::<DissolveCoroutine>d__70*
class CORDL_TYPE __SliderController___DissolveCoroutine_d__70 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::SliderController> __4__this;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x25aaafc, size 0x3ec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x25aaee8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x25aaef0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x25aaf30, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x25aaaf8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::SliderController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SliderController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SliderController> value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x25a9e1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController___DissolveCoroutine_d__70();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderController___DissolveCoroutine_d__70", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController___DissolveCoroutine_d__70(__SliderController___DissolveCoroutine_d__70&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController___DissolveCoroutine_d__70", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController___DissolveCoroutine_d__70(__SliderController___DissolveCoroutine_d__70 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderController> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, ___duration) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SliderController
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderController*
class CORDL_TYPE SliderController : public ::GlobalNamespace::SliderControllerBase {
public:
  // Declarations
  using LengthType = ::GlobalNamespace::__SliderController__LengthType;

  using Pool = ::GlobalNamespace::__SliderController__Pool;

  using _DissolveCoroutine_d__70 = ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70;

  /// @brief Field _attractingSaber, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__attractingSaber, put = __cordl_internal_set__attractingSaber)) bool _attractingSaber;

  /// @brief Field _beatmapObjectManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _beatmapObjectSpawnController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnController,
                      put = __cordl_internal_set__beatmapObjectSpawnController))::GlobalNamespace::IBeatmapObjectSpawnController* _beatmapObjectSpawnController;

  /// @brief Field _closeInteractionSaberPosSmoothParam, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__closeInteractionSaberPosSmoothParam, put = __cordl_internal_set__closeInteractionSaberPosSmoothParam)) float_t _closeInteractionSaberPosSmoothParam;

  /// @brief Field _closeSmoothedSaberInteractionPos, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__closeSmoothedSaberInteractionPos,
                      put = __cordl_internal_set__closeSmoothedSaberInteractionPos))::GlobalNamespace::FixedUpdateVector3SmoothValue* _closeSmoothedSaberInteractionPos;

  /// @brief Field _colorManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _headJumpOffsetY, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__headJumpOffsetY, put = __cordl_internal_set__headJumpOffsetY)) float_t _headJumpOffsetY;

  /// @brief Field _initColor, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__initColor, put = __cordl_internal_set__initColor))::UnityEngine::Color _initColor;

  /// @brief Field _jumpDistance, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpDistance, put = __cordl_internal_set__jumpDistance)) float_t _jumpDistance;

  /// @brief Field _lengthType, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__lengthType, put = __cordl_internal_set__lengthType))::GlobalNamespace::__SliderController__LengthType _lengthType;

  /// @brief Field _randomValue, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get__randomValue, put = __cordl_internal_set__randomValue)) float_t _randomValue;

  /// @brief Field _saber, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber))::UnityW<::GlobalNamespace::Saber> _saber;

  /// @brief Field _saberManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager))::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _sliderData, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderData, put = __cordl_internal_set__sliderData))::GlobalNamespace::SliderData* _sliderData;

  /// @brief Field _sliderDidDissolve, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderDidDissolve,
                      put = __cordl_internal_set__sliderDidDissolve))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* _sliderDidDissolve;

  /// @brief Field _sliderDidFinishMovement, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderDidFinishMovement,
                      put = __cordl_internal_set__sliderDidFinishMovement))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* _sliderDidFinishMovement;

  /// @brief Field _sliderDidStartDissolving, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderDidStartDissolving,
                      put = __cordl_internal_set__sliderDidStartDissolving))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* _sliderDidStartDissolving;

  /// @brief Field _sliderDuration, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__sliderDuration, put = __cordl_internal_set__sliderDuration)) float_t _sliderDuration;

  /// @brief Field _sliderHeadDidMovePastCutMark, offset 0x88, size 0x8
  __declspec(
      property(get = __cordl_internal_get__sliderHeadDidMovePastCutMark,
               put = __cordl_internal_set__sliderHeadDidMovePastCutMark))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* _sliderHeadDidMovePastCutMark;

  /// @brief Field _sliderIntensityEffect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderIntensityEffect, put = __cordl_internal_set__sliderIntensityEffect))::UnityW<::GlobalNamespace::SliderIntensityEffect> _sliderIntensityEffect;

  /// @brief Field _sliderMeshController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderMeshController, put = __cordl_internal_set__sliderMeshController))::UnityW<::GlobalNamespace::SliderMeshController> _sliderMeshController;

  /// @brief Field _sliderMovement, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderMovement, put = __cordl_internal_set__sliderMovement))::UnityW<::GlobalNamespace::SliderMovement> _sliderMovement;

  /// @brief Field _sliderTailDidMovePastCutMark, offset 0x90, size 0x8
  __declspec(
      property(get = __cordl_internal_get__sliderTailDidMovePastCutMark,
               put = __cordl_internal_set__sliderTailDidMovePastCutMark))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* _sliderTailDidMovePastCutMark;

  /// @brief Field _zDistanceBetweenNotes, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get__zDistanceBetweenNotes, put = __cordl_internal_set__zDistanceBetweenNotes)) float_t _zDistanceBetweenNotes;

  __declspec(property(get = get_closeSmoothedSaberInteractionPos))::GlobalNamespace::FixedUpdateVector3SmoothValue* closeSmoothedSaberInteractionPos;

  __declspec(property(get = get_headJumpOffsetY)) float_t headJumpOffsetY;

  __declspec(property(get = get_initColor))::UnityEngine::Color initColor;

  __declspec(property(get = get_jumpDistance)) float_t jumpDistance;

  __declspec(property(get = get_lengthType))::GlobalNamespace::__SliderController__LengthType lengthType;

  __declspec(property(get = get_randomValue)) float_t randomValue;

  __declspec(property(get = get_saberInteractionParam)) float_t saberInteractionParam;

  __declspec(property(get = get_sliderData))::GlobalNamespace::SliderData* sliderData;

  __declspec(property(get = get_sliderDidDissolveEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* sliderDidDissolveEvent;

  __declspec(property(get = get_sliderDidFinishJumpEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* sliderDidFinishJumpEvent;

  __declspec(property(get = get_sliderDidStartDissolvingEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* sliderDidStartDissolvingEvent;

  __declspec(property(get = get_sliderDuration)) float_t sliderDuration;

  __declspec(property(get = get_sliderHeadDidMovePastCutMark))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* sliderHeadDidMovePastCutMark;

  __declspec(property(get = get_sliderIntensityEffect))::UnityW<::GlobalNamespace::SliderIntensityEffect> sliderIntensityEffect;

  __declspec(property(get = get_sliderMeshController))::UnityW<::GlobalNamespace::SliderMeshController> sliderMeshController;

  __declspec(property(get = get_sliderMovement))::UnityW<::GlobalNamespace::SliderMovement> sliderMovement;

  __declspec(property(get = get_sliderTailDidMovePastCutMark))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* sliderTailDidMovePastCutMark;

  __declspec(property(get = get_zDistanceBetweenNotes)) float_t zDistanceBetweenNotes;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectController*() noexcept;

  /// @brief Method Awake, addr 0x25a8ef4, size 0x160, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Dissolve, addr 0x25a9e44, size 0x60, virtual true, abstract: false, final true
  inline void Dissolve(float_t duration);

  /// @brief Method DissolveCoroutine, addr 0x25a9da4, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DissolveCoroutine(float_t duration);

  /// @brief Method FixedUpdate, addr 0x25a99a4, size 0x58, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetSaberInteractionPoint, addr 0x25a8d60, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetSaberInteractionPoint(::GlobalNamespace::Saber* saber);

  /// @brief Method HandleFadeInDidStart, addr 0x25aa6c0, size 0x8, virtual false, abstract: false, final false
  inline void HandleFadeInDidStart();

  /// @brief Method HandleHeadDidMovePastCutMark, addr 0x25aa1c4, size 0x1f0, virtual false, abstract: false, final false
  inline void HandleHeadDidMovePastCutMark();

  /// @brief Method HandleMovementDidFinish, addr 0x25a9ff0, size 0x1d4, virtual false, abstract: false, final false
  inline void HandleMovementDidFinish();

  /// @brief Method HandleNoteWasCut, addr 0x25aa640, size 0x80, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed, addr 0x25aa5c4, size 0x4c, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleTailDidMovePastCutMark, addr 0x25aa3e4, size 0x1e0, virtual false, abstract: false, final false
  inline void HandleTailDidMovePastCutMark();

  /// @brief Method Hide, addr 0x25a9ecc, size 0x2c, virtual true, abstract: false, final true
  inline void Hide(bool hide);

  /// @brief Method Init, addr 0x25a7e48, size 0x3d0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::__SliderController__LengthType lengthType, ::GlobalNamespace::SliderData* sliderData, float_t worldRotation, ::UnityEngine::Vector3 headNoteJumpStartPos,
                   ::UnityEngine::Vector3 tailNoteJumpStartPos, ::UnityEngine::Vector3 headNoteJumpEndPos, ::UnityEngine::Vector3 tailNoteJumpEndPos, float_t jumpDuration,
                   float_t startNoteJumpGravity, float_t endNoteJumpGravity, float_t noteUniformScale);

  /// @brief Method IsNoteStartOfThisSlider, addr 0x25a9f08, size 0xe8, virtual false, abstract: false, final false
  inline bool IsNoteStartOfThisSlider(::GlobalNamespace::NoteData* noteData);

  /// @brief Method ManualUpdate, addr 0x25a9930, size 0x74, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::SliderController* New_ctor();

  /// @brief Method OnDestroy, addr 0x25a9414, size 0x2a8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x25a9ef8, size 0x10, virtual true, abstract: false, final true
  inline void Pause(bool pause);

  /// @brief Method SetSaberAttraction, addr 0x25a8cd8, size 0x88, virtual false, abstract: false, final false
  inline void SetSaberAttraction(bool saberAttraction);

  /// @brief Method Start, addr 0x25a9228, size 0x150, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x25a992c, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateMaterialPropertyBlock, addr 0x25a8db4, size 0x118, virtual false, abstract: false, final false
  inline void UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump);

  constexpr bool const& __cordl_internal_get__attractingSaber() const;

  constexpr bool& __cordl_internal_get__attractingSaber();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& __cordl_internal_get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& __cordl_internal_get__beatmapObjectSpawnController() const;

  constexpr float_t const& __cordl_internal_get__closeInteractionSaberPosSmoothParam() const;

  constexpr float_t& __cordl_internal_get__closeInteractionSaberPosSmoothParam();

  constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue*& __cordl_internal_get__closeSmoothedSaberInteractionPos();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FixedUpdateVector3SmoothValue*> const& __cordl_internal_get__closeSmoothedSaberInteractionPos() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr float_t const& __cordl_internal_get__headJumpOffsetY() const;

  constexpr float_t& __cordl_internal_get__headJumpOffsetY();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__initColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__initColor();

  constexpr float_t const& __cordl_internal_get__jumpDistance() const;

  constexpr float_t& __cordl_internal_get__jumpDistance();

  constexpr ::GlobalNamespace::__SliderController__LengthType const& __cordl_internal_get__lengthType() const;

  constexpr ::GlobalNamespace::__SliderController__LengthType& __cordl_internal_get__lengthType();

  constexpr float_t const& __cordl_internal_get__randomValue() const;

  constexpr float_t& __cordl_internal_get__randomValue();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__saber();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::GlobalNamespace::SliderData*& __cordl_internal_get__sliderData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderData*> const& __cordl_internal_get__sliderData() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*& __cordl_internal_get__sliderDidDissolve();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*> const& __cordl_internal_get__sliderDidDissolve() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*& __cordl_internal_get__sliderDidFinishMovement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*> const& __cordl_internal_get__sliderDidFinishMovement() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*& __cordl_internal_get__sliderDidStartDissolving();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*> const&
  __cordl_internal_get__sliderDidStartDissolving() const;

  constexpr float_t const& __cordl_internal_get__sliderDuration() const;

  constexpr float_t& __cordl_internal_get__sliderDuration();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*& __cordl_internal_get__sliderHeadDidMovePastCutMark();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*> const&
  __cordl_internal_get__sliderHeadDidMovePastCutMark() const;

  constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect> const& __cordl_internal_get__sliderIntensityEffect() const;

  constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect>& __cordl_internal_get__sliderIntensityEffect();

  constexpr ::UnityW<::GlobalNamespace::SliderMeshController> const& __cordl_internal_get__sliderMeshController() const;

  constexpr ::UnityW<::GlobalNamespace::SliderMeshController>& __cordl_internal_get__sliderMeshController();

  constexpr ::UnityW<::GlobalNamespace::SliderMovement> const& __cordl_internal_get__sliderMovement() const;

  constexpr ::UnityW<::GlobalNamespace::SliderMovement>& __cordl_internal_get__sliderMovement();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*& __cordl_internal_get__sliderTailDidMovePastCutMark();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*> const&
  __cordl_internal_get__sliderTailDidMovePastCutMark() const;

  constexpr float_t const& __cordl_internal_get__zDistanceBetweenNotes() const;

  constexpr float_t& __cordl_internal_get__zDistanceBetweenNotes();

  constexpr void __cordl_internal_set__attractingSaber(bool value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value);

  constexpr void __cordl_internal_set__closeInteractionSaberPosSmoothParam(float_t value);

  constexpr void __cordl_internal_set__closeSmoothedSaberInteractionPos(::GlobalNamespace::FixedUpdateVector3SmoothValue* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__headJumpOffsetY(float_t value);

  constexpr void __cordl_internal_set__initColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__jumpDistance(float_t value);

  constexpr void __cordl_internal_set__lengthType(::GlobalNamespace::__SliderController__LengthType value);

  constexpr void __cordl_internal_set__randomValue(float_t value);

  constexpr void __cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__sliderData(::GlobalNamespace::SliderData* value);

  constexpr void __cordl_internal_set__sliderDidDissolve(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* value);

  constexpr void __cordl_internal_set__sliderDidFinishMovement(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* value);

  constexpr void __cordl_internal_set__sliderDidStartDissolving(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* value);

  constexpr void __cordl_internal_set__sliderDuration(float_t value);

  constexpr void __cordl_internal_set__sliderHeadDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* value);

  constexpr void __cordl_internal_set__sliderIntensityEffect(::UnityW<::GlobalNamespace::SliderIntensityEffect> value);

  constexpr void __cordl_internal_set__sliderMeshController(::UnityW<::GlobalNamespace::SliderMeshController> value);

  constexpr void __cordl_internal_set__sliderMovement(::UnityW<::GlobalNamespace::SliderMovement> value);

  constexpr void __cordl_internal_set__sliderTailDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* value);

  constexpr void __cordl_internal_set__zDistanceBetweenNotes(float_t value);

  /// @brief Method .ctor, addr 0x25aa750, size 0x194, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_closeSmoothedSaberInteractionPos, addr 0x25a7e38, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* get_closeSmoothedSaberInteractionPos();

  /// @brief Method get_headJumpOffsetY, addr 0x25a7e28, size 0x8, virtual false, abstract: false, final false
  inline float_t get_headJumpOffsetY();

  /// @brief Method get_initColor, addr 0x25a7e04, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_initColor();

  /// @brief Method get_jumpDistance, addr 0x25a7e20, size 0x8, virtual false, abstract: false, final false
  inline float_t get_jumpDistance();

  /// @brief Method get_lengthType, addr 0x25a7d7c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SliderController__LengthType get_lengthType();

  /// @brief Method get_randomValue, addr 0x25a7e10, size 0x8, virtual false, abstract: false, final false
  inline float_t get_randomValue();

  /// @brief Method get_saberInteractionParam, addr 0x25a7d8c, size 0x40, virtual false, abstract: false, final false
  inline float_t get_saberInteractionParam();

  /// @brief Method get_sliderData, addr 0x25a7d84, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderData* get_sliderData();

  /// @brief Method get_sliderDidDissolveEvent, addr 0x25a7d64, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* get_sliderDidDissolveEvent();

  /// @brief Method get_sliderDidFinishJumpEvent, addr 0x25a7d54, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* get_sliderDidFinishJumpEvent();

  /// @brief Method get_sliderDidStartDissolvingEvent, addr 0x25a7d5c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* get_sliderDidStartDissolvingEvent();

  /// @brief Method get_sliderDuration, addr 0x25a7e30, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sliderDuration();

  /// @brief Method get_sliderHeadDidMovePastCutMark, addr 0x25a7d6c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* get_sliderHeadDidMovePastCutMark();

  /// @brief Method get_sliderIntensityEffect, addr 0x25a7e40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SliderIntensityEffect> get_sliderIntensityEffect();

  /// @brief Method get_sliderMeshController, addr 0x25a7df4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SliderMeshController> get_sliderMeshController();

  /// @brief Method get_sliderMovement, addr 0x25a7dfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SliderMovement> get_sliderMovement();

  /// @brief Method get_sliderTailDidMovePastCutMark, addr 0x25a7d74, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* get_sliderTailDidMovePastCutMark();

  /// @brief Method get_zDistanceBetweenNotes, addr 0x25a7e18, size 0x8, virtual false, abstract: false, final false
  inline float_t get_zDistanceBetweenNotes();

  /// @brief Convert to "::GlobalNamespace::IBeatmapObjectController"
  constexpr ::GlobalNamespace::IBeatmapObjectController* i___GlobalNamespace__IBeatmapObjectController() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderController(SliderController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderController(SliderController const&) = delete;

  /// @brief Field _sliderIntensityEffect, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderIntensityEffect> ____sliderIntensityEffect;

  /// @brief Field _sliderMeshController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderMeshController> ____sliderMeshController;

  /// @brief Field _sliderMovement, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderMovement> ____sliderMovement;

  /// @brief Field _closeInteractionSaberPosSmoothParam, offset: 0x48, size: 0x4, def value: None
  float_t ____closeInteractionSaberPosSmoothParam;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  /// @brief Field _colorManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _beatmapObjectManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _saberManager, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _sliderDidFinishMovement, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* ____sliderDidFinishMovement;

  /// @brief Field _sliderDidStartDissolving, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* ____sliderDidStartDissolving;

  /// @brief Field _sliderDidDissolve, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* ____sliderDidDissolve;

  /// @brief Field _sliderHeadDidMovePastCutMark, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* ____sliderHeadDidMovePastCutMark;

  /// @brief Field _sliderTailDidMovePastCutMark, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* ____sliderTailDidMovePastCutMark;

  /// @brief Field _lengthType, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::__SliderController__LengthType ____lengthType;

  /// @brief Field _sliderData, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::SliderData* ____sliderData;

  /// @brief Field _saber, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____saber;

  /// @brief Field _headJumpOffsetY, offset: 0xb0, size: 0x4, def value: None
  float_t ____headJumpOffsetY;

  /// @brief Field _sliderDuration, offset: 0xb4, size: 0x4, def value: None
  float_t ____sliderDuration;

  /// @brief Field _initColor, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Color ____initColor;

  /// @brief Field _attractingSaber, offset: 0xc8, size: 0x1, def value: None
  bool ____attractingSaber;

  /// @brief Field _randomValue, offset: 0xcc, size: 0x4, def value: None
  float_t ____randomValue;

  /// @brief Field _zDistanceBetweenNotes, offset: 0xd0, size: 0x4, def value: None
  float_t ____zDistanceBetweenNotes;

  /// @brief Field _jumpDistance, offset: 0xd4, size: 0x4, def value: None
  float_t ____jumpDistance;

  /// @brief Field _closeSmoothedSaberInteractionPos, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::FixedUpdateVector3SmoothValue* ____closeSmoothedSaberInteractionPos;

  /// @brief Field kSaberAttractPointNormalizedPosition offset 0xffffffff size 0x4
  static constexpr float_t kSaberAttractPointNormalizedPosition{ 0.7 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderController, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderIntensityEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderMeshController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderMovement) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____closeInteractionSaberPosSmoothParam) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____beatmapObjectSpawnController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____colorManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____beatmapObjectManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____saberManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDidFinishMovement) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDidStartDissolving) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDidDissolve) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderHeadDidMovePastCutMark) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderTailDidMovePastCutMark) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____lengthType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____saber) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____headJumpOffsetY) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDuration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____initColor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____attractingSaber) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____randomValue) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____zDistanceBetweenNotes) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____jumpDistance) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____closeSmoothedSaberInteractionPos) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__LengthType, "", "SliderController/LengthType");
NEED_NO_BOX(::GlobalNamespace::SliderController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderController*, "", "SliderController");
NEED_NO_BOX(::GlobalNamespace::__SliderController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__Pool*, "", "SliderController/Pool");
NEED_NO_BOX(::GlobalNamespace::__SliderController__Pool__Long);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__Pool__Long*, "", "SliderController/Pool/Long");
NEED_NO_BOX(::GlobalNamespace::__SliderController__Pool__Medium);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__Pool__Medium*, "", "SliderController/Pool/Medium");
NEED_NO_BOX(::GlobalNamespace::__SliderController__Pool__Short);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__Pool__Short*, "", "SliderController/Pool/Short");
NEED_NO_BOX(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*, "", "SliderController/<DissolveCoroutine>d__70");
