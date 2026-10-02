#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WorldSpaceInput)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct WorldSpaceInput_PickResult;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class WorldSpaceInput;
}
namespace UnityEngine::UIElements {
struct WorldSpaceInput_PickResult;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::WorldSpaceInput*);
MARK_VAL_T(::UnityEngine::UIElements::WorldSpaceInput_PickResult);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::WorldSpaceInput*, "UnityEngine.UIElements", "WorldSpaceInput");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::WorldSpaceInput_PickResult, "UnityEngine.UIElements", "WorldSpaceInput/PickResult");
// Dependencies UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.WorldSpaceInput/PickResult
struct CORDL_TYPE WorldSpaceInput_PickResult {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::UnityEngine::UIElements::WorldSpaceInput_PickResult Empty;

  /// @brief Method ComputeCollisionData, addr 0x724c6f8, size 0x204, virtual false, abstract: false, final false
  inline void ComputeCollisionData(::UnityEngine::Ray ray);

  static inline ::UnityEngine::UIElements::WorldSpaceInput_PickResult getStaticF_Empty();

  static inline void setStaticF_Empty(::UnityEngine::UIElements::WorldSpaceInput_PickResult value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr WorldSpaceInput_PickResult();

  // Ctor Parameters [CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None, comment: None }, CppParam { name: "document", ty:
  // "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: None, comment: None }, CppParam { name: "pickedElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPoint", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
  constexpr WorldSpaceInput_PickResult(::UnityW<::UnityEngine::Collider> collider, ::UnityW<::UnityEngine::UIElements::UIDocument> document, ::UnityEngine::UIElements::VisualElement* pickedElement,
                                       float_t distance, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 localPoint) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4639 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field collider, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> collider;

  /// @brief Field document, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::UIDocument> document;

  /// @brief Field pickedElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* pickedElement;

  /// @brief Field distance, offset: 0x18, size: 0x4, def value: None
  float_t distance;

  /// @brief Field normal, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 normal;

  /// @brief Field point, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 point;

  /// @brief Field localPoint, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 localPoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceInput_PickResult, collider) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceInput_PickResult, document) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceInput_PickResult, pickedElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceInput_PickResult, distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceInput_PickResult, normal) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceInput_PickResult, point) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceInput_PickResult, localPoint) == 0x34, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::WorldSpaceInput_PickResult) == 0x40, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.WorldSpaceInput
class CORDL_TYPE WorldSpaceInput : public ::System::Object {
public:
  // Declarations
  using PickResult = ::UnityEngine::UIElements::WorldSpaceInput_PickResult;

  /// @brief Method GetPicking3DLocalBounds, addr 0x724c604, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetPicking3DLocalBounds(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetPicking3DWorldBounds, addr 0x724b22c, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetPicking3DWorldBounds(::UnityEngine::UIElements::VisualElement* ve);

  /// [VisibleToOtherModules(new[] { "Assembly-CSharp-testable" })]
  /// @brief Method PerformPick, addr 0x724c5ac, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* PerformPick(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Ray ray,
                                                                      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults);

  /// @brief Method PerformPick2D, addr 0x724c8fc, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* PerformPick2D(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Ray ray,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults);

  /// @brief Method PerformPick2D_LocalPoint, addr 0x724cc5c, size 0x318, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* PerformPick2D_LocalPoint(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector3 localPoint,
                                                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked);

  /// @brief Method PerformPick3D, addr 0x724c958, size 0x304, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* PerformPick3D(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Ray ray,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults);

  /// @brief Method Pick3D, addr 0x7242cd4, size 0x1ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* Pick3D(::UnityEngine::UIElements::UIDocument* document, ::UnityEngine::Ray worldRay, ::by_ref<float_t> distance);

  /// @brief Method Pick3D, addr 0x724c3ec, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* Pick3D(::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::Ray panelRay,
                                                                 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults);

  /// @brief Method Pick3D, addr 0x724c544, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* Pick3D(::UnityEngine::UIElements::VisualElement* rootVisualElement, ::UnityEngine::Ray localRay,
                                                                 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults);

  /// @brief Method PickDocument3D, addr 0x7242230, size 0x73c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::WorldSpaceInput_PickResult PickDocument3D(::UnityEngine::Ray worldRay, float_t maxDistance, int32_t layerMask);

  /// @brief Method Pick_Internal, addr 0x724c360, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* Pick_Internal(::UnityEngine::UIElements::UIDocument* document, ::UnityEngine::Ray documentRay,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WorldSpaceInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WorldSpaceInput", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WorldSpaceInput(WorldSpaceInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WorldSpaceInput", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WorldSpaceInput(WorldSpaceInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4640 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::WorldSpaceInput) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
