#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__GhostDuplicationEffect_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostDuplicationEffect)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __GhostDuplicationEffect__GhostEffectParams;
}
namespace GlobalNamespace {
class __GhostDuplicationEffect____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __GhostDuplicationEffect___HideRedundantWithDelay_d__8;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace System::Collections {
class IEnumerator;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostDuplicationEffect;
}
namespace GlobalNamespace {
class __GhostDuplicationEffect___HideRedundantWithDelay_d__8;
}
namespace GlobalNamespace {
class __GhostDuplicationEffect____c__DisplayClass7_0;
}
namespace GlobalNamespace {
struct __GhostDuplicationEffect__GhostEffectParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GhostDuplicationEffect);
MARK_REF_PTR_T(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8);
MARK_REF_PTR_T(::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0);
MARK_VAL_T(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams);
// Type: ::GhostEffectParams
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 85, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16090)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4859))
// CS Name: ::GhostDuplicationEffect::GhostEffectParams
struct CORDL_TYPE __GhostDuplicationEffect__GhostEffectParams {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "startAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "startSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endPosition", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "endSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "::GlobalNamespace::EaseType", modifiers: "", def_value: None },
  // CppParam { name: "distanceCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "peakDistance", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "lastPhase", ty: "bool", modifiers: "", def_value: None }]
  constexpr __GhostDuplicationEffect__GhostEffectParams(float_t startAlpha, ::UnityEngine::Vector3 startPosition, float_t startSize, float_t endAlpha, ::UnityEngine::Vector3 endPosition,
                                                        float_t endSize, float_t duration, float_t delay, ::GlobalNamespace::EaseType easeType, ::UnityEngine::AnimationCurve* distanceCurve,
                                                        float_t peakDistance, bool lastPhase) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GhostDuplicationEffect__GhostEffectParams();

  /// @brief Field startAlpha, offset: 0x0, size: 0x4, def value: None
  float_t startAlpha;

  /// @brief Field startPosition, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 startPosition;

  /// @brief Field startSize, offset: 0x10, size: 0x4, def value: None
  float_t startSize;

  /// @brief Field endAlpha, offset: 0x14, size: 0x4, def value: None
  float_t endAlpha;

  /// @brief Field endPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 endPosition;

  /// @brief Field endSize, offset: 0x24, size: 0x4, def value: None
  float_t endSize;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t duration;

  /// @brief Field delay, offset: 0x2c, size: 0x4, def value: None
  float_t delay;

  /// @brief Field easeType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::EaseType easeType;

  /// @brief Field distanceCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* distanceCurve;

  /// @brief Field peakDistance, offset: 0x40, size: 0x4, def value: None
  float_t peakDistance;

  /// @brief Field lastPhase, offset: 0x44, size: 0x1, def value: None
  bool lastPhase;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4859)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4860))
// CS Name: ::GhostDuplicationEffect::<>c__DisplayClass7_0*
class CORDL_TYPE __GhostDuplicationEffect____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GhostDuplicationEffect* __4__this;

  /// @brief Field ghostEffectParams, offset 0x18, size 0x48
  __declspec(property(get = __get_ghostEffectParams, put = __set_ghostEffectParams))::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ghostEffectParams;

  /// @brief Field direction, offset 0x60, size 0xc
  __declspec(property(get = __get_direction, put = __set_direction))::UnityEngine::Vector3 direction;

  constexpr ::GlobalNamespace::GhostDuplicationEffect*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostDuplicationEffect*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GhostDuplicationEffect* value);

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& __get_ghostEffectParams();

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& __get_ghostEffectParams() const;

  constexpr void __set_ghostEffectParams(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams value);

  constexpr ::UnityEngine::Vector3& __get_direction();

  constexpr ::UnityEngine::Vector3 const& __get_direction() const;

  constexpr void __set_direction(::UnityEngine::Vector3 value);

  static inline ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor addr 0x239980c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Animate>b__0 addr 0x2399ae0 size 0x18 virtual false final false
  inline void _Animate_b__0(float_t val);

  /// @brief Method <Animate>b__1 addr 0x2399af8 size 0x2c virtual false final false
  inline void _Animate_b__1(float_t val);

  /// @brief Method <Animate>b__2 addr 0x2399b24 size 0x50 virtual false final false
  inline void _Animate_b__2(::UnityEngine::Vector3 pos);

  /// @brief Method <Animate>b__3 addr 0x2399b74 size 0x40 virtual false final false
  inline void _Animate_b__3(float_t val);

  // Ctor Parameters [CppParam { name: "", ty: "__GhostDuplicationEffect____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GhostDuplicationEffect____c__DisplayClass7_0(__GhostDuplicationEffect____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GhostDuplicationEffect____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GhostDuplicationEffect____c__DisplayClass7_0(__GhostDuplicationEffect____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GhostDuplicationEffect____c__DisplayClass7_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GhostDuplicationEffect* _____4__this;

  /// @brief Field ghostEffectParams, offset: 0x18, size: 0x48, def value: None
  ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ___ghostEffectParams;

  /// @brief Field direction, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___direction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<HideRedundantWithDelay>d__8
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4861))
// CS Name: ::GhostDuplicationEffect::<HideRedundantWithDelay>d__8*
class CORDL_TYPE __GhostDuplicationEffect___HideRedundantWithDelay_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GhostDuplicationEffect* __4__this;

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

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr ::GlobalNamespace::GhostDuplicationEffect*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostDuplicationEffect*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GhostDuplicationEffect* value);

  static inline ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x239988c size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2399bb4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2399bb8 size 0xfc virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2399cb4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2399cbc size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2399cfc size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__GhostDuplicationEffect___HideRedundantWithDelay_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GhostDuplicationEffect___HideRedundantWithDelay_d__8(__GhostDuplicationEffect___HideRedundantWithDelay_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GhostDuplicationEffect___HideRedundantWithDelay_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GhostDuplicationEffect___HideRedundantWithDelay_d__8(__GhostDuplicationEffect___HideRedundantWithDelay_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GhostDuplicationEffect___HideRedundantWithDelay_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GhostDuplicationEffect* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GhostDuplicationEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4862))
// CS Name: ::GhostDuplicationEffect*
class CORDL_TYPE GhostDuplicationEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HideRedundantWithDelay_d__8 = ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8;

  using __c__DisplayClass7_0 = ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0;

  using GhostEffectParams = ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams;

  /// @brief Field _canvases, offset 0x18, size 0x8
  __declspec(property(get = __get__canvases, put = __set__canvases))::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*> _canvases;

  /// @brief Field isInitialized, offset 0x20, size 0x1
  __declspec(property(get = __get_isInitialized, put = __set_isInitialized)) bool isInitialized;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  __declspec(property(put = set_hide)) bool hide;

  __declspec(property(get = get_size, put = set_size)) float_t size;

  __declspec(property(get = get_alpha, put = set_alpha)) float_t alpha;

  constexpr ::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*>& __get__canvases();

  constexpr ::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*> const& __get__canvases() const;

  constexpr void __set__canvases(::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*> value);

  constexpr bool& __get_isInitialized();

  constexpr bool const& __get_isInitialized() const;

  constexpr void __set_isInitialized(bool value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  /// @brief Method OnDestroy addr 0x23992b4 size 0x88 virtual true final false
  inline void OnDestroy();

  /// @brief Method Awake addr 0x239933c size 0x10 virtual false final false
  inline void Awake();

  /// @brief Method Init addr 0x239934c size 0x88 virtual false final false
  inline void Init();

  /// @brief Method Animate addr 0x2399458 size 0x3b4 virtual false final false
  inline void Animate(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ghostEffectParams);

  /// @brief Method HideRedundantWithDelay addr 0x2399814 size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* HideRedundantWithDelay(float_t delay);

  /// @brief Method SetDistances addr 0x23998b4 size 0xec virtual false final false
  inline void SetDistances(float_t distance, ::UnityEngine::Vector3 direction);

  /// @brief Method set_hide addr 0x23999a0 size 0x2c virtual false final false
  inline void set_hide(bool value);

  /// @brief Method set_size addr 0x23999cc size 0x84 virtual false final false
  inline void set_size(float_t value);

  /// @brief Method get_size addr 0x2399a50 size 0x48 virtual false final false
  inline float_t get_size();

  /// @brief Method set_alpha addr 0x23993d4 size 0x84 virtual false final false
  inline void set_alpha(float_t value);

  /// @brief Method get_alpha addr 0x2399a98 size 0x40 virtual false final false
  inline float_t get_alpha();

  static inline ::GlobalNamespace::GhostDuplicationEffect* New_ctor();

  /// @brief Method .ctor addr 0x2399ad8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GhostDuplicationEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GhostDuplicationEffect(GhostDuplicationEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GhostDuplicationEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GhostDuplicationEffect(GhostDuplicationEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GhostDuplicationEffect();

public:
  /// @brief Field _canvases, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*> ____canvases;

  /// @brief Field isInitialized, offset: 0x20, size: 0x1, def value: None
  bool ___isInitialized;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostDuplicationEffect, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GhostDuplicationEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostDuplicationEffect*, "", "GhostDuplicationEffect");
NEED_NO_BOX(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*, "", "GhostDuplicationEffect/<HideRedundantWithDelay>d__8");
NEED_NO_BOX(::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*, "", "GhostDuplicationEffect/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, "", "GhostDuplicationEffect/GhostEffectParams");
