#pragma once
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
namespace UnityEngine {
class __RectTransform__ReapplyDrivenProperties;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct __RectTransform__Edge;
}
namespace UnityEngine {
struct DrivenTransformProperties;
}
namespace UnityEngine {
struct __RectTransform__Axis;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10279))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RectTransform__Edge(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectTransform__Edge();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__RectTransform__Edge const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__RectTransform__Edge const Right;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__RectTransform__Edge const Top;

  /// @brief Field Bottom value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__RectTransform__Edge const Bottom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__RectTransform__Edge, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__RectTransform__Edge, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Axis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10280))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RectTransform__Axis(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectTransform__Axis();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Horizontal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__RectTransform__Axis const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__RectTransform__Axis const Vertical;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__RectTransform__Axis, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__RectTransform__Axis, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::ReapplyDrivenProperties
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10281))
// CS Name: ::RectTransform::ReapplyDrivenProperties*
class CORDL_TYPE __RectTransform__ReapplyDrivenProperties : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__RectTransform__ReapplyDrivenProperties* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ce3c18, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2ce3cec, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::RectTransform* driven);

  // Ctor Parameters [CppParam { name: "", ty: "__RectTransform__ReapplyDrivenProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectTransform__ReapplyDrivenProperties(__RectTransform__ReapplyDrivenProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectTransform__ReapplyDrivenProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectTransform__ReapplyDrivenProperties(__RectTransform__ReapplyDrivenProperties const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectTransform__ReapplyDrivenProperties();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__RectTransform__ReapplyDrivenProperties, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::RectTransform
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10276))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10282))
// CS Name: ::UnityEngine::RectTransform*
class CORDL_TYPE RectTransform : public ::UnityEngine::Transform {
public:
  // Declarations
  using ReapplyDrivenProperties = ::UnityEngine::__RectTransform__ReapplyDrivenProperties;

  using Axis = ::UnityEngine::__RectTransform__Axis;

  using Edge = ::UnityEngine::__RectTransform__Edge;

  /// @brief Field reapplyDrivenProperties, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_reapplyDrivenProperties, put = setStaticF_reapplyDrivenProperties))::UnityEngine::__RectTransform__ReapplyDrivenProperties* reapplyDrivenProperties;

  __declspec(property(get = get_rect))::UnityEngine::Rect rect;

  __declspec(property(get = get_anchorMin, put = set_anchorMin))::UnityEngine::Vector2 anchorMin;

  __declspec(property(get = get_anchorMax, put = set_anchorMax))::UnityEngine::Vector2 anchorMax;

  __declspec(property(get = get_anchoredPosition, put = set_anchoredPosition))::UnityEngine::Vector2 anchoredPosition;

  __declspec(property(get = get_sizeDelta, put = set_sizeDelta))::UnityEngine::Vector2 sizeDelta;

  __declspec(property(get = get_pivot, put = set_pivot))::UnityEngine::Vector2 pivot;

  __declspec(property(get = get_anchoredPosition3D, put = set_anchoredPosition3D))::UnityEngine::Vector3 anchoredPosition3D;

  __declspec(property(get = get_offsetMin, put = set_offsetMin))::UnityEngine::Vector2 offsetMin;

  __declspec(property(get = get_offsetMax, put = set_offsetMax))::UnityEngine::Vector2 offsetMax;

  __declspec(property(get = get_drivenByObject, put = set_drivenByObject))::UnityEngine::Object* drivenByObject;

  __declspec(property(get = get_drivenProperties, put = set_drivenProperties))::UnityEngine::DrivenTransformProperties drivenProperties;

  static inline void setStaticF_reapplyDrivenProperties(::UnityEngine::__RectTransform__ReapplyDrivenProperties* value);

  static inline ::UnityEngine::__RectTransform__ReapplyDrivenProperties* getStaticF_reapplyDrivenProperties();

  /// @brief Method add_reapplyDrivenProperties, addr 0x2ce27a0, size 0xb8, virtual false, abstract: false, final false
  static inline void add_reapplyDrivenProperties(::UnityEngine::__RectTransform__ReapplyDrivenProperties* value);

  /// @brief Method remove_reapplyDrivenProperties, addr 0x2ce2858, size 0xb8, virtual false, abstract: false, final false
  static inline void remove_reapplyDrivenProperties(::UnityEngine::__RectTransform__ReapplyDrivenProperties* value);

  /// @brief Method get_rect, addr 0x2ce2910, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_rect();

  /// @brief Method get_anchorMin, addr 0x2ce29ac, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_anchorMin();

  /// @brief Method set_anchorMin, addr 0x2ce2a3c, size 0x48, virtual false, abstract: false, final false
  inline void set_anchorMin(::UnityEngine::Vector2 value);

  /// @brief Method get_anchorMax, addr 0x2ce2ac8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_anchorMax();

  /// @brief Method set_anchorMax, addr 0x2ce2b58, size 0x48, virtual false, abstract: false, final false
  inline void set_anchorMax(::UnityEngine::Vector2 value);

  /// @brief Method get_anchoredPosition, addr 0x2ce2be4, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_anchoredPosition();

  /// @brief Method set_anchoredPosition, addr 0x2ce2c74, size 0x48, virtual false, abstract: false, final false
  inline void set_anchoredPosition(::UnityEngine::Vector2 value);

  /// @brief Method get_sizeDelta, addr 0x2ce2d00, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_sizeDelta();

  /// @brief Method set_sizeDelta, addr 0x2ce2d90, size 0x48, virtual false, abstract: false, final false
  inline void set_sizeDelta(::UnityEngine::Vector2 value);

  /// @brief Method get_pivot, addr 0x2ce2e1c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pivot();

  /// @brief Method set_pivot, addr 0x2ce2eac, size 0x48, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector2 value);

  /// @brief Method get_anchoredPosition3D, addr 0x2ce2f38, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchoredPosition3D();

  /// @brief Method set_anchoredPosition3D, addr 0x2ce2f6c, size 0x30, virtual false, abstract: false, final false
  inline void set_anchoredPosition3D(::UnityEngine::Vector3 value);

  /// @brief Method get_offsetMin, addr 0x2ce2f9c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_offsetMin();

  /// @brief Method set_offsetMin, addr 0x2ce2ff0, size 0xf4, virtual false, abstract: false, final false
  inline void set_offsetMin(::UnityEngine::Vector2 value);

  /// @brief Method get_offsetMax, addr 0x2ce30e4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_offsetMax();

  /// @brief Method set_offsetMax, addr 0x2ce3184, size 0xfc, virtual false, abstract: false, final false
  inline void set_offsetMax(::UnityEngine::Vector2 value);

  /// @brief Method get_drivenByObject, addr 0x2ce3280, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Object* get_drivenByObject();

  /// @brief Method set_drivenByObject, addr 0x2ce32bc, size 0x44, virtual false, abstract: false, final false
  inline void set_drivenByObject(::UnityEngine::Object* value);

  /// @brief Method get_drivenProperties, addr 0x2ce3300, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::DrivenTransformProperties get_drivenProperties();

  /// @brief Method set_drivenProperties, addr 0x2ce333c, size 0x44, virtual false, abstract: false, final false
  inline void set_drivenProperties(::UnityEngine::DrivenTransformProperties value);

  /// @brief Method ForceUpdateRectTransforms, addr 0x2ce3380, size 0x3c, virtual false, abstract: false, final false
  inline void ForceUpdateRectTransforms();

  /// @brief Method GetLocalCorners, addr 0x2ce33bc, size 0x134, virtual false, abstract: false, final false
  inline void GetLocalCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  /// @brief Method GetWorldCorners, addr 0x2ce34f0, size 0x15c, virtual false, abstract: false, final false
  inline void GetWorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  /// @brief Method SetInsetAndSizeFromParentEdge, addr 0x2ce364c, size 0x114, virtual false, abstract: false, final false
  inline void SetInsetAndSizeFromParentEdge(::UnityEngine::__RectTransform__Edge edge, float_t inset, float_t size);

  /// @brief Method SetSizeWithCurrentAnchors, addr 0x2ce3760, size 0xfc, virtual false, abstract: false, final false
  inline void SetSizeWithCurrentAnchors(::UnityEngine::__RectTransform__Axis axis, float_t size);

  /// @brief Method SendReapplyDrivenProperties, addr 0x2ce397c, size 0x6c, virtual false, abstract: false, final false
  static inline void SendReapplyDrivenProperties(::UnityEngine::RectTransform* driven);

  /// @brief Method GetRectInParentSpace, addr 0x2ce39e8, size 0x228, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetRectInParentSpace();

  /// @brief Method GetParentSize, addr 0x2ce385c, size 0x120, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetParentSize();

  static inline ::UnityEngine::RectTransform* New_ctor();

  /// @brief Method .ctor, addr 0x2ce3c10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rect_Injected, addr 0x2ce2968, size 0x44, virtual false, abstract: false, final false
  inline void get_rect_Injected(ByRef<::UnityEngine::Rect> ret);

  /// @brief Method get_anchorMin_Injected, addr 0x2ce29f8, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorMin_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_anchorMin_Injected, addr 0x2ce2a84, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorMin_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method get_anchorMax_Injected, addr 0x2ce2b14, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorMax_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_anchorMax_Injected, addr 0x2ce2ba0, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorMax_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method get_anchoredPosition_Injected, addr 0x2ce2c30, size 0x44, virtual false, abstract: false, final false
  inline void get_anchoredPosition_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_anchoredPosition_Injected, addr 0x2ce2cbc, size 0x44, virtual false, abstract: false, final false
  inline void set_anchoredPosition_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method get_sizeDelta_Injected, addr 0x2ce2d4c, size 0x44, virtual false, abstract: false, final false
  inline void get_sizeDelta_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_sizeDelta_Injected, addr 0x2ce2dd8, size 0x44, virtual false, abstract: false, final false
  inline void set_sizeDelta_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method get_pivot_Injected, addr 0x2ce2e68, size 0x44, virtual false, abstract: false, final false
  inline void get_pivot_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_pivot_Injected, addr 0x2ce2ef4, size 0x44, virtual false, abstract: false, final false
  inline void set_pivot_Injected(ByRef<::UnityEngine::Vector2> value);

  // Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectTransform(RectTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectTransform(RectTransform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectTransform();

public:
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
