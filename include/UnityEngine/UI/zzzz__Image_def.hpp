#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class ILayoutElement;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine::UI {
struct __Image__FillMethod;
}
namespace UnityEngine::UI {
struct __Image__Origin180;
}
namespace UnityEngine::UI {
struct __Image__Origin360;
}
namespace UnityEngine::UI {
struct __Image__Origin90;
}
namespace UnityEngine::UI {
struct __Image__OriginHorizontal;
}
namespace UnityEngine::UI {
struct __Image__OriginVertical;
}
namespace UnityEngine::UI {
struct __Image__Type;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class ICanvasRaycastFilter;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
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
struct __Image__FillMethod;
}
namespace UnityEngine::UI {
struct __Image__Origin180;
}
namespace UnityEngine::UI {
struct __Image__Origin360;
}
namespace UnityEngine::UI {
struct __Image__Origin90;
}
namespace UnityEngine::UI {
struct __Image__OriginHorizontal;
}
namespace UnityEngine::UI {
struct __Image__OriginVertical;
}
namespace UnityEngine::UI {
struct __Image__Type;
}
namespace UnityEngine::UI {
class Image;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__Image__FillMethod);
MARK_VAL_T(::UnityEngine::UI::__Image__Origin180);
MARK_VAL_T(::UnityEngine::UI::__Image__Origin360);
MARK_VAL_T(::UnityEngine::UI::__Image__Origin90);
MARK_VAL_T(::UnityEngine::UI::__Image__OriginHorizontal);
MARK_VAL_T(::UnityEngine::UI::__Image__OriginVertical);
MARK_VAL_T(::UnityEngine::UI::__Image__Type);
MARK_REF_PTR_T(::UnityEngine::UI::Image);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Image::Type
struct CORDL_TYPE __Image__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__Type_Unwrapped
  enum struct ____Image__Type_Unwrapped : int32_t {
    __E_Simple = static_cast<int32_t>(0x0),
    __E_Sliced = static_cast<int32_t>(0x1),
    __E_Tiled = static_cast<int32_t>(0x2),
    __E_Filled = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__Type_Unwrapped() const noexcept {
    return static_cast<____Image__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Filled value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__Type const Filled;

  /// @brief Field Simple value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__Type const Simple;

  /// @brief Field Sliced value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__Type const Sliced;

  /// @brief Field Tiled value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__Type const Tiled;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Image__Type, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::FillMethod
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Image::FillMethod
struct CORDL_TYPE __Image__FillMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__FillMethod_Unwrapped
  enum struct ____Image__FillMethod_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
    __E_Radial90 = static_cast<int32_t>(0x2),
    __E_Radial180 = static_cast<int32_t>(0x3),
    __E_Radial360 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__FillMethod_Unwrapped() const noexcept {
    return static_cast<____Image__FillMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__FillMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__FillMethod(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__FillMethod const Horizontal;

  /// @brief Field Radial180 value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__FillMethod const Radial180;

  /// @brief Field Radial360 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::__Image__FillMethod const Radial360;

  /// @brief Field Radial90 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__FillMethod const Radial90;

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__FillMethod const Vertical;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__FillMethod, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Image__FillMethod, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::OriginHorizontal
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Image::OriginHorizontal
struct CORDL_TYPE __Image__OriginHorizontal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__OriginHorizontal_Unwrapped
  enum struct ____Image__OriginHorizontal_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__OriginHorizontal_Unwrapped() const noexcept {
    return static_cast<____Image__OriginHorizontal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__OriginHorizontal();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__OriginHorizontal(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__OriginHorizontal const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__OriginHorizontal const Right;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__OriginHorizontal, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Image__OriginHorizontal, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::OriginVertical
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Image::OriginVertical
struct CORDL_TYPE __Image__OriginVertical {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__OriginVertical_Unwrapped
  enum struct ____Image__OriginVertical_Unwrapped : int32_t {
    __E_Bottom = static_cast<int32_t>(0x0),
    __E_Top = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__OriginVertical_Unwrapped() const noexcept {
    return static_cast<____Image__OriginVertical_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__OriginVertical();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__OriginVertical(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bottom value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__OriginVertical const Bottom;

  /// @brief Field Top value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__OriginVertical const Top;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__OriginVertical, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Image__OriginVertical, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::Origin90
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Image::Origin90
struct CORDL_TYPE __Image__Origin90 {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__Origin90_Unwrapped
  enum struct ____Image__Origin90_Unwrapped : int32_t {
    __E_BottomLeft = static_cast<int32_t>(0x0),
    __E_TopLeft = static_cast<int32_t>(0x1),
    __E_TopRight = static_cast<int32_t>(0x2),
    __E_BottomRight = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__Origin90_Unwrapped() const noexcept {
    return static_cast<____Image__Origin90_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__Origin90();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__Origin90(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BottomLeft value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__Origin90 const BottomLeft;

  /// @brief Field BottomRight value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__Origin90 const BottomRight;

  /// @brief Field TopLeft value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__Origin90 const TopLeft;

  /// @brief Field TopRight value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__Origin90 const TopRight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__Origin90, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Image__Origin90, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::Origin180
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Image::Origin180
struct CORDL_TYPE __Image__Origin180 {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__Origin180_Unwrapped
  enum struct ____Image__Origin180_Unwrapped : int32_t {
    __E_Bottom = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__Origin180_Unwrapped() const noexcept {
    return static_cast<____Image__Origin180_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__Origin180();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__Origin180(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bottom value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__Origin180 const Bottom;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__Origin180 const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__Origin180 const Right;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__Origin180 const Top;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__Origin180, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Image__Origin180, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::Origin360
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Image::Origin360
struct CORDL_TYPE __Image__Origin360 {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Image__Origin360_Unwrapped
  enum struct ____Image__Origin360_Unwrapped : int32_t {
    __E_Bottom = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Left = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Image__Origin360_Unwrapped() const noexcept {
    return static_cast<____Image__Origin360_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Image__Origin360();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Image__Origin360(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bottom value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Image__Origin360 const Bottom;

  /// @brief Field Left value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Image__Origin360 const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Image__Origin360 const Right;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Image__Origin360 const Top;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Image__Origin360, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Image__Origin360, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::Image
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::Image*
class CORDL_TYPE Image : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  using FillMethod = ::UnityEngine::UI::__Image__FillMethod;

  using Origin180 = ::UnityEngine::UI::__Image__Origin180;

  using Origin360 = ::UnityEngine::UI::__Image__Origin360;

  using Origin90 = ::UnityEngine::UI::__Image__Origin90;

  using OriginHorizontal = ::UnityEngine::UI::__Image__OriginHorizontal;

  using OriginVertical = ::UnityEngine::UI::__Image__OriginVertical;

  using Type = ::UnityEngine::UI::__Image__Type;

  __declspec(property(get = get_activeSprite))::UnityW<::UnityEngine::Sprite> activeSprite;

  __declspec(property(get = get_alphaHitTestMinimumThreshold, put = set_alphaHitTestMinimumThreshold)) float_t alphaHitTestMinimumThreshold;

  __declspec(property(get = get_eventAlphaThreshold, put = set_eventAlphaThreshold)) float_t eventAlphaThreshold;

  __declspec(property(get = get_fillAmount, put = set_fillAmount)) float_t fillAmount;

  __declspec(property(get = get_fillCenter, put = set_fillCenter)) bool fillCenter;

  __declspec(property(get = get_fillClockwise, put = set_fillClockwise)) bool fillClockwise;

  __declspec(property(get = get_fillMethod, put = set_fillMethod))::UnityEngine::UI::__Image__FillMethod fillMethod;

  __declspec(property(get = get_fillOrigin, put = set_fillOrigin)) int32_t fillOrigin;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_hasBorder)) bool hasBorder;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  /// @brief Field m_AlphaHitTestMinimumThreshold, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlphaHitTestMinimumThreshold, put = __cordl_internal_set_m_AlphaHitTestMinimumThreshold)) float_t m_AlphaHitTestMinimumThreshold;

  /// @brief Field m_CachedReferencePixelsPerUnit, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedReferencePixelsPerUnit, put = __cordl_internal_set_m_CachedReferencePixelsPerUnit)) float_t m_CachedReferencePixelsPerUnit;

  /// @brief Field m_FillAmount, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FillAmount, put = __cordl_internal_set_m_FillAmount)) float_t m_FillAmount;

  /// @brief Field m_FillCenter, offset 0xe5, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FillCenter, put = __cordl_internal_set_m_FillCenter)) bool m_FillCenter;

  /// @brief Field m_FillClockwise, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FillClockwise, put = __cordl_internal_set_m_FillClockwise)) bool m_FillClockwise;

  /// @brief Field m_FillMethod, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FillMethod, put = __cordl_internal_set_m_FillMethod))::UnityEngine::UI::__Image__FillMethod m_FillMethod;

  /// @brief Field m_FillOrigin, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FillOrigin, put = __cordl_internal_set_m_FillOrigin)) int32_t m_FillOrigin;

  /// @brief Field m_OverrideSprite, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OverrideSprite, put = __cordl_internal_set_m_OverrideSprite))::UnityW<::UnityEngine::Sprite> m_OverrideSprite;

  /// @brief Field m_PixelsPerUnitMultiplier, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PixelsPerUnitMultiplier, put = __cordl_internal_set_m_PixelsPerUnitMultiplier)) float_t m_PixelsPerUnitMultiplier;

  /// @brief Field m_PreserveAspect, offset 0xe4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PreserveAspect, put = __cordl_internal_set_m_PreserveAspect)) bool m_PreserveAspect;

  /// @brief Field m_Sprite, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sprite, put = __cordl_internal_set_m_Sprite))::UnityW<::UnityEngine::Sprite> m_Sprite;

  /// @brief Field m_Tracked, offset 0xfc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Tracked, put = __cordl_internal_set_m_Tracked)) bool m_Tracked;

  /// @brief Field m_TrackedTexturelessImages, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_TrackedTexturelessImages,
                             put = setStaticF_m_TrackedTexturelessImages))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* m_TrackedTexturelessImages;

  /// @brief Field m_Type, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type))::UnityEngine::UI::__Image__Type m_Type;

  /// @brief Field m_UseSpriteMesh, offset 0xfd, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseSpriteMesh, put = __cordl_internal_set_m_UseSpriteMesh)) bool m_UseSpriteMesh;

  __declspec(property(get = get_mainTexture))::UnityW<::UnityEngine::Texture> mainTexture;

  __declspec(property(get = get_material, put = set_material))::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_multipliedPixelsPerUnit)) float_t multipliedPixelsPerUnit;

  __declspec(property(get = get_overrideSprite, put = set_overrideSprite))::UnityW<::UnityEngine::Sprite> overrideSprite;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_pixelsPerUnitMultiplier, put = set_pixelsPerUnitMultiplier)) float_t pixelsPerUnitMultiplier;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_preserveAspect, put = set_preserveAspect)) bool preserveAspect;

  /// @brief Field s_ETC1DefaultUI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ETC1DefaultUI, put = setStaticF_s_ETC1DefaultUI))::UnityW<::UnityEngine::Material> s_ETC1DefaultUI;

  /// @brief Field s_Initialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_Initialized, put = setStaticF_s_Initialized)) bool s_Initialized;

  /// @brief Field s_UVScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UVScratch, put = setStaticF_s_UVScratch))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_UVScratch;

  /// @brief Field s_Uv, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Uv, put = setStaticF_s_Uv))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Uv;

  /// @brief Field s_VertScratch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VertScratch, put = setStaticF_s_VertScratch))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> s_VertScratch;

  /// @brief Field s_Xy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Xy, put = setStaticF_s_Xy))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Xy;

  __declspec(property(get = get_sprite, put = set_sprite))::UnityW<::UnityEngine::Sprite> sprite;

  __declspec(property(get = get_type, put = set_type))::UnityEngine::UI::__Image__Type type;

  __declspec(property(get = get_useSpriteMesh, put = set_useSpriteMesh)) bool useSpriteMesh;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Method AddQuad, addr 0x34bcef4, size 0x154, virtual false, abstract: false, final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uvMin,
                             ::UnityEngine::Vector2 uvMax);

  /// @brief Method AddQuad, addr 0x34bd048, size 0xe4, virtual false, abstract: false, final false
  static inline void AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadPositions, ::UnityEngine::Color32 color,
                             ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadUVs);

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x34bd638, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x34bd63c, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method DisableSpriteOptimizations, addr 0x34b5e34, size 0x8, virtual false, abstract: false, final false
  inline void DisableSpriteOptimizations();

  /// @brief Method GenerateFilledSprite, addr 0x34bb500, size 0x1428, virtual false, abstract: false, final false
  inline void GenerateFilledSprite(::UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);

  /// @brief Method GenerateSimpleSprite, addr 0x34b71c4, size 0xb24, virtual false, abstract: false, final false
  inline void GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);

  /// @brief Method GenerateSlicedSprite, addr 0x34b82d8, size 0x850, virtual false, abstract: false, final false
  inline void GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method GenerateSprite, addr 0x34b7ce8, size 0x5f0, virtual false, abstract: false, final false
  inline void GenerateSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);

  /// @brief Method GenerateTiledSprite, addr 0x34b8b28, size 0x29d8, virtual false, abstract: false, final false
  inline void GenerateTiledSprite(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method GetAdjustedBorders, addr 0x34bcd94, size 0x160, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect adjustedRect);

  /// @brief Method GetDrawingDimensions, addr 0x34b6a98, size 0x484, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);

  /// @brief Method IsRaycastLocationValid, addr 0x34bd830, size 0x38c, virtual true, abstract: false, final false
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* eventCamera);

  /// @brief Method MapCoordinate, addr 0x34bdbbc, size 0x340, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 MapCoordinate(::UnityEngine::Vector2 local, ::UnityEngine::Rect rect);

  static inline ::UnityEngine::UI::Image* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x34b68f0, size 0x50, virtual true, abstract: false, final false
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x34b68ec, size 0x4, virtual true, abstract: false, final false
  inline void OnBeforeSerialize();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x34bcc8c, size 0x108, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x34be0a4, size 0x38, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x34bcaa4, size 0x74, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x34bca88, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPopulateMesh, addr 0x34b7080, size 0x144, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method PreserveSpriteAspectRatio, addr 0x34b6940, size 0x158, virtual false, abstract: false, final false
  inline void PreserveSpriteAspectRatio(ByRef<::UnityEngine::Rect> rect, ::UnityEngine::Vector2 spriteSize);

  /// @brief Method RadialCut, addr 0x34bd12c, size 0x120, virtual false, abstract: false, final false
  static inline bool RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uv, float_t fill, bool invert,
                               int32_t corner);

  /// @brief Method RadialCut, addr 0x34bd24c, size 0x3ec, virtual false, abstract: false, final false
  static inline void RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, float_t cos, float_t sin, bool invert, int32_t corner);

  /// @brief Method RebuildImage, addr 0x34bdefc, size 0x1a8, virtual false, abstract: false, final false
  static inline void RebuildImage(::UnityEngine::U2D::SpriteAtlas* spriteAtlas);

  /// @brief Method SetNativeSize, addr 0x34b6f1c, size 0x164, virtual true, abstract: false, final false
  inline void SetNativeSize();

  /// @brief Method TrackImage, addr 0x34bc928, size 0x160, virtual false, abstract: false, final false
  static inline void TrackImage(::UnityEngine::UI::Image* g);

  /// @brief Method TrackSprite, addr 0x34b5d48, size 0xec, virtual false, abstract: false, final false
  inline void TrackSprite();

  /// @brief Method UnTrackImage, addr 0x34bcb18, size 0x80, virtual false, abstract: false, final false
  static inline void UnTrackImage(::UnityEngine::UI::Image* g);

  /// @brief Method UpdateMaterial, addr 0x34bcb98, size 0xf4, virtual true, abstract: false, final false
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

  constexpr ::UnityEngine::UI::__Image__FillMethod const& __cordl_internal_get_m_FillMethod() const;

  constexpr ::UnityEngine::UI::__Image__FillMethod& __cordl_internal_get_m_FillMethod();

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

  constexpr ::UnityEngine::UI::__Image__Type const& __cordl_internal_get_m_Type() const;

  constexpr ::UnityEngine::UI::__Image__Type& __cordl_internal_get_m_Type();

  constexpr bool const& __cordl_internal_get_m_UseSpriteMesh() const;

  constexpr bool& __cordl_internal_get_m_UseSpriteMesh();

  constexpr void __cordl_internal_set_m_AlphaHitTestMinimumThreshold(float_t value);

  constexpr void __cordl_internal_set_m_CachedReferencePixelsPerUnit(float_t value);

  constexpr void __cordl_internal_set_m_FillAmount(float_t value);

  constexpr void __cordl_internal_set_m_FillCenter(bool value);

  constexpr void __cordl_internal_set_m_FillClockwise(bool value);

  constexpr void __cordl_internal_set_m_FillMethod(::UnityEngine::UI::__Image__FillMethod value);

  constexpr void __cordl_internal_set_m_FillOrigin(int32_t value);

  constexpr void __cordl_internal_set_m_OverrideSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_PixelsPerUnitMultiplier(float_t value);

  constexpr void __cordl_internal_set_m_PreserveAspect(bool value);

  constexpr void __cordl_internal_set_m_Sprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_Tracked(bool value);

  constexpr void __cordl_internal_set_m_Type(::UnityEngine::UI::__Image__Type value);

  constexpr void __cordl_internal_set_m_UseSpriteMesh(bool value);

  /// @brief Method .ctor, addr 0x34b6338, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* getStaticF_m_TrackedTexturelessImages();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_ETC1DefaultUI();

  static inline bool getStaticF_s_Initialized();

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_UVScratch();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Uv();

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_s_VertScratch();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Xy();

  /// @brief Method get_activeSprite, addr 0x34b5e40, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_activeSprite();

  /// @brief Method get_alphaHitTestMinimumThreshold, addr 0x34b62a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_alphaHitTestMinimumThreshold();

  /// @brief Method get_defaultETC1GraphicMaterial, addr 0x34b6378, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_defaultETC1GraphicMaterial();

  /// @brief Method get_eventAlphaThreshold, addr 0x34b6280, size 0x10, virtual false, abstract: false, final false
  inline float_t get_eventAlphaThreshold();

  /// @brief Method get_fillAmount, addr 0x34b60d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fillAmount();

  /// @brief Method get_fillCenter, addr 0x34b5fd0, size 0x8, virtual false, abstract: false, final false
  inline bool get_fillCenter();

  /// @brief Method get_fillClockwise, addr 0x34b6170, size 0x8, virtual false, abstract: false, final false
  inline bool get_fillClockwise();

  /// @brief Method get_fillMethod, addr 0x34b6058, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Image__FillMethod get_fillMethod();

  /// @brief Method get_fillOrigin, addr 0x34b61f8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fillOrigin();

  /// @brief Method get_flexibleHeight, addr 0x34bd820, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x34bd72c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_hasBorder, addr 0x34b65cc, size 0xb8, virtual false, abstract: false, final false
  inline bool get_hasBorder();

  /// @brief Method get_layoutPriority, addr 0x34bd828, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method get_mainTexture, addr 0x34b6454, size 0x178, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_material, addr 0x34b67bc, size 0x12c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_minHeight, addr 0x34bd734, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x34bd640, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_multipliedPixelsPerUnit, addr 0x34b67a0, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_multipliedPixelsPerUnit();

  /// @brief Method get_overrideSprite, addr 0x34b5e3c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_overrideSprite();

  /// @brief Method get_pixelsPerUnit, addr 0x34b66ac, size 0xf4, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_pixelsPerUnitMultiplier, addr 0x34b6684, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnitMultiplier();

  /// @brief Method get_preferredHeight, addr 0x34bd73c, size 0xe4, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x34bd648, size 0xe4, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_preserveAspect, addr 0x34b5f48, size 0x8, virtual false, abstract: false, final false
  inline bool get_preserveAspect();

  /// @brief Method get_sprite, addr 0x34b5d40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

  /// @brief Method get_type, addr 0x34b5f40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Image__Type get_type();

  /// @brief Method get_useSpriteMesh, addr 0x34b62b0, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Method set_alphaHitTestMinimumThreshold, addr 0x34b62a8, size 0x8, virtual false, abstract: false, final false
  inline void set_alphaHitTestMinimumThreshold(float_t value);

  /// @brief Method set_eventAlphaThreshold, addr 0x34b6290, size 0x10, virtual false, abstract: false, final false
  inline void set_eventAlphaThreshold(float_t value);

  /// @brief Method set_fillAmount, addr 0x34b60e0, size 0x90, virtual false, abstract: false, final false
  inline void set_fillAmount(float_t value);

  /// @brief Method set_fillCenter, addr 0x34b5fd8, size 0x80, virtual false, abstract: false, final false
  inline void set_fillCenter(bool value);

  /// @brief Method set_fillClockwise, addr 0x34b6178, size 0x80, virtual false, abstract: false, final false
  inline void set_fillClockwise(bool value);

  /// @brief Method set_fillMethod, addr 0x34b6060, size 0x78, virtual false, abstract: false, final false
  inline void set_fillMethod(::UnityEngine::UI::__Image__FillMethod value);

  /// @brief Method set_fillOrigin, addr 0x34b6200, size 0x80, virtual false, abstract: false, final false
  inline void set_fillOrigin(int32_t value);

  /// @brief Method set_material, addr 0x34b68e8, size 0x4, virtual true, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_overrideSprite, addr 0x34b5eb8, size 0x88, virtual false, abstract: false, final false
  inline void set_overrideSprite(::UnityEngine::Sprite* value);

  /// @brief Method set_pixelsPerUnitMultiplier, addr 0x34b668c, size 0x20, virtual false, abstract: false, final false
  inline void set_pixelsPerUnitMultiplier(float_t value);

  /// @brief Method set_preserveAspect, addr 0x34b5f50, size 0x80, virtual false, abstract: false, final false
  inline void set_preserveAspect(bool value);

  /// @brief Method set_sprite, addr 0x34a8e98, size 0x2e8, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method set_type, addr 0x34a9180, size 0x80, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::UI::__Image__Type value);

  /// @brief Method set_useSpriteMesh, addr 0x34b62b8, size 0x80, virtual false, abstract: false, final false
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

  /// @brief Field m_Sprite, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_Sprite;

  /// @brief Field m_OverrideSprite, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_OverrideSprite;

  /// @brief Field m_Type, offset: 0xe0, size: 0x4, def value: None
  ::UnityEngine::UI::__Image__Type ___m_Type;

  /// @brief Field m_PreserveAspect, offset: 0xe4, size: 0x1, def value: None
  bool ___m_PreserveAspect;

  /// @brief Field m_FillCenter, offset: 0xe5, size: 0x1, def value: None
  bool ___m_FillCenter;

  /// @brief Field m_FillMethod, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::UI::__Image__FillMethod ___m_FillMethod;

  /// @brief Field m_FillAmount, offset: 0xec, size: 0x4, def value: None
  float_t ___m_FillAmount;

  /// @brief Field m_FillClockwise, offset: 0xf0, size: 0x1, def value: None
  bool ___m_FillClockwise;

  /// @brief Field m_FillOrigin, offset: 0xf4, size: 0x4, def value: None
  int32_t ___m_FillOrigin;

  /// @brief Field m_AlphaHitTestMinimumThreshold, offset: 0xf8, size: 0x4, def value: None
  float_t ___m_AlphaHitTestMinimumThreshold;

  /// @brief Field m_Tracked, offset: 0xfc, size: 0x1, def value: None
  bool ___m_Tracked;

  /// @brief Field m_UseSpriteMesh, offset: 0xfd, size: 0x1, def value: None
  bool ___m_UseSpriteMesh;

  /// @brief Field m_PixelsPerUnitMultiplier, offset: 0x100, size: 0x4, def value: None
  float_t ___m_PixelsPerUnitMultiplier;

  /// @brief Field m_CachedReferencePixelsPerUnit, offset: 0x104, size: 0x4, def value: None
  float_t ___m_CachedReferencePixelsPerUnit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Image, 0x108>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_Sprite) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_OverrideSprite) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_Type) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_PreserveAspect) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillCenter) == 0xe5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillMethod) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillAmount) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillClockwise) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_FillOrigin) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_AlphaHitTestMinimumThreshold) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_Tracked) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_UseSpriteMesh) == 0xfd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_PixelsPerUnitMultiplier) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Image, ___m_CachedReferencePixelsPerUnit) == 0x104, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__FillMethod, "UnityEngine.UI", "Image/FillMethod");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__Origin180, "UnityEngine.UI", "Image/Origin180");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__Origin360, "UnityEngine.UI", "Image/Origin360");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__Origin90, "UnityEngine.UI", "Image/Origin90");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__OriginHorizontal, "UnityEngine.UI", "Image/OriginHorizontal");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__OriginVertical, "UnityEngine.UI", "Image/OriginVertical");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Image__Type, "UnityEngine.UI", "Image/Type");
NEED_NO_BOX(::UnityEngine::UI::Image);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image*, "UnityEngine.UI", "Image");
