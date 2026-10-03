#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VisualElementExtensions)
namespace UnityEngine::UIElements {
class IManipulator;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::VisualElementExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElementExtensions*, "UnityEngine.UIElements", "VisualElementExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementExtensions
class CORDL_TYPE VisualElementExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method AddManipulator, addr 0x7153650, size 0xbc, virtual false, abstract: false, final false
  static inline void AddManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator);

  /// [Extension]
  /// @brief Method ChangeCoordinatesTo, addr 0x715454c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray ChangeCoordinatesTo(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* src, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* dest,
                                                       ::UnityEngine::Ray ray);

  /// [Extension]
  /// @brief Method ChangeCoordinatesTo, addr 0x7154214, size 0x338, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement* src, ::UnityEngine::UIElements::VisualElement* dest, ::UnityEngine::Rect rect);

  /// [Extension]
  /// @brief Method ChangeCoordinatesTo, addr 0x7153f18, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement* src, ::UnityEngine::UIElements::VisualElement* dest, ::UnityEngine::Vector2 point);

  /// [Extension]
  /// @brief Method ChangeCoordinatesTo_2D, addr 0x7153fb4, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ChangeCoordinatesTo_2D(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* src, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* dest,
                                                              ::UnityEngine::Vector2 point);

  /// [Extension]
  /// @brief Method ChangeCoordinatesTo_3D, addr 0x71540bc, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ChangeCoordinatesTo_3D(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* src, /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* dest,
                                                              ::UnityEngine::Vector2 point);

  /// [Extension]
  /// @brief Method IntersectLocalRay, addr 0x7154874, size 0x1c4, virtual false, abstract: false, final false
  static inline bool IntersectLocalRay(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Ray localRay, ::by_ref<::UnityEngine::Vector3> localPoint);

  /// [Extension]
  /// @brief Method IntersectWorldRay, addr 0x71545a8, size 0x2cc, virtual false, abstract: false, final false
  static inline bool IntersectWorldRay(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Ray worldRay, ::by_ref<float_t> distance,
                                       ::by_ref<::UnityEngine::Vector3> localPoint);

  /// [Extension]
  /// @brief Method LocalToWorld, addr 0x7153b44, size 0x1e8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray LocalToWorld(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Ray r);

  /// [Extension]
  /// @brief Method LocalToWorld, addr 0x7153978, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LocalToWorld(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector2 p);

  /// [Extension]
  /// @brief Method RemoveManipulator, addr 0x715370c, size 0xac, virtual false, abstract: false, final false
  static inline void RemoveManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator);

  /// [Extension]
  /// @brief Method StretchToParentSize, addr 0x7153394, size 0x2bc, virtual false, abstract: false, final false
  static inline void StretchToParentSize(::UnityEngine::UIElements::VisualElement* elem);

  /// [Extension]
  /// @brief Method TransformRay, addr 0x7154a38, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray TransformRay(::UnityEngine::Matrix4x4 m, ::UnityEngine::Ray ray);

  /// [Extension]
  /// @brief Method WorldToLocal, addr 0x7153d2c, size 0x1ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray WorldToLocal(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Ray r);

  /// [Extension]
  /// @brief Method WorldToLocal, addr 0x7153a58, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect WorldToLocal(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Rect r);

  /// [Extension]
  /// @brief Method WorldToLocal, addr 0x71537b8, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 WorldToLocal(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector2 p);

  /// [Extension]
  /// @brief Method WorldToLocal3D, addr 0x715389c, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 WorldToLocal3D(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector3 p);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementExtensions(VisualElementExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementExtensions(VisualElementExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5330 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::VisualElementExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
