#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderMeshController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderMeshController)
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
class PathsHolder;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class SliderMeshConstructor;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderMeshController
class CORDL_TYPE SliderMeshController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _controlPointDistancePerSqrtNotesDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__controlPointDistancePerSqrtNotesDistance,
                      put = __cordl_internal_set__controlPointDistancePerSqrtNotesDistance)) float_t _controlPointDistancePerSqrtNotesDistance;

  /// @brief Field _middleAnchorPointOffsetAmount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__middleAnchorPointOffsetAmount, put = __cordl_internal_set__middleAnchorPointOffsetAmount)) float_t _middleAnchorPointOffsetAmount;

  /// @brief Field _middleControlPointXDistanceModifier, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__middleControlPointXDistanceModifier, put = __cordl_internal_set__middleControlPointXDistanceModifier)) float_t _middleControlPointXDistanceModifier;

  /// @brief Field _middleControlPointYDistanceModifier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__middleControlPointYDistanceModifier, put = __cordl_internal_set__middleControlPointYDistanceModifier)) float_t _middleControlPointYDistanceModifier;

  /// @brief Field _middleControlPointZDistanceModifier, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__middleControlPointZDistanceModifier, put = __cordl_internal_set__middleControlPointZDistanceModifier)) float_t _middleControlPointZDistanceModifier;

  /// @brief Field _numberOfFixedVertexPathSegments, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfFixedVertexPathSegments, put = __cordl_internal_set__numberOfFixedVertexPathSegments)) int32_t _numberOfFixedVertexPathSegments;

  /// @brief Field _pathsHolder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pathsHolder, put = __cordl_internal_set__pathsHolder)) ::GlobalNamespace::PathsHolder* _pathsHolder;

  /// @brief Field _reusableAnchorsList, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableAnchorsList,
                      put = __cordl_internal_set__reusableAnchorsList)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _reusableAnchorsList;

  /// @brief Field _reusableControlPointsArray2, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableControlPointsArray2,
                      put = __cordl_internal_set__reusableControlPointsArray2)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>
      _reusableControlPointsArray2;

  /// @brief Field _reusableControlPointsArray4, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableControlPointsArray4,
                      put = __cordl_internal_set__reusableControlPointsArray4)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>
      _reusableControlPointsArray4;

  /// @brief Field _sliderMeshConstructor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderMeshConstructor, put = __cordl_internal_set__sliderMeshConstructor)) ::UnityW<::GlobalNamespace::SliderMeshConstructor> _sliderMeshConstructor;

  __declspec(property(get = get_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_pathLength)) float_t pathLength;

  __declspec(property(get = get_pathsHolder)) ::GlobalNamespace::PathsHolder* pathsHolder;

  /// @brief Method CreateBezierPathAndMesh, addr 0x3b7712c, size 0x758, virtual false, abstract: false, final false
  inline void CreateBezierPathAndMesh(::GlobalNamespace::SliderData* sliderData, ::UnityEngine::Vector3 headNotePos, ::UnityEngine::Vector3 tailNotePos, float_t jumpSpeed, float_t noteUniformScale);

  /// @brief Method CutDirectionToControlPointPosition, addr 0x3b7c1ec, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 CutDirectionToControlPointPosition(::GlobalNamespace::NoteCutDirection noteCutDirection);

  static inline ::GlobalNamespace::SliderMeshController* New_ctor();

  constexpr float_t const& __cordl_internal_get__controlPointDistancePerSqrtNotesDistance() const;

  constexpr float_t& __cordl_internal_get__controlPointDistancePerSqrtNotesDistance();

  constexpr float_t const& __cordl_internal_get__middleAnchorPointOffsetAmount() const;

  constexpr float_t& __cordl_internal_get__middleAnchorPointOffsetAmount();

  constexpr float_t const& __cordl_internal_get__middleControlPointXDistanceModifier() const;

  constexpr float_t& __cordl_internal_get__middleControlPointXDistanceModifier();

  constexpr float_t const& __cordl_internal_get__middleControlPointYDistanceModifier() const;

  constexpr float_t& __cordl_internal_get__middleControlPointYDistanceModifier();

  constexpr float_t const& __cordl_internal_get__middleControlPointZDistanceModifier() const;

  constexpr float_t& __cordl_internal_get__middleControlPointZDistanceModifier();

  constexpr int32_t const& __cordl_internal_get__numberOfFixedVertexPathSegments() const;

  constexpr int32_t& __cordl_internal_get__numberOfFixedVertexPathSegments();

  constexpr ::GlobalNamespace::PathsHolder* const& __cordl_internal_get__pathsHolder() const;

  constexpr ::GlobalNamespace::PathsHolder*& __cordl_internal_get__pathsHolder();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get__reusableAnchorsList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__reusableAnchorsList();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__reusableControlPointsArray2() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__reusableControlPointsArray2();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__reusableControlPointsArray4() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__reusableControlPointsArray4();

  constexpr ::UnityW<::GlobalNamespace::SliderMeshConstructor> const& __cordl_internal_get__sliderMeshConstructor() const;

  constexpr ::UnityW<::GlobalNamespace::SliderMeshConstructor>& __cordl_internal_get__sliderMeshConstructor();

  constexpr void __cordl_internal_set__controlPointDistancePerSqrtNotesDistance(float_t value);

  constexpr void __cordl_internal_set__middleAnchorPointOffsetAmount(float_t value);

  constexpr void __cordl_internal_set__middleControlPointXDistanceModifier(float_t value);

  constexpr void __cordl_internal_set__middleControlPointYDistanceModifier(float_t value);

  constexpr void __cordl_internal_set__middleControlPointZDistanceModifier(float_t value);

  constexpr void __cordl_internal_set__numberOfFixedVertexPathSegments(int32_t value);

  constexpr void __cordl_internal_set__pathsHolder(::GlobalNamespace::PathsHolder* value);

  constexpr void __cordl_internal_set__reusableAnchorsList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set__reusableControlPointsArray2(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__reusableControlPointsArray4(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__sliderMeshConstructor(::UnityW<::GlobalNamespace::SliderMeshConstructor> value);

  /// @brief Method .ctor, addr 0x3b7c264, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mesh, addr 0x3b7c1c8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_pathLength, addr 0x3b7c1a4, size 0x24, virtual false, abstract: false, final false
  inline float_t get_pathLength();

  /// @brief Method get_pathsHolder, addr 0x3b7c1e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PathsHolder* get_pathsHolder();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderMeshController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderMeshController(SliderMeshController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderMeshController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderMeshController(SliderMeshController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4178 };

  /// @brief Field kDefaultGameNoteSize offset 0xffffffff size 0x4
  static constexpr float_t kDefaultGameNoteSize{ static_cast<float_t>(0.45f) };

  /// @brief Field _numberOfFixedVertexPathSegments, offset: 0x20, size: 0x4, def value: None
  int32_t ____numberOfFixedVertexPathSegments;

  /// @brief Field _controlPointDistancePerSqrtNotesDistance, offset: 0x24, size: 0x4, def value: None
  float_t ____controlPointDistancePerSqrtNotesDistance;

  /// @brief Field _middleAnchorPointOffsetAmount, offset: 0x28, size: 0x4, def value: None
  float_t ____middleAnchorPointOffsetAmount;

  /// @brief Field _middleControlPointZDistanceModifier, offset: 0x2c, size: 0x4, def value: None
  float_t ____middleControlPointZDistanceModifier;

  /// @brief Field _middleControlPointYDistanceModifier, offset: 0x30, size: 0x4, def value: None
  float_t ____middleControlPointYDistanceModifier;

  /// @brief Field _middleControlPointXDistanceModifier, offset: 0x34, size: 0x4, def value: None
  float_t ____middleControlPointXDistanceModifier;

  /// @brief Field _sliderMeshConstructor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderMeshConstructor> ____sliderMeshConstructor;

  /// @brief Field _pathsHolder, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PathsHolder* ____pathsHolder;

  /// @brief Field _reusableAnchorsList, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____reusableAnchorsList;

  /// @brief Field _reusableControlPointsArray4, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____reusableControlPointsArray4;

  /// @brief Field _reusableControlPointsArray2, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____reusableControlPointsArray2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____numberOfFixedVertexPathSegments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____controlPointDistancePerSqrtNotesDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____middleAnchorPointOffsetAmount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____middleControlPointZDistanceModifier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____middleControlPointYDistanceModifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____middleControlPointXDistanceModifier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____sliderMeshConstructor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____pathsHolder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____reusableAnchorsList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____reusableControlPointsArray4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMeshController, ____reusableControlPointsArray2) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMeshController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMeshController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshController*, "", "SliderMeshController");
