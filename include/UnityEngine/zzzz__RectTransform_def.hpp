#pragma once
// IWYU pragma private; include "UnityEngine/RectTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __RectTransform__Axis;
}
namespace UnityEngine {
struct __RectTransform__Edge;
}
namespace UnityEngine {
class __RectTransform__ReapplyDrivenProperties;
}
// Forward declare root types
namespace UnityEngine {
struct __RectTransform__Axis;
}
namespace UnityEngine {
struct __RectTransform__Edge;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class __RectTransform__ReapplyDrivenProperties;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__RectTransform__Axis);
MARK_VAL_T(::UnityEngine::__RectTransform__Edge);
MARK_REF_PTR_T(::UnityEngine::RectTransform);
MARK_REF_PTR_T(::UnityEngine::__RectTransform__ReapplyDrivenProperties);
// Type: ::Edge
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::RectTransform::Edge
struct CORDL_TYPE __RectTransform__Edge {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RectTransform__Edge_Unwrapped
  enum struct ____RectTransform__Edge_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Bottom = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RectTransform__Edge_Unwrapped() const noexcept {
    return static_cast<____RectTransform__Edge_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectTransform__Edge();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RectTransform__Edge(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bottom value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__RectTransform__Edge const Bottom;

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__RectTransform__Edge const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__RectTransform__Edge const Right;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__RectTransform__Edge const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10909 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__RectTransform__Edge, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__RectTransform__Edge, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Axis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::RectTransform::Axis
struct CORDL_TYPE __RectTransform__Axis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RectTransform__Axis_Unwrapped
  enum struct ____RectTransform__Axis_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RectTransform__Axis_Unwrapped() const noexcept {
    return static_cast<____RectTransform__Axis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectTransform__Axis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RectTransform__Axis(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__RectTransform__Axis const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__RectTransform__Axis const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10910 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__RectTransform__Axis, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__RectTransform__Axis, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::ReapplyDrivenProperties
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::RectTransform::ReapplyDrivenProperties*
class CORDL_TYPE __RectTransform__ReapplyDrivenProperties : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x483f084, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::RectTransform* driven);

  static inline ::UnityEngine::__RectTransform__ReapplyDrivenProperties* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x483efe8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectTransform__ReapplyDrivenProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectTransform__ReapplyDrivenProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectTransform__ReapplyDrivenProperties(__RectTransform__ReapplyDrivenProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectTransform__ReapplyDrivenProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectTransform__ReapplyDrivenProperties(__RectTransform__ReapplyDrivenProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10911 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__RectTransform__ReapplyDrivenProperties, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::RectTransform
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::RectTransform*
class CORDL_TYPE RectTransform : public ::UnityEngine::Transform {
public:
  // Declarations
  using Axis = ::UnityEngine::__RectTransform__Axis;

  using Edge = ::UnityEngine::__RectTransform__Edge;

  using ReapplyDrivenProperties = ::UnityEngine::__RectTransform__ReapplyDrivenProperties;

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
  static __declspec(property(get = getStaticF_reapplyDrivenProperties, put = setStaticF_reapplyDrivenProperties)) ::UnityEngine::__RectTransform__ReapplyDrivenProperties* reapplyDrivenProperties;

  __declspec(property(get = get_rect)) ::UnityEngine::Rect rect;

  __declspec(property(get = get_sizeDelta, put = set_sizeDelta)) ::UnityEngine::Vector2 sizeDelta;

  /// @brief Method ForceUpdateRectTransforms, addr 0x483e6ec, size 0x3c, virtual false, abstract: false, final false
  inline void ForceUpdateRectTransforms();

  /// @brief Method GetLocalCorners, addr 0x483e728, size 0xe0, virtual false, abstract: false, final false
  inline void GetLocalCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  /// @brief Method GetParentSize, addr 0x483eb50, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetParentSize();

  /// @brief Method GetRectInParentSpace, addr 0x483eca4, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetRectInParentSpace();

  /// @brief Method GetWorldCorners, addr 0x483e808, size 0x140, virtual false, abstract: false, final false
  inline void GetWorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  static inline ::UnityEngine::RectTransform* New_ctor();

  /// @brief Method SendReapplyDrivenProperties, addr 0x483ec38, size 0x6c, virtual false, abstract: false, final false
  static inline void SendReapplyDrivenProperties(::UnityEngine::RectTransform* driven);

  /// @brief Method SetInsetAndSizeFromParentEdge, addr 0x483e948, size 0x110, virtual false, abstract: false, final false
  inline void SetInsetAndSizeFromParentEdge(::UnityEngine::__RectTransform__Edge edge, float_t inset, float_t size);

  /// @brief Method SetSizeWithCurrentAnchors, addr 0x483ea58, size 0xf8, virtual false, abstract: false, final false
  inline void SetSizeWithCurrentAnchors(::UnityEngine::__RectTransform__Axis axis, float_t size);

  /// @brief Method .ctor, addr 0x483ee60, size 0x188, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_reapplyDrivenProperties, addr 0x483db00, size 0xb8, virtual false, abstract: false, final false
  static inline void add_reapplyDrivenProperties(::UnityEngine::__RectTransform__ReapplyDrivenProperties* value);

  static inline ::UnityEngine::__RectTransform__ReapplyDrivenProperties* getStaticF_reapplyDrivenProperties();

  /// @brief Method get_anchorMax, addr 0x483de28, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_anchorMax();

  /// @brief Method get_anchorMax_Injected, addr 0x483de74, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorMax_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_anchorMin, addr 0x483dd0c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_anchorMin();

  /// @brief Method get_anchorMin_Injected, addr 0x483dd58, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorMin_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_anchoredPosition, addr 0x483df44, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_anchoredPosition();

  /// @brief Method get_anchoredPosition3D, addr 0x483e298, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchoredPosition3D();

  /// @brief Method get_anchoredPosition_Injected, addr 0x483df90, size 0x44, virtual false, abstract: false, final false
  inline void get_anchoredPosition_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_drivenByObject, addr 0x483e5ec, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_drivenByObject();

  /// @brief Method get_drivenProperties, addr 0x483e66c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::DrivenTransformProperties get_drivenProperties();

  /// @brief Method get_offsetMax, addr 0x483e450, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_offsetMax();

  /// @brief Method get_offsetMin, addr 0x483e308, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_offsetMin();

  /// @brief Method get_pivot, addr 0x483e17c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pivot();

  /// @brief Method get_pivot_Injected, addr 0x483e1c8, size 0x44, virtual false, abstract: false, final false
  inline void get_pivot_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_rect, addr 0x483dc70, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_rect_Injected, addr 0x483dcc8, size 0x44, virtual false, abstract: false, final false
  inline void get_rect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_sizeDelta, addr 0x483e060, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_sizeDelta();

  /// @brief Method get_sizeDelta_Injected, addr 0x483e0ac, size 0x44, virtual false, abstract: false, final false
  inline void get_sizeDelta_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method remove_reapplyDrivenProperties, addr 0x483dbb8, size 0xb8, virtual false, abstract: false, final false
  static inline void remove_reapplyDrivenProperties(::UnityEngine::__RectTransform__ReapplyDrivenProperties* value);

  static inline void setStaticF_reapplyDrivenProperties(::UnityEngine::__RectTransform__ReapplyDrivenProperties* value);

  /// @brief Method set_anchorMax, addr 0x483deb8, size 0x48, virtual false, abstract: false, final false
  inline void set_anchorMax(::UnityEngine::Vector2 value);

  /// @brief Method set_anchorMax_Injected, addr 0x483df00, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorMax_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_anchorMin, addr 0x483dd9c, size 0x48, virtual false, abstract: false, final false
  inline void set_anchorMin(::UnityEngine::Vector2 value);

  /// @brief Method set_anchorMin_Injected, addr 0x483dde4, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorMin_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_anchoredPosition, addr 0x483dfd4, size 0x48, virtual false, abstract: false, final false
  inline void set_anchoredPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_anchoredPosition3D, addr 0x483e2d0, size 0x38, virtual false, abstract: false, final false
  inline void set_anchoredPosition3D(::UnityEngine::Vector3 value);

  /// @brief Method set_anchoredPosition_Injected, addr 0x483e01c, size 0x44, virtual false, abstract: false, final false
  inline void set_anchoredPosition_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_drivenByObject, addr 0x483e628, size 0x44, virtual false, abstract: false, final false
  inline void set_drivenByObject(::UnityEngine::Object* value);

  /// @brief Method set_drivenProperties, addr 0x483e6a8, size 0x44, virtual false, abstract: false, final false
  inline void set_drivenProperties(::UnityEngine::DrivenTransformProperties value);

  /// @brief Method set_offsetMax, addr 0x483e4f0, size 0xfc, virtual false, abstract: false, final false
  inline void set_offsetMax(::UnityEngine::Vector2 value);

  /// @brief Method set_offsetMin, addr 0x483e35c, size 0xf4, virtual false, abstract: false, final false
  inline void set_offsetMin(::UnityEngine::Vector2 value);

  /// @brief Method set_pivot, addr 0x483e20c, size 0x48, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector2 value);

  /// @brief Method set_pivot_Injected, addr 0x483e254, size 0x44, virtual false, abstract: false, final false
  inline void set_pivot_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_sizeDelta, addr 0x483e0f0, size 0x48, virtual false, abstract: false, final false
  inline void set_sizeDelta(::UnityEngine::Vector2 value);

  /// @brief Method set_sizeDelta_Injected, addr 0x483e138, size 0x44, virtual false, abstract: false, final false
  inline void set_sizeDelta_Injected(ByRef<::UnityEngine::Vector2> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10912 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RectTransform, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__RectTransform__Axis, "UnityEngine", "RectTransform/Axis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__RectTransform__Edge, "UnityEngine", "RectTransform/Edge");
NEED_NO_BOX(::UnityEngine::RectTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransform*, "UnityEngine", "RectTransform");
NEED_NO_BOX(::UnityEngine::__RectTransform__ReapplyDrivenProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__RectTransform__ReapplyDrivenProperties*, "UnityEngine", "RectTransform/ReapplyDrivenProperties");
