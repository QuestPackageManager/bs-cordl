#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__RotationLimit_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationLimitPolygonal)
namespace RootMotion::FinalIK {
class __RotationLimitPolygonal__LimitPoint;
}
namespace RootMotion::FinalIK {
class __RotationLimitPolygonal__ReachCone;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimitPolygonal;
}
namespace RootMotion::FinalIK {
class __RotationLimitPolygonal__LimitPoint;
}
namespace RootMotion::FinalIK {
class __RotationLimitPolygonal__ReachCone;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::RotationLimitPolygonal);
MARK_REF_PTR_T(::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint);
MARK_REF_PTR_T(::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone);
// Type: ::ReachCone
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RotationLimitPolygonal::ReachCone*
class CORDL_TYPE __RotationLimitPolygonal__ReachCone : public ::System::Object {
public:
  // Declarations
  /// @brief Field B, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_B, put = __cordl_internal_set_B))::UnityEngine::Vector3 B;

  /// @brief Field S, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_S, put = __cordl_internal_set_S))::UnityEngine::Vector3 S;

  __declspec(property(get = get_a))::UnityEngine::Vector3 a;

  __declspec(property(get = get_b))::UnityEngine::Vector3 b;

  __declspec(property(get = get_c))::UnityEngine::Vector3 c;

  __declspec(property(get = get_isValid)) bool isValid;

  __declspec(property(get = get_o))::UnityEngine::Vector3 o;

  /// @brief Field tetrahedron, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tetrahedron, put = __cordl_internal_set_tetrahedron))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> tetrahedron;

  /// @brief Field volume, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_volume, put = __cordl_internal_set_volume)) float_t volume;

  /// @brief Method Calculate, addr 0x1395fac, size 0x274, virtual false, abstract: false, final false
  inline void Calculate();

  static inline ::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone* New_ctor(::UnityEngine::Vector3 _o, ::UnityEngine::Vector3 _a, ::UnityEngine::Vector3 _b, ::UnityEngine::Vector3 _c);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_B() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_B();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_S() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_S();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_tetrahedron() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_tetrahedron();

  constexpr float_t const& __cordl_internal_get_volume() const;

  constexpr float_t& __cordl_internal_get_volume();

  constexpr void __cordl_internal_set_B(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_S(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_tetrahedron(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_volume(float_t value);

  /// @brief Method .ctor, addr 0x1395e38, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 _o, ::UnityEngine::Vector3 _a, ::UnityEngine::Vector3 _b, ::UnityEngine::Vector3 _c);

  /// @brief Method get_a, addr 0x1395da8, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_a();

  /// @brief Method get_b, addr 0x1395dd8, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_b();

  /// @brief Method get_c, addr 0x1395e08, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_c();

  /// @brief Method get_isValid, addr 0x1395f9c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Method get_o, addr 0x1395d7c, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_o();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RotationLimitPolygonal__ReachCone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RotationLimitPolygonal__ReachCone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RotationLimitPolygonal__ReachCone(__RotationLimitPolygonal__ReachCone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RotationLimitPolygonal__ReachCone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RotationLimitPolygonal__ReachCone(__RotationLimitPolygonal__ReachCone const&) = delete;

  /// @brief Field tetrahedron, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___tetrahedron;

  /// @brief Field volume, offset: 0x18, size: 0x4, def value: None
  float_t ___volume;

  /// @brief Field S, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___S;

  /// @brief Field B, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___B;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone, ___tetrahedron) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone, ___volume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone, ___S) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone, ___B) == 0x28, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::LimitPoint
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RotationLimitPolygonal::LimitPoint*
class CORDL_TYPE __RotationLimitPolygonal__LimitPoint : public ::System::Object {
public:
  // Declarations
  /// @brief Field point, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_point, put = __cordl_internal_set_point))::UnityEngine::Vector3 point;

  /// @brief Field tangentWeight, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_tangentWeight, put = __cordl_internal_set_tangentWeight)) float_t tangentWeight;

  static inline ::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_point() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_point();

  constexpr float_t const& __cordl_internal_get_tangentWeight() const;

  constexpr float_t& __cordl_internal_get_tangentWeight();

  constexpr void __cordl_internal_set_point(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_tangentWeight(float_t value);

  /// @brief Method .ctor, addr 0x1396220, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RotationLimitPolygonal__LimitPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RotationLimitPolygonal__LimitPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RotationLimitPolygonal__LimitPoint(__RotationLimitPolygonal__LimitPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RotationLimitPolygonal__LimitPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RotationLimitPolygonal__LimitPoint(__RotationLimitPolygonal__LimitPoint const&) = delete;

  /// @brief Field point, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___point;

  /// @brief Field tangentWeight, offset: 0x1c, size: 0x4, def value: None
  float_t ___tangentWeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint, ___point) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint, ___tangentWeight) == 0x1c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::RotationLimitPolygonal
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::RotationLimitPolygonal*
class CORDL_TYPE RotationLimitPolygonal : public ::RootMotion::FinalIK::RotationLimit {
public:
  // Declarations
  using LimitPoint = ::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint;

  using ReachCone = ::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone;

  /// @brief Field P, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_P, put = __cordl_internal_set_P))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> P;

  /// @brief Field points, offset 0x40, size 0x8
  __declspec(
      property(get = __cordl_internal_get_points,
               put = __cordl_internal_set_points))::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*> points;

  /// @brief Field reachCones, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get_reachCones,
      put = __cordl_internal_set_reachCones))::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*>*> reachCones;

  /// @brief Field smoothIterations, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothIterations, put = __cordl_internal_set_smoothIterations)) int32_t smoothIterations;

  /// @brief Field twistLimit, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_twistLimit, put = __cordl_internal_set_twistLimit)) float_t twistLimit;

  /// @brief Method ASThread, addr 0x1393540, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method BuildReachCones, addr 0x1393610, size 0x5b8, virtual false, abstract: false, final false
  inline void BuildReachCones();

  /// @brief Method GetReachCone, addr 0x1394c54, size 0xcc, virtual false, abstract: false, final false
  inline int32_t GetReachCone(::UnityEngine::Vector3 L);

  /// @brief Method GetScalar, addr 0x1394b40, size 0x48, virtual false, abstract: false, final false
  inline float_t GetScalar(int32_t k);

  /// @brief Method LimitRotation, addr 0x1393bc8, size 0x88, virtual true, abstract: false, final false
  inline ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method LimitSwing, addr 0x1393fa0, size 0x2a4, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation);

  static inline ::RootMotion::FinalIK::RotationLimitPolygonal* New_ctor();

  /// @brief Method OpenScriptReference, addr 0x13934b8, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x1393474, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method PointToTangentPlane, addr 0x1394b88, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 PointToTangentPlane(::UnityEngine::Vector3 p, float_t r);

  /// @brief Method ResetToDefault, addr 0x1394244, size 0x4cc, virtual false, abstract: false, final false
  inline void ResetToDefault();

  /// @brief Method SetLimitPoints, addr 0x1393584, size 0x8c, virtual false, abstract: false, final false
  inline void SetLimitPoints(::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*> points);

  /// @brief Method SmoothPoints, addr 0x1394710, size 0x430, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> SmoothPoints();

  /// @brief Method Start, addr 0x1393c50, size 0x350, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SupportGroup, addr 0x13934fc, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  /// @brief Method TangentPointToSphere, addr 0x1394be8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 TangentPointToSphere(::UnityEngine::Vector3 q, float_t r);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_P() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_P();

  constexpr ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*> const& __cordl_internal_get_points() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*>& __cordl_internal_get_points();

  constexpr ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*>*> const& __cordl_internal_get_reachCones() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*>*>& __cordl_internal_get_reachCones();

  constexpr int32_t const& __cordl_internal_get_smoothIterations() const;

  constexpr int32_t& __cordl_internal_get_smoothIterations();

  constexpr float_t const& __cordl_internal_get_twistLimit() const;

  constexpr float_t& __cordl_internal_get_twistLimit();

  constexpr void __cordl_internal_set_P(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_points(::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*> value);

  constexpr void __cordl_internal_set_reachCones(::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*>*> value);

  constexpr void __cordl_internal_set_smoothIterations(int32_t value);

  constexpr void __cordl_internal_set_twistLimit(float_t value);

  /// @brief Method .ctor, addr 0x1394d20, size 0x105c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationLimitPolygonal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RotationLimitPolygonal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotationLimitPolygonal(RotationLimitPolygonal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotationLimitPolygonal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotationLimitPolygonal(RotationLimitPolygonal const&) = delete;

  /// @brief Field twistLimit, offset: 0x38, size: 0x4, def value: None
  float_t ___twistLimit;

  /// @brief Field smoothIterations, offset: 0x3c, size: 0x4, def value: None
  int32_t ___smoothIterations;

  /// @brief Field points, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*> ___points;

  /// @brief Field P, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___P;

  /// @brief Field reachCones, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*>*> ___reachCones;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::RotationLimitPolygonal, 0x58>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitPolygonal, ___twistLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitPolygonal, ___smoothIterations) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitPolygonal, ___points) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitPolygonal, ___P) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitPolygonal, ___reachCones) == 0x50, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitPolygonal);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitPolygonal*, "RootMotion.FinalIK", "RotationLimitPolygonal");
NEED_NO_BOX(::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, "RootMotion.FinalIK", "RotationLimitPolygonal/LimitPoint");
NEED_NO_BOX(::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, "RootMotion.FinalIK", "RotationLimitPolygonal/ReachCone");
