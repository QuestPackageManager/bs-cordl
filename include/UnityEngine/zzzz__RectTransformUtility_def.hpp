#pragma once
// IWYU pragma private; include "UnityEngine/RectTransformUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RectTransformUtility)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class RectTransformUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RectTransformUtility);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RectTransformUtility
class CORDL_TYPE RectTransformUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Corners, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Corners, put = setStaticF_s_Corners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Corners;

  /// @brief Method FlipLayoutAxes, addr 0x4aacaf8, size 0x258, virtual false, abstract: false, final false
  static inline void FlipLayoutAxes(::UnityEngine::RectTransform* rect, bool keepPositioning, bool recursive);

  /// @brief Method FlipLayoutOnAxis, addr 0x4aac838, size 0x2c0, virtual false, abstract: false, final false
  static inline void FlipLayoutOnAxis(::UnityEngine::RectTransform* rect, int32_t axis, bool keepPositioning, bool recursive);

  /// @brief Method GetTransposed, addr 0x4aacd50, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetTransposed(::UnityEngine::Vector2 input);

  /// @brief Method PixelAdjustPoint, addr 0x4aabc38, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PixelAdjustPoint(::UnityEngine::Vector2 point, ::UnityEngine::Transform* elementTransform, ::UnityEngine::Canvas* canvas);

  /// @brief Method PixelAdjustPoint_Injected, addr 0x4aabcdc, size 0x5c, virtual false, abstract: false, final false
  static inline void PixelAdjustPoint_Injected(::ByRef<::UnityEngine::Vector2> point, ::UnityEngine::Transform* elementTransform, ::UnityEngine::Canvas* canvas, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method PixelAdjustRect, addr 0x4aabd38, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect PixelAdjustRect(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Canvas* canvas);

  /// @brief Method PixelAdjustRect_Injected, addr 0x4aabdd8, size 0x54, virtual false, abstract: false, final false
  static inline void PixelAdjustRect_Injected(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Canvas* canvas, ::ByRef<::UnityEngine::Rect> ret);

  /// @brief Method PointInRectangle, addr 0x4aabe2c, size 0xa8, virtual false, abstract: false, final false
  static inline bool PointInRectangle(::UnityEngine::Vector2 screenPoint, ::UnityEngine::RectTransform* rect, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4 offset);

  /// @brief Method PointInRectangle_Injected, addr 0x4aabed4, size 0x5c, virtual false, abstract: false, final false
  static inline bool PointInRectangle_Injected(::ByRef<::UnityEngine::Vector2> screenPoint, ::UnityEngine::RectTransform* rect, ::UnityEngine::Camera* cam, ::ByRef<::UnityEngine::Vector4> offset);

  /// @brief Method RectangleContainsScreenPoint, addr 0x4aabf30, size 0xd4, virtual false, abstract: false, final false
  static inline bool RectangleContainsScreenPoint(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam);

  /// @brief Method RectangleContainsScreenPoint, addr 0x4aac004, size 0xac, virtual false, abstract: false, final false
  static inline bool RectangleContainsScreenPoint(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4 offset);

  /// @brief Method ScreenPointToLocalPointInRectangle, addr 0x4aac68c, size 0xfc, virtual false, abstract: false, final false
  static inline bool ScreenPointToLocalPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ::ByRef<::UnityEngine::Vector2> localPoint);

  /// @brief Method ScreenPointToRay, addr 0x4aac4d4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Camera* cam, ::UnityEngine::Vector2 screenPos);

  /// @brief Method ScreenPointToWorldPointInRectangle, addr 0x4aac0b0, size 0x424, virtual false, abstract: false, final false
  static inline bool ScreenPointToWorldPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ::ByRef<::UnityEngine::Vector3> worldPoint);

  /// @brief Method WorldToScreenPoint, addr 0x4aac788, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 WorldToScreenPoint(::UnityEngine::Camera* cam, ::UnityEngine::Vector3 worldPoint);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Corners();

  static inline void setStaticF_s_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectTransformUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectTransformUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectTransformUtility(RectTransformUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectTransformUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectTransformUtility(RectTransformUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18330 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RectTransformUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RectTransformUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransformUtility*, "UnityEngine", "RectTransformUtility");
