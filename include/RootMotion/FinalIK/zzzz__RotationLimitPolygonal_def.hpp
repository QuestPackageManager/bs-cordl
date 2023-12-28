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
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class __RotationLimitPolygonal__ReachCone;
}
namespace RootMotion::FinalIK {
class __RotationLimitPolygonal__LimitPoint;
}
namespace UnityEngine {
struct Quaternion;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12625))
// CS Name: ::RotationLimitPolygonal::ReachCone*
class CORDL_TYPE __RotationLimitPolygonal__ReachCone : public ::System::Object {
public:
  // Declarations
  /// @brief Field tetrahedron, offset 0x10, size 0x8
  __declspec(property(get = __get_tetrahedron, put = __set_tetrahedron))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> tetrahedron;

  /// @brief Field volume, offset 0x18, size 0x4
  __declspec(property(get = __get_volume, put = __set_volume)) float_t volume;

  /// @brief Field S, offset 0x1c, size 0xc
  __declspec(property(get = __get_S, put = __set_S))::UnityEngine::Vector3 S;

  /// @brief Field B, offset 0x28, size 0xc
  __declspec(property(get = __get_B, put = __set_B))::UnityEngine::Vector3 B;

  __declspec(property(get = get_o))::UnityEngine::Vector3 o;

  __declspec(property(get = get_a))::UnityEngine::Vector3 a;

  __declspec(property(get = get_b))::UnityEngine::Vector3 b;

  __declspec(property(get = get_c))::UnityEngine::Vector3 c;

  __declspec(property(get = get_isValid)) bool isValid;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_tetrahedron();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_tetrahedron() const;

  constexpr void __set_tetrahedron(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr float_t& __get_volume();

  constexpr float_t const& __get_volume() const;

  constexpr void __set_volume(float_t value);

  constexpr ::UnityEngine::Vector3& __get_S();

  constexpr ::UnityEngine::Vector3 const& __get_S() const;

  constexpr void __set_S(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_B();

  constexpr ::UnityEngine::Vector3 const& __get_B() const;

  constexpr void __set_B(::UnityEngine::Vector3 value);

  /// @brief Method get_o addr 0x1292788 size 0x2c virtual false final false
  inline ::UnityEngine::Vector3 get_o();

  /// @brief Method get_a addr 0x12927b4 size 0x30 virtual false final false
  inline ::UnityEngine::Vector3 get_a();

  /// @brief Method get_b addr 0x12927e4 size 0x30 virtual false final false
  inline ::UnityEngine::Vector3 get_b();

  /// @brief Method get_c addr 0x1292814 size 0x30 virtual false final false
  inline ::UnityEngine::Vector3 get_c();

  static inline ::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone* New_ctor(::UnityEngine::Vector3 _o, ::UnityEngine::Vector3 _a, ::UnityEngine::Vector3 _b, ::UnityEngine::Vector3 _c);

  /// @brief Method .ctor addr 0x1292844 size 0x164 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 _o, ::UnityEngine::Vector3 _a, ::UnityEngine::Vector3 _b, ::UnityEngine::Vector3 _c);

  /// @brief Method get_isValid addr 0x12929a8 size 0x10 virtual false final false
  inline bool get_isValid();

  /// @brief Method Calculate addr 0x12929b8 size 0x274 virtual false final false
  inline void Calculate();

  // Ctor Parameters [CppParam { name: "", ty: "__RotationLimitPolygonal__ReachCone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RotationLimitPolygonal__ReachCone(__RotationLimitPolygonal__ReachCone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RotationLimitPolygonal__ReachCone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RotationLimitPolygonal__ReachCone(__RotationLimitPolygonal__ReachCone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RotationLimitPolygonal__ReachCone();

public:
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

} // namespace RootMotion::FinalIK
// Type: ::LimitPoint
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12626))
// CS Name: ::RotationLimitPolygonal::LimitPoint*
class CORDL_TYPE __RotationLimitPolygonal__LimitPoint : public ::System::Object {
public:
  // Declarations
  /// @brief Field point, offset 0x10, size 0xc
  __declspec(property(get = __get_point, put = __set_point))::UnityEngine::Vector3 point;

  /// @brief Field tangentWeight, offset 0x1c, size 0x4
  __declspec(property(get = __get_tangentWeight, put = __set_tangentWeight)) float_t tangentWeight;

  constexpr ::UnityEngine::Vector3& __get_point();

  constexpr ::UnityEngine::Vector3 const& __get_point() const;

  constexpr void __set_point(::UnityEngine::Vector3 value);

  constexpr float_t& __get_tangentWeight();

  constexpr float_t const& __get_tangentWeight() const;

  constexpr void __set_tangentWeight(float_t value);

  static inline ::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint* New_ctor();

  /// @brief Method .ctor addr 0x1292c2c size 0x64 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RotationLimitPolygonal__LimitPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RotationLimitPolygonal__LimitPoint(__RotationLimitPolygonal__LimitPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RotationLimitPolygonal__LimitPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RotationLimitPolygonal__LimitPoint(__RotationLimitPolygonal__LimitPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RotationLimitPolygonal__LimitPoint();

public:
  /// @brief Field point, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___point;

  /// @brief Field tangentWeight, offset: 0x1c, size: 0x4, def value: None
  float_t ___tangentWeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint, 0x20>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::RotationLimitPolygonal
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12622))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12627))
// CS Name: ::RootMotion.FinalIK::RotationLimitPolygonal*
class CORDL_TYPE RotationLimitPolygonal : public ::RootMotion::FinalIK::RotationLimit {
public:
  // Declarations
  using LimitPoint = ::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint;

  using ReachCone = ::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone;

  /// @brief Field twistLimit, offset 0x38, size 0x4
  __declspec(property(get = __get_twistLimit, put = __set_twistLimit)) float_t twistLimit;

  /// @brief Field smoothIterations, offset 0x3c, size 0x4
  __declspec(property(get = __get_smoothIterations, put = __set_smoothIterations)) int32_t smoothIterations;

  /// @brief Field points, offset 0x40, size 0x8
  __declspec(property(get = __get_points,
                      put = __set_points))::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*> points;

  /// @brief Field P, offset 0x48, size 0x8
  __declspec(property(get = __get_P, put = __set_P))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> P;

  /// @brief Field reachCones, offset 0x50, size 0x8
  __declspec(property(get = __get_reachCones,
                      put = __set_reachCones))::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*>*> reachCones;

  constexpr float_t& __get_twistLimit();

  constexpr float_t const& __get_twistLimit() const;

  constexpr void __set_twistLimit(float_t value);

  constexpr int32_t& __get_smoothIterations();

  constexpr int32_t const& __get_smoothIterations() const;

  constexpr void __set_smoothIterations(int32_t value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*>& __get_points();

  constexpr ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*> const& __get_points() const;

  constexpr void __set_points(::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_P();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_P() const;

  constexpr void __set_P(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*>*>& __get_reachCones();

  constexpr ::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*>*> const& __get_reachCones() const;

  constexpr void __set_reachCones(::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*>*> value);

  /// @brief Method OpenUserManual addr 0x128fe80 size 0x44 virtual false final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference addr 0x128fec4 size 0x44 virtual false final false
  inline void OpenScriptReference();

  /// @brief Method SupportGroup addr 0x128ff08 size 0x44 virtual false final false
  inline void SupportGroup();

  /// @brief Method ASThread addr 0x128ff4c size 0x44 virtual false final false
  inline void ASThread();

  /// @brief Method SetLimitPoints addr 0x128ff90 size 0x8c virtual false final false
  inline void SetLimitPoints(::ArrayW<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, ::Array<::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*>*> points);

  /// @brief Method LimitRotation addr 0x12905d4 size 0x88 virtual true final false
  inline ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method Start addr 0x129065c size 0x350 virtual false final false
  inline void Start();

  /// @brief Method ResetToDefault addr 0x1290c50 size 0x4cc virtual false final false
  inline void ResetToDefault();

  /// @brief Method BuildReachCones addr 0x129001c size 0x5b8 virtual false final false
  inline void BuildReachCones();

  /// @brief Method SmoothPoints addr 0x129111c size 0x430 virtual false final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> SmoothPoints();

  /// @brief Method GetScalar addr 0x129154c size 0x48 virtual false final false
  inline float_t GetScalar(int32_t k);

  /// @brief Method PointToTangentPlane addr 0x1291594 size 0x60 virtual false final false
  inline ::UnityEngine::Vector3 PointToTangentPlane(::UnityEngine::Vector3 p, float_t r);

  /// @brief Method TangentPointToSphere addr 0x12915f4 size 0x6c virtual false final false
  inline ::UnityEngine::Vector3 TangentPointToSphere(::UnityEngine::Vector3 q, float_t r);

  /// @brief Method LimitSwing addr 0x12909ac size 0x2a4 virtual false final false
  inline ::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation);

  /// @brief Method GetReachCone addr 0x1291660 size 0xcc virtual false final false
  inline int32_t GetReachCone(::UnityEngine::Vector3 L);

  static inline ::RootMotion::FinalIK::RotationLimitPolygonal* New_ctor();

  /// @brief Method .ctor addr 0x129172c size 0x105c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RotationLimitPolygonal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotationLimitPolygonal(RotationLimitPolygonal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotationLimitPolygonal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotationLimitPolygonal(RotationLimitPolygonal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationLimitPolygonal();

public:
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

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitPolygonal);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitPolygonal*, "RootMotion.FinalIK", "RotationLimitPolygonal");
NEED_NO_BOX(::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RotationLimitPolygonal__LimitPoint*, "RootMotion.FinalIK", "RotationLimitPolygonal/LimitPoint");
NEED_NO_BOX(::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__RotationLimitPolygonal__ReachCone*, "RootMotion.FinalIK", "RotationLimitPolygonal/ReachCone");
