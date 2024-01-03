#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierPath)
namespace GlobalNamespace {
struct __BezierPath__ControlMode;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BezierPath__ControlMode;
}
namespace GlobalNamespace {
class BezierPath;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BezierPath__ControlMode);
MARK_REF_PTR_T(::GlobalNamespace::BezierPath);
// Type: ::ControlMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5970))
// CS Name: ::BezierPath::ControlMode
struct CORDL_TYPE __BezierPath__ControlMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BezierPath__ControlMode_Unwrapped
  enum struct ____BezierPath__ControlMode_Unwrapped : int32_t {
    __E_Aligned = static_cast<int32_t>(0x0),
    __E_Mirrored = static_cast<int32_t>(0x1),
    __E_Free = static_cast<int32_t>(0x2),
    __E_Automatic = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BezierPath__ControlMode_Unwrapped() const noexcept {
    return static_cast<____BezierPath__ControlMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BezierPath__ControlMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BezierPath__ControlMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Aligned value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BezierPath__ControlMode const Aligned;

  /// @brief Field Mirrored value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BezierPath__ControlMode const Mirrored;

  /// @brief Field Free value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BezierPath__ControlMode const Free;

  /// @brief Field Automatic value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__BezierPath__ControlMode const Automatic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BezierPath__ControlMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BezierPath__ControlMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BezierPath
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5970))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5971))
// CS Name: ::BezierPath*
class CORDL_TYPE BezierPath : public ::System::Object {
public:
  // Declarations
  using ControlMode = ::GlobalNamespace::__BezierPath__ControlMode;

  /// @brief Field bezierPathWasModifiedEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_bezierPathWasModifiedEvent, put = __set_bezierPathWasModifiedEvent))::System::Action* bezierPathWasModifiedEvent;

  /// @brief Field _points, offset 0x18, size 0x8
  __declspec(property(get = __get__points, put = __set__points))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _points;

  /// @brief Field _controlMode, offset 0x20, size 0x4
  __declspec(property(get = __get__controlMode, put = __set__controlMode))::GlobalNamespace::__BezierPath__ControlMode _controlMode;

  /// @brief Field _perAnchorNormalsAngle, offset 0x28, size 0x8
  __declspec(property(get = __get__perAnchorNormalsAngle, put = __set__perAnchorNormalsAngle))::System::Collections::Generic::List_1<float_t>* _perAnchorNormalsAngle;

  /// @brief Field _neighbourDistances, offset 0x30, size 0x8
  __declspec(property(get = __get__neighbourDistances, put = __set__neighbourDistances))::ArrayW<float_t, ::Array<float_t>*> _neighbourDistances;

  __declspec(property(get = get_controlPointMode, put = set_controlPointMode))::GlobalNamespace::__BezierPath__ControlMode controlPointMode;

  __declspec(property(get = get_pointsCount)) int32_t pointsCount;

  __declspec(property(get = get_anchorPointsCount)) int32_t anchorPointsCount;

  __declspec(property(get = get_segmentsCount)) int32_t segmentsCount;

  __declspec(property(get = get_Item))::UnityEngine::Vector3 Item[];

  constexpr ::System::Action*& __get_bezierPathWasModifiedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_bezierPathWasModifiedEvent() const;

  constexpr void __set_bezierPathWasModifiedEvent(::System::Action* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get__points();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get__points() const;

  constexpr void __set__points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr ::GlobalNamespace::__BezierPath__ControlMode& __get__controlMode();

  constexpr ::GlobalNamespace::__BezierPath__ControlMode const& __get__controlMode() const;

  constexpr void __set__controlMode(::GlobalNamespace::__BezierPath__ControlMode value);

  constexpr ::System::Collections::Generic::List_1<float_t>*& __get__perAnchorNormalsAngle();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& __get__perAnchorNormalsAngle() const;

  constexpr void __set__perAnchorNormalsAngle(::System::Collections::Generic::List_1<float_t>* value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__neighbourDistances();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__neighbourDistances() const;

  constexpr void __set__neighbourDistances(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method get_controlPointMode, addr 0x2309be0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BezierPath__ControlMode get_controlPointMode();

  /// @brief Method set_controlPointMode, addr 0x2309be8, size 0x4c, virtual false, abstract: false, final false
  inline void set_controlPointMode(::GlobalNamespace::__BezierPath__ControlMode value);

  /// @brief Method add_bezierPathWasModifiedEvent, addr 0x2309cd0, size 0x9c, virtual false, abstract: false, final false
  inline void add_bezierPathWasModifiedEvent(::System::Action* value);

  /// @brief Method remove_bezierPathWasModifiedEvent, addr 0x2309d6c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_bezierPathWasModifiedEvent(::System::Action* value);

  /// @brief Method get_pointsCount, addr 0x2309e08, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_pointsCount();

  /// @brief Method get_anchorPointsCount, addr 0x2309e50, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_anchorPointsCount();

  /// @brief Method get_segmentsCount, addr 0x2309eb4, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_segmentsCount();

  static inline ::GlobalNamespace::BezierPath* New_ctor(::UnityEngine::Vector3 centre, bool initTwoSegments);

  /// @brief Method .ctor, addr 0x2309f14, size 0x544, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 centre, bool initTwoSegments);

  /// @brief Method UpdateByAnchorPoints, addr 0x230a458, size 0x608, virtual false, abstract: false, final false
  inline void UpdateByAnchorPoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* points);

  /// @brief Method UpdateControlPoints, addr 0x230af70, size 0x278, virtual false, abstract: false, final false
  inline void UpdateControlPoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* points);

  /// @brief Method get_Item, addr 0x230b2a8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Item(int32_t i);

  /// @brief Method GetPoint, addr 0x230b2ac, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPoint(int32_t i);

  /// @brief Method SetPoint, addr 0x230b1e8, size 0xc0, virtual false, abstract: false, final false
  inline void SetPoint(int32_t i, ::UnityEngine::Vector3 localPosition, bool suppressPathModified);

  /// @brief Method AddSegmentToEnd, addr 0x230aa60, size 0x510, virtual false, abstract: false, final false
  inline void AddSegmentToEnd(::UnityEngine::Vector3 anchorPos);

  /// @brief Method GetPointsInSegment, addr 0x230b390, size 0x98, virtual false, abstract: false, final false
  inline void GetPointsInSegment(int32_t segmentIndex, ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> points);

  /// @brief Method GetPointsInSegment, addr 0x230b428, size 0xf8, virtual false, abstract: false, final false
  inline void GetPointsInSegment(int32_t segmentIndex, ByRef<::UnityEngine::Vector3> p0, ByRef<::UnityEngine::Vector3> p1, ByRef<::UnityEngine::Vector3> p2, ByRef<::UnityEngine::Vector3> p3);

  /// @brief Method GetAnchorNormalAngle, addr 0x230b520, size 0x64, virtual false, abstract: false, final false
  inline float_t GetAnchorNormalAngle(int32_t anchorIndex);

  /// @brief Method SetAnchorNormalAngle, addr 0x230b584, size 0x13c, virtual false, abstract: false, final false
  inline void SetAnchorNormalAngle(int32_t anchorIndex, float_t angle);

  /// @brief Method AutoSetAllAffectedControlPoints, addr 0x230b304, size 0x8c, virtual false, abstract: false, final false
  inline void AutoSetAllAffectedControlPoints(int32_t updatedAnchorIndex);

  /// @brief Method AutoSetAllControlPoints, addr 0x2309c34, size 0x80, virtual false, abstract: false, final false
  inline void AutoSetAllControlPoints();

  /// @brief Method AutoSetAnchorControlPoints, addr 0x230b718, size 0x4f0, virtual false, abstract: false, final false
  inline void AutoSetAnchorControlPoints(int32_t anchorIndex);

  /// @brief Method AutoSetStartAndEndControls, addr 0x230bc08, size 0x250, virtual false, abstract: false, final false
  inline void AutoSetStartAndEndControls();

  /// @brief Method LoopIndex, addr 0x230b6c0, size 0x58, virtual false, abstract: false, final false
  inline int32_t LoopIndex(int32_t i);

  /// @brief Method NotifyPathModified, addr 0x2309cb4, size 0x1c, virtual false, abstract: false, final false
  inline void NotifyPathModified();

  // Ctor Parameters [CppParam { name: "", ty: "BezierPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BezierPath(BezierPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BezierPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BezierPath(BezierPath const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierPath();

public:
  /// @brief Field bezierPathWasModifiedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___bezierPathWasModifiedEvent;

  /// @brief Field _points, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____points;

  /// @brief Field _controlMode, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__BezierPath__ControlMode ____controlMode;

  /// @brief Field _perAnchorNormalsAngle, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____perAnchorNormalsAngle;

  /// @brief Field _neighbourDistances, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____neighbourDistances;

  /// @brief Field kAutoControlLength offset 0xffffffff size 0x4
  static constexpr float_t kAutoControlLength{ 0.3 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierPath, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierPath, ___bezierPathWasModifiedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierPath, ____points) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierPath, ____controlMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierPath, ____perAnchorNormalsAngle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierPath, ____neighbourDistances) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BezierPath__ControlMode, "", "BezierPath/ControlMode");
NEED_NO_BOX(::GlobalNamespace::BezierPath);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierPath*, "", "BezierPath");
