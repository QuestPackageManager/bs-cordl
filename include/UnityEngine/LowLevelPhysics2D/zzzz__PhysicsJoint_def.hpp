#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsJoint)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsJoint_JointType;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsJoint_JointType;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsJoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType);
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsJoint);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType, "UnityEngine.LowLevelPhysics2D", "PhysicsJoint/JointType");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsJoint, "UnityEngine.LowLevelPhysics2D", "PhysicsJoint");
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsJoint/JointType
struct CORDL_TYPE PhysicsJoint_JointType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PhysicsJoint_JointType_Unwrapped
  enum struct __PhysicsJoint_JointType_Unwrapped : int32_t {
    __E_DistanceJoint = static_cast<int32_t>(0x0),
    __E_IgnoreJoint = static_cast<int32_t>(0x1),
    __E_RelativeJoint = static_cast<int32_t>(0x2),
    __E_SliderJoint = static_cast<int32_t>(0x3),
    __E_HingeJoint = static_cast<int32_t>(0x4),
    __E_FixedJoint = static_cast<int32_t>(0x5),
    __E_WheelJoint = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PhysicsJoint_JointType_Unwrapped() const noexcept {
    return static_cast<__PhysicsJoint_JointType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsJoint_JointType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsJoint_JointType(int32_t value__) noexcept;

  /// @brief Field DistanceJoint value: I32(0)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType const DistanceJoint;

  /// @brief Field FixedJoint value: I32(5)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType const FixedJoint;

  /// @brief Field HingeJoint value: I32(4)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType const HingeJoint;

  /// @brief Field IgnoreJoint value: I32(1)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType const IgnoreJoint;

  /// @brief Field RelativeJoint value: I32(2)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType const RelativeJoint;

  /// @brief Field SliderJoint value: I32(3)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType const SliderJoint;

  /// @brief Field WheelJoint value: I32(6)
  static ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType const WheelJoint;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21512 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [IsReadOnly]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsJoint
struct CORDL_TYPE PhysicsJoint {
public:
  // Declarations
  using JointType = ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType;

  __declspec(property(get = get_callbackTarget)) ::System::Object* callbackTarget;

  __declspec(property(get = get_isValid)) bool isValid;

  __declspec(property(get = get_jointType)) ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType jointType;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>*();

  /// @brief Method Equals, addr 0x6fd3e18, size 0x68, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6fd3e80, size 0x38, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::LowLevelPhysics2D::PhysicsJoint other);

  /// @brief Method GetHashCode, addr 0x6fd3eb8, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6fd3b48, size 0x244, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_callbackTarget, addr 0x6fd3f40, size 0x44, virtual true, abstract: false, final true
  inline ::System::Object* get_callbackTarget();

  /// @brief Method get_isValid, addr 0x6fd3d8c, size 0x48, virtual true, abstract: false, final true
  inline bool get_isValid();

  /// @brief Method get_jointType, addr 0x6fd3dd4, size 0x44, virtual true, abstract: false, final true
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType get_jointType();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>"
  constexpr ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>* i___System__IEquatable_1___UnityEngine__LowLevelPhysics2D__PhysicsJoint_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsJoint();

  // Ctor Parameters [CppParam { name: "index1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "world0", ty: "uint16_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "generation", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsJoint(int32_t index1, uint16_t world0, uint16_t generation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21513 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field index1, offset: 0x0, size: 0x4, def value: None
  int32_t index1;

  /// @brief Field world0, offset: 0x4, size: 0x2, def value: None
  uint16_t world0;

  /// @brief Field generation, offset: 0x6, size: 0x2, def value: None
  uint16_t generation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsJoint, index1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsJoint, world0) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsJoint, generation) == 0x6, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsJoint) == 0x8, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
