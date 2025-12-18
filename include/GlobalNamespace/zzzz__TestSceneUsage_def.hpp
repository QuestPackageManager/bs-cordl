#pragma once
// IWYU pragma private; include "GlobalNamespace/TestSceneUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TestSceneUsage)
namespace GlobalNamespace {
class OVREyeGaze;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TestSceneUsage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestSceneUsage);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestSceneUsage
class CORDL_TYPE TestSceneUsage : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _confidence, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__confidence, put = __cordl_internal_set__confidence)) float_t _confidence;

  /// @brief Field _eyeGazeComponent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eyeGazeComponent, put = __cordl_internal_set__eyeGazeComponent)) ::UnityW<::GlobalNamespace::OVREyeGaze> _eyeGazeComponent;

  /// @brief Field _eyeGazeDirection, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__eyeGazeDirection, put = __cordl_internal_set__eyeGazeDirection)) ::System::Tuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* _eyeGazeDirection;

  /// @brief Field _eyeGazePose, offset 0x28, size 0x1c
  __declspec(property(get = __cordl_internal_get__eyeGazePose, put = __cordl_internal_set__eyeGazePose)) ::UnityEngine::Pose _eyeGazePose;

  /// @brief Field _eyeGazePosition, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get__eyeGazePosition, put = __cordl_internal_set__eyeGazePosition)) ::UnityEngine::Vector3 _eyeGazePosition;

  /// @brief Field drawingLineWidth, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_drawingLineWidth, put = __cordl_internal_set_drawingLineWidth)) float_t drawingLineWidth;

  /// @brief Field passthroughEnabled, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_passthroughEnabled, put = __cordl_internal_set_passthroughEnabled)) bool passthroughEnabled;

  /// @brief Field previousPassthroughEnabled, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_previousPassthroughEnabled, put = __cordl_internal_set_previousPassthroughEnabled)) bool previousPassthroughEnabled;

  static inline ::GlobalNamespace::TestSceneUsage* New_ctor();

  /// @brief Method Start, addr 0x588fb80, size 0x54, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TogglePassthrough, addr 0x588fe20, size 0x4, virtual false, abstract: false, final false
  inline void TogglePassthrough();

  /// @brief Method TogglePassthroughStatic, addr 0x588fe24, size 0xa8, virtual false, abstract: false, final false
  static inline void TogglePassthroughStatic();

  /// @brief Method Update, addr 0x588fbd4, size 0x24c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__confidence() const;

  constexpr float_t& __cordl_internal_get__confidence();

  constexpr ::UnityW<::GlobalNamespace::OVREyeGaze> const& __cordl_internal_get__eyeGazeComponent() const;

  constexpr ::UnityW<::GlobalNamespace::OVREyeGaze>& __cordl_internal_get__eyeGazeComponent();

  constexpr ::System::Tuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* const& __cordl_internal_get__eyeGazeDirection() const;

  constexpr ::System::Tuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>*& __cordl_internal_get__eyeGazeDirection();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__eyeGazePose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__eyeGazePose();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__eyeGazePosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__eyeGazePosition();

  constexpr float_t const& __cordl_internal_get_drawingLineWidth() const;

  constexpr float_t& __cordl_internal_get_drawingLineWidth();

  constexpr bool const& __cordl_internal_get_passthroughEnabled() const;

  constexpr bool& __cordl_internal_get_passthroughEnabled();

  constexpr bool const& __cordl_internal_get_previousPassthroughEnabled() const;

  constexpr bool& __cordl_internal_get_previousPassthroughEnabled();

  constexpr void __cordl_internal_set__confidence(float_t value);

  constexpr void __cordl_internal_set__eyeGazeComponent(::UnityW<::GlobalNamespace::OVREyeGaze> value);

  constexpr void __cordl_internal_set__eyeGazeDirection(::System::Tuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__eyeGazePose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__eyeGazePosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_drawingLineWidth(float_t value);

  constexpr void __cordl_internal_set_passthroughEnabled(bool value);

  constexpr void __cordl_internal_set_previousPassthroughEnabled(bool value);

  /// @brief Method .ctor, addr 0x588fecc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestSceneUsage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TestSceneUsage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestSceneUsage(TestSceneUsage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestSceneUsage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestSceneUsage(TestSceneUsage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18287 };

  /// @brief Field _eyeGazeComponent, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVREyeGaze> ____eyeGazeComponent;

  /// @brief Field _eyeGazePose, offset: 0x28, size: 0x1c, def value: None
  ::UnityEngine::Pose ____eyeGazePose;

  /// @brief Field _eyeGazePosition, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____eyeGazePosition;

  /// @brief Field _eyeGazeDirection, offset: 0x50, size: 0x8, def value: None
  ::System::Tuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* ____eyeGazeDirection;

  /// @brief Field _confidence, offset: 0x58, size: 0x4, def value: None
  float_t ____confidence;

  /// @brief Field drawingLineWidth, offset: 0x5c, size: 0x4, def value: None
  float_t ___drawingLineWidth;

  /// @brief Field passthroughEnabled, offset: 0x60, size: 0x1, def value: None
  bool ___passthroughEnabled;

  /// @brief Field previousPassthroughEnabled, offset: 0x61, size: 0x1, def value: None
  bool ___previousPassthroughEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestSceneUsage, ____eyeGazeComponent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSceneUsage, ____eyeGazePose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSceneUsage, ____eyeGazePosition) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSceneUsage, ____eyeGazeDirection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSceneUsage, ____confidence) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSceneUsage, ___drawingLineWidth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSceneUsage, ___passthroughEnabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSceneUsage, ___previousPassthroughEnabled) == 0x61, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestSceneUsage, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestSceneUsage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestSceneUsage*, "", "TestSceneUsage");
