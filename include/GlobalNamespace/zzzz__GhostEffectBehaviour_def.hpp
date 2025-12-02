#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostEffectBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostEffectBehaviour)
namespace GlobalNamespace {
struct GhostEffectBehaviour_EndBehavior;
}
namespace GlobalNamespace {
struct GhostEffectBehaviour_GhostEffectType;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
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
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GhostEffectBehaviour_EndBehavior;
}
namespace GlobalNamespace {
struct GhostEffectBehaviour_GhostEffectType;
}
namespace GlobalNamespace {
class GhostEffectBehaviour;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostEffectBehaviour_EndBehavior);
MARK_VAL_T(::GlobalNamespace::GhostEffectBehaviour_GhostEffectType);
MARK_REF_PTR_T(::GlobalNamespace::GhostEffectBehaviour);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostEffectBehaviour/EndBehavior
struct CORDL_TYPE GhostEffectBehaviour_EndBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GhostEffectBehaviour_EndBehavior_Unwrapped
  enum struct __GhostEffectBehaviour_EndBehavior_Unwrapped : int32_t {
    __E_DisableAll = static_cast<int32_t>(0x0),
    __E_DisableCopies = static_cast<int32_t>(0x1),
    __E_Nothing = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GhostEffectBehaviour_EndBehavior_Unwrapped() const noexcept {
    return static_cast<__GhostEffectBehaviour_EndBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GhostEffectBehaviour_EndBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GhostEffectBehaviour_EndBehavior(int32_t value__) noexcept;

  /// @brief Field DisableAll value: I32(0)
  static ::GlobalNamespace::GhostEffectBehaviour_EndBehavior const DisableAll;

  /// @brief Field DisableCopies value: I32(1)
  static ::GlobalNamespace::GhostEffectBehaviour_EndBehavior const DisableCopies;

  /// @brief Field Nothing value: I32(2)
  static ::GlobalNamespace::GhostEffectBehaviour_EndBehavior const Nothing;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6779 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour_EndBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostEffectBehaviour_EndBehavior, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostEffectBehaviour/GhostEffectType
struct CORDL_TYPE GhostEffectBehaviour_GhostEffectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GhostEffectBehaviour_GhostEffectType_Unwrapped
  enum struct __GhostEffectBehaviour_GhostEffectType_Unwrapped : int32_t {
    __E_TextMeshPro = static_cast<int32_t>(0x0),
    __E_Canvas = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GhostEffectBehaviour_GhostEffectType_Unwrapped() const noexcept {
    return static_cast<__GhostEffectBehaviour_GhostEffectType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GhostEffectBehaviour_GhostEffectType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GhostEffectBehaviour_GhostEffectType(int32_t value__) noexcept;

  /// @brief Field Canvas value: I32(1)
  static ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType const Canvas;

  /// @brief Field TextMeshPro value: I32(0)
  static ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType const TextMeshPro;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6780 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour_GhostEffectType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostEffectBehaviour_GhostEffectType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EaseType, GhostEffectBehaviour::EndBehavior, GhostEffectBehaviour::GhostEffectType, UnityEngine.Playables.PlayableBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostEffectBehaviour
class CORDL_TYPE GhostEffectBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using EndBehavior = ::GlobalNamespace::GhostEffectBehaviour_EndBehavior;

  using GhostEffectType = ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType;

  /// @brief Field _canvasGroups, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroups,
                      put = __cordl_internal_set__canvasGroups)) ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>
      _canvasGroups;

  /// @brief Field _direction, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get__direction, put = __cordl_internal_set__direction)) ::UnityEngine::Vector3 _direction;

  /// @brief Field _distanceMultiplier, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__distanceMultiplier, put = __cordl_internal_set__distanceMultiplier)) ::UnityEngine::Vector3 _distanceMultiplier;

  /// @brief Field _endBehavior, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__endBehavior, put = __cordl_internal_set__endBehavior)) ::GlobalNamespace::GhostEffectBehaviour_EndBehavior _endBehavior;

  /// @brief Field _endLocalPosition, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__endLocalPosition, put = __cordl_internal_set__endLocalPosition)) ::UnityEngine::Vector3 _endLocalPosition;

  /// @brief Field _endTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__endTransform, put = __cordl_internal_set__endTransform)) ::UnityW<::UnityEngine::Transform> _endTransform;

  /// @brief Field _finished, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get__finished, put = __cordl_internal_set__finished)) bool _finished;

  /// @brief Field _ghostEffectTransform, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__ghostEffectTransform, put = __cordl_internal_set__ghostEffectTransform)) ::UnityW<::UnityEngine::Transform> _ghostEffectTransform;

  /// @brief Field _ghostEffectType, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__ghostEffectType, put = __cordl_internal_set__ghostEffectType)) ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType _ghostEffectType;

  /// @brief Field _positionEasing, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__positionEasing, put = __cordl_internal_set__positionEasing)) ::GlobalNamespace::EaseType _positionEasing;

  /// @brief Field _startLocalPosition, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__startLocalPosition, put = __cordl_internal_set__startLocalPosition)) ::UnityEngine::Vector3 _startLocalPosition;

  /// @brief Field _startTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__startTransform, put = __cordl_internal_set__startTransform)) ::UnityW<::UnityEngine::Transform> _startTransform;

  /// @brief Field _useEndTransform, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get__useEndTransform, put = __cordl_internal_set__useEndTransform)) bool _useEndTransform;

  /// @brief Field _useStartTransform, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__useStartTransform, put = __cordl_internal_set__useStartTransform)) bool _useStartTransform;

  /// @brief Field alphaCurve, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_alphaCurve, put = __cordl_internal_set_alphaCurve)) ::UnityEngine::AnimationCurve* alphaCurve;

  /// @brief Field distanceCurve, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_distanceCurve, put = __cordl_internal_set_distanceCurve)) ::UnityEngine::AnimationCurve* distanceCurve;

  /// @brief Field progress, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_progress, put = __cordl_internal_set_progress)) float_t progress;

  /// @brief Field sizeCurve, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sizeCurve, put = __cordl_internal_set_sizeCurve)) ::UnityEngine::AnimationCurve* sizeCurve;

  /// @brief Field textMeshPros, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_textMeshPros, put = __cordl_internal_set_textMeshPros)) ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*>
      textMeshPros;

  /// @brief Method EnableObjects, addr 0x5716424, size 0x114, virtual false, abstract: false, final false
  inline void EnableObjects(bool on);

  static inline ::GlobalNamespace::GhostEffectBehaviour* New_ctor();

  /// @brief Method OnBehaviourPlay, addr 0x5716294, size 0x190, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method ProcessFrame, addr 0x5716538, size 0x478, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> const& __cordl_internal_get__canvasGroups() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>& __cordl_internal_get__canvasGroups();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__direction() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__direction();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__distanceMultiplier() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__distanceMultiplier();

  constexpr ::GlobalNamespace::GhostEffectBehaviour_EndBehavior const& __cordl_internal_get__endBehavior() const;

  constexpr ::GlobalNamespace::GhostEffectBehaviour_EndBehavior& __cordl_internal_get__endBehavior();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__endLocalPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__endTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__endTransform();

  constexpr bool const& __cordl_internal_get__finished() const;

  constexpr bool& __cordl_internal_get__finished();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__ghostEffectTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__ghostEffectTransform();

  constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType const& __cordl_internal_get__ghostEffectType() const;

  constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType& __cordl_internal_get__ghostEffectType();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__positionEasing() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__positionEasing();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startLocalPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__startTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__startTransform();

  constexpr bool const& __cordl_internal_get__useEndTransform() const;

  constexpr bool& __cordl_internal_get__useEndTransform();

  constexpr bool const& __cordl_internal_get__useStartTransform() const;

  constexpr bool& __cordl_internal_get__useStartTransform();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_alphaCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_alphaCurve();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_distanceCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_distanceCurve();

  constexpr float_t const& __cordl_internal_get_progress() const;

  constexpr float_t& __cordl_internal_get_progress();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_sizeCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_sizeCurve();

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> const& __cordl_internal_get_textMeshPros() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*>& __cordl_internal_get_textMeshPros();

  constexpr void __cordl_internal_set__canvasGroups(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> value);

  constexpr void __cordl_internal_set__direction(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__distanceMultiplier(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__endBehavior(::GlobalNamespace::GhostEffectBehaviour_EndBehavior value);

  constexpr void __cordl_internal_set__endLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__endTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__finished(bool value);

  constexpr void __cordl_internal_set__ghostEffectTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__ghostEffectType(::GlobalNamespace::GhostEffectBehaviour_GhostEffectType value);

  constexpr void __cordl_internal_set__positionEasing(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__startLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__useEndTransform(bool value);

  constexpr void __cordl_internal_set__useStartTransform(bool value);

  constexpr void __cordl_internal_set_alphaCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_distanceCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_progress(float_t value);

  constexpr void __cordl_internal_set_sizeCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_textMeshPros(::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> value);

  /// @brief Method .ctor, addr 0x57169b0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GhostEffectBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GhostEffectBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GhostEffectBehaviour(GhostEffectBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GhostEffectBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GhostEffectBehaviour(GhostEffectBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6781 };

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
  ::UnityW<::UnityEngine::Transform> ____startTransform;

  /// @brief Field _endLocalPosition, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endLocalPosition;

  /// @brief Field _endTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____endTransform;

  /// @brief Field _positionEasing, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____positionEasing;

  /// @brief Field _endBehavior, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::GhostEffectBehaviour_EndBehavior ____endBehavior;

  /// @brief Field progress, offset: 0x70, size: 0x4, def value: None
  float_t ___progress;

  /// @brief Field textMeshPros, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> ___textMeshPros;

  /// @brief Field _canvasGroups, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> ____canvasGroups;

  /// @brief Field _ghostEffectType, offset: 0x88, size: 0x4, def value: None
  ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType ____ghostEffectType;

  /// @brief Field _ghostEffectTransform, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____ghostEffectTransform;

  /// @brief Field _direction, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____direction;

  /// @brief Field _finished, offset: 0xa4, size: 0x1, def value: None
  bool ____finished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ___alphaCurve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ___sizeCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ___distanceCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____distanceMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____useStartTransform) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____useEndTransform) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____startLocalPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____startTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____endLocalPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____endTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____positionEasing) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____endBehavior) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ___progress) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ___textMeshPros) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____canvasGroups) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____ghostEffectType) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____ghostEffectTransform) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____direction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectBehaviour, ____finished) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostEffectBehaviour, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostEffectBehaviour_EndBehavior, "", "GhostEffectBehaviour/EndBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostEffectBehaviour_GhostEffectType, "", "GhostEffectBehaviour/GhostEffectType");
NEED_NO_BOX(::GlobalNamespace::GhostEffectBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostEffectBehaviour*, "", "GhostEffectBehaviour");
