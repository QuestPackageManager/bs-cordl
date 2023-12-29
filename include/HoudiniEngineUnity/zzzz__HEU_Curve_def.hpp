#pragma once
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
struct __HEU_Curve__CurveDrawCollision;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
class __HEU_Curve____c__DisplayClass38_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct __HEU_Curve__Interaction;
}
namespace HoudiniEngineUnity {
class __HEU_Curve____c__DisplayClass48_0;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct __HEU_Curve__CurveEditState;
}
namespace HoudiniEngineUnity {
class CurveNodeData;
}
namespace HoudiniEngineUnity {
class __HEU_Curve____c__DisplayClass40_0;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Quaternion;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9547))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_Curve__CurveEditState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve__CurveEditState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field INVALID value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const INVALID;

  /// @brief Field GENERATED value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const GENERATED;

  /// @brief Field EDITING value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const EDITING;

  /// @brief Field REQUIRES_GENERATION value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const REQUIRES_GENERATION;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9548))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_Curve__Interaction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve__Interaction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field VIEW value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_Curve__Interaction const VIEW;

  /// @brief Field ADD value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_Curve__Interaction const ADD;

  /// @brief Field EDIT value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_Curve__Interaction const EDIT;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9549))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_Curve__CurveDrawCollision(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve__CurveDrawCollision();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field COLLIDERS value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision const COLLIDERS;

  /// @brief Field LAYERMASK value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision const LAYERMASK;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9550))
// CS Name: ::HEU_Curve::<>c__DisplayClass38_0*
class CORDL_TYPE __HEU_Curve____c__DisplayClass38_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field positions, offset 0x10, size 0x8
  __declspec(property(get = __get_positions, put = __set_positions))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions;

  /// @brief Field rotations, offset 0x18, size 0x8
  __declspec(property(get = __get_rotations, put = __set_rotations))::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rotations;

  /// @brief Field scales, offset 0x20, size 0x8
  __declspec(property(get = __get_scales, put = __set_scales))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* scales;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get_positions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get_positions() const;

  constexpr void __set_positions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& __get_rotations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*> const& __get_rotations() const;

  constexpr void __set_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get_scales();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get_scales() const;

  constexpr void __set_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  static inline ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0* New_ctor();

  /// @brief Method .ctor addr 0x1ffba3c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <UpdateCurveInputForCustomAttributes>b__0 addr 0x1ffd944 size 0x1c4 virtual false final false
  inline void _UpdateCurveInputForCustomAttributes_b__0(::HoudiniEngineUnity::CurveNodeData* data);

  /// @brief Method <UpdateCurveInputForCustomAttributes>b__1 addr 0x1ffdb08 size 0x3c8 virtual false final false
  inline void _UpdateCurveInputForCustomAttributes_b__1(int32_t nIndex1, int32_t nIndex2, float_t fCoeff, int32_t nInsertIndex);

  /// @brief Method <UpdateCurveInputForCustomAttributes>b__2 addr 0x1ffded0 size 0x2d4 virtual false final false
  inline void _UpdateCurveInputForCustomAttributes_b__2(int32_t nIndex, int32_t nInsertIndex);

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_Curve____c__DisplayClass38_0(__HEU_Curve____c__DisplayClass38_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass38_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_Curve____c__DisplayClass38_0(__HEU_Curve____c__DisplayClass38_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve____c__DisplayClass38_0();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9551))
// CS Name: ::HEU_Curve::<>c__DisplayClass40_0*
class CORDL_TYPE __HEU_Curve____c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field rotations, offset 0x10, size 0x8
  __declspec(property(get = __get_rotations, put = __set_rotations))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* rotations;

  /// @brief Field scales, offset 0x18, size 0x8
  __declspec(property(get = __get_scales, put = __set_scales))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* scales;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get_rotations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get_rotations() const;

  constexpr void __set_rotations(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get_scales();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get_scales() const;

  constexpr void __set_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  static inline ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0* New_ctor();

  /// @brief Method .ctor addr 0x1ffc514 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <UpdatePoints>b__0 addr 0x1ffe1a4 size 0x120 virtual false final false
  inline void _UpdatePoints_b__0(::HoudiniEngineUnity::CurveNodeData* data);

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_Curve____c__DisplayClass40_0(__HEU_Curve____c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_Curve____c__DisplayClass40_0(__HEU_Curve____c__DisplayClass40_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve____c__DisplayClass40_0();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9552))
// CS Name: ::HEU_Curve::<>c__DisplayClass48_0*
class CORDL_TYPE __HEU_Curve____c__DisplayClass48_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field points, offset 0x10, size 0x8
  __declspec(property(get = __get_points, put = __set_points))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get_points();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get_points() const;

  constexpr void __set_points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  static inline ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0* New_ctor();

  /// @brief Method .ctor addr 0x1ffcf08 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetAllPoints>b__0 addr 0x1ffe2c4 size 0xb8 virtual false final false
  inline void _GetAllPoints_b__0(::HoudiniEngineUnity::CurveNodeData* transform);

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass48_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_Curve____c__DisplayClass48_0(__HEU_Curve____c__DisplayClass48_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Curve____c__DisplayClass48_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_Curve____c__DisplayClass48_0(__HEU_Curve____c__DisplayClass48_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Curve____c__DisplayClass48_0();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9547)), TypeDefinitionIndex(TypeDefinitionIndex(9548)), TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9553))
// CS Name: ::HoudiniEngineUnity::HEU_Curve*
class CORDL_TYPE HEU_Curve : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using __c__DisplayClass48_0 = ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0;

  using __c__DisplayClass40_0 = ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0;

  using __c__DisplayClass38_0 = ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0;

  using CurveDrawCollision = ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision;

  using Interaction = ::HoudiniEngineUnity::__HEU_Curve__Interaction;

  using CurveEditState = ::HoudiniEngineUnity::__HEU_Curve__CurveEditState;

  /// @brief Field _geoID, offset 0x18, size 0x4
  __declspec(property(get = __get__geoID, put = __set__geoID)) int32_t _geoID;

  /// @brief Field _curveNodeData, offset 0x20, size 0x8
  __declspec(property(get = __get__curveNodeData, put = __set__curveNodeData))::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* _curveNodeData;

  /// @brief Field _vertices, offset 0x28, size 0x8
  __declspec(property(get = __get__vertices, put = __set__vertices))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _vertices;

  /// @brief Field _isEditable, offset 0x30, size 0x1
  __declspec(property(get = __get__isEditable, put = __set__isEditable)) bool _isEditable;

  /// @brief Field _parameters, offset 0x38, size 0x8
  __declspec(property(get = __get__parameters, put = __set__parameters))::HoudiniEngineUnity::HEU_Parameters* _parameters;

  /// @brief Field _bUploadParameterPreset, offset 0x40, size 0x1
  __declspec(property(get = __get__bUploadParameterPreset, put = __set__bUploadParameterPreset)) bool _bUploadParameterPreset;

  /// @brief Field _curveName, offset 0x48, size 0x8
  __declspec(property(get = __get__curveName, put = __set__curveName))::StringW _curveName;

  /// @brief Field _targetGameObject, offset 0x50, size 0x8
  __declspec(property(get = __get__targetGameObject, put = __set__targetGameObject))::UnityEngine::GameObject* _targetGameObject;

  /// @brief Field _isGeoCurve, offset 0x58, size 0x1
  __declspec(property(get = __get__isGeoCurve, put = __set__isGeoCurve)) bool _isGeoCurve;

  /// @brief Field _editState, offset 0x5c, size 0x4
  __declspec(property(get = __get__editState, put = __set__editState))::HoudiniEngineUnity::__HEU_Curve__CurveEditState _editState;

  /// @brief Field _parentAsset, offset 0x60, size 0x8
  __declspec(property(get = __get__parentAsset, put = __set__parentAsset))::HoudiniEngineUnity::HEU_HoudiniAsset* _parentAsset;

  /// @brief Field PreferredNextInteractionMode, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_PreferredNextInteractionMode, put = setStaticF_PreferredNextInteractionMode))::HoudiniEngineUnity::__HEU_Curve__Interaction PreferredNextInteractionMode;

  __declspec(property(get = get_GeoID)) int32_t GeoID;

  __declspec(property(get = get_CurveNodeData))::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* CurveNodeData;

  __declspec(property(get = get_Parameters))::HoudiniEngineUnity::HEU_Parameters* Parameters;

  __declspec(property(get = get_CurveName))::StringW CurveName;

  __declspec(property(get = get_EditState))::HoudiniEngineUnity::__HEU_Curve__CurveEditState EditState;

  __declspec(property(get = get_ParentAsset))::HoudiniEngineUnity::HEU_HoudiniAsset* ParentAsset;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Curve*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Curve*>*() noexcept;

  constexpr int32_t& __get__geoID();

  constexpr int32_t const& __get__geoID() const;

  constexpr void __set__geoID(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*& __get__curveNodeData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*> const& __get__curveNodeData() const;

  constexpr void __set__curveNodeData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__vertices();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__vertices() const;

  constexpr void __set__vertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr bool& __get__isEditable();

  constexpr bool const& __get__isEditable() const;

  constexpr void __set__isEditable(bool value);

  constexpr ::HoudiniEngineUnity::HEU_Parameters*& __get__parameters();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_Parameters*> const& __get__parameters() const;

  constexpr void __set__parameters(::HoudiniEngineUnity::HEU_Parameters* value);

  constexpr bool& __get__bUploadParameterPreset();

  constexpr bool const& __get__bUploadParameterPreset() const;

  constexpr void __set__bUploadParameterPreset(bool value);

  constexpr ::StringW& __get__curveName();

  constexpr ::StringW const& __get__curveName() const;

  constexpr void __set__curveName(::StringW value);

  constexpr ::UnityEngine::GameObject*& __get__targetGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__targetGameObject() const;

  constexpr void __set__targetGameObject(::UnityEngine::GameObject* value);

  constexpr bool& __get__isGeoCurve();

  constexpr bool const& __get__isGeoCurve() const;

  constexpr void __set__isGeoCurve(bool value);

  constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState& __get__editState();

  constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const& __get__editState() const;

  constexpr void __set__editState(::HoudiniEngineUnity::__HEU_Curve__CurveEditState value);

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset*& __get__parentAsset();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> const& __get__parentAsset() const;

  constexpr void __set__parentAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* value);

  static inline void setStaticF_PreferredNextInteractionMode(::HoudiniEngineUnity::__HEU_Curve__Interaction value);

  static inline ::HoudiniEngineUnity::__HEU_Curve__Interaction getStaticF_PreferredNextInteractionMode();

  /// @brief Method get_GeoID addr 0x1ff97e0 size 0x8 virtual false final false
  inline int32_t get_GeoID();

  /// @brief Method get_CurveNodeData addr 0x1ff97e8 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* get_CurveNodeData();

  /// @brief Method IsEditable addr 0x1ff97f0 size 0x8 virtual false final false
  inline bool IsEditable();

  /// @brief Method get_Parameters addr 0x1ff97f8 size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::HEU_Parameters* get_Parameters();

  /// @brief Method SetUploadParameterPreset addr 0x1ff9800 size 0xc virtual false final false
  inline void SetUploadParameterPreset(bool bValue);

  /// @brief Method get_CurveName addr 0x1ff980c size 0x8 virtual false final false
  inline ::StringW get_CurveName();

  /// @brief Method IsGeoCurve addr 0x1ff9814 size 0x8 virtual false final false
  inline bool IsGeoCurve();

  /// @brief Method get_EditState addr 0x1ff981c size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::__HEU_Curve__CurveEditState get_EditState();

  /// @brief Method get_ParentAsset addr 0x1ff9824 size 0x8 virtual false final false
  inline ::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset();

  /// @brief Method CreateSetupCurve addr 0x1ff982c size 0x184 virtual false final false
  static inline ::HoudiniEngineUnity::HEU_Curve* CreateSetupCurve(::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, bool isEditable, ::StringW curveName, int32_t geoID, bool bGeoCurve);

  /// @brief Method DestroyAllData addr 0x1ff9a84 size 0x14c virtual false final false
  inline void DestroyAllData(bool bIsRebuild);

  /// @brief Method SetCurveName addr 0x1ff9bd0 size 0x9c virtual false final false
  inline void SetCurveName(::StringW name);

  /// @brief Method UploadParameterPreset addr 0x1ff9c6c size 0xe8 virtual false final false
  inline void UploadParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method ResetCurveParameters addr 0x1ff9d54 size 0xd0 virtual false final false
  inline void ResetCurveParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method SetCurveParameterPreset addr 0x1ff9e24 size 0xd0 virtual false final false
  inline void SetCurveParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::ArrayW<uint8_t, ::Array<uint8_t>*> parameterPreset);

  /// @brief Method UpdateCurve addr 0x1ff9ef4 size 0x1e8 virtual false final false
  inline void UpdateCurve(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID);

  /// @brief Method GenerateMesh addr 0x1ffa0dc size 0x3b4 virtual false final false
  inline void GenerateMesh(::UnityEngine::GameObject* inGameObject);

  /// @brief Method UpdateCurveInputForCustomAttributes addr 0x1ffa490 size 0x15ac virtual false final false
  inline bool UpdateCurveInputForCustomAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method SyncFromParameters addr 0x1ffbca4 size 0x274 virtual false final false
  inline void SyncFromParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method UpdatePoints addr 0x1ffbf18 size 0x564 virtual false final false
  inline void UpdatePoints(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID);

  /// @brief Method ProjectToColliders addr 0x1ffc51c size 0x4d8 virtual false final false
  inline void ProjectToColliders(::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::UnityEngine::Vector3 rayDirection, float_t rayDistance);

  /// @brief Method GetPointsString addr 0x1ffc9f4 size 0x274 virtual false final false
  static inline ::StringW GetPointsString(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* points);

  /// @brief Method GetPointsString addr 0x1ffba44 size 0x260 virtual false final false
  static inline ::StringW GetPointsString(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points);

  /// @brief Method SetEditState addr 0x1ffcc68 size 0x8 virtual false final false
  inline void SetEditState(::HoudiniEngineUnity::__HEU_Curve__CurveEditState editState);

  /// @brief Method SetCurvePoint addr 0x1ffcc70 size 0xa0 virtual false final false
  inline void SetCurvePoint(int32_t pointIndex, ::UnityEngine::Vector3 newPosition);

  /// @brief Method GetCurvePoint addr 0x1ffcd10 size 0xd0 virtual false final false
  inline ::UnityEngine::Vector3 GetCurvePoint(int32_t pointIndex);

  /// @brief Method GetAllPointTransforms addr 0x1ffcde0 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* GetAllPointTransforms();

  /// @brief Method GetAllPoints addr 0x1ffcde8 size 0x120 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetAllPoints();

  /// @brief Method GetNumPoints addr 0x1ffcf10 size 0x48 virtual false final false
  inline int32_t GetNumPoints();

  /// @brief Method GetTransformedPoint addr 0x1ffcf58 size 0xc8 virtual false final false
  inline ::UnityEngine::Vector3 GetTransformedPoint(int32_t pointIndex);

  /// @brief Method GetTransformedPosition addr 0x1ffd020 size 0x50 virtual false final false
  inline ::UnityEngine::Vector3 GetTransformedPosition(::UnityEngine::Vector3 inPosition);

  /// @brief Method GetInvertedTransformedPosition addr 0x1ffd070 size 0x50 virtual false final false
  inline ::UnityEngine::Vector3 GetInvertedTransformedPosition(::UnityEngine::Vector3 inPosition);

  /// @brief Method GetInvertedTransformedDirection addr 0x1ffd0c0 size 0x50 virtual false final false
  inline ::UnityEngine::Vector3 GetInvertedTransformedDirection(::UnityEngine::Vector3 inPosition);

  /// @brief Method GetVertices addr 0x1ffd110 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetVertices();

  /// @brief Method SetCurveGeometryVisibility addr 0x1ffd118 size 0xe8 virtual false final false
  inline void SetCurveGeometryVisibility(bool bVisible);

  /// @brief Method DownloadPresetData addr 0x1ffc47c size 0x98 virtual false final false
  inline void DownloadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadPresetData addr 0x1ffd200 size 0x98 virtual false final false
  inline void UploadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DownloadAsDefaultPresetData addr 0x1ffd298 size 0x98 virtual false final false
  inline void DownloadAsDefaultPresetData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DuplicateCurveNodeData addr 0x1ffd330 size 0x224 virtual false final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* DuplicateCurveNodeData();

  /// @brief Method SetCurveNodeData addr 0x1ffd554 size 0x8 virtual false final false
  inline void SetCurveNodeData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* curveNodeData);

  /// @brief Method IsEquivalentTo addr 0x1ffd55c size 0x36c virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_Curve* other);

  static inline ::HoudiniEngineUnity::HEU_Curve* New_ctor();

  /// @brief Method .ctor addr 0x1ffd8c8 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Curve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Curve(HEU_Curve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Curve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Curve(HEU_Curve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Curve();

public:
  /// @brief Field _geoID, offset: 0x18, size: 0x4, def value: None
  int32_t ____geoID;

  /// @brief Field _curveNodeData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* ____curveNodeData;

  /// @brief Field _vertices, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____vertices;

  /// @brief Field _isEditable, offset: 0x30, size: 0x1, def value: None
  bool ____isEditable;

  /// @brief Field _parameters, offset: 0x38, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_Parameters* ____parameters;

  /// @brief Field _bUploadParameterPreset, offset: 0x40, size: 0x1, def value: None
  bool ____bUploadParameterPreset;

  /// @brief Field _curveName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____curveName;

  /// @brief Field _targetGameObject, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____targetGameObject;

  /// @brief Field _isGeoCurve, offset: 0x58, size: 0x1, def value: None
  bool ____isGeoCurve;

  /// @brief Field _editState, offset: 0x5c, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_Curve__CurveEditState ____editState;

  /// @brief Field _parentAsset, offset: 0x60, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_HoudiniAsset* ____parentAsset;

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
