#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
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
class IJumpOffsetYProvider;
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
class IVariableMovementDataProvider;
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
class Pool_SliderController_Long;
}
namespace GlobalNamespace {
class Pool_SliderController_Medium;
}
namespace GlobalNamespace {
class Pool_SliderController_Short;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
struct SliderController_LengthType;
}
namespace GlobalNamespace {
class SliderController_Pool;
}
namespace GlobalNamespace {
class SliderController__DissolveCoroutine_d__71;
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
struct SliderSpawnData;
}
namespace GlobalNamespace {
class VariableMovementDataProvider;
}
namespace System::Collections {
class IEnumerator;
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
struct SliderController_LengthType;
}
namespace GlobalNamespace {
class Pool_SliderController_Long;
}
namespace GlobalNamespace {
class Pool_SliderController_Medium;
}
namespace GlobalNamespace {
class Pool_SliderController_Short;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class SliderController_Pool;
}
namespace GlobalNamespace {
class SliderController__DissolveCoroutine_d__71;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SliderController_LengthType);
MARK_REF_PTR_T(::GlobalNamespace::Pool_SliderController_Long);
MARK_REF_PTR_T(::GlobalNamespace::Pool_SliderController_Medium);
MARK_REF_PTR_T(::GlobalNamespace::Pool_SliderController_Short);
MARK_REF_PTR_T(::GlobalNamespace::SliderController);
MARK_REF_PTR_T(::GlobalNamespace::SliderController_Pool);
MARK_REF_PTR_T(::GlobalNamespace::SliderController__DissolveCoroutine_d__71);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SliderController/LengthType
struct CORDL_TYPE SliderController_LengthType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SliderController_LengthType_Unwrapped
  enum struct __SliderController_LengthType_Unwrapped : int32_t {
    __E_Short = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_Long = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SliderController_LengthType_Unwrapped() const noexcept {
    return static_cast<__SliderController_LengthType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderController_LengthType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SliderController_LengthType(int32_t value__) noexcept;

  /// @brief Field Long value: I32(2)
  static ::GlobalNamespace::SliderController_LengthType const Long;

  /// @brief Field Medium value: I32(1)
  static ::GlobalNamespace::SliderController_LengthType const Medium;

  /// @brief Field Short value: I32(0)
  static ::GlobalNamespace::SliderController_LengthType const Short;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4160 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderController_LengthType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderController_LengthType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderController/Pool/Short
class CORDL_TYPE Pool_SliderController_Short : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::Pool_SliderController_Short* New_ctor();

  /// @brief Method .ctor, addr 0x3b79ccc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pool_SliderController_Short();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pool_SliderController_Short", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pool_SliderController_Short(Pool_SliderController_Short&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pool_SliderController_Short", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pool_SliderController_Short(Pool_SliderController_Short const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4161 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Pool_SliderController_Short, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderController/Pool/Medium
class CORDL_TYPE Pool_SliderController_Medium : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::Pool_SliderController_Medium* New_ctor();

  /// @brief Method .ctor, addr 0x3b79d14, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pool_SliderController_Medium();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pool_SliderController_Medium", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pool_SliderController_Medium(Pool_SliderController_Medium&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pool_SliderController_Medium", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pool_SliderController_Medium(Pool_SliderController_Medium const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Pool_SliderController_Medium, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderController/Pool/Long
class CORDL_TYPE Pool_SliderController_Long : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::Pool_SliderController_Long* New_ctor();

  /// @brief Method .ctor, addr 0x3b79d5c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pool_SliderController_Long();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pool_SliderController_Long", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pool_SliderController_Long(Pool_SliderController_Long&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pool_SliderController_Long", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pool_SliderController_Long(Pool_SliderController_Long const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4163 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Pool_SliderController_Long, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderController/Pool
class CORDL_TYPE SliderController_Pool : public ::System::Object {
public:
  // Declarations
  using Long = ::GlobalNamespace::Pool_SliderController_Long;

  using Medium = ::GlobalNamespace::Pool_SliderController_Medium;

  using Short = ::GlobalNamespace::Pool_SliderController_Short;

  /// @brief Field _longPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__longPool, put = __cordl_internal_set__longPool)) ::GlobalNamespace::Pool_SliderController_Long* _longPool;

  /// @brief Field _mediumPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mediumPool, put = __cordl_internal_set__mediumPool)) ::GlobalNamespace::Pool_SliderController_Medium* _mediumPool;

  /// @brief Field _shortPool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shortPool, put = __cordl_internal_set__shortPool)) ::GlobalNamespace::Pool_SliderController_Short* _shortPool;

  /// @brief Field _variableMovementDataProvider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::VariableMovementDataProvider* _variableMovementDataProvider;

  /// @brief Method GetLengthFromSliderData, addr 0x3b79c24, size 0xa8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderController_LengthType GetLengthFromSliderData(::GlobalNamespace::SliderData* sliderNoteData, ::GlobalNamespace::SliderSpawnData sliderSpawnData);

  /// @brief Method GetPool, addr 0x3b79b84, size 0xa0, virtual false, abstract: false, final false
  inline ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>>* GetPool(::GlobalNamespace::SliderController_LengthType lengthType);

  static inline ::GlobalNamespace::SliderController_Pool* New_ctor(::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider,
                                                                   ::GlobalNamespace::Pool_SliderController_Short* shortPool, ::GlobalNamespace::Pool_SliderController_Medium* mediumPool,
                                                                   ::GlobalNamespace::Pool_SliderController_Long* longPool);

  constexpr ::GlobalNamespace::Pool_SliderController_Long* const& __cordl_internal_get__longPool() const;

  constexpr ::GlobalNamespace::Pool_SliderController_Long*& __cordl_internal_get__longPool();

  constexpr ::GlobalNamespace::Pool_SliderController_Medium* const& __cordl_internal_get__mediumPool() const;

  constexpr ::GlobalNamespace::Pool_SliderController_Medium*& __cordl_internal_get__mediumPool();

  constexpr ::GlobalNamespace::Pool_SliderController_Short* const& __cordl_internal_get__shortPool() const;

  constexpr ::GlobalNamespace::Pool_SliderController_Short*& __cordl_internal_get__shortPool();

  constexpr ::GlobalNamespace::VariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::VariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr void __cordl_internal_set__longPool(::GlobalNamespace::Pool_SliderController_Long* value);

  constexpr void __cordl_internal_set__mediumPool(::GlobalNamespace::Pool_SliderController_Medium* value);

  constexpr void __cordl_internal_set__shortPool(::GlobalNamespace::Pool_SliderController_Short* value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::VariableMovementDataProvider* value);

  /// @brief Method .ctor, addr 0x3b79b44, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider, ::GlobalNamespace::Pool_SliderController_Short* shortPool,
                    ::GlobalNamespace::Pool_SliderController_Medium* mediumPool, ::GlobalNamespace::Pool_SliderController_Long* longPool);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderController_Pool(SliderController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderController_Pool(SliderController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4164 };

  /// @brief Field kMinDistanceToUseLong offset 0xffffffff size 0x4
  static constexpr float_t kMinDistanceToUseLong{ static_cast<float_t>(15.0f) };

  /// @brief Field kMinDistanceToUseMedium offset 0xffffffff size 0x4
  static constexpr float_t kMinDistanceToUseMedium{ static_cast<float_t>(5.0f) };

  /// @brief Field _variableMovementDataProvider, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::VariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _shortPool, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::Pool_SliderController_Short* ____shortPool;

  /// @brief Field _mediumPool, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::Pool_SliderController_Medium* ____mediumPool;

  /// @brief Field _longPool, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::Pool_SliderController_Long* ____longPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderController_Pool, ____variableMovementDataProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController_Pool, ____shortPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController_Pool, ____mediumPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController_Pool, ____longPool) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderController_Pool, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderController/<DissolveCoroutine>d__71
class CORDL_TYPE SliderController__DissolveCoroutine_d__71 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SliderController> __4__this;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3b79da8, size 0x3f0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::SliderController__DissolveCoroutine_d__71* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3b7a198, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3b7a1a0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3b7a1d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3b79da4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::SliderController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SliderController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SliderController> value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x3b7909c, size 0x28, virtual false, abstract: false, final false
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
  constexpr SliderController__DissolveCoroutine_d__71();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderController__DissolveCoroutine_d__71", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderController__DissolveCoroutine_d__71(SliderController__DissolveCoroutine_d__71&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderController__DissolveCoroutine_d__71", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderController__DissolveCoroutine_d__71(SliderController__DissolveCoroutine_d__71 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4165 };

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
static_assert(offsetof(::GlobalNamespace::SliderController__DissolveCoroutine_d__71, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController__DissolveCoroutine_d__71, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController__DissolveCoroutine_d__71, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController__DissolveCoroutine_d__71, ___duration) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderController__DissolveCoroutine_d__71, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBeatmapObjectController, SliderController::LengthType, SliderControllerBase, SliderSpawnData, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderController
class CORDL_TYPE SliderController : public ::GlobalNamespace::SliderControllerBase {
public:
  // Declarations
  using LengthType = ::GlobalNamespace::SliderController_LengthType;

  using Pool = ::GlobalNamespace::SliderController_Pool;

  using _DissolveCoroutine_d__71 = ::GlobalNamespace::SliderController__DissolveCoroutine_d__71;

  /// @brief Field _attractingSaber, offset 0xf4, size 0x1
  __declspec(property(get = __cordl_internal_get__attractingSaber, put = __cordl_internal_set__attractingSaber)) bool _attractingSaber;

  /// @brief Field _beatmapObjectManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _closeInteractionSaberPosSmoothParam, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__closeInteractionSaberPosSmoothParam, put = __cordl_internal_set__closeInteractionSaberPosSmoothParam)) float_t _closeInteractionSaberPosSmoothParam;

  /// @brief Field _closeSmoothedSaberInteractionPos, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__closeSmoothedSaberInteractionPos,
                      put = __cordl_internal_set__closeSmoothedSaberInteractionPos)) ::GlobalNamespace::FixedUpdateVector3SmoothValue* _closeSmoothedSaberInteractionPos;

  /// @brief Field _colorManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _initColor, offset 0xe4, size 0x10
  __declspec(property(get = __cordl_internal_get__initColor, put = __cordl_internal_set__initColor)) ::UnityEngine::Color _initColor;

  /// @brief Field _jumpOffsetY, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpOffsetY, put = __cordl_internal_set__jumpOffsetY)) float_t _jumpOffsetY;

  /// @brief Field _jumpOffsetYProvider, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpOffsetYProvider, put = __cordl_internal_set__jumpOffsetYProvider)) ::GlobalNamespace::IJumpOffsetYProvider* _jumpOffsetYProvider;

  /// @brief Field _lengthType, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__lengthType, put = __cordl_internal_set__lengthType)) ::GlobalNamespace::SliderController_LengthType _lengthType;

  /// @brief Field _randomValue, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get__randomValue, put = __cordl_internal_set__randomValue)) float_t _randomValue;

  /// @brief Field _saber, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber)) ::UnityW<::GlobalNamespace::Saber> _saber;

  /// @brief Field _saberManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _sliderData, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderData, put = __cordl_internal_set__sliderData)) ::GlobalNamespace::SliderData* _sliderData;

  /// @brief Field _sliderDidDissolve, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderDidDissolve,
                      put = __cordl_internal_set__sliderDidDissolve)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* _sliderDidDissolve;

  /// @brief Field _sliderDidFinishMovement, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderDidFinishMovement,
                      put = __cordl_internal_set__sliderDidFinishMovement)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* _sliderDidFinishMovement;

  /// @brief Field _sliderDidStartDissolving, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderDidStartDissolving,
                      put = __cordl_internal_set__sliderDidStartDissolving)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* _sliderDidStartDissolving;

  /// @brief Field _sliderDuration, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get__sliderDuration, put = __cordl_internal_set__sliderDuration)) float_t _sliderDuration;

  /// @brief Field _sliderHeadDidMovePastCutMark, offset 0x98, size 0x8
  __declspec(property(
      get = __cordl_internal_get__sliderHeadDidMovePastCutMark,
      put = __cordl_internal_set__sliderHeadDidMovePastCutMark)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* _sliderHeadDidMovePastCutMark;

  /// @brief Field _sliderIntensityEffect, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderIntensityEffect, put = __cordl_internal_set__sliderIntensityEffect)) ::UnityW<::GlobalNamespace::SliderIntensityEffect> _sliderIntensityEffect;

  /// @brief Field _sliderMeshController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderMeshController, put = __cordl_internal_set__sliderMeshController)) ::UnityW<::GlobalNamespace::SliderMeshController> _sliderMeshController;

  /// @brief Field _sliderMovement, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderMovement, put = __cordl_internal_set__sliderMovement)) ::UnityW<::GlobalNamespace::SliderMovement> _sliderMovement;

  /// @brief Field _sliderSpawnData, offset 0xb8, size 0x20
  __declspec(property(get = __cordl_internal_get__sliderSpawnData, put = __cordl_internal_set__sliderSpawnData)) ::GlobalNamespace::SliderSpawnData _sliderSpawnData;

  /// @brief Field _sliderTailDidMovePastCutMark, offset 0xa0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__sliderTailDidMovePastCutMark,
      put = __cordl_internal_set__sliderTailDidMovePastCutMark)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* _sliderTailDidMovePastCutMark;

  /// @brief Field _variableMovementDataProvider, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  /// @brief Field _zDistanceBetweenNotes, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get__zDistanceBetweenNotes, put = __cordl_internal_set__zDistanceBetweenNotes)) float_t _zDistanceBetweenNotes;

  __declspec(property(get = get_closeSmoothedSaberInteractionPos)) ::GlobalNamespace::FixedUpdateVector3SmoothValue* closeSmoothedSaberInteractionPos;

  __declspec(property(get = get_initColor)) ::UnityEngine::Color initColor;

  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  __declspec(property(get = get_lengthType)) ::GlobalNamespace::SliderController_LengthType lengthType;

  __declspec(property(get = get_randomValue)) float_t randomValue;

  __declspec(property(get = get_saberInteractionParam)) float_t saberInteractionParam;

  __declspec(property(get = get_sliderData)) ::GlobalNamespace::SliderData* sliderData;

  __declspec(property(get = get_sliderDidDissolveEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* sliderDidDissolveEvent;

  __declspec(property(get = get_sliderDidFinishJumpEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* sliderDidFinishJumpEvent;

  __declspec(property(get = get_sliderDidStartDissolvingEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* sliderDidStartDissolvingEvent;

  __declspec(property(get = get_sliderDuration)) float_t sliderDuration;

  __declspec(property(get = get_sliderHeadDidMovePastCutMark)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* sliderHeadDidMovePastCutMark;

  __declspec(property(get = get_sliderIntensityEffect)) ::UnityW<::GlobalNamespace::SliderIntensityEffect> sliderIntensityEffect;

  __declspec(property(get = get_sliderMeshController)) ::UnityW<::GlobalNamespace::SliderMeshController> sliderMeshController;

  __declspec(property(get = get_sliderMovement)) ::UnityW<::GlobalNamespace::SliderMovement> sliderMovement;

  __declspec(property(get = get_sliderSpawnData)) ::GlobalNamespace::SliderSpawnData sliderSpawnData;

  __declspec(property(get = get_sliderTailDidMovePastCutMark)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* sliderTailDidMovePastCutMark;

  __declspec(property(get = get_zDistanceBetweenNotes)) float_t zDistanceBetweenNotes;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectController*() noexcept;

  /// @brief Method Awake, addr 0x3b77b3c, size 0x150, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Dissolve, addr 0x3b790c4, size 0x60, virtual true, abstract: false, final true
  inline void Dissolve(float_t duration);

  /// @brief Method DissolveCoroutine, addr 0x3b7902c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DissolveCoroutine(float_t duration);

  /// @brief Method FixedUpdate, addr 0x3b786d8, size 0x58, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetSaberInteractionPoint, addr 0x3b77a18, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetSaberInteractionPoint(::GlobalNamespace::Saber* saber);

  /// @brief Method HandleFadeInDidStart, addr 0x3b79910, size 0x8, virtual false, abstract: false, final false
  inline void HandleFadeInDidStart();

  /// @brief Method HandleHeadDidMovePastCutMark, addr 0x3b79434, size 0x1e0, virtual false, abstract: false, final false
  inline void HandleHeadDidMovePastCutMark();

  /// @brief Method HandleMovementDidFinish, addr 0x3b79270, size 0x1c4, virtual false, abstract: false, final false
  inline void HandleMovementDidFinish();

  /// @brief Method HandleNoteWasCut, addr 0x3b79890, size 0x80, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed, addr 0x3b79814, size 0x4c, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleTailDidMovePastCutMark, addr 0x3b79644, size 0x1d0, virtual false, abstract: false, final false
  inline void HandleTailDidMovePastCutMark();

  /// @brief Method Hide, addr 0x3b7914c, size 0x2c, virtual true, abstract: false, final true
  inline void Hide(bool hide);

  /// @brief Method Init, addr 0x3b76adc, size 0x458, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::SliderController_LengthType lengthType, ::GlobalNamespace::SliderData* sliderData, ::ByRef<::GlobalNamespace::SliderSpawnData> sliderSpawnData,
                   float_t noteUniformScale, float_t randomValue);

  /// @brief Method IsNoteStartOfThisSlider, addr 0x3b79188, size 0xe8, virtual false, abstract: false, final false
  inline bool IsNoteStartOfThisSlider(::GlobalNamespace::NoteData* noteData);

  /// @brief Method ManualUpdate, addr 0x3b78544, size 0x194, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::SliderController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b78040, size 0x290, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x3b79178, size 0x10, virtual true, abstract: false, final true
  inline void Pause(bool pause);

  /// @brief Method SetSaberAttraction, addr 0x3b77998, size 0x80, virtual false, abstract: false, final false
  inline void SetSaberAttraction(bool saberAttraction);

  /// @brief Method Start, addr 0x3b77e60, size 0x144, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b78540, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateMaterialPropertyBlock, addr 0x3b77a6c, size 0xa8, virtual false, abstract: false, final false
  inline void UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump);

  constexpr bool const& __cordl_internal_get__attractingSaber() const;

  constexpr bool& __cordl_internal_get__attractingSaber();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr float_t const& __cordl_internal_get__closeInteractionSaberPosSmoothParam() const;

  constexpr float_t& __cordl_internal_get__closeInteractionSaberPosSmoothParam();

  constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue* const& __cordl_internal_get__closeSmoothedSaberInteractionPos() const;

  constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue*& __cordl_internal_get__closeSmoothedSaberInteractionPos();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__initColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__initColor();

  constexpr float_t const& __cordl_internal_get__jumpOffsetY() const;

  constexpr float_t& __cordl_internal_get__jumpOffsetY();

  constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& __cordl_internal_get__jumpOffsetYProvider() const;

  constexpr ::GlobalNamespace::IJumpOffsetYProvider*& __cordl_internal_get__jumpOffsetYProvider();

  constexpr ::GlobalNamespace::SliderController_LengthType const& __cordl_internal_get__lengthType() const;

  constexpr ::GlobalNamespace::SliderController_LengthType& __cordl_internal_get__lengthType();

  constexpr float_t const& __cordl_internal_get__randomValue() const;

  constexpr float_t& __cordl_internal_get__randomValue();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__saber();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::GlobalNamespace::SliderData* const& __cordl_internal_get__sliderData() const;

  constexpr ::GlobalNamespace::SliderData*& __cordl_internal_get__sliderData();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* const& __cordl_internal_get__sliderDidDissolve() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*& __cordl_internal_get__sliderDidDissolve();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* const& __cordl_internal_get__sliderDidFinishMovement() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*& __cordl_internal_get__sliderDidFinishMovement();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* const& __cordl_internal_get__sliderDidStartDissolving() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*& __cordl_internal_get__sliderDidStartDissolving();

  constexpr float_t const& __cordl_internal_get__sliderDuration() const;

  constexpr float_t& __cordl_internal_get__sliderDuration();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* const& __cordl_internal_get__sliderHeadDidMovePastCutMark() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*& __cordl_internal_get__sliderHeadDidMovePastCutMark();

  constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect> const& __cordl_internal_get__sliderIntensityEffect() const;

  constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect>& __cordl_internal_get__sliderIntensityEffect();

  constexpr ::UnityW<::GlobalNamespace::SliderMeshController> const& __cordl_internal_get__sliderMeshController() const;

  constexpr ::UnityW<::GlobalNamespace::SliderMeshController>& __cordl_internal_get__sliderMeshController();

  constexpr ::UnityW<::GlobalNamespace::SliderMovement> const& __cordl_internal_get__sliderMovement() const;

  constexpr ::UnityW<::GlobalNamespace::SliderMovement>& __cordl_internal_get__sliderMovement();

  constexpr ::GlobalNamespace::SliderSpawnData const& __cordl_internal_get__sliderSpawnData() const;

  constexpr ::GlobalNamespace::SliderSpawnData& __cordl_internal_get__sliderSpawnData();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* const& __cordl_internal_get__sliderTailDidMovePastCutMark() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*& __cordl_internal_get__sliderTailDidMovePastCutMark();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr float_t const& __cordl_internal_get__zDistanceBetweenNotes() const;

  constexpr float_t& __cordl_internal_get__zDistanceBetweenNotes();

  constexpr void __cordl_internal_set__attractingSaber(bool value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__closeInteractionSaberPosSmoothParam(float_t value);

  constexpr void __cordl_internal_set__closeSmoothedSaberInteractionPos(::GlobalNamespace::FixedUpdateVector3SmoothValue* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__initColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__jumpOffsetY(float_t value);

  constexpr void __cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value);

  constexpr void __cordl_internal_set__lengthType(::GlobalNamespace::SliderController_LengthType value);

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

  constexpr void __cordl_internal_set__sliderSpawnData(::GlobalNamespace::SliderSpawnData value);

  constexpr void __cordl_internal_set__sliderTailDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  constexpr void __cordl_internal_set__zDistanceBetweenNotes(float_t value);

  /// @brief Method .ctor, addr 0x3b799a0, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_closeSmoothedSaberInteractionPos, addr 0x3b76acc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* get_closeSmoothedSaberInteractionPos();

  /// @brief Method get_initColor, addr 0x3b76aa0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_initColor();

  /// @brief Method get_jumpOffsetY, addr 0x3b76ac4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_jumpOffsetY();

  /// @brief Method get_lengthType, addr 0x3b76a08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderController_LengthType get_lengthType();

  /// @brief Method get_randomValue, addr 0x3b76aac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_randomValue();

  /// @brief Method get_saberInteractionParam, addr 0x3b76a28, size 0x40, virtual false, abstract: false, final false
  inline float_t get_saberInteractionParam();

  /// @brief Method get_sliderData, addr 0x3b76a10, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderData* get_sliderData();

  /// @brief Method get_sliderDidDissolveEvent, addr 0x3b769f0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* get_sliderDidDissolveEvent();

  /// @brief Method get_sliderDidFinishJumpEvent, addr 0x3b769e0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* get_sliderDidFinishJumpEvent();

  /// @brief Method get_sliderDidStartDissolvingEvent, addr 0x3b769e8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* get_sliderDidStartDissolvingEvent();

  /// @brief Method get_sliderDuration, addr 0x3b76abc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sliderDuration();

  /// @brief Method get_sliderHeadDidMovePastCutMark, addr 0x3b769f8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* get_sliderHeadDidMovePastCutMark();

  /// @brief Method get_sliderIntensityEffect, addr 0x3b76ad4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SliderIntensityEffect> get_sliderIntensityEffect();

  /// @brief Method get_sliderMeshController, addr 0x3b76a90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SliderMeshController> get_sliderMeshController();

  /// @brief Method get_sliderMovement, addr 0x3b76a98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SliderMovement> get_sliderMovement();

  /// @brief Method get_sliderSpawnData, addr 0x3b76a18, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderSpawnData get_sliderSpawnData();

  /// @brief Method get_sliderTailDidMovePastCutMark, addr 0x3b76a00, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* get_sliderTailDidMovePastCutMark();

  /// @brief Method get_zDistanceBetweenNotes, addr 0x3b76ab4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4166 };

  /// @brief Field kSaberAttractPointNormalizedPosition offset 0xffffffff size 0x4
  static constexpr float_t kSaberAttractPointNormalizedPosition{ static_cast<float_t>(0.7f) };

  /// @brief Field _sliderIntensityEffect, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderIntensityEffect> ____sliderIntensityEffect;

  /// @brief Field _sliderMeshController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderMeshController> ____sliderMeshController;

  /// @brief Field _sliderMovement, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderMovement> ____sliderMovement;

  /// @brief Field _closeInteractionSaberPosSmoothParam, offset: 0x50, size: 0x4, def value: None
  float_t ____closeInteractionSaberPosSmoothParam;

  /// @brief Field _colorManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _beatmapObjectManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _saberManager, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _variableMovementDataProvider, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _jumpOffsetYProvider, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IJumpOffsetYProvider* ____jumpOffsetYProvider;

  /// @brief Field _sliderDidFinishMovement, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* ____sliderDidFinishMovement;

  /// @brief Field _sliderDidStartDissolving, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* ____sliderDidStartDissolving;

  /// @brief Field _sliderDidDissolve, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* ____sliderDidDissolve;

  /// @brief Field _sliderHeadDidMovePastCutMark, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* ____sliderHeadDidMovePastCutMark;

  /// @brief Field _sliderTailDidMovePastCutMark, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* ____sliderTailDidMovePastCutMark;

  /// @brief Field _lengthType, offset: 0xa8, size: 0x4, def value: None
  ::GlobalNamespace::SliderController_LengthType ____lengthType;

  /// @brief Field _sliderData, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::SliderData* ____sliderData;

  /// @brief Field _sliderSpawnData, offset: 0xb8, size: 0x20, def value: None
  ::GlobalNamespace::SliderSpawnData ____sliderSpawnData;

  /// @brief Field _saber, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____saber;

  /// @brief Field _sliderDuration, offset: 0xe0, size: 0x4, def value: None
  float_t ____sliderDuration;

  /// @brief Field _initColor, offset: 0xe4, size: 0x10, def value: None
  ::UnityEngine::Color ____initColor;

  /// @brief Field _attractingSaber, offset: 0xf4, size: 0x1, def value: None
  bool ____attractingSaber;

  /// @brief Field _randomValue, offset: 0xf8, size: 0x4, def value: None
  float_t ____randomValue;

  /// @brief Field _zDistanceBetweenNotes, offset: 0xfc, size: 0x4, def value: None
  float_t ____zDistanceBetweenNotes;

  /// @brief Field _jumpOffsetY, offset: 0x100, size: 0x4, def value: None
  float_t ____jumpOffsetY;

  /// @brief Field _closeSmoothedSaberInteractionPos, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::FixedUpdateVector3SmoothValue* ____closeSmoothedSaberInteractionPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderIntensityEffect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderMeshController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderMovement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____closeInteractionSaberPosSmoothParam) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____colorManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____beatmapObjectManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____saberManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____variableMovementDataProvider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____jumpOffsetYProvider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDidFinishMovement) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDidStartDissolving) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDidDissolve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderHeadDidMovePastCutMark) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderTailDidMovePastCutMark) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____lengthType) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderSpawnData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____saber) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDuration) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____initColor) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____attractingSaber) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____randomValue) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____zDistanceBetweenNotes) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____jumpOffsetY) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____closeSmoothedSaberInteractionPos) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderController, 0x110>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderController_LengthType, "", "SliderController/LengthType");
NEED_NO_BOX(::GlobalNamespace::Pool_SliderController_Long);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Pool_SliderController_Long*, "", "SliderController/Pool/Long");
NEED_NO_BOX(::GlobalNamespace::Pool_SliderController_Medium);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Pool_SliderController_Medium*, "", "SliderController/Pool/Medium");
NEED_NO_BOX(::GlobalNamespace::Pool_SliderController_Short);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Pool_SliderController_Short*, "", "SliderController/Pool/Short");
NEED_NO_BOX(::GlobalNamespace::SliderController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderController*, "", "SliderController");
NEED_NO_BOX(::GlobalNamespace::SliderController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderController_Pool*, "", "SliderController/Pool");
NEED_NO_BOX(::GlobalNamespace::SliderController__DissolveCoroutine_d__71);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderController__DissolveCoroutine_d__71*, "", "SliderController/<DissolveCoroutine>d__71");
