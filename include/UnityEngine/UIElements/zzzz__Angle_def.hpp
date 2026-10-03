#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Angle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__AngleUnit_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Angle)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct AngleUnit;
}
namespace UnityEngine::UIElements {
class Angle_PropertyBag;
}
namespace UnityEngine::UIElements {
struct Angle_Unit;
}
namespace UnityEngine::UIElements {
class PropertyBag_Angle_UnitProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Angle_ValueProperty;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Angle_Unit;
}
namespace UnityEngine::UIElements {
class Angle_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_Angle_UnitProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Angle_ValueProperty;
}
namespace UnityEngine::UIElements {
struct Angle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Angle_Unit);
MARK_REF_T(::UnityEngine::UIElements::Angle_PropertyBag*);
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*);
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*);
MARK_VAL_T(::UnityEngine::UIElements::Angle);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Angle_Unit, "UnityEngine.UIElements", "Angle/Unit");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Angle_PropertyBag*, "UnityEngine.UIElements", "Angle/PropertyBag");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*, "UnityEngine.UIElements", "Angle/PropertyBag/UnitProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*, "UnityEngine.UIElements", "Angle/PropertyBag/ValueProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Angle, "UnityEngine.UIElements", "Angle");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Angle/Unit
struct CORDL_TYPE Angle_Unit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Angle_Unit_Unwrapped
  enum struct __Angle_Unit_Unwrapped : int32_t {
    __E_Degree = static_cast<int32_t>(0x0),
    __E_Gradian = static_cast<int32_t>(0x1),
    __E_Radian = static_cast<int32_t>(0x2),
    __E_Turn = static_cast<int32_t>(0x3),
    __E_None = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Angle_Unit_Unwrapped() const noexcept {
    return static_cast<__Angle_Unit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Angle_Unit();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Angle_Unit(int32_t value__) noexcept;

  /// @brief Field Degree value: I32(0)
  static ::UnityEngine::UIElements::Angle_Unit const Degree;

  /// @brief Field Gradian value: I32(1)
  static ::UnityEngine::UIElements::Angle_Unit const Gradian;

  /// @brief Field None value: I32(4)
  static ::UnityEngine::UIElements::Angle_Unit const None;

  /// @brief Field Radian value: I32(2)
  static ::UnityEngine::UIElements::Angle_Unit const Radian;

  /// @brief Field Turn value: I32(3)
  static ::UnityEngine::UIElements::Angle_Unit const Turn;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4740 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Angle_Unit, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Angle_Unit) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Angle::Unit
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Angle
struct CORDL_TYPE Angle {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::Angle_PropertyBag;

  using Unit = ::UnityEngine::UIElements::Angle_Unit;

  /// @brief Field s_AngleUnitLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_AngleUnitLookup,
                      put = setStaticF_s_AngleUnitLookup)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::AngleUnit>* s_AngleUnitLookup;

  __declspec(property(get = get_unit, put = set_unit)) ::UnityEngine::UIElements::AngleUnit unit;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Angle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Angle>*();

  /// @brief Method Equals, addr 0x727987c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x72797fc, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Angle other);

  /// @brief Method GetHashCode, addr 0x727990c, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsNone, addr 0x727963c, size 0x10, virtual false, abstract: false, final false
  inline bool IsNone();

  /// @brief Method None, addr 0x7279608, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Angle None();

  /// @brief Method ToDegrees, addr 0x72796c0, size 0x84, virtual false, abstract: false, final false
  inline float_t ToDegrees();

  /// @brief Method ToString, addr 0x7279930, size 0x248, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x727964c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::AngleUnit unit);

  /// @brief Method .ctor, addr 0x7279610, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::Angle_Unit unit);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::AngleUnit>* getStaticF_s_AngleUnitLookup();

  /// @brief Method get_unit, addr 0x727962c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::AngleUnit get_unit();

  /// @brief Method get_value, addr 0x727961c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Angle>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Angle>* i___System__IEquatable_1___UnityEngine__UIElements__Angle_();

  /// @brief Method op_Equality, addr 0x7279760, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Angle lhs, ::UnityEngine::UIElements::Angle rhs);

  /// @brief Method op_Implicit, addr 0x7279744, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Angle op_Implicit___UnityEngine__UIElements__Angle(float_t value);

  /// @brief Method op_Inequality, addr 0x7279780, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Angle lhs, ::UnityEngine::UIElements::Angle rhs);

  static inline void setStaticF_s_AngleUnitLookup(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::AngleUnit>* value);

  /// @brief Method set_unit, addr 0x7279634, size 0x8, virtual false, abstract: false, final false
  inline void set_unit(::UnityEngine::UIElements::AngleUnit value);

  /// @brief Method set_value, addr 0x7279624, size 0x8, virtual false, abstract: false, final false
  inline void set_value(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Angle();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::Angle_Unit", modifiers: "",
  // def_value: None, comment: None }]
  constexpr Angle(float_t m_Value, ::UnityEngine::UIElements::Angle_Unit m_Unit) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4741 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [SerializeField]
  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  /// [SerializeField]
  /// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::Angle_Unit m_Unit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Angle, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Angle, m_Unit) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Angle) == 0x8, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Angle
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Angle/PropertyBag/ValueProperty
class CORDL_TYPE PropertyBag_Angle_ValueProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Angle, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x7279fa0, size 0x58, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::Angle> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty* New_ctor();

  /// @brief Method SetValue, addr 0x7279ff8, size 0x64, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::Angle> container, float_t value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x7279ec8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_IsReadOnly, addr 0x7279f98, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// [CompilerGenerated]
  /// @brief Method get_Name, addr 0x7279f90, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Angle_ValueProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Angle_ValueProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Angle_ValueProperty(PropertyBag_Angle_ValueProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Angle_ValueProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Angle_ValueProperty(PropertyBag_Angle_ValueProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4737 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Angle, UnityEngine.UIElements.AngleUnit
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Angle/PropertyBag/UnitProperty
class CORDL_TYPE PropertyBag_Angle_UnitProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Angle, ::UnityEngine::UIElements::AngleUnit> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x727a06c, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::AngleUnit GetValue(::by_ref<::UnityEngine::UIElements::Angle> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty* New_ctor();

  /// @brief Method SetValue, addr 0x727a0c4, size 0x64, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::Angle> container, ::UnityEngine::UIElements::AngleUnit value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x7279f2c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_IsReadOnly, addr 0x727a064, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// [CompilerGenerated]
  /// @brief Method get_Name, addr 0x727a05c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Angle_UnitProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Angle_UnitProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Angle_UnitProperty(PropertyBag_Angle_UnitProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Angle_UnitProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Angle_UnitProperty(PropertyBag_Angle_UnitProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4738 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.Angle
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Angle/PropertyBag
class CORDL_TYPE Angle_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::Angle> {
public:
  // Declarations
  using UnitProperty = ::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty;

  using ValueProperty = ::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty;

  static inline ::UnityEngine::UIElements::Angle_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x7279db0, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Angle_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Angle_PropertyBag", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Angle_PropertyBag(Angle_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Angle_PropertyBag", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Angle_PropertyBag(Angle_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4739 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::Angle_PropertyBag) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
