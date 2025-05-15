#pragma once
// IWYU pragma private; include "UnityEngine/RectTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RectTransform)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct DrivenTransformProperties;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct RectTransform_Axis;
}
namespace UnityEngine {
struct RectTransform_Edge;
}
namespace UnityEngine {
class RectTransform_ReapplyDrivenProperties;
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
namespace UnityEngine {
struct RectTransform_Axis;
}
namespace UnityEngine {
struct RectTransform_Edge;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class RectTransform_ReapplyDrivenProperties;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RectTransform_Axis);
MARK_VAL_T(::UnityEngine::RectTransform_Edge);
MARK_REF_PTR_T(::UnityEngine::RectTransform);
MARK_REF_PTR_T(::UnityEngine::RectTransform_ReapplyDrivenProperties);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RectTransform/Edge
struct CORDL_TYPE RectTransform_Edge {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RectTransform_Edge_Unwrapped
  enum struct __RectTransform_Edge_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Bottom = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RectTransform_Edge_Unwrapped() const noexcept {
    return static_cast<__RectTransform_Edge_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RectTransform_Edge();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RectTransform_Edge(int32_t value__) noexcept;

  /// @brief Field Bottom value: I32(3)
  static ::UnityEngine::RectTransform_Edge const Bottom;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::RectTransform_Edge const Left;

  /// @brief Field Right value: I32(1)
  static ::UnityEngine::RectTransform_Edge const Right;

  /// @brief Field Top value: I32(2)
  static ::UnityEngine::RectTransform_Edge const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10952 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RectTransform_Edge, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RectTransform_Edge, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RectTransform/Axis
struct CORDL_TYPE RectTransform_Axis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RectTransform_Axis_Unwrapped
  enum struct __RectTransform_Axis_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RectTransform_Axis_Unwrapped() const noexcept {
    return static_cast<__RectTransform_Axis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RectTransform_Axis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RectTransform_Axis(int32_t value__) noexcept;

  /// @brief Field Horizontal value: I32(0)
  static ::UnityEngine::RectTransform_Axis const Horizontal;

  /// @brief Field Vertical value: I32(1)
  static ::UnityEngine::RectTransform_Axis const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10953 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RectTransform_Axis, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RectTransform_Axis, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RectTransform/ReapplyDrivenProperties
class CORDL_TYPE RectTransform_ReapplyDrivenProperties : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48b77c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::RectTransform* driven);

  static inline ::UnityEngine::RectTransform_ReapplyDrivenProperties* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48b772c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectTransform_ReapplyDrivenProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectTransform_ReapplyDrivenProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectTransform_ReapplyDrivenProperties(RectTransform_ReapplyDrivenProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectTransform_ReapplyDrivenProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectTransform_ReapplyDrivenProperties(RectTransform_ReapplyDrivenProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10954 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RectTransform_ReapplyDrivenProperties, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Transform
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RectTransform
class CORDL_TYPE RectTransform : public ::UnityEngine::Transform {
public:
  // Declarations
  using Axis = ::UnityEngine::RectTransform_Axis;

  using Edge = ::UnityEngine::RectTransform_Edge;

  using ReapplyDrivenProperties = ::UnityEngine::RectTransform_ReapplyDrivenProperties;

  __declspec(property(get = get_anchorMax, put = set_anchorMax)) ::UnityEngine::Vector2 anchorMax;

  __declspec(property(get = get_anchorMin, put = set_anchorMin)) ::UnityEngine::Vector2 anchorMin;

  __declspec(property(get = get_anchoredPosition, put = set_anchoredPosition)) ::UnityEngine::Vector2 anchoredPosition;

  __declspec(property(get = get_anchoredPosition3D, put = set_anchoredPosition3D)) ::UnityEngine::Vector3 anchoredPosition3D;

  __declspec(property(get = get_drivenByObject, put = set_drivenByObject)) ::UnityW<::UnityEngine::Object> drivenByObject;

  __declspec(property(get = get_drivenProperties, put = set_drivenProperties)) ::UnityEngine::DrivenTransformProperties drivenProperties;

  __declspec(property(get = get_offsetMax, put = set_offsetMax)) ::UnityEngine::Vector2 offsetMax;

  __declspec(property(get = get_offsetMin, put = set_offsetMin)) ::UnityEngine::Vector2 offsetMin;

  __declspec(property(get = get_pivot, put = set_pivot)) ::UnityEngine::Vector2 pivot;

  /// @brief Field reapplyDrivenProperties, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reapplyDrivenProperties, put = setStaticF_reapplyDrivenProperties)) ::UnityEngine::RectTransform_ReapplyDrivenProperties* reapplyDrivenProperties;

  __declspec(property(get = get_rect)) ::UnityEngine::Rect rect;

  __declspec(property(get = get_sizeDelta, put = set_sizeDelta)) ::UnityEngine::Vector2 sizeDelta;

  /// @brief Method ForceUpdateRectTransforms, addr 0x48b6ec0, size 0x3c, virtual false, abstract: false, final false
  inline void ForceUpdateRectTransforms();

  /// @brief Method GetLocalCorners, addr 0x48b6efc, size 0xe0, virtual false, abstract: false, final false
  inline void GetLocalCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  /// @brief Method GetParentSize, addr 0x48b73a4, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetParentSize();

  /// @brief Method GetRectInParentSpace, addr 0x48b7514, size 0x1cc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetRectInParentSpace();

  /// @brief Method GetWorldCorners, addr 0x48b6fdc, size 0x154, virtual false, abstract: false, final false
  inline void GetWorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  static inline ::UnityEngine::RectTransform* New_ctor();

  /// @brief Method SendReapplyDrivenProperties, addr 0x48b74a8, size 0x6c, virtual false, abstract: false, final false
  static inline void SendReapplyDrivenProperties(::UnityEngine::RectTransform* driven);

  /// @brief Method SetInsetAndSizeFromParentEdge, addr 0x48b719c, size 0x110, virtual false, abstract: false, final false
  inline void SetInsetAndSizeFromParentEdge(::UnityEngine::RectTransform_Edge edge, float_t inset, float_t size);

  /// @brief Method SetSizeWithCurrentAnchors, addr 0x48b72ac, size 0xf8, virtual false, abstract: false, final false
  inline void SetSizeWithCurrentAnchors(::UnityEngine::RectTransform_Axis axis, float_t size);

  /// @brief Method .ctor, addr 0x48b771c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_reapplyDrivenProperties, addr 0x48b6230, size 0xb8, virtual false, abstract: false, final false
  static inline void add_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties* value);

  static inline ::UnityEngine::RectTransform_ReapplyDrivenProperties* getStaticF_reapplyDrivenProperties();

  /// @brief Method get_anchorMax, addr 0x48b6558, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_anchorMax();

  /// @brief Method get_anchorMax_Injected, addr 0x48b65a4, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorMax_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_anchorMin, addr 0x48b643c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_anchorMin();

  /// @brief Method get_anchorMin_Injected, addr 0x48b6488, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorMin_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_anchoredPosition, addr 0x48b6674, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_anchoredPosition();

  /// @brief Method get_anchoredPosition3D, addr 0x48b69c8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchoredPosition3D();

  /// @brief Method get_anchoredPosition_Injected, addr 0x48b66c0, size 0x44, virtual false, abstract: false, final false
  inline void get_anchoredPosition_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_drivenByObject, addr 0x48b6dc0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_drivenByObject();

  /// @brief Method get_drivenProperties, addr 0x48b6e40, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::DrivenTransformProperties get_drivenProperties();

  /// @brief Method get_offsetMax, addr 0x48b6c24, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_offsetMax();

  /// @brief Method get_offsetMin, addr 0x48b6adc, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_offsetMin();

  /// @brief Method get_pivot, addr 0x48b68ac, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pivot();

  /// @brief Method get_pivot_Injected, addr 0x48b68f8, size 0x44, virtual false, abstract: false, final false
  inline void get_pivot_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_rect, addr 0x48b63a0, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_rect_Injected, addr 0x48b63f8, size 0x44, virtual false, abstract: false, final false
  inline void get_rect_Injected(::ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_sizeDelta, addr 0x48b6790, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_sizeDelta();

  /// @brief Method get_sizeDelta_Injected, addr 0x48b67dc, size 0x44, virtual false, abstract: false, final false
  inline void get_sizeDelta_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method remove_reapplyDrivenProperties, addr 0x48b62e8, size 0xb8, virtual false, abstract: false, final false
  static inline void remove_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties* value);

  static inline void setStaticF_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties* value);

  /// @brief Method set_anchorMax, addr 0x48b65e8, size 0x48, virtual false, abstract: false, final false
  inline void set_anchorMax(::UnityEngine::Vector2 value);

  /// @brief Method set_anchorMax_Injected, addr 0x48b6630, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorMax_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_anchorMin, addr 0x48b64cc, size 0x48, virtual false, abstract: false, final false
  inline void set_anchorMin(::UnityEngine::Vector2 value);

  /// @brief Method set_anchorMin_Injected, addr 0x48b6514, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorMin_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_anchoredPosition, addr 0x48b6704, size 0x48, virtual false, abstract: false, final false
  inline void set_anchoredPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_anchoredPosition3D, addr 0x48b6a58, size 0x30, virtual false, abstract: false, final false
  inline void set_anchoredPosition3D(::UnityEngine::Vector3 value);

  /// @brief Method set_anchoredPosition_Injected, addr 0x48b674c, size 0x44, virtual false, abstract: false, final false
  inline void set_anchoredPosition_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_drivenByObject, addr 0x48b6dfc, size 0x44, virtual false, abstract: false, final false
  inline void set_drivenByObject(::UnityEngine::Object* value);

  /// @brief Method set_drivenProperties, addr 0x48b6e7c, size 0x44, virtual false, abstract: false, final false
  inline void set_drivenProperties(::UnityEngine::DrivenTransformProperties value);

  /// @brief Method set_offsetMax, addr 0x48b6cc4, size 0xfc, virtual false, abstract: false, final false
  inline void set_offsetMax(::UnityEngine::Vector2 value);

  /// @brief Method set_offsetMin, addr 0x48b6b30, size 0xf4, virtual false, abstract: false, final false
  inline void set_offsetMin(::UnityEngine::Vector2 value);

  /// @brief Method set_pivot, addr 0x48b693c, size 0x48, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector2 value);

  /// @brief Method set_pivot_Injected, addr 0x48b6984, size 0x44, virtual false, abstract: false, final false
  inline void set_pivot_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_sizeDelta, addr 0x48b6820, size 0x48, virtual false, abstract: false, final false
  inline void set_sizeDelta(::UnityEngine::Vector2 value);

  /// @brief Method set_sizeDelta_Injected, addr 0x48b6868, size 0x44, virtual false, abstract: false, final false
  inline void set_sizeDelta_Injected(::ByRef<::UnityEngine::Vector2> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectTransform(RectTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectTransform(RectTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10955 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RectTransform, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransform_Axis, "UnityEngine", "RectTransform/Axis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransform_Edge, "UnityEngine", "RectTransform/Edge");
NEED_NO_BOX(::UnityEngine::RectTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransform*, "UnityEngine", "RectTransform");
NEED_NO_BOX(::UnityEngine::RectTransform_ReapplyDrivenProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransform_ReapplyDrivenProperties*, "UnityEngine", "RectTransform/ReapplyDrivenProperties");
