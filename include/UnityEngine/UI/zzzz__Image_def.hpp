#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "UnityEngine/zzzz__ICanvasRaycastFilter_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Image)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::U2D {
class SpriteAtlas;
}
namespace UnityEngine::UI {
struct Image_FillMethod;
}
namespace UnityEngine::UI {
struct Image_Origin180;
}
namespace UnityEngine::UI {
struct Image_Origin360;
}
namespace UnityEngine::UI {
struct Image_Origin90;
}
namespace UnityEngine::UI {
struct Image_OriginHorizontal;
}
namespace UnityEngine::UI {
struct Image_OriginVertical;
}
namespace UnityEngine::UI {
struct Image_Type;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture;
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
namespace UnityEngine::UI {
struct Image_FillMethod;
}
namespace UnityEngine::UI {
struct Image_Origin180;
}
namespace UnityEngine::UI {
struct Image_Origin360;
}
namespace UnityEngine::UI {
struct Image_Origin90;
}
namespace UnityEngine::UI {
struct Image_OriginHorizontal;
}
namespace UnityEngine::UI {
struct Image_OriginVertical;
}
namespace UnityEngine::UI {
struct Image_Type;
}
namespace UnityEngine::UI {
class Image;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::Image_FillMethod);
MARK_VAL_T(::UnityEngine::UI::Image_Origin180);
MARK_VAL_T(::UnityEngine::UI::Image_Origin360);
MARK_VAL_T(::UnityEngine::UI::Image_Origin90);
MARK_VAL_T(::UnityEngine::UI::Image_OriginHorizontal);
MARK_VAL_T(::UnityEngine::UI::Image_OriginVertical);
MARK_VAL_T(::UnityEngine::UI::Image_Type);
MARK_REF_PTR_T(::UnityEngine::UI::Image);
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Image/Type
struct CORDL_TYPE Image_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Image_Type_Unwrapped
  enum struct __Image_Type_Unwrapped : int32_t {
    __E_Simple = static_cast<int32_t>(0x0),
    __E_Sliced = static_cast<int32_t>(0x1),
    __E_Tiled = static_cast<int32_t>(0x2),
    __E_Filled = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Image_Type_Unwrapped() const noexcept {
    return static_cast<__Image_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Image_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Image_Type(int32_t value__) noexcept;

  /// @brief Field Filled value: I32(3)
  static ::UnityEngine::UI::Image_Type const Filled;

  /// @brief Field Simple value: I32(0)
  static ::UnityEngine::UI::Image_Type const Simple;

  /// @brief Field Sliced value: I32(1)
  static ::UnityEngine::UI::Image_Type const Sliced;

  /// @brief Field Tiled value: I32(2)
  static ::UnityEngine::UI::Image_Type const Tiled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15064 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Image_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image_Type, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Image/FillMethod
struct CORDL_TYPE Image_FillMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Image_FillMethod_Unwrapped
  enum struct __Image_FillMethod_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
    __E_Radial90 = static_cast<int32_t>(0x2),
    __E_Radial180 = static_cast<int32_t>(0x3),
    __E_Radial360 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Image_FillMethod_Unwrapped() const noexcept {
    return static_cast<__Image_FillMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Image_FillMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Image_FillMethod(int32_t value__) noexcept;

  /// @brief Field Horizontal value: I32(0)
  static ::UnityEngine::UI::Image_FillMethod const Horizontal;

  /// @brief Field Radial180 value: I32(3)
  static ::UnityEngine::UI::Image_FillMethod const Radial180;

  /// @brief Field Radial360 value: I32(4)
  static ::UnityEngine::UI::Image_FillMethod const Radial360;

  /// @brief Field Radial90 value: I32(2)
  static ::UnityEngine::UI::Image_FillMethod const Radial90;

  /// @brief Field Vertical value: I32(1)
  static ::UnityEngine::UI::Image_FillMethod const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15065 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Image_FillMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image_FillMethod, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Image/OriginHorizontal
struct CORDL_TYPE Image_OriginHorizontal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Image_OriginHorizontal_Unwrapped
  enum struct __Image_OriginHorizontal_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Image_OriginHorizontal_Unwrapped() const noexcept {
    return static_cast<__Image_OriginHorizontal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Image_OriginHorizontal();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Image_OriginHorizontal(int32_t value__) noexcept;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::UI::Image_OriginHorizontal const Left;

  /// @brief Field Right value: I32(1)
  static ::UnityEngine::UI::Image_OriginHorizontal const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15066 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Image_OriginHorizontal, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image_OriginHorizontal, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Image/OriginVertical
struct CORDL_TYPE Image_OriginVertical {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Image_OriginVertical_Unwrapped
  enum struct __Image_OriginVertical_Unwrapped : int32_t {
    __E_Bottom = static_cast<int32_t>(0x0),
    __E_Top = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Image_OriginVertical_Unwrapped() const noexcept {
    return static_cast<__Image_OriginVertical_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Image_OriginVertical();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Image_OriginVertical(int32_t value__) noexcept;

  /// @brief Field Bottom value: I32(0)
  static ::UnityEngine::UI::Image_OriginVertical const Bottom;

  /// @brief Field Top value: I32(1)
  static ::UnityEngine::UI::Image_OriginVertical const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15067 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Image_OriginVertical, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image_OriginVertical, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Image/Origin90
struct CORDL_TYPE Image_Origin90 {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Image_Origin90_Unwrapped
  enum struct __Image_Origin90_Unwrapped : int32_t {
    __E_BottomLeft = static_cast<int32_t>(0x0),
    __E_TopLeft = static_cast<int32_t>(0x1),
    __E_TopRight = static_cast<int32_t>(0x2),
    __E_BottomRight = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Image_Origin90_Unwrapped() const noexcept {
    return static_cast<__Image_Origin90_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Image_Origin90();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Image_Origin90(int32_t value__) noexcept;

  /// @brief Field BottomLeft value: I32(0)
  static ::UnityEngine::UI::Image_Origin90 const BottomLeft;

  /// @brief Field BottomRight value: I32(3)
  static ::UnityEngine::UI::Image_Origin90 const BottomRight;

  /// @brief Field TopLeft value: I32(1)
  static ::UnityEngine::UI::Image_Origin90 const TopLeft;

  /// @brief Field TopRight value: I32(2)
  static ::UnityEngine::UI::Image_Origin90 const TopRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15068 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Image_Origin90, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image_Origin90, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Image/Origin180
struct CORDL_TYPE Image_Origin180 {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Image_Origin180_Unwrapped
  enum struct __Image_Origin180_Unwrapped : int32_t {
    __E_Bottom = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Image_Origin180_Unwrapped() const noexcept {
    return static_cast<__Image_Origin180_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Image_Origin180();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Image_Origin180(int32_t value__) noexcept;

  /// @brief Field Bottom value: I32(0)
  static ::UnityEngine::UI::Image_Origin180 const Bottom;

  /// @brief Field Left value: I32(1)
  static ::UnityEngine::UI::Image_Origin180 const Left;

  /// @brief Field Right value: I32(3)
  static ::UnityEngine::UI::Image_Origin180 const Right;

  /// @brief Field Top value: I32(2)
  static ::UnityEngine::UI::Image_Origin180 const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15069 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Image_Origin180, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image_Origin180, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Image/Origin360
struct CORDL_TYPE Image_Origin360 {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Image_Origin360_Unwrapped
  enum struct __Image_Origin360_Unwrapped : int32_t {
    __E_Bottom = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Left = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Image_Origin360_Unwrapped() const noexcept {
    return static_cast<__Image_Origin360_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Image_Origin360();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Image_Origin360(int32_t value__) noexcept;

  /// @brief Field Bottom value: I32(0)
  static ::UnityEngine::UI::Image_Origin360 const Bottom;

  /// @brief Field Left value: I32(3)
  static ::UnityEngine::UI::Image_Origin360 const Left;

  /// @brief Field Right value: I32(1)
  static ::UnityEngine::UI::Image_Origin360 const Right;

  /// @brief Field Top value: I32(2)
  static ::UnityEngine::UI::Image_Origin360 const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15070 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Image_Origin360, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image_Origin360, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.ICanvasRaycastFilter, UnityEngine.ISerializationCallbackReceiver, UnityEngine.UI.ILayoutElement, UnityEngine.UI.Image::FillMethod, UnityEngine.UI.Image::Type,
// UnityEngine.UI.MaskableGraphic
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Image
class CORDL_TYPE Image : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  using FillMethod = ::UnityEngine::UI::Image_FillMethod;

  using Origin180 = ::UnityEngine::UI::Image_Origin180;

  using Origin360 = ::UnityEngine::UI::Image_Origin360;

  using Origin90 = ::UnityEngine::UI::Image_Origin90;

  using OriginHorizontal = ::UnityEngine::UI::Image_OriginHorizontal;

  using OriginVertical = ::UnityEngine::UI::Image_OriginVertical;

  using Type = ::UnityEngine::UI::Image_Type;

  __declspec(property(get = get_activeSprite)) ::UnityW<::UnityEngine::Sprite> activeSprite;

  __declspec(property(get = get_alphaHitTestMinimumThreshold, put = set_alphaHitTestMinimumThreshold)) float_t alphaHitTestMinimumThreshold;

  __declspec(property(get = get_eventAlphaThreshold, put = set_eventAlphaThreshold)) float_t eventAlphaThreshold;

  __declspec(property(get = get_fillAmount, put = set_fillAmount)) float_t fillAmount;

  __declspec(property(get = get_fillCenter, put = set_fillCenter)) bool fillCenter;

  __declspec(property(get = get_fillClockwise, put = set_fillClockwise)) bool fillClockwise;

  __declspec(property(get = get_fillMethod, put = set_fillMethod)) ::UnityEngine::UI::Image_FillMethod fillMethod;

  __declspec(property(get = get_fillOrigin, put = set_fillOrigin)) int32_t fillOrigin;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_hasBorder)) bool hasBorder;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  /// @brief Field m_AlphaHitTestMinimumThreshold, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlphaHitTestMinimumThreshold, put = __cordl_internal_set_m_AlphaHitTestMinimumThreshold)) float_t m_AlphaHitTestMinimumThreshold;

  /// @brief Field m_CachedReferencePixelsPerUnit, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedReferencePixelsPerUnit, put = __cordl_internal_set_m_CachedReferencePixelsPerUnit)) float_t m_CachedReferencePixelsPerUnit;

  /// @brief Field m_FillAmount, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FillAmount, put = __cordl_internal_set_m_FillAmount)) float_t m_FillAmount;

  /// @brief Field m_FillCenter, offset 0xed, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FillCenter, put = __cordl_internal_set_m_FillCenter)) bool m_FillCenter;

  /// @brief Field m_FillClockwise, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FillClockwise, put = __cordl_internal_set_m_FillClockwise)) bool m_FillClockwise;

  /// @brief Field m_FillMethod, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FillMethod, put = __cordl_internal_set_m_FillMethod)) ::UnityEngine::UI::Image_FillMethod m_FillMethod;

  /// @brief Field m_FillOrigin, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FillOrigin, put = __cordl_internal_set_m_FillOrigin)) int32_t m_FillOrigin;

  /// @brief Field m_OverrideSprite, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OverrideSprite, put = __cordl_internal_set_m_OverrideSprite)) ::UnityW<::UnityEngine::Sprite> m_OverrideSprite;

  /// @brief Field m_PixelsPerUnitMultiplier, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PixelsPerUnitMultiplier, put = __cordl_internal_set_m_PixelsPerUnitMultiplier)) float_t m_PixelsPerUnitMultiplier;

  /// @brief Field m_PreserveAspect, offset 0xec, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PreserveAspect, put = __cordl_internal_set_m_PreserveAspect)) bool m_PreserveAspect;

  /// @brief Field m_Sprite, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sprite, put = __cordl_internal_set_m_Sprite)) ::UnityW<::UnityEngine::Sprite> m_Sprite;

  /// @brief Field m_Tracked, offset 0x104, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Tracked, put = __cordl_internal_set_m_Tracked)) bool m_Tracked;

  /// @brief Field m_TrackedTexturelessImages, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_TrackedTexturelessImages,
                      put = setStaticF_m_TrackedTexturelessImages)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* m_TrackedTexturelessImages;

  /// @brief Field m_Type, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::UnityEngine::UI::Image_Type m_Type;

  /// @brief Field m_UseSpriteMesh, offset 0x105, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseSpriteMesh, put = __cordl_internal_set_m_UseSpriteMesh)) bool m_UseSpriteMesh;

  __declspec(property(get = get_mainTexture)) ::UnityW<::UnityEngine::Texture> mainTexture;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_multipliedPixelsPerUnit)) float_t multipliedPixelsPerUnit;

  __declspec(property(get = get_overrideSprite, put = set_overrideSprite)) ::UnityW<::UnityEngine::Sprite> overrideSprite;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_pixelsPerUnitMultiplier, put = set_pixelsPerUnitMultiplier)) float_t pixelsPerUnitMultiplier;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_preserveAspect, put = set_preserveAspect)) bool preserveAspect;

  /// @brief Field s_ETC1DefaultUI, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ETC1DefaultUI, put = setStaticF_s_ETC1DefaultUI)) ::UnityW<::UnityEngine::Material> s_ETC1DefaultUI;

  /// @brief Field s_Initialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_Initialized, put = setStaticF_s_Initialized)) bool s_Initialized;

  /// @brief Field s_UVScratch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UVScratch, put = setStaticF_s_UVScratch)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_UVScratch;

  /// @brief Field s_Uv, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Uv, put = setStaticF_s_Uv)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Uv;

  /// @brief Field s_VertScratch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VertScratch, put = setStaticF_s_VertScratch)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_VertScratch;

  /// @brief Field s_Xy, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Xy, put = setStaticF_s_Xy)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Xy;

  __declspec(property(get = get_sprite, put = set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::UI::Image_Type type;

  __declspec(property(get = get_useSpriteMesh, put = set_useSpriteMesh)) bool useSpriteMesh;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Method AddQuad, addr 0x496ad40, size 0x154, virtual false, abstract: false, final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uvMin,
                             ::UnityEngine::Vector2 uvMax);

  /// @brief Method AddQuad, addr 0x496ae94, size 0xe4, virtual false, abstract: false, final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadPositions, ::UnityEngine::Color32 color,
                             ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadUVs);

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x496b4c4, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x496b4c8, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method DisableSpriteOptimizations, addr 0x4967408, size 0x8, virtual false, abstract: false, final false
  inline void DisableSpriteOptimizations();

  /// @brief Method GenerateFilledSprite, addr 0x4969f34, size 0x8e8, virtual false, abstract: false, final false
  inline void GenerateFilledSprite(::UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);

  /// @brief Method GenerateSimpleSprite, addr 0x4968710, size 0x2c4, virtual false, abstract: false, final false
  inline void GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);

  /// @brief Method GenerateSlicedSprite, addr 0x4968cb4, size 0x528, virtual false, abstract: false, final false
  inline void GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method GenerateSprite, addr 0x49689d4, size 0x2e0, virtual false, abstract: false, final false
  inline void GenerateSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);

  /// @brief Method GenerateTiledSprite, addr 0x49691dc, size 0xd58, virtual false, abstract: false, final false
  inline void GenerateTiledSprite(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method GetAdjustedBorders, addr 0x496ac80, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect adjustedRect);

  /// @brief Method GetDrawingDimensions, addr 0x49680dc, size 0x3b0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);

  /// @brief Method IsRaycastLocationValid, addr 0x496b684, size 0x38c, virtual true, abstract: false, final false
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* eventCamera);

  /// @brief Method MapCoordinate, addr 0x496ba10, size 0x258, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 MapCoordinate(::UnityEngine::Vector2 local, ::UnityEngine::Rect rect);

  static inline ::UnityEngine::UI::Image* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x4967ff8, size 0x50, virtual true, abstract: false, final false
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x4967ff4, size 0x4, virtual true, abstract: false, final false
  inline void OnBeforeSerialize();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x496ab78, size 0x108, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x496be10, size 0x38, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x496a990, size 0x74, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x496a974, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPopulateMesh, addr 0x49685cc, size 0x144, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method PreserveSpriteAspectRatio, addr 0x4968048, size 0x94, virtual false, abstract: false, final false
  inline void PreserveSpriteAspectRatio(::ByRef<::UnityEngine::Rect> rect, ::UnityEngine::Vector2 spriteSize);

  /// @brief Method RadialCut, addr 0x496af78, size 0x120, virtual false, abstract: false, final false
  static inline bool RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uv, float_t fill, bool invert,
                               int32_t corner);

  /// @brief Method RadialCut, addr 0x496b098, size 0x42c, virtual false, abstract: false, final false
  static inline void RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, float_t cos, float_t sin, bool invert, int32_t corner);

  /// @brief Method RebuildImage, addr 0x496bc68, size 0x1a8, virtual false, abstract: false, final false
  static inline void RebuildImage(::UnityEngine::U2D::SpriteAtlas* spriteAtlas);

  /// @brief Method SetNativeSize, addr 0x496848c, size 0x140, virtual true, abstract: false, final false
  inline void SetNativeSize();

  /// @brief Method TrackImage, addr 0x496a81c, size 0x158, virtual false, abstract: false, final false
  static inline void TrackImage(::UnityEngine::UI::Image* g);

  /// @brief Method TrackSprite, addr 0x496731c, size 0xec, virtual false, abstract: false, final false
  inline void TrackSprite();

  /// @brief Method UnTrackImage, addr 0x496aa04, size 0x80, virtual false, abstract: false, final false
  static inline void UnTrackImage(::UnityEngine::UI::Image* g);

  /// @brief Method UpdateMaterial, addr 0x496aa84, size 0xf4, virtual true, abstract: false, final false
  inline void UpdateMaterial();

  constexpr float_t const& __cordl_internal_get_m_AlphaHitTestMinimumThreshold() const;

  constexpr float_t& __cordl_internal_get_m_AlphaHitTestMinimumThreshold();

  constexpr float_t const& __cordl_internal_get_m_CachedReferencePixelsPerUnit() const;

  constexpr float_t& __cordl_internal_get_m_CachedReferencePixelsPerUnit();

  constexpr float_t const& __cordl_internal_get_m_FillAmount() const;

  constexpr float_t& __cordl_internal_get_m_FillAmount();

  constexpr bool const& __cordl_internal_get_m_FillCenter() const;

  constexpr bool& __cordl_internal_get_m_FillCenter();

  constexpr bool const& __cordl_internal_get_m_FillClockwise() const;

  constexpr bool& __cordl_internal_get_m_FillClockwise();

  constexpr ::UnityEngine::UI::Image_FillMethod const& __cordl_internal_get_m_FillMethod() const;

  constexpr ::UnityEngine::UI::Image_FillMethod& __cordl_internal_get_m_FillMethod();

  constexpr int32_t const& __cordl_internal_get_m_FillOrigin() const;

  constexpr int32_t& __cordl_internal_get_m_FillOrigin();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_OverrideSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_OverrideSprite();

  constexpr float_t const& __cordl_internal_get_m_PixelsPerUnitMultiplier() const;

  constexpr float_t& __cordl_internal_get_m_PixelsPerUnitMultiplier();

  constexpr bool const& __cordl_internal_get_m_PreserveAspect() const;

  constexpr bool& __cordl_internal_get_m_PreserveAspect();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_Sprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_Sprite();

  constexpr bool const& __cordl_internal_get_m_Tracked() const;

  constexpr bool& __cordl_internal_get_m_Tracked();

  constexpr ::UnityEngine::UI::Image_Type const& __cordl_internal_get_m_Type() const;

  constexpr ::UnityEngine::UI::Image_Type& __cordl_internal_get_m_Type();

  constexpr bool const& __cordl_internal_get_m_UseSpriteMesh() const;

  constexpr bool& __cordl_internal_get_m_UseSpriteMesh();

  constexpr void __cordl_internal_set_m_AlphaHitTestMinimumThreshold(float_t value);

  constexpr void __cordl_internal_set_m_CachedReferencePixelsPerUnit(float_t value);

  constexpr void __cordl_internal_set_m_FillAmount(float_t value);

  constexpr void __cordl_internal_set_m_FillCenter(bool value);

  constexpr void __cordl_internal_set_m_FillClockwise(bool value);

  constexpr void __cordl_internal_set_m_FillMethod(::UnityEngine::UI::Image_FillMethod value);

  constexpr void __cordl_internal_set_m_FillOrigin(int32_t value);

  constexpr void __cordl_internal_set_m_OverrideSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_PixelsPerUnitMultiplier(float_t value);

  constexpr void __cordl_internal_set_m_PreserveAspect(bool value);

  constexpr void __cordl_internal_set_m_Sprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_Tracked(bool value);

  constexpr void __cordl_internal_set_m_Type(::UnityEngine::UI::Image_Type value);

  constexpr void __cordl_internal_set_m_UseSpriteMesh(bool value);

  /// @brief Method .ctor, addr 0x4967a40, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0, addr 0x496728c, size 0x90, virtual false, abstract: false, final false
  inline void _set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0();

  /// @brief Method <set_sprite>g__SpriteSupportsAlphaHitTest|11_1, addr 0x496bf70, size 0x12c, virtual false, abstract: false, final false
  inline bool _set_sprite_g__SpriteSupportsAlphaHitTest_11_1();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* getStaticF_m_TrackedTexturelessImages();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_ETC1DefaultUI();

  static inline bool getStaticF_s_Initialized();

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_UVScratch();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Uv();

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_VertScratch();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Xy();

  /// @brief Method get_activeSprite, addr 0x4967414, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_activeSprite();

  /// @brief Method get_alphaHitTestMinimumThreshold, addr 0x49679b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_alphaHitTestMinimumThreshold();

  /// @brief Method get_defaultETC1GraphicMaterial, addr 0x4967a80, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_defaultETC1GraphicMaterial();

  /// @brief Method get_eventAlphaThreshold, addr 0x4967854, size 0x10, virtual false, abstract: false, final false
  inline float_t get_eventAlphaThreshold();

  /// @brief Method get_fillAmount, addr 0x49676ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fillAmount();

  /// @brief Method get_fillCenter, addr 0x49675a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_fillCenter();

  /// @brief Method get_fillClockwise, addr 0x4967744, size 0x8, virtual false, abstract: false, final false
  inline bool get_fillClockwise();

  /// @brief Method get_fillMethod, addr 0x496762c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Image_FillMethod get_fillMethod();

  /// @brief Method get_fillOrigin, addr 0x49677cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fillOrigin();

  /// @brief Method get_flexibleHeight, addr 0x496b674, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x496b59c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_hasBorder, addr 0x4967cd4, size 0xb8, virtual false, abstract: false, final false
  inline bool get_hasBorder();

  /// @brief Method get_layoutPriority, addr 0x496b67c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method get_mainTexture, addr 0x4967b5c, size 0x178, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_material, addr 0x4967ec4, size 0x12c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_minHeight, addr 0x496b5a4, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x496b4cc, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_multipliedPixelsPerUnit, addr 0x4967ea8, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_multipliedPixelsPerUnit();

  /// @brief Method get_overrideSprite, addr 0x4967410, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_overrideSprite();

  /// @brief Method get_pixelsPerUnit, addr 0x4967db4, size 0xf4, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_pixelsPerUnitMultiplier, addr 0x4967d8c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnitMultiplier();

  /// @brief Method get_preferredHeight, addr 0x496b5ac, size 0xc8, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x496b4d4, size 0xc8, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_preserveAspect, addr 0x496751c, size 0x8, virtual false, abstract: false, final false
  inline bool get_preserveAspect();

  /// @brief Method get_sprite, addr 0x4967284, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

  /// @brief Method get_type, addr 0x4967514, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Image_Type get_type();

  /// @brief Method get_useSpriteMesh, addr 0x49679b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_useSpriteMesh();

  /// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
  constexpr ::UnityEngine::ICanvasRaycastFilter* i___UnityEngine__ICanvasRaycastFilter() noexcept;

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  static inline void setStaticF_m_TrackedTexturelessImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* value);

  static inline void setStaticF_s_ETC1DefaultUI(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_Initialized(bool value);

  static inline void setStaticF_s_UVScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline void setStaticF_s_Uv(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_s_VertScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline void setStaticF_s_Xy(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method set_alphaHitTestMinimumThreshold, addr 0x4967870, size 0x140, virtual false, abstract: false, final false
  inline void set_alphaHitTestMinimumThreshold(float_t value);

  /// @brief Method set_eventAlphaThreshold, addr 0x4967864, size 0xc, virtual false, abstract: false, final false
  inline void set_eventAlphaThreshold(float_t value);

  /// @brief Method set_fillAmount, addr 0x49676b4, size 0x90, virtual false, abstract: false, final false
  inline void set_fillAmount(float_t value);

  /// @brief Method set_fillCenter, addr 0x49675ac, size 0x80, virtual false, abstract: false, final false
  inline void set_fillCenter(bool value);

  /// @brief Method set_fillClockwise, addr 0x496774c, size 0x80, virtual false, abstract: false, final false
  inline void set_fillClockwise(bool value);

  /// @brief Method set_fillMethod, addr 0x4967634, size 0x78, virtual false, abstract: false, final false
  inline void set_fillMethod(::UnityEngine::UI::Image_FillMethod value);

  /// @brief Method set_fillOrigin, addr 0x49677d4, size 0x80, virtual false, abstract: false, final false
  inline void set_fillOrigin(int32_t value);

  /// @brief Method set_material, addr 0x4967ff0, size 0x4, virtual true, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_overrideSprite, addr 0x496748c, size 0x88, virtual false, abstract: false, final false
  inline void set_overrideSprite(::UnityEngine::Sprite* value);

  /// @brief Method set_pixelsPerUnitMultiplier, addr 0x4967d94, size 0x20, virtual false, abstract: false, final false
  inline void set_pixelsPerUnitMultiplier(float_t value);

  /// @brief Method set_preserveAspect, addr 0x4967524, size 0x80, virtual false, abstract: false, final false
  inline void set_preserveAspect(bool value);

  /// @brief Method set_sprite, addr 0x495a910, size 0x2b4, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method set_type, addr 0x495abc4, size 0x80, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::UI::Image_Type value);

  /// @brief Method set_useSpriteMesh, addr 0x49679c0, size 0x80, virtual false, abstract: false, final false
  inline void set_useSpriteMesh(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Image();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Image(Image&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Image(Image const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15071 };

  /// @brief Field m_Sprite, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_Sprite;

  /// @brief Field m_OverrideSprite, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_OverrideSprite;

  /// @brief Field m_Type, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::UI::Image_Type ___m_Type;

  /// @brief Field m_PreserveAspect, offset: 0xec, size: 0x1, def value: None
  bool ___m_PreserveAspect;

  /// @brief Field m_FillCenter, offset: 0xed, size: 0x1, def value: None
  bool ___m_FillCenter;

  /// @brief Field m_FillMethod, offset: 0xf0, size: 0x4, def value: None
  ::UnityEngine::UI::Image_FillMethod ___m_FillMethod;

  /// @brief Field m_FillAmount, offset: 0xf4, size: 0x4, def value: None
  float_t ___m_FillAmount;

  /// @brief Field m_FillClockwise, offset: 0xf8, size: 0x1, def value: None
  bool ___m_FillClockwise;

  /// @brief Field m_FillOrigin, offset: 0xfc, size: 0x4, def value: None
  int32_t ___m_FillOrigin;

  /// @brief Field m_AlphaHitTestMinimumThreshold, offset: 0x100, size: 0x4, def value: None
  float_t ___m_AlphaHitTestMinimumThreshold;

  /// @brief Field m_Tracked, offset: 0x104, size: 0x1, def value: None
  bool ___m_Tracked;

  /// @brief Field m_UseSpriteMesh, offset: 0x105, size: 0x1, def value: None
  bool ___m_UseSpriteMesh;

  /// @brief Field m_PixelsPerUnitMultiplier, offset: 0x108, size: 0x4, def value: None
  float_t ___m_PixelsPerUnitMultiplier;

  /// @brief Field m_CachedReferencePixelsPerUnit, offset: 0x10c, size: 0x4, def value: None
  float_t ___m_CachedReferencePixelsPerUnit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Image, ___m_Sprite) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_OverrideSprite) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_Type) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_PreserveAspect) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillCenter) == 0xed, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillMethod) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillAmount) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillClockwise) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillOrigin) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_AlphaHitTestMinimumThreshold) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_Tracked) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_UseSpriteMesh) == 0x105, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_PixelsPerUnitMultiplier) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_CachedReferencePixelsPerUnit) == 0x10c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image, 0x110>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image_FillMethod, "UnityEngine.UI", "Image/FillMethod");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image_Origin180, "UnityEngine.UI", "Image/Origin180");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image_Origin360, "UnityEngine.UI", "Image/Origin360");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image_Origin90, "UnityEngine.UI", "Image/Origin90");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image_OriginHorizontal, "UnityEngine.UI", "Image/OriginHorizontal");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image_OriginVertical, "UnityEngine.UI", "Image/OriginVertical");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image_Type, "UnityEngine.UI", "Image/Type");
NEED_NO_BOX(::UnityEngine::UI::Image);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image*, "UnityEngine.UI", "Image");
