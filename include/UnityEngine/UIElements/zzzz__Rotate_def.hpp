#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Rotate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rotate)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine::UIElements {
class PropertyBag_Rotate_AngleProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Rotate_AxisProperty;
}
namespace UnityEngine::UIElements {
class Rotate_PropertyBag;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyBag_Rotate_AngleProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Rotate_AxisProperty;
}
namespace UnityEngine::UIElements {
class Rotate_PropertyBag;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Rotate_AngleProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Rotate_AxisProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::Rotate_PropertyBag);
MARK_VAL_T(::UnityEngine::UIElements::Rotate);
// Dependencies UnityEngine.UIElements.Angle, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Rotate
struct CORDL_TYPE Rotate {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::Rotate_PropertyBag;

  __declspec(property(get = get_angle, put = set_angle)) ::UnityEngine::UIElements::Angle angle;

  __declspec(property(get = get_axis, put = set_axis)) ::UnityEngine::Vector3 axis;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Rotate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Rotate>*();

  /// @brief Method Equals, addr 0x6a5d364, size 0xe4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6a5d2e4, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Rotate other);

  /// @brief Method GetHashCode, addr 0x6a5afbc, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x6a5d184, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate Initial();

  /// @brief Method None, addr 0x6a5d1e8, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate None();

  /// @brief Method ToQuaternion, addr 0x6a5d4c0, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ToQuaternion();

  /// @brief Method ToString, addr 0x6a5d448, size 0x78, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6a5d0cc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Angle angle);

  /// @brief Method .ctor, addr 0x6a5d130, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Quaternion quaternion);

  /// @brief Method get_angle, addr 0x6a5d240, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Angle get_angle();

  /// @brief Method get_axis, addr 0x6a5d250, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_axis();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Rotate>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Rotate>* i___System__IEquatable_1___UnityEngine__UIElements__Rotate_();

  /// @brief Method op_Equality, addr 0x6a5acc4, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Rotate lhs, ::UnityEngine::UIElements::Rotate rhs);

  /// @brief Method op_Inequality, addr 0x6a5d268, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Rotate lhs, ::UnityEngine::UIElements::Rotate rhs);

  /// @brief Method set_angle, addr 0x6a5d248, size 0x8, virtual false, abstract: false, final false
  inline void set_angle(::UnityEngine::UIElements::Angle value);

  /// @brief Method set_axis, addr 0x6a5d25c, size 0xc, virtual false, abstract: false, final false
  inline void set_axis(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Rotate();

  // Ctor Parameters [CppParam { name: "m_Angle", ty: "::UnityEngine::UIElements::Angle", modifiers: "", def_value: None }, CppParam { name: "m_Axis", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
  constexpr Rotate(::UnityEngine::UIElements::Angle m_Angle, ::UnityEngine::Vector3 m_Axis, bool m_IsNone) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4958 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Angle, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Angle m_Angle;

  /// @brief Field m_Axis, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Axis;

  /// @brief Field m_IsNone, offset: 0x14, size: 0x1, def value: None
  bool m_IsNone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Rotate, m_Angle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Rotate, m_Axis) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Rotate, m_IsNone) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Rotate, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Angle, UnityEngine.UIElements.Rotate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Rotate/PropertyBag/AngleProperty
class CORDL_TYPE PropertyBag_Rotate_AngleProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Angle> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a5d6d0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Angle GetValue(::ByRef<::UnityEngine::UIElements::Rotate> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Rotate_AngleProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a5d6d8, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Rotate> container, ::UnityEngine::UIElements::Angle value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a5d5f8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a5d6c8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a5d6c0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Rotate_AngleProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Rotate_AngleProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Rotate_AngleProperty(PropertyBag_Rotate_AngleProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Rotate_AngleProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Rotate_AngleProperty(PropertyBag_Rotate_AngleProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4955 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Rotate_AngleProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Rotate_AngleProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Rotate_AngleProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Rotate, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Rotate/PropertyBag/AxisProperty
class CORDL_TYPE PropertyBag_Rotate_AxisProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Rotate, ::UnityEngine::Vector3> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a5d6f0, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetValue(::ByRef<::UnityEngine::UIElements::Rotate> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Rotate_AxisProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a5d6fc, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Rotate> container, ::UnityEngine::Vector3 value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a5d65c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a5d6e8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a5d6e0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Rotate_AxisProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Rotate_AxisProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Rotate_AxisProperty(PropertyBag_Rotate_AxisProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Rotate_AxisProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Rotate_AxisProperty(PropertyBag_Rotate_AxisProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4956 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Rotate_AxisProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Rotate_AxisProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Rotate_AxisProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.Rotate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Rotate/PropertyBag
class CORDL_TYPE Rotate_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::Rotate> {
public:
  // Declarations
  using AngleProperty = ::UnityEngine::UIElements::PropertyBag_Rotate_AngleProperty;

  using AxisProperty = ::UnityEngine::UIElements::PropertyBag_Rotate_AxisProperty;

  static inline ::UnityEngine::UIElements::Rotate_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6a5d4e4, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rotate_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rotate_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rotate_PropertyBag(Rotate_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rotate_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rotate_PropertyBag(Rotate_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4957 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Rotate_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Rotate_AngleProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Rotate_AngleProperty*, "UnityEngine.UIElements", "Rotate/PropertyBag/AngleProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Rotate_AxisProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Rotate_AxisProperty*, "UnityEngine.UIElements", "Rotate/PropertyBag/AxisProperty");
NEED_NO_BOX(::UnityEngine::UIElements::Rotate_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Rotate_PropertyBag*, "UnityEngine.UIElements", "Rotate/PropertyBag");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Rotate, "UnityEngine.UIElements", "Rotate");
