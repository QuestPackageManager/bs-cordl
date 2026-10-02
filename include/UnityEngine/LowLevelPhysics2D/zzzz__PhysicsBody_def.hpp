#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsBody)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_BodyConstraints;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_BodyType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_TransformWriteMode;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_TransformWriteTween;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsTransform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_BodyConstraints;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_BodyType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_TransformWriteMode;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBody_TransformWriteTween;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsBody);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints, "UnityEngine.LowLevelPhysics2D", "PhysicsBody/BodyConstraints");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType, "UnityEngine.LowLevelPhysics2D", "PhysicsBody/BodyType");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode, "UnityEngine.LowLevelPhysics2D", "PhysicsBody/TransformWriteMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsBody, "UnityEngine.LowLevelPhysics2D", "PhysicsBody");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween, "UnityEngine.LowLevelPhysics2D", "PhysicsBody/TransformWriteTween");
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsBody/BodyType
struct CORDL_TYPE PhysicsBody_BodyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsBody_BodyType_Unwrapped
  enum struct __PhysicsBody_BodyType_Unwrapped : int32_t {
    __E_Dynamic = static_cast<int32_t>(0x0),
    __E_Kinematic = static_cast<int32_t>(0x1),
    __E_Static = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsBody_BodyType_Unwrapped() const noexcept {
    return static_cast<__PhysicsBody_BodyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsBody_BodyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsBody_BodyType(int32_t value__) noexcept;

  /// @brief Field Dynamic value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType const Dynamic;

  /// @brief Field Kinematic value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType const Kinematic;

  /// @brief Field Static value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType const Static;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21524 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [Flags]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsBody/BodyConstraints
struct CORDL_TYPE PhysicsBody_BodyConstraints {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsBody_BodyConstraints_Unwrapped
  enum struct __PhysicsBody_BodyConstraints_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PositionX = static_cast<int32_t>(0x1),
    __E_PositionY = static_cast<int32_t>(0x2),
    __E_Rotation = static_cast<int32_t>(0x4),
    __E_Position = static_cast<int32_t>(0x3),
    __E_All = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsBody_BodyConstraints_Unwrapped() const noexcept {
    return static_cast<__PhysicsBody_BodyConstraints_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsBody_BodyConstraints();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsBody_BodyConstraints(int32_t value__) noexcept;

  /// @brief Field All value: I32(7)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints const All;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints const None;

  /// @brief Field Position value: I32(3)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints const Position;

  /// @brief Field PositionX value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints const PositionX;

  /// @brief Field PositionY value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints const PositionY;

  /// @brief Field Rotation value: I32(4)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints const Rotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21525 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsBody/TransformWriteMode
struct CORDL_TYPE PhysicsBody_TransformWriteMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsBody_TransformWriteMode_Unwrapped
  enum struct __PhysicsBody_TransformWriteMode_Unwrapped : int32_t {
    __E_Current = static_cast<int32_t>(0x0),
    __E_Interpolate = static_cast<int32_t>(0x1),
    __E_Extrapolate = static_cast<int32_t>(0x2),
    __E_Off = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsBody_TransformWriteMode_Unwrapped() const noexcept {
    return static_cast<__PhysicsBody_TransformWriteMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsBody_TransformWriteMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsBody_TransformWriteMode(int32_t value__) noexcept;

  /// @brief Field Current value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode const Current;

  /// @brief Field Extrapolate value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode const Extrapolate;

  /// @brief Field Interpolate value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode const Interpolate;

  /// @brief Field Off value: I32(3)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21526 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsBody
struct CORDL_TYPE PhysicsBody {
public:
  // Declarations
  using BodyConstraints = ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints;

  using BodyType = ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType;

  using TransformWriteMode = ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode;

  using TransformWriteTween = ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween;

  __declspec(property(get = get_callbackTarget)) ::System::Object* callbackTarget;

  __declspec(property(get = get_isValid)) bool isValid;

  __declspec(property(get = get_type)) ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType type;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>*();

  /// @brief Method Equals, addr 0x6fd521c, size 0x68, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6fd5284, size 0x38, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::LowLevelPhysics2D::PhysicsBody other);

  /// @brief Method GetHashCode, addr 0x6fd52bc, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6fd4f4c, size 0x244, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_callbackTarget, addr 0x6fd5344, size 0x44, virtual false, abstract: false, final false
  inline ::System::Object* get_callbackTarget();

  /// @brief Method get_isValid, addr 0x6fd5190, size 0x48, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Method get_type, addr 0x6fd51d8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType get_type();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>"
  constexpr ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>* i___System__IEquatable_1___UnityEngine__LowLevelPhysics2D__PhysicsBody_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsBody();

  // Ctor Parameters [CppParam { name: "m_Index1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_World0", ty: "uint16_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_Generation", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsBody(int32_t m_Index1, uint16_t m_World0, uint16_t m_Generation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21528 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Index1, offset: 0x0, size: 0x4, def value: None
  int32_t m_Index1;

  /// @brief Field m_World0, offset: 0x4, size: 0x2, def value: None
  uint16_t m_World0;

  /// @brief Field m_Generation, offset: 0x6, size: 0x2, def value: None
  uint16_t m_Generation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody, m_Index1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody, m_World0) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody, m_Generation) == 0x6, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsBody) == 0x8, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsBody, UnityEngine.LowLevelPhysics2D.PhysicsBody::TransformWriteMode, UnityEngine.LowLevelPhysics2D.PhysicsTransform, UnityEngine.Quaternion,
// UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsBody/TransformWriteTween
struct CORDL_TYPE PhysicsBody_TransformWriteTween {
public:
  // Declarations
  __declspec(property(get = get_angularVelocity)) float_t angularVelocity;

  __declspec(property(get = get_body)) ::UnityEngine::LowLevelPhysics2D::PhysicsBody body;

  __declspec(property(get = get_linearVelocity)) ::UnityEngine::Vector2 linearVelocity;

  __declspec(property(get = get_physicsTransform)) ::UnityEngine::LowLevelPhysics2D::PhysicsTransform physicsTransform;

  __declspec(property(get = get_positionFrom, put = set_positionFrom)) ::UnityEngine::Vector3 positionFrom;

  __declspec(property(get = get_rotationFrom, put = set_rotationFrom)) ::UnityEngine::Quaternion rotationFrom;

  __declspec(property(get = get_transformWriteMode)) ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode transformWriteMode;

  /// [IsReadOnly]
  /// @brief Method get_angularVelocity, addr 0x6fd53ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_angularVelocity();

  /// [IsReadOnly]
  /// @brief Method get_body, addr 0x6fd5388, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody get_body();

  /// [IsReadOnly]
  /// @brief Method get_linearVelocity, addr 0x6fd53a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_linearVelocity();

  /// [IsReadOnly]
  /// @brief Method get_physicsTransform, addr 0x6fd5398, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsTransform get_physicsTransform();

  /// [IsReadOnly]
  /// @brief Method get_positionFrom, addr 0x6fd53b4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_positionFrom();

  /// [IsReadOnly]
  /// @brief Method get_rotationFrom, addr 0x6fd53cc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotationFrom();

  /// [IsReadOnly]
  /// @brief Method get_transformWriteMode, addr 0x6fd5390, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode get_transformWriteMode();

  /// @brief Method set_positionFrom, addr 0x6fd53c0, size 0xc, virtual false, abstract: false, final false
  inline void set_positionFrom(::UnityEngine::Vector3 value);

  /// @brief Method set_rotationFrom, addr 0x6fd53d8, size 0xc, virtual false, abstract: false, final false
  inline void set_rotationFrom(::UnityEngine::Quaternion value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsBody_TransformWriteTween();

  // Ctor Parameters [CppParam { name: "m_Body", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TransformWriteMode", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PhysicsTransform", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LinearVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_AngularVelocity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PositionFrom", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RotationFrom", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsBody_TransformWriteTween(::UnityEngine::LowLevelPhysics2D::PhysicsBody m_Body, ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode m_TransformWriteMode,
                                            ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_PhysicsTransform, ::UnityEngine::Vector2 m_LinearVelocity, float_t m_AngularVelocity,
                                            ::UnityEngine::Vector3 m_PositionFrom, ::UnityEngine::Quaternion m_RotationFrom) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21527 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x44 };

  /// @brief Field m_Body, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_Body;

  /// @brief Field m_TransformWriteMode, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode m_TransformWriteMode;

  /// @brief Field m_PhysicsTransform, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_PhysicsTransform;

  /// @brief Field m_LinearVelocity, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_LinearVelocity;

  /// @brief Field m_AngularVelocity, offset: 0x24, size: 0x4, def value: None
  float_t m_AngularVelocity;

  /// @brief Field m_PositionFrom, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_PositionFrom;

  /// @brief Field m_RotationFrom, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_RotationFrom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween, m_Body) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween, m_TransformWriteMode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween, m_PhysicsTransform) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween, m_LinearVelocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween, m_AngularVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween, m_PositionFrom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween, m_RotationFrom) == 0x34, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween) == 0x44, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
