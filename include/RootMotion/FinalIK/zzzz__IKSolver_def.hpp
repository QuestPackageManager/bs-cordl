#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKSolver)
namespace RootMotion::FinalIK {
class RotationLimit;
}
namespace RootMotion::FinalIK {
class __IKSolver__Bone;
}
namespace RootMotion::FinalIK {
class __IKSolver__IterationDelegate;
}
namespace RootMotion::FinalIK {
class __IKSolver__Node;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace RootMotion::FinalIK {
class __IKSolver__UpdateDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class __IKSolver__Bone;
}
namespace RootMotion::FinalIK {
class __IKSolver__IterationDelegate;
}
namespace RootMotion::FinalIK {
class __IKSolver__Node;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace RootMotion::FinalIK {
class __IKSolver__UpdateDelegate;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolver);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolver__Bone);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolver__IterationDelegate);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolver__Node);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolver__Point);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolver__UpdateDelegate);
// Type: ::Point
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolver::Point*
class CORDL_TYPE __IKSolver__Point : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultLocalPosition, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultLocalPosition, put = __cordl_internal_set_defaultLocalPosition))::UnityEngine::Vector3 defaultLocalPosition;

  /// @brief Field defaultLocalRotation, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultLocalRotation, put = __cordl_internal_set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  /// @brief Field solverPosition, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_solverPosition, put = __cordl_internal_set_solverPosition))::UnityEngine::Vector3 solverPosition;

  /// @brief Field solverRotation, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_solverRotation, put = __cordl_internal_set_solverRotation))::UnityEngine::Quaternion solverRotation;

  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method FixTransform, addr 0x136228c, size 0xe0, virtual false, abstract: false, final false
  inline void FixTransform();

  static inline ::RootMotion::FinalIK::__IKSolver__Point* New_ctor();

  /// @brief Method StoreDefaultLocalState, addr 0x1362248, size 0x44, virtual false, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method UpdateSolverLocalPosition, addr 0x1362398, size 0x2c, virtual false, abstract: false, final false
  inline void UpdateSolverLocalPosition();

  /// @brief Method UpdateSolverLocalState, addr 0x1362408, size 0x44, virtual false, abstract: false, final false
  inline void UpdateSolverLocalState();

  /// @brief Method UpdateSolverPosition, addr 0x136236c, size 0x2c, virtual false, abstract: false, final false
  inline void UpdateSolverPosition();

  /// @brief Method UpdateSolverState, addr 0x13623c4, size 0x44, virtual false, abstract: false, final false
  inline void UpdateSolverState();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultLocalPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultLocalRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_solverPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_solverPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_solverRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_solverRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_defaultLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_defaultLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_solverPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_solverRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x136244c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolver__Point();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__Point", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolver__Point(__IKSolver__Point&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__Point", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolver__Point(__IKSolver__Point const&) = delete;

  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field solverPosition, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___solverPosition;

  /// @brief Field solverRotation, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___solverRotation;

  /// @brief Field defaultLocalPosition, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultLocalPosition;

  /// @brief Field defaultLocalRotation, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultLocalRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolver__Point, 0x58>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Point, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Point, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Point, ___solverPosition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Point, ___solverRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Point, ___defaultLocalPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Point, ___defaultLocalRotation) == 0x44, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Bone
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolver::Bone*
class CORDL_TYPE __IKSolver__Bone : public ::RootMotion::FinalIK::__IKSolver__Point {
public:
  // Declarations
  /// @brief Field _rotationLimit, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationLimit, put = __cordl_internal_set__rotationLimit))::UnityW<::RootMotion::FinalIK::RotationLimit> _rotationLimit;

  /// @brief Field axis, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis))::UnityEngine::Vector3 axis;

  /// @brief Field isLimited, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_isLimited, put = __cordl_internal_set_isLimited)) bool isLimited;

  /// @brief Field length, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  __declspec(property(get = get_rotationLimit, put = set_rotationLimit))::UnityW<::RootMotion::FinalIK::RotationLimit> rotationLimit;

  /// @brief Field sqrMag, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrMag, put = __cordl_internal_set_sqrMag)) float_t sqrMag;

  static inline ::RootMotion::FinalIK::__IKSolver__Bone* New_ctor();

  static inline ::RootMotion::FinalIK::__IKSolver__Bone* New_ctor(::UnityEngine::Transform* transform);

  static inline ::RootMotion::FinalIK::__IKSolver__Bone* New_ctor(::UnityEngine::Transform* transform, float_t weight);

  /// @brief Method SetToSolverPosition, addr 0x1362d20, size 0x28, virtual false, abstract: false, final false
  inline void SetToSolverPosition();

  /// @brief Method SolverSwing, addr 0x1362870, size 0x2bc, virtual false, abstract: false, final false
  static inline void SolverSwing(::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> bones, int32_t index, ::UnityEngine::Vector3 swingTarget,
                                 float_t weight);

  /// @brief Method Swing, addr 0x1362604, size 0x26c, virtual false, abstract: false, final false
  inline void Swing(::UnityEngine::Vector3 swingTarget, float_t weight);

  /// @brief Method Swing2D, addr 0x1362b2c, size 0x1f4, virtual false, abstract: false, final false
  inline void Swing2D(::UnityEngine::Vector3 swingTarget, float_t weight);

  constexpr ::UnityW<::RootMotion::FinalIK::RotationLimit> const& __cordl_internal_get__rotationLimit() const;

  constexpr ::UnityW<::RootMotion::FinalIK::RotationLimit>& __cordl_internal_get__rotationLimit();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_axis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_axis();

  constexpr bool const& __cordl_internal_get_isLimited() const;

  constexpr bool& __cordl_internal_get_isLimited();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr float_t& __cordl_internal_get_length();

  constexpr float_t const& __cordl_internal_get_sqrMag() const;

  constexpr float_t& __cordl_internal_get_sqrMag();

  constexpr void __cordl_internal_set__rotationLimit(::UnityW<::RootMotion::FinalIK::RotationLimit> value);

  constexpr void __cordl_internal_set_axis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_isLimited(bool value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_sqrMag(float_t value);

  /// @brief Method .ctor, addr 0x1362d48, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1362db4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform);

  /// @brief Method .ctor, addr 0x1362e2c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, float_t weight);

  /// @brief Method get_rotationLimit, addr 0x13624ac, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityW<::RootMotion::FinalIK::RotationLimit> get_rotationLimit();

  /// @brief Method set_rotationLimit, addr 0x136258c, size 0x78, virtual false, abstract: false, final false
  inline void set_rotationLimit(::RootMotion::FinalIK::RotationLimit* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolver__Bone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__Bone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolver__Bone(__IKSolver__Bone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__Bone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolver__Bone(__IKSolver__Bone const&) = delete;

  /// @brief Field length, offset: 0x54, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field sqrMag, offset: 0x58, size: 0x4, def value: None
  float_t ___sqrMag;

  /// @brief Field axis, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___axis;

  /// @brief Field _rotationLimit, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::RotationLimit> ____rotationLimit;

  /// @brief Field isLimited, offset: 0x70, size: 0x1, def value: None
  bool ___isLimited;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolver__Bone, 0x78>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Bone, ___length) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Bone, ___sqrMag) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Bone, ___axis) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Bone, ____rotationLimit) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Bone, ___isLimited) == 0x70, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Node
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolver::Node*
class CORDL_TYPE __IKSolver__Node : public ::RootMotion::FinalIK::__IKSolver__Point {
public:
  // Declarations
  /// @brief Field effectorPositionWeight, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_effectorPositionWeight, put = __cordl_internal_set_effectorPositionWeight)) float_t effectorPositionWeight;

  /// @brief Field effectorRotationWeight, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_effectorRotationWeight, put = __cordl_internal_set_effectorRotationWeight)) float_t effectorRotationWeight;

  /// @brief Field length, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field offset, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector3 offset;

  static inline ::RootMotion::FinalIK::__IKSolver__Node* New_ctor();

  static inline ::RootMotion::FinalIK::__IKSolver__Node* New_ctor(::UnityEngine::Transform* transform);

  static inline ::RootMotion::FinalIK::__IKSolver__Node* New_ctor(::UnityEngine::Transform* transform, float_t weight);

  constexpr float_t const& __cordl_internal_get_effectorPositionWeight() const;

  constexpr float_t& __cordl_internal_get_effectorPositionWeight();

  constexpr float_t const& __cordl_internal_get_effectorRotationWeight() const;

  constexpr float_t& __cordl_internal_get_effectorRotationWeight();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr float_t& __cordl_internal_get_length();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset();

  constexpr void __cordl_internal_set_effectorPositionWeight(float_t value);

  constexpr void __cordl_internal_set_effectorRotationWeight(float_t value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x1362eb4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1362eb8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform);

  /// @brief Method .ctor, addr 0x1362edc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, float_t weight);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolver__Node();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__Node", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolver__Node(__IKSolver__Node&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__Node", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolver__Node(__IKSolver__Node const&) = delete;

  /// @brief Field length, offset: 0x54, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field effectorPositionWeight, offset: 0x58, size: 0x4, def value: None
  float_t ___effectorPositionWeight;

  /// @brief Field effectorRotationWeight, offset: 0x5c, size: 0x4, def value: None
  float_t ___effectorRotationWeight;

  /// @brief Field offset, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolver__Node, 0x70>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Node, ___length) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Node, ___effectorPositionWeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Node, ___effectorRotationWeight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolver__Node, ___offset) == 0x60, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::UpdateDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolver::UpdateDelegate*
class CORDL_TYPE __IKSolver__UpdateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1362fe0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1363000, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1362fcc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1362f10, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolver__UpdateDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__UpdateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolver__UpdateDelegate(__IKSolver__UpdateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__UpdateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolver__UpdateDelegate(__IKSolver__UpdateDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolver__UpdateDelegate, 0x80>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::IterationDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolver::IterationDelegate*
class CORDL_TYPE __IKSolver__IterationDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x13630e4, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1363168, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x13630d0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t i);

  static inline ::RootMotion::FinalIK::__IKSolver__IterationDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x136300c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolver__IterationDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__IterationDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolver__IterationDelegate(__IKSolver__IterationDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolver__IterationDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolver__IterationDelegate(__IKSolver__IterationDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolver__IterationDelegate, 0x80>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolver
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::IKSolver*
class CORDL_TYPE IKSolver : public ::System::Object {
public:
  // Declarations
  using Bone = ::RootMotion::FinalIK::__IKSolver__Bone;

  using IterationDelegate = ::RootMotion::FinalIK::__IKSolver__IterationDelegate;

  using Node = ::RootMotion::FinalIK::__IKSolver__Node;

  using Point = ::RootMotion::FinalIK::__IKSolver__Point;

  using UpdateDelegate = ::RootMotion::FinalIK::__IKSolver__UpdateDelegate;

  /// @brief Field IKPosition, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_IKPosition, put = __cordl_internal_set_IKPosition))::UnityEngine::Vector3 IKPosition;

  /// @brief Field IKPositionWeight, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_IKPositionWeight, put = __cordl_internal_set_IKPositionWeight)) float_t IKPositionWeight;

  /// @brief Field OnPostInitiate, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPostInitiate, put = __cordl_internal_set_OnPostInitiate))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPostInitiate;

  /// @brief Field OnPostUpdate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPostUpdate, put = __cordl_internal_set_OnPostUpdate))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPostUpdate;

  /// @brief Field OnPreInitiate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreInitiate, put = __cordl_internal_set_OnPreInitiate))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPreInitiate;

  /// @brief Field OnPreUpdate, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreUpdate, put = __cordl_internal_set_OnPreUpdate))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPreUpdate;

  /// @brief Field <initiated>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__initiated_k__BackingField, put = __cordl_internal_set__initiated_k__BackingField)) bool _initiated_k__BackingField;

  /// @brief Field firstInitiation, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_firstInitiation, put = __cordl_internal_set_firstInitiation)) bool firstInitiation;

  __declspec(property(get = get_initiated, put = set_initiated)) bool initiated;

  /// @brief Field root, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_root, put = __cordl_internal_set_root))::UnityW<::UnityEngine::Transform> root;

  /// @brief Method ContainsDuplicateBone, addr 0x1361e80, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> ContainsDuplicateBone(::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> bones);

  /// @brief Method FixTransforms, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void FixTransforms();

  /// @brief Method GetIKPosition, addr 0x1361e10, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKPosition();

  /// @brief Method GetIKPositionWeight, addr 0x1361e28, size 0x8, virtual false, abstract: false, final false
  inline float_t GetIKPositionWeight();

  /// @brief Method GetPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method GetPoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method GetRoot, addr 0x1361e4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetRoot();

  /// @brief Method HierarchyIsValid, addr 0x1361fa4, size 0x98, virtual false, abstract: false, final false
  static inline bool HierarchyIsValid(::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> bones);

  /// @brief Method Initiate, addr 0x1361c30, size 0x170, virtual false, abstract: false, final false
  inline void Initiate(::UnityEngine::Transform* root);

  /// @brief Method IsValid, addr 0x1361bbc, size 0x74, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method LogWarning, addr 0x1361e68, size 0x18, virtual false, abstract: false, final false
  inline void LogWarning(::StringW message);

  static inline ::RootMotion::FinalIK::IKSolver* New_ctor();

  /// @brief Method OnInitiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnInitiate();

  /// @brief Method OnUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUpdate();

  /// @brief Method PreSolveBones, addr 0x136203c, size 0x1f4, virtual false, abstract: false, final false
  static inline float_t PreSolveBones(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*>> bones);

  /// @brief Method SetIKPosition, addr 0x1361e1c, size 0xc, virtual false, abstract: false, final false
  inline void SetIKPosition(::UnityEngine::Vector3 position);

  /// @brief Method SetIKPositionWeight, addr 0x1361e30, size 0x1c, virtual false, abstract: false, final false
  inline void SetIKPositionWeight(float_t weight);

  /// @brief Method StoreDefaultLocalState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StoreDefaultLocalState();

  /// @brief Method Update, addr 0x1361da0, size 0x70, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_IKPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_IKPosition();

  constexpr float_t const& __cordl_internal_get_IKPositionWeight() const;

  constexpr float_t& __cordl_internal_get_IKPositionWeight();

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __cordl_internal_get_OnPostInitiate();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __cordl_internal_get_OnPostInitiate() const;

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __cordl_internal_get_OnPostUpdate();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __cordl_internal_get_OnPostUpdate() const;

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __cordl_internal_get_OnPreInitiate();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __cordl_internal_get_OnPreInitiate() const;

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __cordl_internal_get_OnPreUpdate();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __cordl_internal_get_OnPreUpdate() const;

  constexpr bool const& __cordl_internal_get__initiated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__initiated_k__BackingField();

  constexpr bool const& __cordl_internal_get_firstInitiation() const;

  constexpr bool& __cordl_internal_get_firstInitiation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_root() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_root();

  constexpr void __cordl_internal_set_IKPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_IKPositionWeight(float_t value);

  constexpr void __cordl_internal_set_OnPostInitiate(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr void __cordl_internal_set_OnPostUpdate(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr void __cordl_internal_set_OnPreInitiate(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr void __cordl_internal_set_OnPreUpdate(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr void __cordl_internal_set__initiated_k__BackingField(bool value);

  constexpr void __cordl_internal_set_firstInitiation(bool value);

  constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x1362230, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_initiated, addr 0x1361e54, size 0x8, virtual false, abstract: false, final false
  inline bool get_initiated();

  /// @brief Method set_initiated, addr 0x1361e5c, size 0xc, virtual false, abstract: false, final false
  inline void set_initiated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKSolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolver(IKSolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolver(IKSolver const&) = delete;

  /// @brief Field IKPosition, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___IKPosition;

  /// @brief Field IKPositionWeight, offset: 0x1c, size: 0x4, def value: None
  float_t ___IKPositionWeight;

  /// @brief Field <initiated>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____initiated_k__BackingField;

  /// @brief Field OnPreInitiate, offset: 0x28, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnPreInitiate;

  /// @brief Field OnPostInitiate, offset: 0x30, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnPostInitiate;

  /// @brief Field OnPreUpdate, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnPreUpdate;

  /// @brief Field OnPostUpdate, offset: 0x40, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnPostUpdate;

  /// @brief Field firstInitiation, offset: 0x48, size: 0x1, def value: None
  bool ___firstInitiation;

  /// @brief Field root, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___root;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolver, 0x58>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolver, ___IKPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolver, ___IKPositionWeight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolver, ____initiated_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolver, ___OnPreInitiate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolver, ___OnPostInitiate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolver, ___OnPreUpdate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolver, ___OnPostUpdate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolver, ___firstInitiation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolver, ___root) == 0x50, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolver);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolver*, "RootMotion.FinalIK", "IKSolver");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolver__Bone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolver__Bone*, "RootMotion.FinalIK", "IKSolver/Bone");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolver__IterationDelegate);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolver__IterationDelegate*, "RootMotion.FinalIK", "IKSolver/IterationDelegate");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolver__Node);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolver__Node*, "RootMotion.FinalIK", "IKSolver/Node");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolver__Point);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolver__Point*, "RootMotion.FinalIK", "IKSolver/Point");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolver__UpdateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolver__UpdateDelegate*, "RootMotion.FinalIK", "IKSolver/UpdateDelegate");
