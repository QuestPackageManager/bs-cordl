#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomFogParamsAnimator)
namespace GlobalNamespace {
class __BloomFogParamsAnimator___AnimationCoroutine_d__2;
}
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class BloomFogSO;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogParamsAnimator;
}
namespace GlobalNamespace {
class __BloomFogParamsAnimator___AnimationCoroutine_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogParamsAnimator);
MARK_REF_PTR_T(::GlobalNamespace::__BloomFogParamsAnimator___AnimationCoroutine_d__2);
// Type: ::<AnimationCoroutine>d__2
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14451))
// CS Name: ::BloomFogParamsAnimator::<AnimationCoroutine>d__2*
class CORDL_TYPE __BloomFogParamsAnimator___AnimationCoroutine_d__2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field duration, offset 0x20, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::BloomFogParamsAnimator* __4__this;

  /// @brief Field envFogParams, offset 0x30, size 0x8
  __declspec(property(get = __get_envFogParams, put = __set_envFogParams))::GlobalNamespace::BloomFogEnvironmentParams* envFogParams;

  /// @brief Field <elapsedTime>5__2, offset 0x38, size 0x4
  __declspec(property(get = __get__elapsedTime_5__2, put = __set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  constexpr ::GlobalNamespace::BloomFogParamsAnimator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogParamsAnimator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::BloomFogParamsAnimator* value);

  constexpr ::GlobalNamespace::BloomFogEnvironmentParams*& __get_envFogParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> const& __get_envFogParams() const;

  constexpr void __set_envFogParams(::GlobalNamespace::BloomFogEnvironmentParams* value);

  constexpr float_t& __get__elapsedTime_5__2();

  constexpr float_t const& __get__elapsedTime_5__2() const;

  constexpr void __set__elapsedTime_5__2(float_t value);

  static inline ::GlobalNamespace::__BloomFogParamsAnimator___AnimationCoroutine_d__2* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x210232c size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2102474 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2102478 size 0xe0 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2102558 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2102560 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x21025a0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__BloomFogParamsAnimator___AnimationCoroutine_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomFogParamsAnimator___AnimationCoroutine_d__2(__BloomFogParamsAnimator___AnimationCoroutine_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomFogParamsAnimator___AnimationCoroutine_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomFogParamsAnimator___AnimationCoroutine_d__2(__BloomFogParamsAnimator___AnimationCoroutine_d__2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomFogParamsAnimator___AnimationCoroutine_d__2();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field duration, offset: 0x20, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogParamsAnimator* _____4__this;

  /// @brief Field envFogParams, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogEnvironmentParams* ___envFogParams;

  /// @brief Field <elapsedTime>5__2, offset: 0x38, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomFogParamsAnimator___AnimationCoroutine_d__2, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomFogParamsAnimator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14452))
// CS Name: ::BloomFogParamsAnimator*
class CORDL_TYPE BloomFogParamsAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AnimationCoroutine_d__2 = ::GlobalNamespace::__BloomFogParamsAnimator___AnimationCoroutine_d__2;

  /// @brief Field _bloomFog, offset 0x18, size 0x8
  __declspec(property(get = __get__bloomFog, put = __set__bloomFog))::GlobalNamespace::BloomFogSO* _bloomFog;

  constexpr ::GlobalNamespace::BloomFogSO*& __get__bloomFog();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> const& __get__bloomFog() const;

  constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO* value);

  /// @brief Method AnimateBloomFogParamsChange addr 0x2102194 size 0x7c virtual false final false
  inline void AnimateBloomFogParamsChange(::GlobalNamespace::BloomFogEnvironmentParams* envFogParams, float_t duration);

  /// @brief Method AnimationCoroutine addr 0x21022a8 size 0x84 virtual false final false
  inline ::System::Collections::IEnumerator* AnimationCoroutine(::GlobalNamespace::BloomFogEnvironmentParams* envFogParams, float_t duration);

  /// @brief Method SetBloomFogParamsChange addr 0x2102354 size 0x48 virtual false final false
  inline void SetBloomFogParamsChange(::GlobalNamespace::BloomFogEnvironmentParams* envFogParams, float_t transition);

  /// @brief Method GetDefaultBloomFogParams addr 0x210239c size 0x1c virtual false final false
  inline ::GlobalNamespace::BloomFogEnvironmentParams* GetDefaultBloomFogParams();

  /// @brief Method SetDefaultBloomFogParams addr 0x21023b8 size 0x18 virtual false final false
  inline void SetDefaultBloomFogParams(::GlobalNamespace::BloomFogEnvironmentParams* newDefaultBloomFogParams);

  static inline ::GlobalNamespace::BloomFogParamsAnimator* New_ctor();

  /// @brief Method .ctor addr 0x210246c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogParamsAnimator(BloomFogParamsAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogParamsAnimator(BloomFogParamsAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogParamsAnimator();

public:
  /// @brief Field _bloomFog, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogSO* ____bloomFog;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogParamsAnimator, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsAnimator*, "", "BloomFogParamsAnimator");
NEED_NO_BOX(::GlobalNamespace::__BloomFogParamsAnimator___AnimationCoroutine_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomFogParamsAnimator___AnimationCoroutine_d__2*, "", "BloomFogParamsAnimator/<AnimationCoroutine>d__2");
