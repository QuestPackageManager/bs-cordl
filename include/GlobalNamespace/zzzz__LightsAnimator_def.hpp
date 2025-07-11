#pragma once
// IWYU pragma private; include "GlobalNamespace/LightsAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightsAnimator)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class LightsAnimator__DisableDirectionalLightsCoroutine_d__11;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace Tweening {
class ColorTween;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightsAnimator;
}
namespace GlobalNamespace {
class LightsAnimator__DisableDirectionalLightsCoroutine_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightsAnimator);
MARK_REF_PTR_T(::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightsAnimator/<DisableDirectionalLightsCoroutine>d__11
class CORDL_TYPE LightsAnimator__DisableDirectionalLightsCoroutine_d__11 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LightsAnimator> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3bbbca4, size 0x104, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3bbbda8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3bbbdb0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3bbbde8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3bbbca0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::LightsAnimator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LightsAnimator>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LightsAnimator> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x3bbbc70, size 0x28, virtual false, abstract: false, final false
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
  constexpr LightsAnimator__DisableDirectionalLightsCoroutine_d__11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightsAnimator__DisableDirectionalLightsCoroutine_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightsAnimator__DisableDirectionalLightsCoroutine_d__11(LightsAnimator__DisableDirectionalLightsCoroutine_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightsAnimator__DisableDirectionalLightsCoroutine_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightsAnimator__DisableDirectionalLightsCoroutine_d__11(LightsAnimator__DisableDirectionalLightsCoroutine_d__11 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4507 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightsAnimator> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightsAnimator
class CORDL_TYPE LightsAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DisableDirectionalLightsCoroutine_d__11 = ::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11;

  /// @brief Field _directionalLights, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLights,
                      put = __cordl_internal_set__directionalLights)) ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>
      _directionalLights;

  /// @brief Field _lights, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lights,
                      put = __cordl_internal_set__lights)) ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>
      _lights;

  /// @brief Field _tween, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tween, put = __cordl_internal_set__tween)) ::Tweening::ColorTween* _tween;

  /// @brief Field _tweeningManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Method AnimateToColor, addr 0x3bb8f54, size 0x114, virtual false, abstract: false, final false
  inline void AnimateToColor(::UnityEngine::Color color, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method Awake, addr 0x3bbb924, size 0xdc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DisableDirectionalLights, addr 0x3bbbbc8, size 0x38, virtual false, abstract: false, final false
  inline void DisableDirectionalLights(float_t delay);

  /// @brief Method DisableDirectionalLightsCoroutine, addr 0x3bbbc00, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DisableDirectionalLightsCoroutine(float_t delay);

  static inline ::GlobalNamespace::LightsAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bbba00, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetColor, addr 0x3bbba88, size 0x58, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetLightsColor, addr 0x3bbbae0, size 0xe8, virtual false, abstract: false, final false
  inline void SetLightsColor(::UnityEngine::Color color);

  /// @brief Method SetLightsWidth, addr 0x3bb93d4, size 0x70, virtual false, abstract: false, final false
  inline void SetLightsWidth(float_t width);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> const& __cordl_internal_get__directionalLights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>& __cordl_internal_get__directionalLights();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& __cordl_internal_get__lights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& __cordl_internal_get__lights();

  constexpr ::Tweening::ColorTween* const& __cordl_internal_get__tween() const;

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__tween();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> value);

  constexpr void __cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  constexpr void __cordl_internal_set__tween(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x3bbbc98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightsAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightsAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightsAnimator(LightsAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightsAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightsAnimator(LightsAnimator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4508 };

  /// @brief Field _lights, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____lights;

  /// @brief Field _directionalLights, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> ____directionalLights;

  /// @brief Field _tweeningManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _tween, offset: 0x38, size: 0x8, def value: None
  ::Tweening::ColorTween* ____tween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightsAnimator, ____lights) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator, ____directionalLights) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator, ____tweeningManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator, ____tween) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightsAnimator, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightsAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightsAnimator*, "", "LightsAnimator");
NEED_NO_BOX(::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightsAnimator__DisableDirectionalLightsCoroutine_d__11*, "", "LightsAnimator/<DisableDirectionalLightsCoroutine>d__11");
