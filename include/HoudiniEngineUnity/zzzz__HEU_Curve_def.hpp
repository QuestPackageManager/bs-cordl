#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Curve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_Curve)
namespace HoudiniEngineUnity {
class CurveNodeData;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct __HEU_Curve__CurveDrawCollision;
}
namespace HoudiniEngineUnity {
struct __HEU_Curve__CurveEditState;
}
namespace HoudiniEngineUnity {
struct __HEU_Curve__Interaction;
}
namespace HoudiniEngineUnity {
class __HEU_Curve____c__DisplayClass38_0;
}
namespace HoudiniEngineUnity {
class __HEU_Curve____c__DisplayClass40_0;
}
namespace HoudiniEngineUnity {
class __HEU_Curve____c__DisplayClass48_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_Curve__CurveDrawCollision;
}
namespace HoudiniEngineUnity {
struct __HEU_Curve__CurveEditState;
}
namespace HoudiniEngineUnity {
struct __HEU_Curve__Interaction;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
}
namespace HoudiniEngineUnity {
class __HEU_Curve____c__DisplayClass38_0;
}
namespace HoudiniEngineUnity {
class __HEU_Curve____c__DisplayClass40_0;
}
namespace HoudiniEngineUnity {
class __HEU_Curve____c__DisplayClass48_0;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_Curve__CurveEditState);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_Curve__Interaction);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Curve);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0);
// Type: ::CurveEditState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_Curve::CurveEditState
struct CORDL_TYPE __HEU_Curve__CurveEditState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_Curve__CurveEditState_Unwrapped
  enum struct ____HEU_Curve__CurveEditState_Unwrapped : int32_t {
    __E_INVALID = static_cast<int32_t>(0x0),
    __E_GENERATED = static_cast<int32_t>(0x1),
    __E_EDITING = static_cast<int32_t>(0x2),
    __E_REQUIRES_GENERATION = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_Curve__CurveEditState_Unwrapped() const noexcept {
    return static_cast<____HEU_Curve__CurveEditState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve__CurveEditState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_Curve__CurveEditState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EDITING value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const EDITING;

  /// @brief Field GENERATED value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const GENERATED;

  /// @brief Field INVALID value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const INVALID;

  /// @brief Field REQUIRES_GENERATION value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const REQUIRES_GENERATION;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Curve__CurveEditState, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Curve__CurveEditState, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::Interaction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_Curve::Interaction
struct CORDL_TYPE __HEU_Curve__Interaction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_Curve__Interaction_Unwrapped
  enum struct ____HEU_Curve__Interaction_Unwrapped : int32_t {
    __E_VIEW = static_cast<int32_t>(0x0),
    __E_ADD = static_cast<int32_t>(0x1),
    __E_EDIT = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_Curve__Interaction_Unwrapped() const noexcept {
    return static_cast<____HEU_Curve__Interaction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve__Interaction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_Curve__Interaction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ADD value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_Curve__Interaction const ADD;

  /// @brief Field EDIT value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_Curve__Interaction const EDIT;

  /// @brief Field VIEW value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_Curve__Interaction const VIEW;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Curve__Interaction, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Curve__Interaction, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::CurveDrawCollision
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_Curve::CurveDrawCollision
struct CORDL_TYPE __HEU_Curve__CurveDrawCollision {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_Curve__CurveDrawCollision_Unwrapped
  enum struct ____HEU_Curve__CurveDrawCollision_Unwrapped : int32_t {
    __E_COLLIDERS = static_cast<int32_t>(0x0),
    __E_LAYERMASK = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_Curve__CurveDrawCollision_Unwrapped() const noexcept {
    return static_cast<____HEU_Curve__CurveDrawCollision_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve__CurveDrawCollision();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_Curve__CurveDrawCollision(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field COLLIDERS value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision const COLLIDERS;

  /// @brief Field LAYERMASK value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision const LAYERMASK;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<>c__DisplayClass38_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_Curve::<>c__DisplayClass38_0*
class CORDL_TYPE __HEU_Curve____c__DisplayClass38_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field positions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_positions, put = __cordl_internal_set_positions))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions;

  /// @brief Field rotations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rotations, put = __cordl_internal_set_rotations))::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rotations;

  /// @brief Field scales, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_scales, put = __cordl_internal_set_scales))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* scales;

  static inline ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0* New_ctor();

  /// @brief Method <UpdateCurveInputForCustomAttributes>b__0, addr 0x25653d0, size 0x1c4, virtual false, abstract: false, final false
  inline void _UpdateCurveInputForCustomAttributes_b__0(::HoudiniEngineUnity::CurveNodeData* data);

  /// @brief Method <UpdateCurveInputForCustomAttributes>b__1, addr 0x2565594, size 0x3c8, virtual false, abstract: false, final false
  inline void _UpdateCurveInputForCustomAttributes_b__1(int32_t nIndex1, int32_t nIndex2, float_t fCoeff, int32_t nInsertIndex);

  /// @brief Method <UpdateCurveInputForCustomAttributes>b__2, addr 0x256595c, size 0x2d4, virtual false, abstract: false, final false
  inline void _UpdateCurveInputForCustomAttributes_b__2(int32_t nIndex, int32_t nInsertIndex);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_positions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_positions() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& __cordl_internal_get_rotations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*> const& __cordl_internal_get_rotations() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_scales();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_scales() const;

  constexpr void __cordl_internal_set_positions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* value);

  constexpr void __cordl_internal_set_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x25634c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve____c__DisplayClass38_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_Curve____c__DisplayClass38_0(__HEU_Curve____c__DisplayClass38_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass38_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_Curve____c__DisplayClass38_0(__HEU_Curve____c__DisplayClass38_0 const&) = delete;

  /// @brief Field positions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___positions;

  /// @brief Field rotations, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* ___rotations;

  /// @brief Field scales, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___scales;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0, ___positions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0, ___rotations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0, ___scales) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<>c__DisplayClass40_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_Curve::<>c__DisplayClass40_0*
class CORDL_TYPE __HEU_Curve____c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field rotations, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rotations, put = __cordl_internal_set_rotations))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* rotations;

  /// @brief Field scales, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scales, put = __cordl_internal_set_scales))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* scales;

  static inline ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0* New_ctor();

  /// @brief Method <UpdatePoints>b__0, addr 0x2565c30, size 0x120, virtual false, abstract: false, final false
  inline void _UpdatePoints_b__0(::HoudiniEngineUnity::CurveNodeData* data);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_rotations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_rotations() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_scales();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_scales() const;

  constexpr void __cordl_internal_set_rotations(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x2563fa0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve____c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_Curve____c__DisplayClass40_0(__HEU_Curve____c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_Curve____c__DisplayClass40_0(__HEU_Curve____c__DisplayClass40_0 const&) = delete;

  /// @brief Field rotations, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___rotations;

  /// @brief Field scales, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___scales;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0, ___rotations) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0, ___scales) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::<>c__DisplayClass48_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_Curve::<>c__DisplayClass48_0*
class CORDL_TYPE __HEU_Curve____c__DisplayClass48_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field points, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_points, put = __cordl_internal_set_points))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points;

  static inline ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0* New_ctor();

  /// @brief Method <GetAllPoints>b__0, addr 0x2565d50, size 0xb8, virtual false, abstract: false, final false
  inline void _GetAllPoints_b__0(::HoudiniEngineUnity::CurveNodeData* transform);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_points();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_points() const;

  constexpr void __cordl_internal_set_points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x2564994, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve____c__DisplayClass48_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass48_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_Curve____c__DisplayClass48_0(__HEU_Curve____c__DisplayClass48_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass48_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_Curve____c__DisplayClass48_0(__HEU_Curve____c__DisplayClass48_0 const&) = delete;

  /// @brief Field points, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___points;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0, ___points) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_Curve
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_Curve*
class CORDL_TYPE HEU_Curve : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using CurveDrawCollision = ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision;

  using CurveEditState = ::HoudiniEngineUnity::__HEU_Curve__CurveEditState;

  using Interaction = ::HoudiniEngineUnity::__HEU_Curve__Interaction;

  using __c__DisplayClass38_0 = ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0;

  using __c__DisplayClass40_0 = ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0;

  using __c__DisplayClass48_0 = ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0;

  __declspec(property(get = get_CurveName))::StringW CurveName;

  __declspec(property(get = get_CurveNodeData))::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* CurveNodeData;

  __declspec(property(get = get_EditState))::HoudiniEngineUnity::__HEU_Curve__CurveEditState EditState;

  __declspec(property(get = get_GeoID)) int32_t GeoID;

  __declspec(property(get = get_Parameters))::UnityW<::HoudiniEngineUnity::HEU_Parameters> Parameters;

  __declspec(property(get = get_ParentAsset))::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ParentAsset;

  /// @brief Field PreferredNextInteractionMode, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_PreferredNextInteractionMode, put = setStaticF_PreferredNextInteractionMode))::HoudiniEngineUnity::__HEU_Curve__Interaction PreferredNextInteractionMode;

  /// @brief Field _bUploadParameterPreset, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__bUploadParameterPreset, put = __cordl_internal_set__bUploadParameterPreset)) bool _bUploadParameterPreset;

  /// @brief Field _curveName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__curveName, put = __cordl_internal_set__curveName))::StringW _curveName;

  /// @brief Field _curveNodeData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__curveNodeData,
                      put = __cordl_internal_set__curveNodeData))::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* _curveNodeData;

  /// @brief Field _editState, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__editState, put = __cordl_internal_set__editState))::HoudiniEngineUnity::__HEU_Curve__CurveEditState _editState;

  /// @brief Field _geoID, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__geoID, put = __cordl_internal_set__geoID)) int32_t _geoID;

  /// @brief Field _isEditable, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isEditable, put = __cordl_internal_set__isEditable)) bool _isEditable;

  /// @brief Field _isGeoCurve, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isGeoCurve, put = __cordl_internal_set__isGeoCurve)) bool _isGeoCurve;

  /// @brief Field _parameters, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__parameters, put = __cordl_internal_set__parameters))::UnityW<::HoudiniEngineUnity::HEU_Parameters> _parameters;

  /// @brief Field _parentAsset, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__parentAsset, put = __cordl_internal_set__parentAsset))::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> _parentAsset;

  /// @brief Field _targetGameObject, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__targetGameObject, put = __cordl_internal_set__targetGameObject))::UnityW<::UnityEngine::GameObject> _targetGameObject;

  /// @brief Field _vertices, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__vertices, put = __cordl_internal_set__vertices))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _vertices;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>*() noexcept;

  /// @brief Method CreateSetupCurve, addr 0x25612b8, size 0x184, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_Curve> CreateSetupCurve(::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, bool isEditable, ::StringW curveName, int32_t geoID, bool bGeoCurve);

  /// @brief Method DestroyAllData, addr 0x2561510, size 0x14c, virtual false, abstract: false, final false
  inline void DestroyAllData(bool bIsRebuild);

  /// @brief Method DownloadAsDefaultPresetData, addr 0x2564d24, size 0x98, virtual false, abstract: false, final false
  inline void DownloadAsDefaultPresetData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DownloadPresetData, addr 0x2563f08, size 0x98, virtual false, abstract: false, final false
  inline void DownloadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DuplicateCurveNodeData, addr 0x2564dbc, size 0x224, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* DuplicateCurveNodeData();

  /// @brief Method GenerateMesh, addr 0x2561b68, size 0x3b4, virtual false, abstract: false, final false
  inline void GenerateMesh(::UnityEngine::GameObject* inGameObject);

  /// @brief Method GetAllPointTransforms, addr 0x256486c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* GetAllPointTransforms();

  /// @brief Method GetAllPoints, addr 0x2564874, size 0x120, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetAllPoints();

  /// @brief Method GetCurvePoint, addr 0x256479c, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetCurvePoint(int32_t pointIndex);

  /// @brief Method GetInvertedTransformedDirection, addr 0x2564b4c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetInvertedTransformedDirection(::UnityEngine::Vector3 inPosition);

  /// @brief Method GetInvertedTransformedPosition, addr 0x2564afc, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetInvertedTransformedPosition(::UnityEngine::Vector3 inPosition);

  /// @brief Method GetNumPoints, addr 0x256499c, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetNumPoints();

  /// @brief Method GetPointsString, addr 0x2564480, size 0x274, virtual false, abstract: false, final false
  static inline ::StringW GetPointsString(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* points);

  /// @brief Method GetPointsString, addr 0x25634d0, size 0x260, virtual false, abstract: false, final false
  static inline ::StringW GetPointsString(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points);

  /// @brief Method GetTransformedPoint, addr 0x25649e4, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetTransformedPoint(int32_t pointIndex);

  /// @brief Method GetTransformedPosition, addr 0x2564aac, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetTransformedPosition(::UnityEngine::Vector3 inPosition);

  /// @brief Method GetVertices, addr 0x2564b9c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetVertices();

  /// @brief Method IsEditable, addr 0x256127c, size 0x8, virtual false, abstract: false, final false
  inline bool IsEditable();

  /// @brief Method IsEquivalentTo, addr 0x2564fe8, size 0x36c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_Curve* other);

  /// @brief Method IsGeoCurve, addr 0x25612a0, size 0x8, virtual false, abstract: false, final false
  inline bool IsGeoCurve();

  static inline ::HoudiniEngineUnity::HEU_Curve* New_ctor();

  /// @brief Method ProjectToColliders, addr 0x2563fa8, size 0x4d8, virtual false, abstract: false, final false
  inline void ProjectToColliders(::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::UnityEngine::Vector3 rayDirection, float_t rayDistance);

  /// @brief Method ResetCurveParameters, addr 0x25617e0, size 0xd0, virtual false, abstract: false, final false
  inline void ResetCurveParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method SetCurveGeometryVisibility, addr 0x2564ba4, size 0xe8, virtual false, abstract: false, final false
  inline void SetCurveGeometryVisibility(bool bVisible);

  /// @brief Method SetCurveName, addr 0x256165c, size 0x9c, virtual false, abstract: false, final false
  inline void SetCurveName(::StringW name);

  /// @brief Method SetCurveNodeData, addr 0x2564fe0, size 0x8, virtual false, abstract: false, final false
  inline void SetCurveNodeData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* curveNodeData);

  /// @brief Method SetCurveParameterPreset, addr 0x25618b0, size 0xd0, virtual false, abstract: false, final false
  inline void SetCurveParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::ArrayW<uint8_t, ::Array<uint8_t>*> parameterPreset);

  /// @brief Method SetCurvePoint, addr 0x25646fc, size 0xa0, virtual false, abstract: false, final false
  inline void SetCurvePoint(int32_t pointIndex, ::UnityEngine::Vector3 newPosition);

  /// @brief Method SetEditState, addr 0x25646f4, size 0x8, virtual false, abstract: false, final false
  inline void SetEditState(::HoudiniEngineUnity::__HEU_Curve__CurveEditState editState);

  /// @brief Method SetUploadParameterPreset, addr 0x256128c, size 0xc, virtual false, abstract: false, final false
  inline void SetUploadParameterPreset(bool bValue);

  /// @brief Method SyncFromParameters, addr 0x2563730, size 0x274, virtual false, abstract: false, final false
  inline void SyncFromParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method UpdateCurve, addr 0x2561980, size 0x1e8, virtual false, abstract: false, final false
  inline void UpdateCurve(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID);

  /// @brief Method UpdateCurveInputForCustomAttributes, addr 0x2561f1c, size 0x15ac, virtual false, abstract: false, final false
  inline bool UpdateCurveInputForCustomAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method UpdatePoints, addr 0x25639a4, size 0x564, virtual false, abstract: false, final false
  inline void UpdatePoints(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID);

  /// @brief Method UploadParameterPreset, addr 0x25616f8, size 0xe8, virtual false, abstract: false, final false
  inline void UploadParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method UploadPresetData, addr 0x2564c8c, size 0x98, virtual false, abstract: false, final false
  inline void UploadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session);

  constexpr bool const& __cordl_internal_get__bUploadParameterPreset() const;

  constexpr bool& __cordl_internal_get__bUploadParameterPreset();

  constexpr ::StringW const& __cordl_internal_get__curveName() const;

  constexpr ::StringW& __cordl_internal_get__curveName();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*& __cordl_internal_get__curveNodeData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*> const& __cordl_internal_get__curveNodeData() const;

  constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const& __cordl_internal_get__editState() const;

  constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState& __cordl_internal_get__editState();

  constexpr int32_t const& __cordl_internal_get__geoID() const;

  constexpr int32_t& __cordl_internal_get__geoID();

  constexpr bool const& __cordl_internal_get__isEditable() const;

  constexpr bool& __cordl_internal_get__isEditable();

  constexpr bool const& __cordl_internal_get__isGeoCurve() const;

  constexpr bool& __cordl_internal_get__isGeoCurve();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_Parameters> const& __cordl_internal_get__parameters() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_Parameters>& __cordl_internal_get__parameters();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get__parentAsset() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get__parentAsset();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__targetGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__targetGameObject();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__vertices() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__vertices();

  constexpr void __cordl_internal_set__bUploadParameterPreset(bool value);

  constexpr void __cordl_internal_set__curveName(::StringW value);

  constexpr void __cordl_internal_set__curveNodeData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* value);

  constexpr void __cordl_internal_set__editState(::HoudiniEngineUnity::__HEU_Curve__CurveEditState value);

  constexpr void __cordl_internal_set__geoID(int32_t value);

  constexpr void __cordl_internal_set__isEditable(bool value);

  constexpr void __cordl_internal_set__isGeoCurve(bool value);

  constexpr void __cordl_internal_set__parameters(::UnityW<::HoudiniEngineUnity::HEU_Parameters> value);

  constexpr void __cordl_internal_set__parentAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  constexpr void __cordl_internal_set__targetGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__vertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method .ctor, addr 0x2565354, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::__HEU_Curve__Interaction getStaticF_PreferredNextInteractionMode();

  /// @brief Method get_CurveName, addr 0x2561298, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CurveName();

  /// @brief Method get_CurveNodeData, addr 0x2561274, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* get_CurveNodeData();

  /// @brief Method get_EditState, addr 0x25612a8, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::__HEU_Curve__CurveEditState get_EditState();

  /// @brief Method get_GeoID, addr 0x256126c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GeoID();

  /// @brief Method get_Parameters, addr 0x2561284, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_Parameters> get_Parameters();

  /// @brief Method get_ParentAsset, addr 0x25612b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> get_ParentAsset();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_Curve__() noexcept;

  static inline void setStaticF_PreferredNextInteractionMode(::HoudiniEngineUnity::__HEU_Curve__Interaction value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Curve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Curve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Curve(HEU_Curve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Curve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Curve(HEU_Curve const&) = delete;

  /// @brief Field _geoID, offset: 0x18, size: 0x4, def value: None
  int32_t ____geoID;

  /// @brief Field _curveNodeData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* ____curveNodeData;

  /// @brief Field _vertices, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____vertices;

  /// @brief Field _isEditable, offset: 0x30, size: 0x1, def value: None
  bool ____isEditable;

  /// @brief Field _parameters, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_Parameters> ____parameters;

  /// @brief Field _bUploadParameterPreset, offset: 0x40, size: 0x1, def value: None
  bool ____bUploadParameterPreset;

  /// @brief Field _curveName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____curveName;

  /// @brief Field _targetGameObject, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____targetGameObject;

  /// @brief Field _isGeoCurve, offset: 0x58, size: 0x1, def value: None
  bool ____isGeoCurve;

  /// @brief Field _editState, offset: 0x5c, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_Curve__CurveEditState ____editState;

  /// @brief Field _parentAsset, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ____parentAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Curve, 0x68>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____geoID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____curveNodeData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____vertices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____isEditable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____parameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____bUploadParameterPreset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____curveName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____targetGameObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____isGeoCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____editState) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Curve, ____parentAsset) == 0x60, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision, "HoudiniEngineUnity", "HEU_Curve/CurveDrawCollision");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Curve__CurveEditState, "HoudiniEngineUnity", "HEU_Curve/CurveEditState");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Curve__Interaction, "HoudiniEngineUnity", "HEU_Curve/Interaction");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Curve);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Curve*, "HoudiniEngineUnity", "HEU_Curve");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*, "HoudiniEngineUnity", "HEU_Curve/<>c__DisplayClass38_0");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0*, "HoudiniEngineUnity", "HEU_Curve/<>c__DisplayClass40_0");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0*, "HoudiniEngineUnity", "HEU_Curve/<>c__DisplayClass48_0");
