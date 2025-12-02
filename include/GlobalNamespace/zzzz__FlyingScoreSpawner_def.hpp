#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingScoreSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlyingScoreSpawner)
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace GlobalNamespace {
class FlyingScoreEffect_Pool;
}
namespace GlobalNamespace {
class FlyingScoreSpawner_InitData;
}
namespace GlobalNamespace {
struct FlyingScoreSpawner_SpawnPosition;
}
namespace GlobalNamespace {
class FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5;
}
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
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
// Forward declare root types
namespace GlobalNamespace {
struct FlyingScoreSpawner_SpawnPosition;
}
namespace GlobalNamespace {
class FlyingScoreSpawner;
}
namespace GlobalNamespace {
class FlyingScoreSpawner_InitData;
}
namespace GlobalNamespace {
class FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition);
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreSpawner);
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreSpawner_InitData);
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: FlyingScoreSpawner/SpawnPosition
struct CORDL_TYPE FlyingScoreSpawner_SpawnPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FlyingScoreSpawner_SpawnPosition_Unwrapped
  enum struct __FlyingScoreSpawner_SpawnPosition_Unwrapped : int32_t {
    __E_Underground = static_cast<int32_t>(0x0),
    __E_AboveGround = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FlyingScoreSpawner_SpawnPosition_Unwrapped() const noexcept {
    return static_cast<__FlyingScoreSpawner_SpawnPosition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingScoreSpawner_SpawnPosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FlyingScoreSpawner_SpawnPosition(int32_t value__) noexcept;

  /// @brief Field AboveGround value: I32(1)
  static ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition const AboveGround;

  /// @brief Field Underground value: I32(0)
  static ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition const Underground;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5810 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreSpawner_SpawnPosition, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies FlyingScoreSpawner::SpawnPosition, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingScoreSpawner/InitData
class CORDL_TYPE FlyingScoreSpawner_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field spawnPosition, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_spawnPosition, put = __cordl_internal_set_spawnPosition)) ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition spawnPosition;

  static inline ::GlobalNamespace::FlyingScoreSpawner_InitData* New_ctor(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition spawnPosition);

  constexpr ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition const& __cordl_internal_get_spawnPosition() const;

  constexpr ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition& __cordl_internal_get_spawnPosition();

  constexpr void __cordl_internal_set_spawnPosition(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition value);

  /// @brief Method .ctor, addr 0x57754a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition spawnPosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingScoreSpawner_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingScoreSpawner_InitData(FlyingScoreSpawner_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingScoreSpawner_InitData(FlyingScoreSpawner_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5811 };

  /// @brief Field spawnPosition, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition ___spawnPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner_InitData, ___spawnPosition) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreSpawner_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingScoreSpawner/<SpawnFlyingScoreNextFrameCoroutine>d__5
class CORDL_TYPE FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FlyingScoreSpawner> __4__this;

  /// @brief Field color, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field cutScoreBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cutScoreBuffer, put = __cordl_internal_set_cutScoreBuffer)) ::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x57754ac, size 0x5c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5775508, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5775510, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5775548, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x57754a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer* const& __cordl_internal_get_cutScoreBuffer() const;

  constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer*& __cordl_internal_get_cutScoreBuffer();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FlyingScoreSpawner> value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_cutScoreBuffer(::GlobalNamespace::IReadonlyCutScoreBuffer* value);

  /// @brief Method .ctor, addr 0x57750dc, size 0x8, virtual false, abstract: false, final false
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
  constexpr FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5(FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5(FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5812 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlyingScoreSpawner> _____4__this;

  /// @brief Field cutScoreBuffer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyCutScoreBuffer* ___cutScoreBuffer;

  /// @brief Field color, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5, ___cutScoreBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5, ___color) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingScoreSpawner
class CORDL_TYPE FlyingScoreSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::FlyingScoreSpawner_InitData;

  using SpawnPosition = ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition;

  using _SpawnFlyingScoreNextFrameCoroutine_d__5 = ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5;

  /// @brief Field _flyingScoreEffectPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingScoreEffectPool, put = __cordl_internal_set__flyingScoreEffectPool)) ::GlobalNamespace::FlyingScoreEffect_Pool* _flyingScoreEffectPool;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::FlyingScoreSpawner_InitData* _initData;

  /// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

  /// @brief Method HandleFlyingObjectEffectDidFinish, addr 0x577536c, size 0x130, virtual true, abstract: false, final true
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  static inline ::GlobalNamespace::FlyingScoreSpawner* New_ctor();

  /// @brief Method SpawnFlyingScore, addr 0x57750e4, size 0x288, virtual false, abstract: false, final false
  inline void SpawnFlyingScore(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color);

  /// @brief Method SpawnFlyingScoreNextFrame, addr 0x5775034, size 0x20, virtual false, abstract: false, final false
  inline void SpawnFlyingScoreNextFrame(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color);

  /// @brief Method SpawnFlyingScoreNextFrameCoroutine, addr 0x5775054, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SpawnFlyingScoreNextFrameCoroutine(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color);

  constexpr ::GlobalNamespace::FlyingScoreEffect_Pool* const& __cordl_internal_get__flyingScoreEffectPool() const;

  constexpr ::GlobalNamespace::FlyingScoreEffect_Pool*& __cordl_internal_get__flyingScoreEffectPool();

  constexpr ::GlobalNamespace::FlyingScoreSpawner_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::FlyingScoreSpawner_InitData*& __cordl_internal_get__initData();

  constexpr void __cordl_internal_set__flyingScoreEffectPool(::GlobalNamespace::FlyingScoreEffect_Pool* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::FlyingScoreSpawner_InitData* value);

  /// @brief Method .ctor, addr 0x577549c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent* i___GlobalNamespace__IFlyingObjectEffectDidFinishEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingScoreSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingScoreSpawner(FlyingScoreSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingScoreSpawner(FlyingScoreSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5813 };

  /// @brief Field _flyingScoreEffectPool, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FlyingScoreEffect_Pool* ____flyingScoreEffectPool;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::FlyingScoreSpawner_InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner, ____flyingScoreEffectPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner, ____initData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreSpawner, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition, "", "FlyingScoreSpawner/SpawnPosition");
NEED_NO_BOX(::GlobalNamespace::FlyingScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreSpawner*, "", "FlyingScoreSpawner");
NEED_NO_BOX(::GlobalNamespace::FlyingScoreSpawner_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreSpawner_InitData*, "", "FlyingScoreSpawner/InitData");
NEED_NO_BOX(::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*, "", "FlyingScoreSpawner/<SpawnFlyingScoreNextFrameCoroutine>d__5");
