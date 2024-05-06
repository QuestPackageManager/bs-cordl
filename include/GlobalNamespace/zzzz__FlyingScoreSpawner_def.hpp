#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
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
class IFlyingObjectEffectDidFinishEvent;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
class __FlyingScoreEffect__Pool;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner__InitData;
}
namespace GlobalNamespace {
struct __FlyingScoreSpawner__SpawnPosition;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5;
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
struct __FlyingScoreSpawner__SpawnPosition;
}
namespace GlobalNamespace {
class FlyingScoreSpawner;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner__InitData;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition);
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreSpawner);
MARK_REF_PTR_T(::GlobalNamespace::__FlyingScoreSpawner__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5);
// Type: ::SpawnPosition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::FlyingScoreSpawner::SpawnPosition
struct CORDL_TYPE __FlyingScoreSpawner__SpawnPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____FlyingScoreSpawner__SpawnPosition_Unwrapped
  enum struct ____FlyingScoreSpawner__SpawnPosition_Unwrapped : int32_t {
    __E_Underground = static_cast<int32_t>(0x0),
    __E_AboveGround = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____FlyingScoreSpawner__SpawnPosition_Unwrapped() const noexcept {
    return static_cast<____FlyingScoreSpawner__SpawnPosition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingScoreSpawner__SpawnPosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FlyingScoreSpawner__SpawnPosition(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AboveGround value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const AboveGround;

  /// @brief Field Underground value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const Underground;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingScoreSpawner::InitData*
class CORDL_TYPE __FlyingScoreSpawner__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field spawnPosition, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_spawnPosition, put = __cordl_internal_set_spawnPosition))::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition;

  static inline ::GlobalNamespace::__FlyingScoreSpawner__InitData* New_ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition);

  constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const& __cordl_internal_get_spawnPosition() const;

  constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition& __cordl_internal_get_spawnPosition();

  constexpr void __cordl_internal_set_spawnPosition(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition value);

  /// @brief Method .ctor, addr 0x26c1f6c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FlyingScoreSpawner__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FlyingScoreSpawner__InitData(__FlyingScoreSpawner__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FlyingScoreSpawner__InitData(__FlyingScoreSpawner__InitData const&) = delete;

  /// @brief Field spawnPosition, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition ___spawnPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreSpawner__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlyingScoreSpawner__InitData, ___spawnPosition) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SpawnFlyingScoreNextFrameCoroutine>d__5
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingScoreSpawner::<SpawnFlyingScoreNextFrameCoroutine>d__5*
class CORDL_TYPE __FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::FlyingScoreSpawner> __4__this;

  /// @brief Field color, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Color color;

  /// @brief Field cutScoreBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cutScoreBuffer, put = __cordl_internal_set_cutScoreBuffer))::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26c1f98, size 0x5c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26c1ff4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26c1ffc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26c203c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26c1f94, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer*& __cordl_internal_get_cutScoreBuffer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyCutScoreBuffer*> const& __cordl_internal_get_cutScoreBuffer() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FlyingScoreSpawner> value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_cutScoreBuffer(::GlobalNamespace::IReadonlyCutScoreBuffer* value);

  /// @brief Method .ctor, addr 0x26c1b9c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5(__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5(__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5, ___cutScoreBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5, ___color) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FlyingScoreSpawner
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlyingScoreSpawner*
class CORDL_TYPE FlyingScoreSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__FlyingScoreSpawner__InitData;

  using SpawnPosition = ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition;

  using _SpawnFlyingScoreNextFrameCoroutine_d__5 = ::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5;

  /// @brief Field _flyingScoreEffectPool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingScoreEffectPool, put = __cordl_internal_set__flyingScoreEffectPool))::GlobalNamespace::__FlyingScoreEffect__Pool* _flyingScoreEffectPool;

  /// @brief Field _initData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__FlyingScoreSpawner__InitData* _initData;

  /// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

  /// @brief Method HandleFlyingObjectEffectDidFinish, addr 0x26c1e48, size 0x11c, virtual true, abstract: false, final true
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  static inline ::GlobalNamespace::FlyingScoreSpawner* New_ctor();

  /// @brief Method SpawnFlyingScore, addr 0x26c1bc4, size 0x284, virtual false, abstract: false, final false
  inline void SpawnFlyingScore(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color);

  /// @brief Method SpawnFlyingScoreNextFrame, addr 0x26c1ae0, size 0x20, virtual false, abstract: false, final false
  inline void SpawnFlyingScoreNextFrame(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color);

  /// @brief Method SpawnFlyingScoreNextFrameCoroutine, addr 0x26c1b00, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SpawnFlyingScoreNextFrameCoroutine(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color);

  constexpr ::GlobalNamespace::__FlyingScoreEffect__Pool*& __cordl_internal_get__flyingScoreEffectPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreEffect__Pool*> const& __cordl_internal_get__flyingScoreEffectPool() const;

  constexpr ::GlobalNamespace::__FlyingScoreSpawner__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreSpawner__InitData*> const& __cordl_internal_get__initData() const;

  constexpr void __cordl_internal_set__flyingScoreEffectPool(::GlobalNamespace::__FlyingScoreEffect__Pool* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__FlyingScoreSpawner__InitData* value);

  /// @brief Method .ctor, addr 0x26c1f64, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _flyingScoreEffectPool, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__FlyingScoreEffect__Pool* ____flyingScoreEffectPool;

  /// @brief Field _initData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__FlyingScoreSpawner__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreSpawner, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner, ____flyingScoreEffectPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingScoreSpawner, ____initData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, "", "FlyingScoreSpawner/SpawnPosition");
NEED_NO_BOX(::GlobalNamespace::FlyingScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreSpawner*, "", "FlyingScoreSpawner");
NEED_NO_BOX(::GlobalNamespace::__FlyingScoreSpawner__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreSpawner__InitData*, "", "FlyingScoreSpawner/InitData");
NEED_NO_BOX(::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreSpawner___SpawnFlyingScoreNextFrameCoroutine_d__5*, "", "FlyingScoreSpawner/<SpawnFlyingScoreNextFrameCoroutine>d__5");
