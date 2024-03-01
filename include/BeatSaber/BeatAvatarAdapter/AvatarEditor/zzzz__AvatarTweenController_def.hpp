#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarTweenController)
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class __AvatarTweenController___AppearAnimation_d__55;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class __AvatarTweenController___DisappearAnimation_d__60;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class __AvatarTweenController____c__DisplayClass54_0;
}
namespace GlobalNamespace {
class ICoroutineStarter;
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
class TimeTweeningManager;
}
namespace Tweening {
template <typename T> class Tween_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class AvatarTweenController;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class __AvatarTweenController___AppearAnimation_d__55;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class __AvatarTweenController___DisappearAnimation_d__60;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class __AvatarTweenController____c__DisplayClass54_0;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0);
// Type: ::<>c__DisplayClass54_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// CS Name: ::AvatarTweenController::<>c__DisplayClass54_0*
class CORDL_TYPE __AvatarTweenController____c__DisplayClass54_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field originalScale, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_originalScale, put = __cordl_internal_set_originalScale))::UnityEngine::Vector3 originalScale;

  /// @brief Field partTransform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_partTransform, put = __cordl_internal_set_partTransform))::UnityW<::UnityEngine::Transform> partTransform;

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0* New_ctor();

  /// @brief Method <CreatePopTween>b__0, addr 0xe677dc, size 0x38, virtual false, abstract: false, final false
  inline void _CreatePopTween_b__0(float_t val);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalScale();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_partTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_partTransform();

  constexpr void __cordl_internal_set_originalScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_partTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0xe66b48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarTweenController____c__DisplayClass54_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController____c__DisplayClass54_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarTweenController____c__DisplayClass54_0(__AvatarTweenController____c__DisplayClass54_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController____c__DisplayClass54_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarTweenController____c__DisplayClass54_0(__AvatarTweenController____c__DisplayClass54_0 const&) = delete;

  /// @brief Field partTransform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___partTransform;

  /// @brief Field originalScale, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___originalScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0, ___partTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0, ___originalScale) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
// Type: ::<AppearAnimation>d__55
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// CS Name: ::AvatarTweenController::<AppearAnimation>d__55*
class CORDL_TYPE __AvatarTweenController___AppearAnimation_d__55 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> __4__this;

  /// @brief Field <waitYieldInstruction>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__waitYieldInstruction_5__2, put = __cordl_internal_set__waitYieldInstruction_5__2))::UnityEngine::WaitForSeconds* _waitYieldInstruction_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xe67818, size 0x20c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xe67a24, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xe67a2c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xe67a6c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xe67814, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__waitYieldInstruction_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSeconds*> const& __cordl_internal_get__waitYieldInstruction_5__2() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> value);

  constexpr void __cordl_internal_set__waitYieldInstruction_5__2(::UnityEngine::WaitForSeconds* value);

  /// @brief Method .ctor, addr 0xe66b50, size 0x28, virtual false, abstract: false, final false
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
  constexpr __AvatarTweenController___AppearAnimation_d__55();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController___AppearAnimation_d__55", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarTweenController___AppearAnimation_d__55(__AvatarTweenController___AppearAnimation_d__55&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController___AppearAnimation_d__55", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarTweenController___AppearAnimation_d__55(__AvatarTweenController___AppearAnimation_d__55 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> _____4__this;

  /// @brief Field <waitYieldInstruction>5__2, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::WaitForSeconds* ____waitYieldInstruction_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55, ____waitYieldInstruction_5__2) == 0x28, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
// Type: ::<DisappearAnimation>d__60
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// CS Name: ::AvatarTweenController::<DisappearAnimation>d__60*
class CORDL_TYPE __AvatarTweenController___DisappearAnimation_d__60 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xe67a78, size 0x27c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xe67cf4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xe67cfc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xe67d3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xe67a74, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> value);

  /// @brief Method .ctor, addr 0xe67648, size 0x28, virtual false, abstract: false, final false
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
  constexpr __AvatarTweenController___DisappearAnimation_d__60();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController___DisappearAnimation_d__60", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarTweenController___DisappearAnimation_d__60(__AvatarTweenController___DisappearAnimation_d__60&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController___DisappearAnimation_d__60", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarTweenController___DisappearAnimation_d__60(__AvatarTweenController___DisappearAnimation_d__60 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60, _____4__this) == 0x20, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
// Type: BeatSaber.BeatAvatarAdapter.AvatarEditor::AvatarTweenController
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// CS Name: ::BeatSaber.BeatAvatarAdapter.AvatarEditor::AvatarTweenController*
class CORDL_TYPE AvatarTweenController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AppearAnimation_d__55 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55;

  using _DisappearAnimation_d__60 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60;

  using __c__DisplayClass54_0 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0;

  /// @brief Field _allPopAmount, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__allPopAmount, put = __cordl_internal_set__allPopAmount)) float_t _allPopAmount;

  /// @brief Field _appearBodyPositionTween, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__appearBodyPositionTween, put = __cordl_internal_set__appearBodyPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearBodyPositionTween;

  /// @brief Field _appearBodyScaleTween, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__appearBodyScaleTween, put = __cordl_internal_set__appearBodyScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearBodyScaleTween;

  /// @brief Field _appearDuration, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__appearDuration, put = __cordl_internal_set__appearDuration)) float_t _appearDuration;

  /// @brief Field _appearHeadPositionTween, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__appearHeadPositionTween, put = __cordl_internal_set__appearHeadPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearHeadPositionTween;

  /// @brief Field _appearHeadScaleTween, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__appearHeadScaleTween, put = __cordl_internal_set__appearHeadScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearHeadScaleTween;

  /// @brief Field _appearHeight, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__appearHeight, put = __cordl_internal_set__appearHeight)) float_t _appearHeight;

  /// @brief Field _appearLeftHandPositionTween, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__appearLeftHandPositionTween,
                      put = __cordl_internal_set__appearLeftHandPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearLeftHandPositionTween;

  /// @brief Field _appearLeftHandScaleTween, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__appearLeftHandScaleTween,
                      put = __cordl_internal_set__appearLeftHandScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearLeftHandScaleTween;

  /// @brief Field _appearRightHandPositionTween, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__appearRightHandPositionTween,
                      put = __cordl_internal_set__appearRightHandPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearRightHandPositionTween;

  /// @brief Field _appearRightHandScaleTween, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__appearRightHandScaleTween,
                      put = __cordl_internal_set__appearRightHandScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearRightHandScaleTween;

  /// @brief Field _appearSpacing, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__appearSpacing, put = __cordl_internal_set__appearSpacing)) float_t _appearSpacing;

  /// @brief Field _avatarLocalPosition, offset 0x130, size 0xc
  __declspec(property(get = __cordl_internal_get__avatarLocalPosition, put = __cordl_internal_set__avatarLocalPosition))::UnityEngine::Vector3 _avatarLocalPosition;

  /// @brief Field _avatarLocalScale, offset 0x13c, size 0xc
  __declspec(property(get = __cordl_internal_get__avatarLocalScale, put = __cordl_internal_set__avatarLocalScale))::UnityEngine::Vector3 _avatarLocalScale;

  /// @brief Field _avatarTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarTransform, put = __cordl_internal_set__avatarTransform))::UnityW<::UnityEngine::Transform> _avatarTransform;

  /// @brief Field _bodyInnerTransform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bodyInnerTransform, put = __cordl_internal_set__bodyInnerTransform))::UnityW<::UnityEngine::Transform> _bodyInnerTransform;

  /// @brief Field _bodyTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bodyTransform, put = __cordl_internal_set__bodyTransform))::UnityW<::UnityEngine::Transform> _bodyTransform;

  /// @brief Field _clothesPopAmount, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__clothesPopAmount, put = __cordl_internal_set__clothesPopAmount)) float_t _clothesPopAmount;

  /// @brief Field _disappearDuration, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__disappearDuration, put = __cordl_internal_set__disappearDuration)) float_t _disappearDuration;

  /// @brief Field _disappearHeight, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__disappearHeight, put = __cordl_internal_set__disappearHeight)) float_t _disappearHeight;

  /// @brief Field _disappearPositionEase, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__disappearPositionEase, put = __cordl_internal_set__disappearPositionEase))::GlobalNamespace::EaseType _disappearPositionEase;

  /// @brief Field _disappearPositionTween, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__disappearPositionTween, put = __cordl_internal_set__disappearPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _disappearPositionTween;

  /// @brief Field _disappearScaleEase, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__disappearScaleEase, put = __cordl_internal_set__disappearScaleEase))::GlobalNamespace::EaseType _disappearScaleEase;

  /// @brief Field _disappearScaleTween, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__disappearScaleTween, put = __cordl_internal_set__disappearScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _disappearScaleTween;

  /// @brief Field _disappearSquash, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get__disappearSquash, put = __cordl_internal_set__disappearSquash))::UnityEngine::Vector3 _disappearSquash;

  /// @brief Field _handsPopAmount, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__handsPopAmount, put = __cordl_internal_set__handsPopAmount)) float_t _handsPopAmount;

  /// @brief Field _headInnerTransform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__headInnerTransform, put = __cordl_internal_set__headInnerTransform))::UnityW<::UnityEngine::Transform> _headInnerTransform;

  /// @brief Field _headParent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__headParent, put = __cordl_internal_set__headParent))::UnityW<::UnityEngine::Transform> _headParent;

  /// @brief Field _headPopAmount, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__headPopAmount, put = __cordl_internal_set__headPopAmount)) float_t _headPopAmount;

  /// @brief Field _leftHandInnerTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandInnerTransform, put = __cordl_internal_set__leftHandInnerTransform))::UnityW<::UnityEngine::Transform> _leftHandInnerTransform;

  /// @brief Field _leftHandTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandTransform, put = __cordl_internal_set__leftHandTransform))::UnityW<::UnityEngine::Transform> _leftHandTransform;

  /// @brief Field _popClothesTween, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__popClothesTween, put = __cordl_internal_set__popClothesTween))::Tweening::Tween_1<float_t>* _popClothesTween;

  /// @brief Field _popDuration, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__popDuration, put = __cordl_internal_set__popDuration)) float_t _popDuration;

  /// @brief Field _popEaseType, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__popEaseType, put = __cordl_internal_set__popEaseType))::GlobalNamespace::EaseType _popEaseType;

  /// @brief Field _popHeadTween, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__popHeadTween, put = __cordl_internal_set__popHeadTween))::Tweening::Tween_1<float_t>* _popHeadTween;

  /// @brief Field _popLeftHandTween, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__popLeftHandTween, put = __cordl_internal_set__popLeftHandTween))::Tweening::Tween_1<float_t>* _popLeftHandTween;

  /// @brief Field _popRightHandTween, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__popRightHandTween, put = __cordl_internal_set__popRightHandTween))::Tweening::Tween_1<float_t>* _popRightHandTween;

  /// @brief Field _rightHandInnerTransform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandInnerTransform, put = __cordl_internal_set__rightHandInnerTransform))::UnityW<::UnityEngine::Transform> _rightHandInnerTransform;

  /// @brief Field _rightHandTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandTransform, put = __cordl_internal_set__rightHandTransform))::UnityW<::UnityEngine::Transform> _rightHandTransform;

  /// @brief Field _sharedCoroutineStarter, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__sharedCoroutineStarter, put = __cordl_internal_set__sharedCoroutineStarter))::GlobalNamespace::ICoroutineStarter* _sharedCoroutineStarter;

  /// @brief Field _squashFactor, offset 0x84, size 0xc
  __declspec(property(get = __cordl_internal_get__squashFactor, put = __cordl_internal_set__squashFactor))::UnityEngine::Vector3 _squashFactor;

  /// @brief Field _tweeningManager, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Method AppearAnimation, addr 0xe667ac, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* AppearAnimation();

  /// @brief Method AppearBody, addr 0xe66b78, size 0x2b0, virtual false, abstract: false, final false
  inline void AppearBody();

  /// @brief Method AppearHead, addr 0xe66e28, size 0x2b0, virtual false, abstract: false, final false
  inline void AppearHead();

  /// @brief Method AppearLeftHand, addr 0xe670d8, size 0x2b8, virtual false, abstract: false, final false
  inline void AppearLeftHand();

  /// @brief Method AppearRightHand, addr 0xe67390, size 0x2b8, virtual false, abstract: false, final false
  inline void AppearRightHand();

  /// @brief Method Awake, addr 0xe666c4, size 0x4c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreatePopTween, addr 0xe66a20, size 0x128, virtual false, abstract: false, final false
  inline ::Tweening::Tween_1<float_t>* CreatePopTween(::UnityEngine::Transform* partTransform, float_t popAmount);

  /// @brief Method DisappearAnimation, addr 0xe66814, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DisappearAnimation();

  /// @brief Method HideAvatar, addr 0xe64548, size 0xb8, virtual false, abstract: false, final false
  inline void HideAvatar();

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* New_ctor();

  /// @brief Method OnDestroy, addr 0xe667a8, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0xe66710, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method PopAll, addr 0xe6687c, size 0x2c, virtual false, abstract: false, final false
  inline void PopAll();

  /// @brief Method PopClothes, addr 0xe66a18, size 0x8, virtual false, abstract: false, final false
  inline void PopClothes();

  /// @brief Method PopClothes, addr 0xe66908, size 0x60, virtual false, abstract: false, final false
  inline void PopClothes(float_t popAmount);

  /// @brief Method PopHands, addr 0xe66a10, size 0x8, virtual false, abstract: false, final false
  inline void PopHands();

  /// @brief Method PopHands, addr 0xe66968, size 0xa0, virtual false, abstract: false, final false
  inline void PopHands(float_t popAmount);

  /// @brief Method PopHead, addr 0xe66a08, size 0x8, virtual false, abstract: false, final false
  inline void PopHead();

  /// @brief Method PopHead, addr 0xe668a8, size 0x60, virtual false, abstract: false, final false
  inline void PopHead(float_t popAmount);

  /// @brief Method PresentAvatar, addr 0xe63dbc, size 0x48, virtual false, abstract: false, final false
  inline void PresentAvatar();

  /// @brief Method StopAll, addr 0xe66714, size 0x94, virtual false, abstract: false, final false
  inline void StopAll();

  /// @brief Method <AppearBody>b__56_0, addr 0xe676c4, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearBody_b__56_0(::UnityEngine::Vector3 val);

  /// @brief Method <AppearBody>b__56_1, addr 0xe676e0, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearBody_b__56_1(::UnityEngine::Vector3 val);

  /// @brief Method <AppearHead>b__57_0, addr 0xe676fc, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearHead_b__57_0(::UnityEngine::Vector3 val);

  /// @brief Method <AppearHead>b__57_1, addr 0xe67718, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearHead_b__57_1(::UnityEngine::Vector3 val);

  /// @brief Method <AppearLeftHand>b__58_0, addr 0xe67734, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearLeftHand_b__58_0(::UnityEngine::Vector3 val);

  /// @brief Method <AppearLeftHand>b__58_1, addr 0xe67750, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearLeftHand_b__58_1(::UnityEngine::Vector3 val);

  /// @brief Method <AppearRightHand>b__59_0, addr 0xe6776c, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearRightHand_b__59_0(::UnityEngine::Vector3 val);

  /// @brief Method <AppearRightHand>b__59_1, addr 0xe67788, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearRightHand_b__59_1(::UnityEngine::Vector3 val);

  /// @brief Method <DisappearAnimation>b__60_0, addr 0xe677a4, size 0x1c, virtual false, abstract: false, final false
  inline void _DisappearAnimation_b__60_0(::UnityEngine::Vector3 val);

  /// @brief Method <DisappearAnimation>b__60_1, addr 0xe677c0, size 0x1c, virtual false, abstract: false, final false
  inline void _DisappearAnimation_b__60_1(::UnityEngine::Vector3 val);

  constexpr float_t const& __cordl_internal_get__allPopAmount() const;

  constexpr float_t& __cordl_internal_get__allPopAmount();

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__appearBodyPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__appearBodyPositionTween() const;

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__appearBodyScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__appearBodyScaleTween() const;

  constexpr float_t const& __cordl_internal_get__appearDuration() const;

  constexpr float_t& __cordl_internal_get__appearDuration();

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__appearHeadPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__appearHeadPositionTween() const;

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__appearHeadScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__appearHeadScaleTween() const;

  constexpr float_t const& __cordl_internal_get__appearHeight() const;

  constexpr float_t& __cordl_internal_get__appearHeight();

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__appearLeftHandPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__appearLeftHandPositionTween() const;

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__appearLeftHandScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__appearLeftHandScaleTween() const;

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__appearRightHandPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__appearRightHandPositionTween() const;

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__appearRightHandScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__appearRightHandScaleTween() const;

  constexpr float_t const& __cordl_internal_get__appearSpacing() const;

  constexpr float_t& __cordl_internal_get__appearSpacing();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__avatarLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__avatarLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__avatarLocalScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__avatarLocalScale();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__avatarTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__avatarTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__bodyInnerTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__bodyInnerTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__bodyTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__bodyTransform();

  constexpr float_t const& __cordl_internal_get__clothesPopAmount() const;

  constexpr float_t& __cordl_internal_get__clothesPopAmount();

  constexpr float_t const& __cordl_internal_get__disappearDuration() const;

  constexpr float_t& __cordl_internal_get__disappearDuration();

  constexpr float_t const& __cordl_internal_get__disappearHeight() const;

  constexpr float_t& __cordl_internal_get__disappearHeight();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__disappearPositionEase() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__disappearPositionEase();

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__disappearPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__disappearPositionTween() const;

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__disappearScaleEase() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__disappearScaleEase();

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __cordl_internal_get__disappearScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__disappearScaleTween() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__disappearSquash() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__disappearSquash();

  constexpr float_t const& __cordl_internal_get__handsPopAmount() const;

  constexpr float_t& __cordl_internal_get__handsPopAmount();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headInnerTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headInnerTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headParent();

  constexpr float_t const& __cordl_internal_get__headPopAmount() const;

  constexpr float_t& __cordl_internal_get__headPopAmount();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftHandInnerTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftHandInnerTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftHandTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftHandTransform();

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__popClothesTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__popClothesTween() const;

  constexpr float_t const& __cordl_internal_get__popDuration() const;

  constexpr float_t& __cordl_internal_get__popDuration();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__popEaseType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__popEaseType();

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__popHeadTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__popHeadTween() const;

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__popLeftHandTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__popLeftHandTween() const;

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__popRightHandTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__popRightHandTween() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightHandInnerTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightHandInnerTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightHandTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightHandTransform();

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__sharedCoroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __cordl_internal_get__sharedCoroutineStarter() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__squashFactor() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__squashFactor();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__allPopAmount(float_t value);

  constexpr void __cordl_internal_set__appearBodyPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__appearBodyScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__appearDuration(float_t value);

  constexpr void __cordl_internal_set__appearHeadPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__appearHeadScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__appearHeight(float_t value);

  constexpr void __cordl_internal_set__appearLeftHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__appearLeftHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__appearRightHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__appearRightHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__appearSpacing(float_t value);

  constexpr void __cordl_internal_set__avatarLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__avatarLocalScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__avatarTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__bodyInnerTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__bodyTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__clothesPopAmount(float_t value);

  constexpr void __cordl_internal_set__disappearDuration(float_t value);

  constexpr void __cordl_internal_set__disappearHeight(float_t value);

  constexpr void __cordl_internal_set__disappearPositionEase(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__disappearPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__disappearScaleEase(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__disappearScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__disappearSquash(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__handsPopAmount(float_t value);

  constexpr void __cordl_internal_set__headInnerTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__headParent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__headPopAmount(float_t value);

  constexpr void __cordl_internal_set__leftHandInnerTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftHandTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__popClothesTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__popDuration(float_t value);

  constexpr void __cordl_internal_set__popEaseType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__popHeadTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__popLeftHandTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__popRightHandTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__rightHandInnerTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__rightHandTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__sharedCoroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__squashFactor(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0xe67670, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarTweenController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarTweenController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarTweenController(AvatarTweenController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarTweenController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarTweenController(AvatarTweenController const&) = delete;

  /// @brief Field _avatarTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____avatarTransform;

  /// @brief Field _headParent, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____headParent;

  /// @brief Field _leftHandTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftHandTransform;

  /// @brief Field _rightHandTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightHandTransform;

  /// @brief Field _bodyTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____bodyTransform;

  /// @brief Field _headInnerTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____headInnerTransform;

  /// @brief Field _leftHandInnerTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftHandInnerTransform;

  /// @brief Field _rightHandInnerTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightHandInnerTransform;

  /// @brief Field _bodyInnerTransform, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____bodyInnerTransform;

  /// @brief Field _popDuration, offset: 0x60, size: 0x4, def value: None
  float_t ____popDuration;

  /// @brief Field _popEaseType, offset: 0x64, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____popEaseType;

  /// @brief Field _headPopAmount, offset: 0x68, size: 0x4, def value: None
  float_t ____headPopAmount;

  /// @brief Field _handsPopAmount, offset: 0x6c, size: 0x4, def value: None
  float_t ____handsPopAmount;

  /// @brief Field _clothesPopAmount, offset: 0x70, size: 0x4, def value: None
  float_t ____clothesPopAmount;

  /// @brief Field _allPopAmount, offset: 0x74, size: 0x4, def value: None
  float_t ____allPopAmount;

  /// @brief Field _appearDuration, offset: 0x78, size: 0x4, def value: None
  float_t ____appearDuration;

  /// @brief Field _appearSpacing, offset: 0x7c, size: 0x4, def value: None
  float_t ____appearSpacing;

  /// @brief Field _appearHeight, offset: 0x80, size: 0x4, def value: None
  float_t ____appearHeight;

  /// @brief Field _squashFactor, offset: 0x84, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____squashFactor;

  /// @brief Field _disappearDuration, offset: 0x90, size: 0x4, def value: None
  float_t ____disappearDuration;

  /// @brief Field _disappearHeight, offset: 0x94, size: 0x4, def value: None
  float_t ____disappearHeight;

  /// @brief Field _disappearSquash, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____disappearSquash;

  /// @brief Field _disappearScaleEase, offset: 0xa4, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____disappearScaleEase;

  /// @brief Field _disappearPositionEase, offset: 0xa8, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____disappearPositionEase;

  /// @brief Field _tweeningManager, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _sharedCoroutineStarter, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____sharedCoroutineStarter;

  /// @brief Field _popHeadTween, offset: 0xc0, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____popHeadTween;

  /// @brief Field _popLeftHandTween, offset: 0xc8, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____popLeftHandTween;

  /// @brief Field _popRightHandTween, offset: 0xd0, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____popRightHandTween;

  /// @brief Field _popClothesTween, offset: 0xd8, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____popClothesTween;

  /// @brief Field _appearHeadPositionTween, offset: 0xe0, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____appearHeadPositionTween;

  /// @brief Field _appearHeadScaleTween, offset: 0xe8, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____appearHeadScaleTween;

  /// @brief Field _appearBodyPositionTween, offset: 0xf0, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____appearBodyPositionTween;

  /// @brief Field _appearBodyScaleTween, offset: 0xf8, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____appearBodyScaleTween;

  /// @brief Field _appearRightHandPositionTween, offset: 0x100, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____appearRightHandPositionTween;

  /// @brief Field _appearRightHandScaleTween, offset: 0x108, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____appearRightHandScaleTween;

  /// @brief Field _appearLeftHandPositionTween, offset: 0x110, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____appearLeftHandPositionTween;

  /// @brief Field _appearLeftHandScaleTween, offset: 0x118, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____appearLeftHandScaleTween;

  /// @brief Field _disappearScaleTween, offset: 0x120, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____disappearScaleTween;

  /// @brief Field _disappearPositionTween, offset: 0x128, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Vector3>* ____disappearPositionTween;

  /// @brief Field _avatarLocalPosition, offset: 0x130, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____avatarLocalPosition;

  /// @brief Field _avatarLocalScale, offset: 0x13c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____avatarLocalScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, 0x148>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____avatarTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____headParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____leftHandTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____rightHandTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____bodyTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____headInnerTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____leftHandInnerTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____rightHandInnerTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____bodyInnerTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____popDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____popEaseType) == 0x64, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____headPopAmount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____handsPopAmount) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____clothesPopAmount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____allPopAmount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearDuration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearSpacing) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearHeight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____squashFactor) == 0x84, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____disappearDuration) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____disappearHeight) == 0x94, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____disappearSquash) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____disappearScaleEase) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____disappearPositionEase) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____tweeningManager) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____sharedCoroutineStarter) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____popHeadTween) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____popLeftHandTween) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____popRightHandTween) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____popClothesTween) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearHeadPositionTween) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearHeadScaleTween) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearBodyPositionTween) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearBodyScaleTween) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearRightHandPositionTween) == 0x100, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearRightHandScaleTween) == 0x108, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearLeftHandPositionTween) == 0x110, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____appearLeftHandScaleTween) == 0x118, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____disappearScaleTween) == 0x120, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____disappearPositionTween) == 0x128, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____avatarLocalPosition) == 0x130, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController, ____avatarLocalScale) == 0x13c, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "AvatarTweenController");
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*, "BeatSaber.BeatAvatarAdapter.AvatarEditor",
                       "AvatarTweenController/<AppearAnimation>d__55");
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*, "BeatSaber.BeatAvatarAdapter.AvatarEditor",
                       "AvatarTweenController/<DisappearAnimation>d__60");
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*, "BeatSaber.BeatAvatarAdapter.AvatarEditor",
                       "AvatarTweenController/<>c__DisplayClass54_0");
