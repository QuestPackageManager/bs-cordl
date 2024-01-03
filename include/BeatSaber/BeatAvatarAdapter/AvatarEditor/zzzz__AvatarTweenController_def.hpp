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
class __AvatarTweenController____c__DisplayClass54_0;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class __AvatarTweenController___AppearAnimation_d__55;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class __AvatarTweenController___DisappearAnimation_d__60;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections {
class IEnumerator;
}
namespace Tweening {
template <typename T> class Tween_1;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class WaitForSeconds;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15262))
// CS Name: ::AvatarTweenController::<>c__DisplayClass54_0*
class CORDL_TYPE __AvatarTweenController____c__DisplayClass54_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field partTransform, offset 0x10, size 0x8
  __declspec(property(get = __get_partTransform, put = __set_partTransform))::UnityEngine::Transform* partTransform;

  /// @brief Field originalScale, offset 0x18, size 0xc
  __declspec(property(get = __get_originalScale, put = __set_originalScale))::UnityEngine::Vector3 originalScale;

  constexpr ::UnityEngine::Transform*& __get_partTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_partTransform() const;

  constexpr void __set_partTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get_originalScale();

  constexpr ::UnityEngine::Vector3 const& __get_originalScale() const;

  constexpr void __set_originalScale(::UnityEngine::Vector3 value);

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0* New_ctor();

  /// @brief Method .ctor, addr 0xe153fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CreatePopTween>b__0, addr 0xe16090, size 0x38, virtual false, abstract: false, final false
  inline void _CreatePopTween_b__0(float_t val);

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController____c__DisplayClass54_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarTweenController____c__DisplayClass54_0(__AvatarTweenController____c__DisplayClass54_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController____c__DisplayClass54_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarTweenController____c__DisplayClass54_0(__AvatarTweenController____c__DisplayClass54_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarTweenController____c__DisplayClass54_0();

public:
  /// @brief Field partTransform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___partTransform;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15263))
// CS Name: ::AvatarTweenController::<AppearAnimation>d__55*
class CORDL_TYPE __AvatarTweenController___AppearAnimation_d__55 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* __4__this;

  /// @brief Field <waitYieldInstruction>5__2, offset 0x28, size 0x8
  __declspec(property(get = __get__waitYieldInstruction_5__2, put = __set__waitYieldInstruction_5__2))::UnityEngine::WaitForSeconds* _waitYieldInstruction_5__2;

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

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*> const& __get___4__this() const;

  constexpr void __set___4__this(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* value);

  constexpr ::UnityEngine::WaitForSeconds*& __get__waitYieldInstruction_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSeconds*> const& __get__waitYieldInstruction_5__2() const;

  constexpr void __set__waitYieldInstruction_5__2(::UnityEngine::WaitForSeconds* value);

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0xe15404, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0xe160c8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0xe160cc, size 0x20c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xe162d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xe162e0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xe16320, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController___AppearAnimation_d__55", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarTweenController___AppearAnimation_d__55(__AvatarTweenController___AppearAnimation_d__55&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController___AppearAnimation_d__55", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarTweenController___AppearAnimation_d__55(__AvatarTweenController___AppearAnimation_d__55 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarTweenController___AppearAnimation_d__55();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15264))
// CS Name: ::AvatarTweenController::<DisappearAnimation>d__60*
class CORDL_TYPE __AvatarTweenController___DisappearAnimation_d__60 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* __4__this;

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

  constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*> const& __get___4__this() const;

  constexpr void __set___4__this(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* value);

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0xe15efc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0xe16328, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0xe1632c, size 0x27c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xe165a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xe165b0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xe165f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController___DisappearAnimation_d__60", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarTweenController___DisappearAnimation_d__60(__AvatarTweenController___DisappearAnimation_d__60&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarTweenController___DisappearAnimation_d__60", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarTweenController___DisappearAnimation_d__60(__AvatarTweenController___DisappearAnimation_d__60 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarTweenController___DisappearAnimation_d__60();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(16090))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15265))
// CS Name: ::BeatSaber.BeatAvatarAdapter.AvatarEditor::AvatarTweenController*
class CORDL_TYPE AvatarTweenController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DisappearAnimation_d__60 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60;

  using _AppearAnimation_d__55 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55;

  using __c__DisplayClass54_0 = ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0;

  /// @brief Field _avatarTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__avatarTransform, put = __set__avatarTransform))::UnityEngine::Transform* _avatarTransform;

  /// @brief Field _headParent, offset 0x20, size 0x8
  __declspec(property(get = __get__headParent, put = __set__headParent))::UnityEngine::Transform* _headParent;

  /// @brief Field _leftHandTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__leftHandTransform, put = __set__leftHandTransform))::UnityEngine::Transform* _leftHandTransform;

  /// @brief Field _rightHandTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__rightHandTransform, put = __set__rightHandTransform))::UnityEngine::Transform* _rightHandTransform;

  /// @brief Field _bodyTransform, offset 0x38, size 0x8
  __declspec(property(get = __get__bodyTransform, put = __set__bodyTransform))::UnityEngine::Transform* _bodyTransform;

  /// @brief Field _headInnerTransform, offset 0x40, size 0x8
  __declspec(property(get = __get__headInnerTransform, put = __set__headInnerTransform))::UnityEngine::Transform* _headInnerTransform;

  /// @brief Field _leftHandInnerTransform, offset 0x48, size 0x8
  __declspec(property(get = __get__leftHandInnerTransform, put = __set__leftHandInnerTransform))::UnityEngine::Transform* _leftHandInnerTransform;

  /// @brief Field _rightHandInnerTransform, offset 0x50, size 0x8
  __declspec(property(get = __get__rightHandInnerTransform, put = __set__rightHandInnerTransform))::UnityEngine::Transform* _rightHandInnerTransform;

  /// @brief Field _bodyInnerTransform, offset 0x58, size 0x8
  __declspec(property(get = __get__bodyInnerTransform, put = __set__bodyInnerTransform))::UnityEngine::Transform* _bodyInnerTransform;

  /// @brief Field _popDuration, offset 0x60, size 0x4
  __declspec(property(get = __get__popDuration, put = __set__popDuration)) float_t _popDuration;

  /// @brief Field _popEaseType, offset 0x64, size 0x4
  __declspec(property(get = __get__popEaseType, put = __set__popEaseType))::GlobalNamespace::EaseType _popEaseType;

  /// @brief Field _headPopAmount, offset 0x68, size 0x4
  __declspec(property(get = __get__headPopAmount, put = __set__headPopAmount)) float_t _headPopAmount;

  /// @brief Field _handsPopAmount, offset 0x6c, size 0x4
  __declspec(property(get = __get__handsPopAmount, put = __set__handsPopAmount)) float_t _handsPopAmount;

  /// @brief Field _clothesPopAmount, offset 0x70, size 0x4
  __declspec(property(get = __get__clothesPopAmount, put = __set__clothesPopAmount)) float_t _clothesPopAmount;

  /// @brief Field _allPopAmount, offset 0x74, size 0x4
  __declspec(property(get = __get__allPopAmount, put = __set__allPopAmount)) float_t _allPopAmount;

  /// @brief Field _appearDuration, offset 0x78, size 0x4
  __declspec(property(get = __get__appearDuration, put = __set__appearDuration)) float_t _appearDuration;

  /// @brief Field _appearSpacing, offset 0x7c, size 0x4
  __declspec(property(get = __get__appearSpacing, put = __set__appearSpacing)) float_t _appearSpacing;

  /// @brief Field _appearHeight, offset 0x80, size 0x4
  __declspec(property(get = __get__appearHeight, put = __set__appearHeight)) float_t _appearHeight;

  /// @brief Field _squashFactor, offset 0x84, size 0xc
  __declspec(property(get = __get__squashFactor, put = __set__squashFactor))::UnityEngine::Vector3 _squashFactor;

  /// @brief Field _disappearDuration, offset 0x90, size 0x4
  __declspec(property(get = __get__disappearDuration, put = __set__disappearDuration)) float_t _disappearDuration;

  /// @brief Field _disappearHeight, offset 0x94, size 0x4
  __declspec(property(get = __get__disappearHeight, put = __set__disappearHeight)) float_t _disappearHeight;

  /// @brief Field _disappearSquash, offset 0x98, size 0xc
  __declspec(property(get = __get__disappearSquash, put = __set__disappearSquash))::UnityEngine::Vector3 _disappearSquash;

  /// @brief Field _disappearScaleEase, offset 0xa4, size 0x4
  __declspec(property(get = __get__disappearScaleEase, put = __set__disappearScaleEase))::GlobalNamespace::EaseType _disappearScaleEase;

  /// @brief Field _disappearPositionEase, offset 0xa8, size 0x4
  __declspec(property(get = __get__disappearPositionEase, put = __set__disappearPositionEase))::GlobalNamespace::EaseType _disappearPositionEase;

  /// @brief Field _tweeningManager, offset 0xb0, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _sharedCoroutineStarter, offset 0xb8, size 0x8
  __declspec(property(get = __get__sharedCoroutineStarter, put = __set__sharedCoroutineStarter))::GlobalNamespace::ICoroutineStarter* _sharedCoroutineStarter;

  /// @brief Field _popHeadTween, offset 0xc0, size 0x8
  __declspec(property(get = __get__popHeadTween, put = __set__popHeadTween))::Tweening::Tween_1<float_t>* _popHeadTween;

  /// @brief Field _popLeftHandTween, offset 0xc8, size 0x8
  __declspec(property(get = __get__popLeftHandTween, put = __set__popLeftHandTween))::Tweening::Tween_1<float_t>* _popLeftHandTween;

  /// @brief Field _popRightHandTween, offset 0xd0, size 0x8
  __declspec(property(get = __get__popRightHandTween, put = __set__popRightHandTween))::Tweening::Tween_1<float_t>* _popRightHandTween;

  /// @brief Field _popClothesTween, offset 0xd8, size 0x8
  __declspec(property(get = __get__popClothesTween, put = __set__popClothesTween))::Tweening::Tween_1<float_t>* _popClothesTween;

  /// @brief Field _appearHeadPositionTween, offset 0xe0, size 0x8
  __declspec(property(get = __get__appearHeadPositionTween, put = __set__appearHeadPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearHeadPositionTween;

  /// @brief Field _appearHeadScaleTween, offset 0xe8, size 0x8
  __declspec(property(get = __get__appearHeadScaleTween, put = __set__appearHeadScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearHeadScaleTween;

  /// @brief Field _appearBodyPositionTween, offset 0xf0, size 0x8
  __declspec(property(get = __get__appearBodyPositionTween, put = __set__appearBodyPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearBodyPositionTween;

  /// @brief Field _appearBodyScaleTween, offset 0xf8, size 0x8
  __declspec(property(get = __get__appearBodyScaleTween, put = __set__appearBodyScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearBodyScaleTween;

  /// @brief Field _appearRightHandPositionTween, offset 0x100, size 0x8
  __declspec(property(get = __get__appearRightHandPositionTween, put = __set__appearRightHandPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearRightHandPositionTween;

  /// @brief Field _appearRightHandScaleTween, offset 0x108, size 0x8
  __declspec(property(get = __get__appearRightHandScaleTween, put = __set__appearRightHandScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearRightHandScaleTween;

  /// @brief Field _appearLeftHandPositionTween, offset 0x110, size 0x8
  __declspec(property(get = __get__appearLeftHandPositionTween, put = __set__appearLeftHandPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearLeftHandPositionTween;

  /// @brief Field _appearLeftHandScaleTween, offset 0x118, size 0x8
  __declspec(property(get = __get__appearLeftHandScaleTween, put = __set__appearLeftHandScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _appearLeftHandScaleTween;

  /// @brief Field _disappearScaleTween, offset 0x120, size 0x8
  __declspec(property(get = __get__disappearScaleTween, put = __set__disappearScaleTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _disappearScaleTween;

  /// @brief Field _disappearPositionTween, offset 0x128, size 0x8
  __declspec(property(get = __get__disappearPositionTween, put = __set__disappearPositionTween))::Tweening::Tween_1<::UnityEngine::Vector3>* _disappearPositionTween;

  /// @brief Field _avatarLocalPosition, offset 0x130, size 0xc
  __declspec(property(get = __get__avatarLocalPosition, put = __set__avatarLocalPosition))::UnityEngine::Vector3 _avatarLocalPosition;

  /// @brief Field _avatarLocalScale, offset 0x13c, size 0xc
  __declspec(property(get = __get__avatarLocalScale, put = __set__avatarLocalScale))::UnityEngine::Vector3 _avatarLocalScale;

  constexpr ::UnityEngine::Transform*& __get__avatarTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__avatarTransform() const;

  constexpr void __set__avatarTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__headParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__headParent() const;

  constexpr void __set__headParent(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftHandTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftHandTransform() const;

  constexpr void __set__leftHandTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightHandTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightHandTransform() const;

  constexpr void __set__rightHandTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__bodyTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__bodyTransform() const;

  constexpr void __set__bodyTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__headInnerTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__headInnerTransform() const;

  constexpr void __set__headInnerTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftHandInnerTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftHandInnerTransform() const;

  constexpr void __set__leftHandInnerTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightHandInnerTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightHandInnerTransform() const;

  constexpr void __set__rightHandInnerTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__bodyInnerTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__bodyInnerTransform() const;

  constexpr void __set__bodyInnerTransform(::UnityEngine::Transform* value);

  constexpr float_t& __get__popDuration();

  constexpr float_t const& __get__popDuration() const;

  constexpr void __set__popDuration(float_t value);

  constexpr ::GlobalNamespace::EaseType& __get__popEaseType();

  constexpr ::GlobalNamespace::EaseType const& __get__popEaseType() const;

  constexpr void __set__popEaseType(::GlobalNamespace::EaseType value);

  constexpr float_t& __get__headPopAmount();

  constexpr float_t const& __get__headPopAmount() const;

  constexpr void __set__headPopAmount(float_t value);

  constexpr float_t& __get__handsPopAmount();

  constexpr float_t const& __get__handsPopAmount() const;

  constexpr void __set__handsPopAmount(float_t value);

  constexpr float_t& __get__clothesPopAmount();

  constexpr float_t const& __get__clothesPopAmount() const;

  constexpr void __set__clothesPopAmount(float_t value);

  constexpr float_t& __get__allPopAmount();

  constexpr float_t const& __get__allPopAmount() const;

  constexpr void __set__allPopAmount(float_t value);

  constexpr float_t& __get__appearDuration();

  constexpr float_t const& __get__appearDuration() const;

  constexpr void __set__appearDuration(float_t value);

  constexpr float_t& __get__appearSpacing();

  constexpr float_t const& __get__appearSpacing() const;

  constexpr void __set__appearSpacing(float_t value);

  constexpr float_t& __get__appearHeight();

  constexpr float_t const& __get__appearHeight() const;

  constexpr void __set__appearHeight(float_t value);

  constexpr ::UnityEngine::Vector3& __get__squashFactor();

  constexpr ::UnityEngine::Vector3 const& __get__squashFactor() const;

  constexpr void __set__squashFactor(::UnityEngine::Vector3 value);

  constexpr float_t& __get__disappearDuration();

  constexpr float_t const& __get__disappearDuration() const;

  constexpr void __set__disappearDuration(float_t value);

  constexpr float_t& __get__disappearHeight();

  constexpr float_t const& __get__disappearHeight() const;

  constexpr void __set__disappearHeight(float_t value);

  constexpr ::UnityEngine::Vector3& __get__disappearSquash();

  constexpr ::UnityEngine::Vector3 const& __get__disappearSquash() const;

  constexpr void __set__disappearSquash(::UnityEngine::Vector3 value);

  constexpr ::GlobalNamespace::EaseType& __get__disappearScaleEase();

  constexpr ::GlobalNamespace::EaseType const& __get__disappearScaleEase() const;

  constexpr void __set__disappearScaleEase(::GlobalNamespace::EaseType value);

  constexpr ::GlobalNamespace::EaseType& __get__disappearPositionEase();

  constexpr ::GlobalNamespace::EaseType const& __get__disappearPositionEase() const;

  constexpr void __set__disappearPositionEase(::GlobalNamespace::EaseType value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::GlobalNamespace::ICoroutineStarter*& __get__sharedCoroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __get__sharedCoroutineStarter() const;

  constexpr void __set__sharedCoroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__popHeadTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__popHeadTween() const;

  constexpr void __set__popHeadTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__popLeftHandTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__popLeftHandTween() const;

  constexpr void __set__popLeftHandTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__popRightHandTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__popRightHandTween() const;

  constexpr void __set__popRightHandTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__popClothesTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__popClothesTween() const;

  constexpr void __set__popClothesTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__appearHeadPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__appearHeadPositionTween() const;

  constexpr void __set__appearHeadPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__appearHeadScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__appearHeadScaleTween() const;

  constexpr void __set__appearHeadScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__appearBodyPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__appearBodyPositionTween() const;

  constexpr void __set__appearBodyPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__appearBodyScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__appearBodyScaleTween() const;

  constexpr void __set__appearBodyScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__appearRightHandPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__appearRightHandPositionTween() const;

  constexpr void __set__appearRightHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__appearRightHandScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__appearRightHandScaleTween() const;

  constexpr void __set__appearRightHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__appearLeftHandPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__appearLeftHandPositionTween() const;

  constexpr void __set__appearLeftHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__appearLeftHandScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__appearLeftHandScaleTween() const;

  constexpr void __set__appearLeftHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__disappearScaleTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__disappearScaleTween() const;

  constexpr void __set__disappearScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& __get__disappearPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& __get__disappearPositionTween() const;

  constexpr void __set__disappearPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value);

  constexpr ::UnityEngine::Vector3& __get__avatarLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get__avatarLocalPosition() const;

  constexpr void __set__avatarLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__avatarLocalScale();

  constexpr ::UnityEngine::Vector3 const& __get__avatarLocalScale() const;

  constexpr void __set__avatarLocalScale(::UnityEngine::Vector3 value);

  /// @brief Method Awake, addr 0xe14f78, size 0x4c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDisable, addr 0xe14fc4, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0xe1505c, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PresentAvatar, addr 0xe12a5c, size 0x48, virtual false, abstract: false, final false
  inline void PresentAvatar();

  /// @brief Method HideAvatar, addr 0xe131e8, size 0xb8, virtual false, abstract: false, final false
  inline void HideAvatar();

  /// @brief Method PopAll, addr 0xe15130, size 0x2c, virtual false, abstract: false, final false
  inline void PopAll();

  /// @brief Method PopHead, addr 0xe152bc, size 0x8, virtual false, abstract: false, final false
  inline void PopHead();

  /// @brief Method PopHands, addr 0xe152c4, size 0x8, virtual false, abstract: false, final false
  inline void PopHands();

  /// @brief Method PopClothes, addr 0xe152cc, size 0x8, virtual false, abstract: false, final false
  inline void PopClothes();

  /// @brief Method PopHead, addr 0xe1515c, size 0x60, virtual false, abstract: false, final false
  inline void PopHead(float_t popAmount);

  /// @brief Method PopHands, addr 0xe1521c, size 0xa0, virtual false, abstract: false, final false
  inline void PopHands(float_t popAmount);

  /// @brief Method PopClothes, addr 0xe151bc, size 0x60, virtual false, abstract: false, final false
  inline void PopClothes(float_t popAmount);

  /// @brief Method CreatePopTween, addr 0xe152d4, size 0x128, virtual false, abstract: false, final false
  inline ::Tweening::Tween_1<float_t>* CreatePopTween(::UnityEngine::Transform* partTransform, float_t popAmount);

  /// @brief Method AppearAnimation, addr 0xe15060, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* AppearAnimation();

  /// @brief Method AppearBody, addr 0xe1542c, size 0x2b0, virtual false, abstract: false, final false
  inline void AppearBody();

  /// @brief Method AppearHead, addr 0xe156dc, size 0x2b0, virtual false, abstract: false, final false
  inline void AppearHead();

  /// @brief Method AppearLeftHand, addr 0xe1598c, size 0x2b8, virtual false, abstract: false, final false
  inline void AppearLeftHand();

  /// @brief Method AppearRightHand, addr 0xe15c44, size 0x2b8, virtual false, abstract: false, final false
  inline void AppearRightHand();

  /// @brief Method DisappearAnimation, addr 0xe150c8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DisappearAnimation();

  /// @brief Method StopAll, addr 0xe14fc8, size 0x94, virtual false, abstract: false, final false
  inline void StopAll();

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* New_ctor();

  /// @brief Method .ctor, addr 0xe15f24, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <AppearBody>b__56_0, addr 0xe15f78, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearBody_b__56_0(::UnityEngine::Vector3 val);

  /// @brief Method <AppearBody>b__56_1, addr 0xe15f94, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearBody_b__56_1(::UnityEngine::Vector3 val);

  /// @brief Method <AppearHead>b__57_0, addr 0xe15fb0, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearHead_b__57_0(::UnityEngine::Vector3 val);

  /// @brief Method <AppearHead>b__57_1, addr 0xe15fcc, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearHead_b__57_1(::UnityEngine::Vector3 val);

  /// @brief Method <AppearLeftHand>b__58_0, addr 0xe15fe8, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearLeftHand_b__58_0(::UnityEngine::Vector3 val);

  /// @brief Method <AppearLeftHand>b__58_1, addr 0xe16004, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearLeftHand_b__58_1(::UnityEngine::Vector3 val);

  /// @brief Method <AppearRightHand>b__59_0, addr 0xe16020, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearRightHand_b__59_0(::UnityEngine::Vector3 val);

  /// @brief Method <AppearRightHand>b__59_1, addr 0xe1603c, size 0x1c, virtual false, abstract: false, final false
  inline void _AppearRightHand_b__59_1(::UnityEngine::Vector3 val);

  /// @brief Method <DisappearAnimation>b__60_0, addr 0xe16058, size 0x1c, virtual false, abstract: false, final false
  inline void _DisappearAnimation_b__60_0(::UnityEngine::Vector3 val);

  /// @brief Method <DisappearAnimation>b__60_1, addr 0xe16074, size 0x1c, virtual false, abstract: false, final false
  inline void _DisappearAnimation_b__60_1(::UnityEngine::Vector3 val);

  // Ctor Parameters [CppParam { name: "", ty: "AvatarTweenController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarTweenController(AvatarTweenController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarTweenController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarTweenController(AvatarTweenController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarTweenController();

public:
  /// @brief Field _avatarTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____avatarTransform;

  /// @brief Field _headParent, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____headParent;

  /// @brief Field _leftHandTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftHandTransform;

  /// @brief Field _rightHandTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightHandTransform;

  /// @brief Field _bodyTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ____bodyTransform;

  /// @brief Field _headInnerTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ____headInnerTransform;

  /// @brief Field _leftHandInnerTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftHandInnerTransform;

  /// @brief Field _rightHandInnerTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightHandInnerTransform;

  /// @brief Field _bodyInnerTransform, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ____bodyInnerTransform;

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
  ::Tweening::TimeTweeningManager* ____tweeningManager;

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
