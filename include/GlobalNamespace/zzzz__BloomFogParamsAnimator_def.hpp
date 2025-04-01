#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomFogParamsAnimator.hpp"
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
CORDL_MODULE_EXPORT(BloomFogParamsAnimator)
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace GlobalNamespace {
class BloomFogParamsAnimator__AnimationCoroutine_d__2;
}
namespace GlobalNamespace {
class BloomFogSO;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogParamsAnimator;
}
namespace GlobalNamespace {
class BloomFogParamsAnimator__AnimationCoroutine_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogParamsAnimator);
MARK_REF_PTR_T(::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomFogParamsAnimator/<AnimationCoroutine>d__2
class CORDL_TYPE BloomFogParamsAnimator__AnimationCoroutine_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BloomFogParamsAnimator> __4__this;

  /// @brief Field <elapsedTime>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__2, put = __cordl_internal_set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  /// @brief Field duration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field envFogParams, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_envFogParams, put = __cordl_internal_set_envFogParams)) ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> envFogParams;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39cfa44, size 0xe0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39cfb24, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39cfb2c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39cfb64, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39cfa40, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::BloomFogParamsAnimator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogParamsAnimator>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> const& __cordl_internal_get_envFogParams() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>& __cordl_internal_get_envFogParams();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BloomFogParamsAnimator> value);

  constexpr void __cordl_internal_set__elapsedTime_5__2(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_envFogParams(::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> value);

  /// @brief Method .ctor, addr 0x39cf8f8, size 0x28, virtual false, abstract: false, final false
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
  constexpr BloomFogParamsAnimator__AnimationCoroutine_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAnimator__AnimationCoroutine_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogParamsAnimator__AnimationCoroutine_d__2(BloomFogParamsAnimator__AnimationCoroutine_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAnimator__AnimationCoroutine_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogParamsAnimator__AnimationCoroutine_d__2(BloomFogParamsAnimator__AnimationCoroutine_d__2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16236 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field duration, offset: 0x20, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogParamsAnimator> _____4__this;

  /// @brief Field envFogParams, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> ___envFogParams;

  /// @brief Field <elapsedTime>5__2, offset: 0x38, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2, ___envFogParams) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2, ____elapsedTime_5__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomFogParamsAnimator
class CORDL_TYPE BloomFogParamsAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AnimationCoroutine_d__2 = ::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2;

  /// @brief Field _bloomFog, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Method AnimateBloomFogParamsChange, addr 0x39cf768, size 0x7c, virtual false, abstract: false, final false
  inline void AnimateBloomFogParamsChange(::GlobalNamespace::BloomFogEnvironmentParams* envFogParams, float_t duration);

  /// @brief Method AnimationCoroutine, addr 0x39cf87c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* AnimationCoroutine(::GlobalNamespace::BloomFogEnvironmentParams* envFogParams, float_t duration);

  /// @brief Method GetDefaultBloomFogParams, addr 0x39cf968, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> GetDefaultBloomFogParams();

  static inline ::GlobalNamespace::BloomFogParamsAnimator* New_ctor();

  /// @brief Method SetBloomFogParamsChange, addr 0x39cf920, size 0x48, virtual false, abstract: false, final false
  inline void SetBloomFogParamsChange(::GlobalNamespace::BloomFogEnvironmentParams* envFogParams, float_t transition);

  /// @brief Method SetDefaultBloomFogParams, addr 0x39cf984, size 0x18, virtual false, abstract: false, final false
  inline void SetDefaultBloomFogParams(::GlobalNamespace::BloomFogEnvironmentParams* newDefaultBloomFogParams);

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  /// @brief Method .ctor, addr 0x39cfa38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogParamsAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogParamsAnimator(BloomFogParamsAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogParamsAnimator(BloomFogParamsAnimator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16237 };

  /// @brief Field _bloomFog, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomFogParamsAnimator, ____bloomFog) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogParamsAnimator, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsAnimator*, "", "BloomFogParamsAnimator");
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsAnimator__AnimationCoroutine_d__2*, "", "BloomFogParamsAnimator/<AnimationCoroutine>d__2");
