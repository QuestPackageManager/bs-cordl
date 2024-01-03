#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RectTransformUtility)
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace UnityEngine {
class RectTransformUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RectTransformUtility);
// Type: UnityEngine::RectTransformUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15657))
// CS Name: ::UnityEngine::RectTransformUtility*
class CORDL_TYPE RectTransformUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Corners, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Corners, put = setStaticF_s_Corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Corners;

  static inline void setStaticF_s_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Corners();

  /// @brief Method PixelAdjustPoint, addr 0x2ea78a8, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PixelAdjustPoint(::UnityEngine::Vector2 point, ::UnityEngine::Transform* elementTransform, ::UnityEngine::Canvas* canvas);

  /// @brief Method PixelAdjustRect, addr 0x2ea79a8, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect PixelAdjustRect(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Canvas* canvas);

  /// @brief Method PointInRectangle, addr 0x2ea7a9c, size 0xa8, virtual false, abstract: false, final false
  static inline bool PointInRectangle(::UnityEngine::Vector2 screenPoint, ::UnityEngine::RectTransform* rect, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4 offset);

  /// @brief Method RectangleContainsScreenPoint, addr 0x2ea7ba0, size 0xd4, virtual false, abstract: false, final false
  static inline bool RectangleContainsScreenPoint(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam);

  /// @brief Method RectangleContainsScreenPoint, addr 0x2ea7c74, size 0xac, virtual false, abstract: false, final false
  static inline bool RectangleContainsScreenPoint(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4 offset);

  /// @brief Method ScreenPointToWorldPointInRectangle, addr 0x2ea7d20, size 0x2ec, virtual false, abstract: false, final false
  static inline bool ScreenPointToWorldPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ByRef<::UnityEngine::Vector3> worldPoint);

  /// @brief Method ScreenPointToLocalPointInRectangle, addr 0x2ea813c, size 0x100, virtual false, abstract: false, final false
  static inline bool ScreenPointToLocalPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ByRef<::UnityEngine::Vector2> localPoint);

  /// @brief Method ScreenPointToRay, addr 0x2ea800c, size 0x130, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Camera* cam, ::UnityEngine::Vector2 screenPos);

  /// @brief Method WorldToScreenPoint, addr 0x2ea823c, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 WorldToScreenPoint(::UnityEngine::Camera* cam, ::UnityEngine::Vector3 worldPoint);

  /// @brief Method FlipLayoutOnAxis, addr 0x2ea82ec, size 0x2c4, virtual false, abstract: false, final false
  static inline void FlipLayoutOnAxis(::UnityEngine::RectTransform* rect, int32_t axis, bool keepPositioning, bool recursive);

  /// @brief Method FlipLayoutAxes, addr 0x2ea85b0, size 0x250, virtual false, abstract: false, final false
  static inline void FlipLayoutAxes(::UnityEngine::RectTransform* rect, bool keepPositioning, bool recursive);

  /// @brief Method GetTransposed, addr 0x2ea8800, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetTransposed(::UnityEngine::Vector2 input);

  /// @brief Method PixelAdjustPoint_Injected, addr 0x2ea794c, size 0x5c, virtual false, abstract: false, final false
  static inline void PixelAdjustPoint_Injected(ByRef<::UnityEngine::Vector2> point, ::UnityEngine::Transform* elementTransform, ::UnityEngine::Canvas* canvas, ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method PixelAdjustRect_Injected, addr 0x2ea7a48, size 0x54, virtual false, abstract: false, final false
  static inline void PixelAdjustRect_Injected(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Canvas* canvas, ByRef<::UnityEngine::Rect> ret);

  /// @brief Method PointInRectangle_Injected, addr 0x2ea7b44, size 0x5c, virtual false, abstract: false, final false
  static inline bool PointInRectangle_Injected(ByRef<::UnityEngine::Vector2> screenPoint, ::UnityEngine::RectTransform* rect, ::UnityEngine::Camera* cam, ByRef<::UnityEngine::Vector4> offset);

  // Ctor Parameters [CppParam { name: "", ty: "RectTransformUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectTransformUtility(RectTransformUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectTransformUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectTransformUtility(RectTransformUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectTransformUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RectTransformUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RectTransformUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransformUtility*, "UnityEngine", "RectTransformUtility");
