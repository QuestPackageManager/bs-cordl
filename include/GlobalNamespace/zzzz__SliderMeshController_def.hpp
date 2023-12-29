#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderMeshController)
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class PathsHolder;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
class SliderMeshConstructor;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMeshController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMeshController);
// Type: ::SliderMeshController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4943))
// CS Name: ::SliderMeshController*
class CORDL_TYPE SliderMeshController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _numberOfFixedVertexPathSegments, offset 0x18, size 0x4
  __declspec(property(get = __get__numberOfFixedVertexPathSegments, put = __set__numberOfFixedVertexPathSegments)) int32_t _numberOfFixedVertexPathSegments;

  /// @brief Field _controlPointDistancePerSqrtNotesDistance, offset 0x1c, size 0x4
  __declspec(property(get = __get__controlPointDistancePerSqrtNotesDistance, put = __set__controlPointDistancePerSqrtNotesDistance)) float_t _controlPointDistancePerSqrtNotesDistance;

  /// @brief Field _middleAnchorPointOffsetAmount, offset 0x20, size 0x4
  __declspec(property(get = __get__middleAnchorPointOffsetAmount, put = __set__middleAnchorPointOffsetAmount)) float_t _middleAnchorPointOffsetAmount;

  /// @brief Field _middleControlPointZDistanceModifier, offset 0x24, size 0x4
  __declspec(property(get = __get__middleControlPointZDistanceModifier, put = __set__middleControlPointZDistanceModifier)) float_t _middleControlPointZDistanceModifier;

  /// @brief Field _middleControlPointYDistanceModifier, offset 0x28, size 0x4
  __declspec(property(get = __get__middleControlPointYDistanceModifier, put = __set__middleControlPointYDistanceModifier)) float_t _middleControlPointYDistanceModifier;

  /// @brief Field _middleControlPointXDistanceModifier, offset 0x2c, size 0x4
  __declspec(property(get = __get__middleControlPointXDistanceModifier, put = __set__middleControlPointXDistanceModifier)) float_t _middleControlPointXDistanceModifier;

  /// @brief Field _sliderMeshConstructor, offset 0x30, size 0x8
  __declspec(property(get = __get__sliderMeshConstructor, put = __set__sliderMeshConstructor))::GlobalNamespace::SliderMeshConstructor* _sliderMeshConstructor;

  /// @brief Field _pathsHolder, offset 0x38, size 0x8
  __declspec(property(get = __get__pathsHolder, put = __set__pathsHolder))::GlobalNamespace::PathsHolder* _pathsHolder;

  /// @brief Field _reusableAnchorsList, offset 0x40, size 0x8
  __declspec(property(get = __get__reusableAnchorsList, put = __set__reusableAnchorsList))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _reusableAnchorsList;

  /// @brief Field _reusableControlPointsArray4, offset 0x48, size 0x8
  __declspec(property(get = __get__reusableControlPointsArray4,
                      put = __set__reusableControlPointsArray4))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _reusableControlPointsArray4;

  /// @brief Field _reusableControlPointsArray2, offset 0x50, size 0x8
  __declspec(property(get = __get__reusableControlPointsArray2,
                      put = __set__reusableControlPointsArray2))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _reusableControlPointsArray2;

  __declspec(property(get = get_pathLength)) float_t pathLength;

  __declspec(property(get = get_mesh))::UnityEngine::Mesh* mesh;

  __declspec(property(get = get_pathsHolder))::GlobalNamespace::PathsHolder* pathsHolder;

  constexpr int32_t& __get__numberOfFixedVertexPathSegments();

  constexpr int32_t const& __get__numberOfFixedVertexPathSegments() const;

  constexpr void __set__numberOfFixedVertexPathSegments(int32_t value);

  constexpr float_t& __get__controlPointDistancePerSqrtNotesDistance();

  constexpr float_t const& __get__controlPointDistancePerSqrtNotesDistance() const;

  constexpr void __set__controlPointDistancePerSqrtNotesDistance(float_t value);

  constexpr float_t& __get__middleAnchorPointOffsetAmount();

  constexpr float_t const& __get__middleAnchorPointOffsetAmount() const;

  constexpr void __set__middleAnchorPointOffsetAmount(float_t value);

  constexpr float_t& __get__middleControlPointZDistanceModifier();

  constexpr float_t const& __get__middleControlPointZDistanceModifier() const;

  constexpr void __set__middleControlPointZDistanceModifier(float_t value);

  constexpr float_t& __get__middleControlPointYDistanceModifier();

  constexpr float_t const& __get__middleControlPointYDistanceModifier() const;

  constexpr void __set__middleControlPointYDistanceModifier(float_t value);

  constexpr float_t& __get__middleControlPointXDistanceModifier();

  constexpr float_t const& __get__middleControlPointXDistanceModifier() const;

  constexpr void __set__middleControlPointXDistanceModifier(float_t value);

  constexpr ::GlobalNamespace::SliderMeshConstructor*& __get__sliderMeshConstructor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderMeshConstructor*> const& __get__sliderMeshConstructor() const;

  constexpr void __set__sliderMeshConstructor(::GlobalNamespace::SliderMeshConstructor* value);

  constexpr ::GlobalNamespace::PathsHolder*& __get__pathsHolder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PathsHolder*> const& __get__pathsHolder() const;

  constexpr void __set__pathsHolder(::GlobalNamespace::PathsHolder* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get__reusableAnchorsList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get__reusableAnchorsList() const;

  constexpr void __set__reusableAnchorsList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__reusableControlPointsArray4();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__reusableControlPointsArray4() const;

  constexpr void __set__reusableControlPointsArray4(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__reusableControlPointsArray2();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__reusableControlPointsArray2() const;

  constexpr void __set__reusableControlPointsArray2(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method get_pathLength addr 0x22601f8 size 0x24 virtual false final false
  inline float_t get_pathLength();

  /// @brief Method get_mesh addr 0x2252278 size 0x1c virtual false final false
  inline ::UnityEngine::Mesh* get_mesh();

  /// @brief Method get_pathsHolder addr 0x226021c size 0x8 virtual false final false
  inline ::GlobalNamespace::PathsHolder* get_pathsHolder();

  /// @brief Method CreateBezierPathAndMesh addr 0x225babc size 0x758 virtual false final false
  inline void CreateBezierPathAndMesh(::GlobalNamespace::SliderData* sliderData, ::UnityEngine::Vector3 headNotePos, ::UnityEngine::Vector3 tailNotePos, float_t jumpSpeed, float_t noteUniformScale);

  /// @brief Method CutDirectionToControlPointPosition addr 0x2260224 size 0xdc virtual false final false
  static inline ::UnityEngine::Vector3 CutDirectionToControlPointPosition(::GlobalNamespace::NoteCutDirection noteCutDirection);

  static inline ::GlobalNamespace::SliderMeshController* New_ctor();

  /// @brief Method .ctor addr 0x2260300 size 0xd0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderMeshController(SliderMeshController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderMeshController(SliderMeshController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderMeshController();

public:
  /// @brief Field _numberOfFixedVertexPathSegments, offset: 0x18, size: 0x4, def value: None
  int32_t ____numberOfFixedVertexPathSegments;

  /// @brief Field _controlPointDistancePerSqrtNotesDistance, offset: 0x1c, size: 0x4, def value: None
  float_t ____controlPointDistancePerSqrtNotesDistance;

  /// @brief Field _middleAnchorPointOffsetAmount, offset: 0x20, size: 0x4, def value: None
  float_t ____middleAnchorPointOffsetAmount;

  /// @brief Field _middleControlPointZDistanceModifier, offset: 0x24, size: 0x4, def value: None
  float_t ____middleControlPointZDistanceModifier;

  /// @brief Field _middleControlPointYDistanceModifier, offset: 0x28, size: 0x4, def value: None
  float_t ____middleControlPointYDistanceModifier;

  /// @brief Field _middleControlPointXDistanceModifier, offset: 0x2c, size: 0x4, def value: None
  float_t ____middleControlPointXDistanceModifier;

  /// @brief Field _sliderMeshConstructor, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SliderMeshConstructor* ____sliderMeshConstructor;

  /// @brief Field _pathsHolder, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PathsHolder* ____pathsHolder;

  /// @brief Field _reusableAnchorsList, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____reusableAnchorsList;

  /// @brief Field _reusableControlPointsArray4, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____reusableControlPointsArray4;

  /// @brief Field _reusableControlPointsArray2, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____reusableControlPointsArray2;

  /// @brief Field kDefaultGameNoteSize offset 0xffffffff size 0x4
  static constexpr float_t kDefaultGameNoteSize{ 0.45 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMeshController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____numberOfFixedVertexPathSegments) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____controlPointDistancePerSqrtNotesDistance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____middleAnchorPointOffsetAmount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____middleControlPointZDistanceModifier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____middleControlPointYDistanceModifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____middleControlPointXDistanceModifier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____sliderMeshConstructor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____pathsHolder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____reusableAnchorsList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____reusableControlPointsArray4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____reusableControlPointsArray2) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMeshController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshController*, "", "SliderMeshController");
