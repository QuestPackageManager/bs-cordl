#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class __LightsAnimator___DisableDirectionalLightsCoroutine_d__11;
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
class __LightsAnimator___DisableDirectionalLightsCoroutine_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightsAnimator);
MARK_REF_PTR_T(::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11);
// Type: ::<DisableDirectionalLightsCoroutine>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightsAnimator::<DisableDirectionalLightsCoroutine>d__11*
class CORDL_TYPE __LightsAnimator___DisableDirectionalLightsCoroutine_d__11 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::LightsAnimator> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26f3c44, size 0x108, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26f3d4c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26f3d54, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26f3d94, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26f3c40, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::LightsAnimator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LightsAnimator>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LightsAnimator> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x26f3c10, size 0x28, virtual false, abstract: false, final false
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
  constexpr __LightsAnimator___DisableDirectionalLightsCoroutine_d__11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightsAnimator___DisableDirectionalLightsCoroutine_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightsAnimator___DisableDirectionalLightsCoroutine_d__11(__LightsAnimator___DisableDirectionalLightsCoroutine_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightsAnimator___DisableDirectionalLightsCoroutine_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightsAnimator___DisableDirectionalLightsCoroutine_d__11(__LightsAnimator___DisableDirectionalLightsCoroutine_d__11 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightsAnimator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightsAnimator*
class CORDL_TYPE LightsAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DisableDirectionalLightsCoroutine_d__11 = ::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11;

  /// @brief Field _directionalLights, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__directionalLights,
               put = __cordl_internal_set__directionalLights))::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> _directionalLights;

  /// @brief Field _lights, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lights,
                      put = __cordl_internal_set__lights))::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> _lights;

  /// @brief Field _tween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tween, put = __cordl_internal_set__tween))::Tweening::ColorTween* _tween;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Method AnimateToColor, addr 0x26f1020, size 0xfc, virtual false, abstract: false, final false
  inline void AnimateToColor(::UnityEngine::Color color, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method Awake, addr 0x26f38b8, size 0xe0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DisableDirectionalLights, addr 0x26f3b60, size 0x38, virtual false, abstract: false, final false
  inline void DisableDirectionalLights(float_t delay);

  /// @brief Method DisableDirectionalLightsCoroutine, addr 0x26f3b98, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DisableDirectionalLightsCoroutine(float_t delay);

  static inline ::GlobalNamespace::LightsAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x26f3998, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetColor, addr 0x26f3a20, size 0x58, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetLightsColor, addr 0x26f3a78, size 0xe8, virtual false, abstract: false, final false
  inline void SetLightsColor(::UnityEngine::Color color);

  /// @brief Method SetLightsWidth, addr 0x26f1490, size 0x70, virtual false, abstract: false, final false
  inline void SetLightsWidth(float_t width);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> const& __cordl_internal_get__directionalLights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>& __cordl_internal_get__directionalLights();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& __cordl_internal_get__lights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& __cordl_internal_get__lights();

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__tween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__tween() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> value);

  constexpr void __cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  constexpr void __cordl_internal_set__tween(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x26f3c38, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _lights, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____lights;

  /// @brief Field _directionalLights, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> ____directionalLights;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _tween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::ColorTween* ____tween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightsAnimator, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator, ____lights) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator, ____directionalLights) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator, ____tweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightsAnimator, ____tween) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightsAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightsAnimator*, "", "LightsAnimator");
NEED_NO_BOX(::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightsAnimator___DisableDirectionalLightsCoroutine_d__11*, "", "LightsAnimator/<DisableDirectionalLightsCoroutine>d__11");
