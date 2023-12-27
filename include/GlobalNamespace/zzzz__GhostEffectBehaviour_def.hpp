#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostEffectBehaviour)
namespace TMPro {
class TextMeshPro;
}
namespace GlobalNamespace {
struct __GhostEffectBehaviour__GhostEffectType;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
struct __GhostEffectBehaviour__EndBehavior;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GhostEffectBehaviour__EndBehavior;
}
namespace GlobalNamespace {
struct __GhostEffectBehaviour__GhostEffectType;
}
namespace GlobalNamespace {
class GhostEffectBehaviour;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GhostEffectBehaviour__EndBehavior);
MARK_VAL_T(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType);
MARK_REF_PTR_T(::GlobalNamespace::GhostEffectBehaviour);
// Type: ::EndBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6014))
// CS Name: ::GhostEffectBehaviour::EndBehavior
struct CORDL_TYPE __GhostEffectBehaviour__EndBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GhostEffectBehaviour__EndBehavior_Unwrapped
  enum struct ____GhostEffectBehaviour__EndBehavior_Unwrapped : int32_t {
    __E_DisableAll = static_cast<int32_t>(0x0),
    __E_DisableCopies = static_cast<int32_t>(0x1),
    __E_Nothing = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GhostEffectBehaviour__EndBehavior_Unwrapped() const noexcept {
    return static_cast<____GhostEffectBehaviour__EndBehavior_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GhostEffectBehaviour__EndBehavior(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GhostEffectBehaviour__EndBehavior();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DisableAll value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const DisableAll;

  /// @brief Field DisableCopies value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const DisableCopies;

  /// @brief Field Nothing value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const Nothing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostEffectBehaviour__EndBehavior, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GhostEffectType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6015))
// CS Name: ::GhostEffectBehaviour::GhostEffectType
struct CORDL_TYPE __GhostEffectBehaviour__GhostEffectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GhostEffectBehaviour__GhostEffectType_Unwrapped
  enum struct ____GhostEffectBehaviour__GhostEffectType_Unwrapped : int32_t {
    __E_TextMeshPro = static_cast<int32_t>(0x0),
    __E_Canvas = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GhostEffectBehaviour__GhostEffectType_Unwrapped() const noexcept {
    return static_cast<____GhostEffectBehaviour__GhostEffectType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GhostEffectBehaviour__GhostEffectType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GhostEffectBehaviour__GhostEffectType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field TextMeshPro value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const TextMeshPro;

  /// @brief Field Canvas value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const Canvas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GhostEffectBehaviour
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 165, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6014)), TypeDefinitionIndex(TypeDefinitionIndex(16090)), TypeDefinitionIndex(TypeDefinitionIndex(10249)),
// TypeDefinitionIndex(TypeDefinitionIndex(10425)), TypeDefinitionIndex(TypeDefinitionIndex(6015))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6016)) CS Name: ::GhostEffectBehaviour*
class CORDL_TYPE GhostEffectBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using GhostEffectType = ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType;

  using EndBehavior = ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior;

  /// @brief Field alphaCurve, offset 0x10, size 0x8
  __declspec(property(get = __get_alphaCurve, put = __set_alphaCurve))::UnityEngine::AnimationCurve* alphaCurve;

  /// @brief Field sizeCurve, offset 0x18, size 0x8
  __declspec(property(get = __get_sizeCurve, put = __set_sizeCurve))::UnityEngine::AnimationCurve* sizeCurve;

  /// @brief Field distanceCurve, offset 0x20, size 0x8
  __declspec(property(get = __get_distanceCurve, put = __set_distanceCurve))::UnityEngine::AnimationCurve* distanceCurve;

  /// @brief Field _distanceMultiplier, offset 0x28, size 0xc
  __declspec(property(get = __get__distanceMultiplier, put = __set__distanceMultiplier))::UnityEngine::Vector3 _distanceMultiplier;

  /// @brief Field _useStartTransform, offset 0x34, size 0x1
  __declspec(property(get = __get__useStartTransform, put = __set__useStartTransform)) bool _useStartTransform;

  /// @brief Field _useEndTransform, offset 0x35, size 0x1
  __declspec(property(get = __get__useEndTransform, put = __set__useEndTransform)) bool _useEndTransform;

  /// @brief Field _startLocalPosition, offset 0x38, size 0xc
  __declspec(property(get = __get__startLocalPosition, put = __set__startLocalPosition))::UnityEngine::Vector3 _startLocalPosition;

  /// @brief Field _startTransform, offset 0x48, size 0x8
  __declspec(property(get = __get__startTransform, put = __set__startTransform))::UnityEngine::Transform* _startTransform;

  /// @brief Field _endLocalPosition, offset 0x50, size 0xc
  __declspec(property(get = __get__endLocalPosition, put = __set__endLocalPosition))::UnityEngine::Vector3 _endLocalPosition;

  /// @brief Field _endTransform, offset 0x60, size 0x8
  __declspec(property(get = __get__endTransform, put = __set__endTransform))::UnityEngine::Transform* _endTransform;

  /// @brief Field _positionEasing, offset 0x68, size 0x4
  __declspec(property(get = __get__positionEasing, put = __set__positionEasing))::GlobalNamespace::EaseType _positionEasing;

  /// @brief Field _endBehavior, offset 0x6c, size 0x4
  __declspec(property(get = __get__endBehavior, put = __set__endBehavior))::GlobalNamespace::__GhostEffectBehaviour__EndBehavior _endBehavior;

  /// @brief Field progress, offset 0x70, size 0x4
  __declspec(property(get = __get_progress, put = __set_progress)) float_t progress;

  /// @brief Field textMeshPros, offset 0x78, size 0x8
  __declspec(property(get = __get_textMeshPros, put = __set_textMeshPros))::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*> textMeshPros;

  /// @brief Field _canvasGroups, offset 0x80, size 0x8
  __declspec(property(get = __get__canvasGroups, put = __set__canvasGroups))::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*> _canvasGroups;

  /// @brief Field _ghostEffectType, offset 0x88, size 0x4
  __declspec(property(get = __get__ghostEffectType, put = __set__ghostEffectType))::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType _ghostEffectType;

  /// @brief Field _ghostEffectTransform, offset 0x90, size 0x8
  __declspec(property(get = __get__ghostEffectTransform, put = __set__ghostEffectTransform))::UnityEngine::Transform* _ghostEffectTransform;

  /// @brief Field _direction, offset 0x98, size 0xc
  __declspec(property(get = __get__direction, put = __set__direction))::UnityEngine::Vector3 _direction;

  /// @brief Field _finished, offset 0xa4, size 0x1
  __declspec(property(get = __get__finished, put = __set__finished)) bool _finished;

  constexpr ::UnityEngine::AnimationCurve*& __get_alphaCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_alphaCurve() const;

  constexpr void __set_alphaCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_sizeCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_sizeCurve() const;

  constexpr void __set_sizeCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_distanceCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_distanceCurve() const;

  constexpr void __set_distanceCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::Vector3& __get__distanceMultiplier();

  constexpr ::UnityEngine::Vector3 const& __get__distanceMultiplier() const;

  constexpr void __set__distanceMultiplier(::UnityEngine::Vector3 value);

  constexpr bool& __get__useStartTransform();

  constexpr bool const& __get__useStartTransform() const;

  constexpr void __set__useStartTransform(bool value);

  constexpr bool& __get__useEndTransform();

  constexpr bool const& __get__useEndTransform() const;

  constexpr void __set__useEndTransform(bool value);

  constexpr ::UnityEngine::Vector3& __get__startLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get__startLocalPosition() const;

  constexpr void __set__startLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get__startTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__startTransform() const;

  constexpr void __set__startTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__endLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get__endLocalPosition() const;

  constexpr void __set__endLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get__endTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__endTransform() const;

  constexpr void __set__endTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::EaseType& __get__positionEasing();

  constexpr ::GlobalNamespace::EaseType const& __get__positionEasing() const;

  constexpr void __set__positionEasing(::GlobalNamespace::EaseType value);

  constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior& __get__endBehavior();

  constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const& __get__endBehavior() const;

  constexpr void __set__endBehavior(::GlobalNamespace::__GhostEffectBehaviour__EndBehavior value);

  constexpr float_t& __get_progress();

  constexpr float_t const& __get_progress() const;

  constexpr void __set_progress(float_t value);

  constexpr ::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*>& __get_textMeshPros();

  constexpr ::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*> const& __get_textMeshPros() const;

  constexpr void __set_textMeshPros(::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*> value);

  constexpr ::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*>& __get__canvasGroups();

  constexpr ::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*> const& __get__canvasGroups() const;

  constexpr void __set__canvasGroups(::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*> value);

  constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType& __get__ghostEffectType();

  constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const& __get__ghostEffectType() const;

  constexpr void __set__ghostEffectType(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType value);

  constexpr ::UnityEngine::Transform*& __get__ghostEffectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__ghostEffectTransform() const;

  constexpr void __set__ghostEffectTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__direction();

  constexpr ::UnityEngine::Vector3 const& __get__direction() const;

  constexpr void __set__direction(::UnityEngine::Vector3 value);

  constexpr bool& __get__finished();

  constexpr bool const& __get__finished() const;

  constexpr void __set__finished(bool value);

  /// @brief Method OnBehaviourPlay addr 0x2317380 size 0x190 virtual true final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method ProcessFrame addr 0x2317624 size 0x438 virtual true final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  /// @brief Method EnableObjects addr 0x2317510 size 0x114 virtual false final false
  inline void EnableObjects(bool on);

  static inline ::GlobalNamespace::GhostEffectBehaviour* New_ctor();

  /// @brief Method .ctor addr 0x2317a5c size 0xd0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GhostEffectBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GhostEffectBehaviour(GhostEffectBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GhostEffectBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GhostEffectBehaviour(GhostEffectBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GhostEffectBehaviour();

public:
  /// @brief Field alphaCurve, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___alphaCurve;

  /// @brief Field sizeCurve, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___sizeCurve;

  /// @brief Field distanceCurve, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___distanceCurve;

  /// @brief Field _distanceMultiplier, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____distanceMultiplier;

  /// @brief Field _useStartTransform, offset: 0x34, size: 0x1, def value: None
  bool ____useStartTransform;

  /// @brief Field _useEndTransform, offset: 0x35, size: 0x1, def value: None
  bool ____useEndTransform;

  /// @brief Field _startLocalPosition, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startLocalPosition;

  /// @brief Field _startTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ____startTransform;

  /// @brief Field _endLocalPosition, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endLocalPosition;

  /// @brief Field _endTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Transform* ____endTransform;

  /// @brief Field _positionEasing, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____positionEasing;

  /// @brief Field _endBehavior, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior ____endBehavior;

  /// @brief Field progress, offset: 0x70, size: 0x4, def value: None
  float_t ___progress;

  /// @brief Field textMeshPros, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::TMPro::TextMeshPro*, ::Array<::TMPro::TextMeshPro*>*> ___textMeshPros;

  /// @brief Field _canvasGroups, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::CanvasGroup*, ::Array<::UnityEngine::CanvasGroup*>*> ____canvasGroups;

  /// @brief Field _ghostEffectType, offset: 0x88, size: 0x4, def value: None
  ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType ____ghostEffectType;

  /// @brief Field _ghostEffectTransform, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Transform* ____ghostEffectTransform;

  /// @brief Field _direction, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____direction;

  /// @brief Field _finished, offset: 0xa4, size: 0x1, def value: None
  bool ____finished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostEffectBehaviour, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostEffectBehaviour__EndBehavior, "", "GhostEffectBehaviour/EndBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType, "", "GhostEffectBehaviour/GhostEffectType");
NEED_NO_BOX(::GlobalNamespace::GhostEffectBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostEffectBehaviour*, "", "GhostEffectBehaviour");
