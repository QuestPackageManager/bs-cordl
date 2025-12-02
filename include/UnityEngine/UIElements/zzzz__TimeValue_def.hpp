#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimeValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeUnit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeValue)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class PropertyBag_TimeValue_UnitProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TimeValue_ValueProperty;
}
namespace UnityEngine::UIElements {
struct TimeUnit;
}
namespace UnityEngine::UIElements {
class TimeValue_PropertyBag;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyBag_TimeValue_UnitProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TimeValue_ValueProperty;
}
namespace UnityEngine::UIElements {
class TimeValue_PropertyBag;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_TimeValue_UnitProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_TimeValue_ValueProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::TimeValue_PropertyBag);
MARK_VAL_T(::UnityEngine::UIElements::TimeValue);
// Dependencies UnityEngine.UIElements.TimeUnit
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TimeValue
struct CORDL_TYPE TimeValue {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::TimeValue_PropertyBag;

  __declspec(property(get = get_unit, put = set_unit)) ::UnityEngine::UIElements::TimeUnit unit;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>*();

  /// @brief Method Equals, addr 0x6a60cac, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6a60c88, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TimeValue other);

  /// @brief Method GetHashCode, addr 0x6a60d40, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a60d64, size 0xf8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6a60c28, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x6a60c34, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::TimeUnit unit);

  /// @brief Method get_unit, addr 0x6a60c18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimeUnit get_unit();

  /// @brief Method get_value, addr 0x6a60c08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>* i___System__IEquatable_1___UnityEngine__UIElements__TimeValue_();

  /// @brief Method op_Equality, addr 0x6a60c48, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TimeValue lhs, ::UnityEngine::UIElements::TimeValue rhs);

  /// @brief Method op_Implicit, addr 0x6a60c40, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TimeValue op_Implicit___UnityEngine__UIElements__TimeValue(float_t value);

  /// @brief Method op_Inequality, addr 0x6a60c68, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TimeValue lhs, ::UnityEngine::UIElements::TimeValue rhs);

  /// @brief Method set_unit, addr 0x6a60c20, size 0x8, virtual false, abstract: false, final false
  inline void set_unit(::UnityEngine::UIElements::TimeUnit value);

  /// @brief Method set_value, addr 0x6a60c10, size 0x8, virtual false, abstract: false, final false
  inline void set_value(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeValue();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::TimeUnit", modifiers: "", def_value: None
  // }]
  constexpr TimeValue(float_t m_Value, ::UnityEngine::UIElements::TimeUnit m_Unit) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4991 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  /// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::TimeUnit m_Unit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TimeValue, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimeValue, m_Unit) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimeValue, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.TimeValue
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TimeValue/PropertyBag/ValueProperty
class CORDL_TYPE PropertyBag_TimeValue_ValueProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TimeValue, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a61048, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::ByRef<::UnityEngine::UIElements::TimeValue> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TimeValue_ValueProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a61050, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::TimeValue> container, float_t value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a60f70, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a61040, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a61038, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TimeValue_ValueProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TimeValue_ValueProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TimeValue_ValueProperty(PropertyBag_TimeValue_ValueProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TimeValue_ValueProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TimeValue_ValueProperty(PropertyBag_TimeValue_ValueProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4988 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TimeValue_ValueProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TimeValue_ValueProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_TimeValue_ValueProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.TimeUnit, UnityEngine.UIElements.TimeValue
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TimeValue/PropertyBag/UnitProperty
class CORDL_TYPE PropertyBag_TimeValue_UnitProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TimeValue, ::UnityEngine::UIElements::TimeUnit> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a61068, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::TimeUnit GetValue(::ByRef<::UnityEngine::UIElements::TimeValue> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TimeValue_UnitProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a61070, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::TimeValue> container, ::UnityEngine::UIElements::TimeUnit value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a60fd4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a61060, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a61058, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TimeValue_UnitProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TimeValue_UnitProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TimeValue_UnitProperty(PropertyBag_TimeValue_UnitProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TimeValue_UnitProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TimeValue_UnitProperty(PropertyBag_TimeValue_UnitProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4989 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TimeValue_UnitProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TimeValue_UnitProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_TimeValue_UnitProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.TimeValue
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TimeValue/PropertyBag
class CORDL_TYPE TimeValue_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::TimeValue> {
public:
  // Declarations
  using UnitProperty = ::UnityEngine::UIElements::PropertyBag_TimeValue_UnitProperty;

  using ValueProperty = ::UnityEngine::UIElements::PropertyBag_TimeValue_ValueProperty;

  static inline ::UnityEngine::UIElements::TimeValue_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6a60e5c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeValue_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeValue_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeValue_PropertyBag(TimeValue_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeValue_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeValue_PropertyBag(TimeValue_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4990 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimeValue_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_TimeValue_UnitProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_TimeValue_UnitProperty*, "UnityEngine.UIElements", "TimeValue/PropertyBag/UnitProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_TimeValue_ValueProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_TimeValue_ValueProperty*, "UnityEngine.UIElements", "TimeValue/PropertyBag/ValueProperty");
NEED_NO_BOX(::UnityEngine::UIElements::TimeValue_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimeValue_PropertyBag*, "UnityEngine.UIElements", "TimeValue/PropertyBag");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimeValue, "UnityEngine.UIElements", "TimeValue");
