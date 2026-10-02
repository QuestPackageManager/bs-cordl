#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsWorld.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsLowLevelScripting2D_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsWorld)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawColors_PhysicsWorld_ConstraintGraphArray;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_CapsuleGeometryElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_CircleGeometryElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_LineElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_PointElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_PolygonGeometryElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsAABB;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_TransformWriteTween;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawColors;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawContactType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawFillOptions;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawOptions;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawResults;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_SimulationType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_TransformPlane;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_TransformWriteMode;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawContactType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawFillOptions;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawOptions;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_SimulationType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_TransformPlane;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_TransformWriteMode;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawColors_PhysicsWorld_ConstraintGraphArray;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_CapsuleGeometryElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_CircleGeometryElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_LineElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_PointElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct DrawResults_PhysicsWorld_PolygonGeometryElement;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawColors;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawResults;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorld);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawContactType");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawFillOptions");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawOptions");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/SimulationType");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/TransformPlane");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/TransformWriteMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawColors/ConstraintGraphArray");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawResults/CapsuleGeometryElement");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawResults/CircleGeometryElement");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawResults/LineElement");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawResults/PointElement");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawResults/PolygonGeometryElement");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawColors");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults, "UnityEngine.LowLevelPhysics2D", "PhysicsWorld/DrawResults");
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/SimulationType
struct CORDL_TYPE PhysicsWorld_SimulationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsWorld_SimulationType_Unwrapped
  enum struct __PhysicsWorld_SimulationType_Unwrapped : int32_t {
    __E_FixedUpdate = static_cast<int32_t>(0x0),
    __E_Update = static_cast<int32_t>(0x1),
    __E_Script = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsWorld_SimulationType_Unwrapped() const noexcept {
    return static_cast<__PhysicsWorld_SimulationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorld_SimulationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsWorld_SimulationType(int32_t value__) noexcept;

  /// @brief Field FixedUpdate value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType const FixedUpdate;

  /// @brief Field Script value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType const Script;

  /// @brief Field Update value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType const Update;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21558 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/TransformWriteMode
struct CORDL_TYPE PhysicsWorld_TransformWriteMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsWorld_TransformWriteMode_Unwrapped
  enum struct __PhysicsWorld_TransformWriteMode_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Fast2D = static_cast<int32_t>(0x1),
    __E_Slow3D = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsWorld_TransformWriteMode_Unwrapped() const noexcept {
    return static_cast<__PhysicsWorld_TransformWriteMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorld_TransformWriteMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsWorld_TransformWriteMode(int32_t value__) noexcept;

  /// @brief Field Fast2D value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode const Fast2D;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode const Off;

  /// @brief Field Slow3D value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode const Slow3D;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21559 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/TransformPlane
struct CORDL_TYPE PhysicsWorld_TransformPlane {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsWorld_TransformPlane_Unwrapped
  enum struct __PhysicsWorld_TransformPlane_Unwrapped : int32_t {
    __E_XY = static_cast<int32_t>(0x0),
    __E_XZ = static_cast<int32_t>(0x1),
    __E_ZY = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsWorld_TransformPlane_Unwrapped() const noexcept {
    return static_cast<__PhysicsWorld_TransformPlane_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorld_TransformPlane();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsWorld_TransformPlane(int32_t value__) noexcept;

  /// @brief Field XY value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane const XY;

  /// @brief Field XZ value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane const XZ;

  /// @brief Field ZY value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane const ZY;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21560 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawContactType
struct CORDL_TYPE PhysicsWorld_DrawContactType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsWorld_DrawContactType_Unwrapped
  enum struct __PhysicsWorld_DrawContactType_Unwrapped : int32_t {
    __E_Point = static_cast<int32_t>(0x1),
    __E_AnchorA = static_cast<int32_t>(0x2),
    __E_AnchorB = static_cast<int32_t>(0x3),
    __E_Average = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsWorld_DrawContactType_Unwrapped() const noexcept {
    return static_cast<__PhysicsWorld_DrawContactType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorld_DrawContactType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsWorld_DrawContactType(int32_t value__) noexcept;

  /// @brief Field AnchorA value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType const AnchorA;

  /// @brief Field AnchorB value: I32(3)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType const AnchorB;

  /// @brief Field Average value: I32(4)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType const Average;

  /// @brief Field Point value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType const Point;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21561 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [Flags]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawOptions
struct CORDL_TYPE PhysicsWorld_DrawOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsWorld_DrawOptions_Unwrapped
  enum struct __PhysicsWorld_DrawOptions_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_SelectedBodies = static_cast<int32_t>(0x1),
    __E_SelectedShapes = static_cast<int32_t>(0x2),
    __E_SelectedShapeBounds = static_cast<int32_t>(0x4),
    __E_SelectedJoints = static_cast<int32_t>(0x8),
    __E_AllBodies = static_cast<int32_t>(0x10),
    __E_AllShapes = static_cast<int32_t>(0x20),
    __E_AllShapeBounds = static_cast<int32_t>(0x40),
    __E_AllJoints = static_cast<int32_t>(0x80),
    __E_AllContactPoints = static_cast<int32_t>(0x100),
    __E_AllContactNormal = static_cast<int32_t>(0x200),
    __E_AllContactImpulse = static_cast<int32_t>(0x400),
    __E_AllContactFriction = static_cast<int32_t>(0x800),
    __E_AllCustom = static_cast<int32_t>(0x1000),
    __E_AllSolverIslands = static_cast<int32_t>(0x2000),
    __E_DefaultAll = static_cast<int32_t>(0x10a0),
    __E_DefaultSelected = static_cast<int32_t>(0x100a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsWorld_DrawOptions_Unwrapped() const noexcept {
    return static_cast<__PhysicsWorld_DrawOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorld_DrawOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsWorld_DrawOptions(int32_t value__) noexcept;

  /// @brief Field AllBodies value: I32(16)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllBodies;

  /// @brief Field AllContactFriction value: I32(2048)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllContactFriction;

  /// @brief Field AllContactImpulse value: I32(1024)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllContactImpulse;

  /// @brief Field AllContactNormal value: I32(512)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllContactNormal;

  /// @brief Field AllContactPoints value: I32(256)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllContactPoints;

  /// @brief Field AllCustom value: I32(4096)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllCustom;

  /// @brief Field AllJoints value: I32(128)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllJoints;

  /// @brief Field AllShapeBounds value: I32(64)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllShapeBounds;

  /// @brief Field AllShapes value: I32(32)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllShapes;

  /// @brief Field AllSolverIslands value: I32(8192)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const AllSolverIslands;

  /// @brief Field DefaultAll value: I32(4256)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const DefaultAll;

  /// @brief Field DefaultSelected value: I32(4106)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const DefaultSelected;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const Off;

  /// @brief Field SelectedBodies value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const SelectedBodies;

  /// @brief Field SelectedJoints value: I32(8)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const SelectedJoints;

  /// @brief Field SelectedShapeBounds value: I32(4)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const SelectedShapeBounds;

  /// @brief Field SelectedShapes value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions const SelectedShapes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21562 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [Flags]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawFillOptions
struct CORDL_TYPE PhysicsWorld_DrawFillOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsWorld_DrawFillOptions_Unwrapped
  enum struct __PhysicsWorld_DrawFillOptions_Unwrapped : int32_t {
    __E_Interior = static_cast<int32_t>(0x1),
    __E_Outline = static_cast<int32_t>(0x2),
    __E_Orientation = static_cast<int32_t>(0x4),
    __E_All = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsWorld_DrawFillOptions_Unwrapped() const noexcept {
    return static_cast<__PhysicsWorld_DrawFillOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorld_DrawFillOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsWorld_DrawFillOptions(int32_t value__) noexcept;

  /// @brief Field All value: I32(7)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions const All;

  /// @brief Field Interior value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions const Interior;

  /// @brief Field Orientation value: I32(4)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions const Orientation;

  /// @brief Field Outline value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions const Outline;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21563 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.Color, UnityEngine.LowLevelPhysics2D.PhysicsTransform, UnityEngine.LowLevelPhysics2D.PhysicsWorld::DrawFillOptions, UnityEngine.Vector2
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawResults/PolygonGeometryElement
struct CORDL_TYPE DrawResults_PhysicsWorld_PolygonGeometryElement {
public:
  // Declarations
  /// @brief Method Size, addr 0x6fd8164, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Size();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawResults_PhysicsWorld_PolygonGeometryElement();

  // Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "p0", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "p1", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "p2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "p3", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam
  // { name: "p4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "p5", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "p6", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "p7", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "elementDepth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawFillOptions", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value:
  // None, comment: None }]
  constexpr DrawResults_PhysicsWorld_PolygonGeometryElement(::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform, ::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1,
                                                            ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ::UnityEngine::Vector2 p4, ::UnityEngine::Vector2 p5, ::UnityEngine::Vector2 p6,
                                                            ::UnityEngine::Vector2 p7, int32_t count, float_t radius, float_t elementDepth,
                                                            ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions drawFillOptions, ::UnityEngine::Color color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21564 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field transform, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform;

  /// @brief Field p0, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 p0;

  /// @brief Field p1, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 p1;

  /// @brief Field p2, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 p2;

  /// @brief Field p3, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 p3;

  /// @brief Field p4, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 p4;

  /// @brief Field p5, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2 p5;

  /// @brief Field p6, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 p6;

  /// @brief Field p7, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 p7;

  /// @brief Field count, offset: 0x50, size: 0x4, def value: None
  int32_t count;

  /// @brief Field radius, offset: 0x54, size: 0x4, def value: None
  float_t radius;

  /// @brief Field elementDepth, offset: 0x58, size: 0x4, def value: None
  float_t elementDepth;

  /// @brief Field drawFillOptions, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions drawFillOptions;

  /// @brief Field color, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, p0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, p1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, p2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, p3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, p4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, p5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, p6) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, p7) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, count) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, radius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, elementDepth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, drawFillOptions) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement, color) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement) == 0x70, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.Color, UnityEngine.LowLevelPhysics2D.PhysicsTransform, UnityEngine.LowLevelPhysics2D.PhysicsWorld::DrawFillOptions
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawResults/CircleGeometryElement
struct CORDL_TYPE DrawResults_PhysicsWorld_CircleGeometryElement {
public:
  // Declarations
  /// @brief Method Size, addr 0x6fd816c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Size();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawResults_PhysicsWorld_CircleGeometryElement();

  // Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "elementDepth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawFillOptions", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value:
  // None, comment: None }]
  constexpr DrawResults_PhysicsWorld_CircleGeometryElement(::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform, float_t radius, float_t elementDepth,
                                                           ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions drawFillOptions, ::UnityEngine::Color color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21565 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  /// @brief Field transform, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform;

  /// @brief Field radius, offset: 0x10, size: 0x4, def value: None
  float_t radius;

  /// @brief Field elementDepth, offset: 0x14, size: 0x4, def value: None
  float_t elementDepth;

  /// @brief Field drawFillOptions, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions drawFillOptions;

  /// @brief Field color, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement, radius) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement, elementDepth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement, drawFillOptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement, color) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement) == 0x2c, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.Color, UnityEngine.LowLevelPhysics2D.PhysicsTransform, UnityEngine.LowLevelPhysics2D.PhysicsWorld::DrawFillOptions
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawResults/CapsuleGeometryElement
struct CORDL_TYPE DrawResults_PhysicsWorld_CapsuleGeometryElement {
public:
  // Declarations
  /// @brief Method Size, addr 0x6fd8174, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Size();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawResults_PhysicsWorld_CapsuleGeometryElement();

  // Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "elementDepth", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "drawFillOptions", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
  constexpr DrawResults_PhysicsWorld_CapsuleGeometryElement(::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform, float_t radius, float_t length, float_t elementDepth,
                                                            ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions drawFillOptions, ::UnityEngine::Color color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field transform, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform;

  /// @brief Field radius, offset: 0x10, size: 0x4, def value: None
  float_t radius;

  /// @brief Field length, offset: 0x14, size: 0x4, def value: None
  float_t length;

  /// @brief Field elementDepth, offset: 0x18, size: 0x4, def value: None
  float_t elementDepth;

  /// @brief Field drawFillOptions, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions drawFillOptions;

  /// @brief Field color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement, radius) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement, length) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement, elementDepth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement, drawFillOptions) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement, color) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement) == 0x30, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.Color, UnityEngine.LowLevelPhysics2D.PhysicsTransform
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawResults/LineElement
struct CORDL_TYPE DrawResults_PhysicsWorld_LineElement {
public:
  // Declarations
  /// @brief Method Size, addr 0x6fd817c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Size();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawResults_PhysicsWorld_LineElement();

  // Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "elementDepth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
  constexpr DrawResults_PhysicsWorld_LineElement(::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform, float_t length, float_t elementDepth, ::UnityEngine::Color color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21567 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field transform, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform;

  /// @brief Field length, offset: 0x10, size: 0x4, def value: None
  float_t length;

  /// @brief Field elementDepth, offset: 0x14, size: 0x4, def value: None
  float_t elementDepth;

  /// @brief Field color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement, length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement, elementDepth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement, color) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement) == 0x28, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.Color, UnityEngine.Vector2
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawResults/PointElement
struct CORDL_TYPE DrawResults_PhysicsWorld_PointElement {
public:
  // Declarations
  /// @brief Method Size, addr 0x6fd8184, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Size();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawResults_PhysicsWorld_PointElement();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "elementDepth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None, comment: None }]
  constexpr DrawResults_PhysicsWorld_PointElement(::UnityEngine::Vector2 position, float_t radius, float_t elementDepth, ::UnityEngine::Color color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21568 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field position, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 position;

  /// @brief Field radius, offset: 0x8, size: 0x4, def value: None
  float_t radius;

  /// @brief Field elementDepth, offset: 0xc, size: 0x4, def value: None
  float_t elementDepth;

  /// @brief Field color, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement, radius) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement, elementDepth) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement, color) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement) == 0x20, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsLowLevelScripting2D::PhysicsBuffer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawResults
struct CORDL_TYPE PhysicsWorld_DrawResults {
public:
  // Declarations
  using CapsuleGeometryElement = ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement;

  using CircleGeometryElement = ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement;

  using LineElement = ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement;

  using PointElement = ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement;

  using PolygonGeometryElement = ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement;

  __declspec(property(get = get_capsuleGeometryArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement> capsuleGeometryArray;

  __declspec(property(get = get_circleGeometryArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement> circleGeometryArray;

  __declspec(property(get = get_lineArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement> lineArray;

  __declspec(property(get = get_pointArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement> pointArray;

  __declspec(property(get = get_polygonGeometryArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement> polygonGeometryArray;

  /// @brief Method ToString, addr 0x6fd7df4, size 0x1f4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_capsuleGeometryArray, addr 0x6fd8080, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement> get_capsuleGeometryArray();

  /// @brief Method get_circleGeometryArray, addr 0x6fd8034, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement> get_circleGeometryArray();

  /// @brief Method get_lineArray, addr 0x6fd80cc, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement> get_lineArray();

  /// @brief Method get_pointArray, addr 0x6fd8118, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement> get_pointArray();

  /// @brief Method get_polygonGeometryArray, addr 0x6fd7fe8, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement> get_polygonGeometryArray();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorld_DrawResults();

  // Ctor Parameters [CppParam { name: "m_PolygonGeometryElements", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_CircleGeometryElements", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_CapsuleGeometryElements", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LineElements",
  // ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PointElements", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsWorld_DrawResults(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_PolygonGeometryElements,
                                     ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_CircleGeometryElements,
                                     ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_CapsuleGeometryElements,
                                     ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_LineElements,
                                     ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_PointElements) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21569 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field m_PolygonGeometryElements, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_PolygonGeometryElements;

  /// @brief Field m_CircleGeometryElements, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_CircleGeometryElements;

  /// @brief Field m_CapsuleGeometryElements, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_CapsuleGeometryElements;

  /// @brief Field m_LineElements, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_LineElements;

  /// @brief Field m_PointElements, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_PointElements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults, m_PolygonGeometryElements) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults, m_CircleGeometryElements) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults, m_CapsuleGeometryElements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults, m_LineElements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults, m_PointElements) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults) == 0x50, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [DefaultMember("Item")]
// Dependencies UnityEngine.Color
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawColors/ConstraintGraphArray
struct CORDL_TYPE DrawColors_PhysicsWorld_ConstraintGraphArray {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawColors_PhysicsWorld_ConstraintGraphArray();

  // Ctor Parameters [CppParam { name: "graphConstraint0", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint1", ty: "::UnityEngine::Color",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint2", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "graphConstraint3", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint4", ty: "::UnityEngine::Color", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "graphConstraint5", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint6", ty: "::UnityEngine::Color",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint7", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "graphConstraint8", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint9", ty: "::UnityEngine::Color", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "graphConstraint10", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint11", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint12", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "graphConstraint13", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint14", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "graphConstraint15", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint16", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint17", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "graphConstraint18", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint19", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "graphConstraint20", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint21", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "graphConstraint22", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "graphConstraint23", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
  constexpr DrawColors_PhysicsWorld_ConstraintGraphArray(::UnityEngine::Color graphConstraint0, ::UnityEngine::Color graphConstraint1, ::UnityEngine::Color graphConstraint2,
                                                         ::UnityEngine::Color graphConstraint3, ::UnityEngine::Color graphConstraint4, ::UnityEngine::Color graphConstraint5,
                                                         ::UnityEngine::Color graphConstraint6, ::UnityEngine::Color graphConstraint7, ::UnityEngine::Color graphConstraint8,
                                                         ::UnityEngine::Color graphConstraint9, ::UnityEngine::Color graphConstraint10, ::UnityEngine::Color graphConstraint11,
                                                         ::UnityEngine::Color graphConstraint12, ::UnityEngine::Color graphConstraint13, ::UnityEngine::Color graphConstraint14,
                                                         ::UnityEngine::Color graphConstraint15, ::UnityEngine::Color graphConstraint16, ::UnityEngine::Color graphConstraint17,
                                                         ::UnityEngine::Color graphConstraint18, ::UnityEngine::Color graphConstraint19, ::UnityEngine::Color graphConstraint20,
                                                         ::UnityEngine::Color graphConstraint21, ::UnityEngine::Color graphConstraint22, ::UnityEngine::Color graphConstraint23) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x180 };

  /// @brief Field graphConstraint0, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint0;

  /// @brief Field graphConstraint1, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint1;

  /// @brief Field graphConstraint2, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint2;

  /// @brief Field graphConstraint3, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint3;

  /// @brief Field graphConstraint4, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint4;

  /// @brief Field graphConstraint5, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint5;

  /// @brief Field graphConstraint6, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint6;

  /// @brief Field graphConstraint7, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint7;

  /// @brief Field graphConstraint8, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint8;

  /// @brief Field graphConstraint9, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint9;

  /// @brief Field graphConstraint10, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint10;

  /// @brief Field graphConstraint11, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint11;

  /// @brief Field graphConstraint12, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint12;

  /// @brief Field graphConstraint13, offset: 0xd0, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint13;

  /// @brief Field graphConstraint14, offset: 0xe0, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint14;

  /// @brief Field graphConstraint15, offset: 0xf0, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint15;

  /// @brief Field graphConstraint16, offset: 0x100, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint16;

  /// @brief Field graphConstraint17, offset: 0x110, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint17;

  /// @brief Field graphConstraint18, offset: 0x120, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint18;

  /// @brief Field graphConstraint19, offset: 0x130, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint19;

  /// @brief Field graphConstraint20, offset: 0x140, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint20;

  /// @brief Field graphConstraint21, offset: 0x150, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint21;

  /// @brief Field graphConstraint22, offset: 0x160, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint22;

  /// @brief Field graphConstraint23, offset: 0x170, size: 0x10, def value: None
  ::UnityEngine::Color graphConstraint23;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint7) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint8) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint9) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint10) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint11) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint12) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint13) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint14) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint15) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint16) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint17) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint18) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint19) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint20) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint21) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint22) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray, graphConstraint23) == 0x170, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray) == 0x180, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.Color, UnityEngine.LowLevelPhysics2D.PhysicsWorld::DrawColors::ConstraintGraphArray
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld/DrawColors
struct CORDL_TYPE PhysicsWorld_DrawColors {
public:
  // Declarations
  using ConstraintGraphArray = ::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorld_DrawColors();

  // Ctor Parameters [CppParam { name: "transformAxisX", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "transformAxisY", ty: "::UnityEngine::Color",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyBad", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyDisabled", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyAwake", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "bodyStatic", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyKinematic", ty: "::UnityEngine::Color", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "bodyTimeOfImpactEvent", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyFastCollisions", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyMovingFast", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "bodySpeedCapped", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "shapeTrigger", ty: "::UnityEngine::Color", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "shapeOther", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "shapeBounds", ty: "::UnityEngine::Color", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "contactSpeculative", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "contactAdded", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "contactPersisted", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam
  // { name: "contactNormal", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "contactImpulse", ty: "::UnityEngine::Color", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "contactFriction", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "solverIsland", ty:
  // "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ConstraintGraph", ty:
  // "::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsWorld_DrawColors(::UnityEngine::Color transformAxisX, ::UnityEngine::Color transformAxisY, ::UnityEngine::Color bodyBad, ::UnityEngine::Color bodyDisabled,
                                    ::UnityEngine::Color bodyAwake, ::UnityEngine::Color bodyStatic, ::UnityEngine::Color bodyKinematic, ::UnityEngine::Color bodyTimeOfImpactEvent,
                                    ::UnityEngine::Color bodyFastCollisions, ::UnityEngine::Color bodyMovingFast, ::UnityEngine::Color bodySpeedCapped, ::UnityEngine::Color shapeTrigger,
                                    ::UnityEngine::Color shapeOther, ::UnityEngine::Color shapeBounds, ::UnityEngine::Color contactSpeculative, ::UnityEngine::Color contactAdded,
                                    ::UnityEngine::Color contactPersisted, ::UnityEngine::Color contactNormal, ::UnityEngine::Color contactImpulse, ::UnityEngine::Color contactFriction,
                                    ::UnityEngine::Color solverIsland, ::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray m_ConstraintGraph) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21571 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2d0 };

  /// @brief Field transformAxisX, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color transformAxisX;

  /// @brief Field transformAxisY, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color transformAxisY;

  /// @brief Field bodyBad, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color bodyBad;

  /// @brief Field bodyDisabled, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color bodyDisabled;

  /// @brief Field bodyAwake, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color bodyAwake;

  /// @brief Field bodyStatic, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color bodyStatic;

  /// @brief Field bodyKinematic, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color bodyKinematic;

  /// @brief Field bodyTimeOfImpactEvent, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color bodyTimeOfImpactEvent;

  /// @brief Field bodyFastCollisions, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color bodyFastCollisions;

  /// @brief Field bodyMovingFast, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Color bodyMovingFast;

  /// @brief Field bodySpeedCapped, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color bodySpeedCapped;

  /// @brief Field shapeTrigger, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Color shapeTrigger;

  /// @brief Field shapeOther, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Color shapeOther;

  /// @brief Field shapeBounds, offset: 0xd0, size: 0x10, def value: None
  ::UnityEngine::Color shapeBounds;

  /// @brief Field contactSpeculative, offset: 0xe0, size: 0x10, def value: None
  ::UnityEngine::Color contactSpeculative;

  /// @brief Field contactAdded, offset: 0xf0, size: 0x10, def value: None
  ::UnityEngine::Color contactAdded;

  /// @brief Field contactPersisted, offset: 0x100, size: 0x10, def value: None
  ::UnityEngine::Color contactPersisted;

  /// @brief Field contactNormal, offset: 0x110, size: 0x10, def value: None
  ::UnityEngine::Color contactNormal;

  /// @brief Field contactImpulse, offset: 0x120, size: 0x10, def value: None
  ::UnityEngine::Color contactImpulse;

  /// @brief Field contactFriction, offset: 0x130, size: 0x10, def value: None
  ::UnityEngine::Color contactFriction;

  /// @brief Field solverIsland, offset: 0x140, size: 0x10, def value: None
  ::UnityEngine::Color solverIsland;

  /// @brief Field m_ConstraintGraph, offset: 0x150, size: 0x180, def value: None
  ::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray m_ConstraintGraph;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, transformAxisX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, transformAxisY) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, bodyBad) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, bodyDisabled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, bodyAwake) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, bodyStatic) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, bodyKinematic) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, bodyTimeOfImpactEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, bodyFastCollisions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, bodyMovingFast) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, bodySpeedCapped) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, shapeTrigger) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, shapeOther) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, shapeBounds) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, contactSpeculative) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, contactAdded) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, contactPersisted) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, contactNormal) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, contactImpulse) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, contactFriction) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, solverIsland) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors, m_ConstraintGraph) == 0x150, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors) == 0x2d0, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorld
struct CORDL_TYPE PhysicsWorld {
public:
  // Declarations
  using DrawColors = ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors;

  using DrawContactType = ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType;

  using DrawFillOptions = ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions;

  using DrawOptions = ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions;

  using DrawResults = ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults;

  using SimulationType = ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType;

  using TransformPlane = ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane;

  using TransformWriteMode = ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>*();

  /// @brief Method DrawAllWorlds, addr 0x6fd7df0, size 0x4, virtual false, abstract: false, final false
  static inline void DrawAllWorlds(::UnityEngine::LowLevelPhysics2D::PhysicsAABB drawAABB);

  /// @brief Method Equals, addr 0x6fd7c8c, size 0x68, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6fd7cf4, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::LowLevelPhysics2D::PhysicsWorld other);

  /// @brief Method GetHashCode, addr 0x6fd7d18, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method SendBodyUpdateCallbacks, addr 0x6fd661c, size 0x1f4, virtual false, abstract: false, final false
  inline void SendBodyUpdateCallbacks();

  /// @brief Method SendContactCallbacks, addr 0x6fd6828, size 0x3dc, virtual false, abstract: false, final false
  inline void SendContactCallbacks();

  /// @brief Method SendJointThresholdCallbacks, addr 0x6fd6fb8, size 0x1d0, virtual false, abstract: false, final false
  inline void SendJointThresholdCallbacks();

  /// @brief Method SendTriggerCallbacks, addr 0x6fd6c1c, size 0x384, virtual false, abstract: false, final false
  inline void SendTriggerCallbacks();

  /// @brief Method SetTransformWriteTweens, addr 0x6fd7de8, size 0x8, virtual false, abstract: false, final false
  inline void SetTransformWriteTweens(::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> transformWriteTweens);

  /// @brief Method ToString, addr 0x6fd7b3c, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_bypassLowLevel, addr 0x6fd7d98, size 0x28, virtual false, abstract: false, final false
  static inline bool get_bypassLowLevel();

  /// @brief Method get_isRenderingAllowed, addr 0x6fd7dc0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isRenderingAllowed();

  /// @brief Method get_isValid, addr 0x6fd7c44, size 0x48, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>"
  constexpr ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>* i___System__IEquatable_1___UnityEngine__LowLevelPhysics2D__PhysicsWorld_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorld();

  // Ctor Parameters [CppParam { name: "m_Index1", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Generation", ty: "uint16_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr PhysicsWorld(uint16_t m_Index1, uint16_t m_Generation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21572 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Index1, offset: 0x0, size: 0x2, def value: None
  uint16_t m_Index1;

  /// @brief Field m_Generation, offset: 0x2, size: 0x2, def value: None
  uint16_t m_Generation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, m_Index1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, m_Generation) == 0x2, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorld) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
