#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Length.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__LengthUnit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Length)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct LengthUnit;
}
namespace UnityEngine::UIElements {
class Length_PropertyBag;
}
namespace UnityEngine::UIElements {
struct Length_Unit;
}
namespace UnityEngine::UIElements {
class PropertyBag_Length_UnitProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Length_ValueProperty;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Length_Unit;
}
namespace UnityEngine::UIElements {
class Length_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_Length_UnitProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Length_ValueProperty;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Length_Unit);
MARK_REF_PTR_T(::UnityEngine::UIElements::Length_PropertyBag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty);
MARK_VAL_T(::UnityEngine::UIElements::Length);
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Length/Unit
struct CORDL_TYPE Length_Unit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Length_Unit_Unwrapped
enum struct __Length_Unit_Unwrapped : int32_t {
__E_Pixel = static_cast<int32_t>(0x0),
__E_Percent = static_cast<int32_t>(0x1),
__E_Auto = static_cast<int32_t>(0x2),
__E_None = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Length_Unit_Unwrapped () const noexcept {
return static_cast<__Length_Unit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Length_Unit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Length_Unit(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(2)
static ::UnityEngine::UIElements::Length_Unit const Auto;

/// @brief Field None value: I32(3)
static ::UnityEngine::UIElements::Length_Unit const None;

/// @brief Field Percent value: I32(1)
static ::UnityEngine::UIElements::Length_Unit const Percent;

/// @brief Field Pixel value: I32(0)
static ::UnityEngine::UIElements::Length_Unit const Pixel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Length_Unit, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Length_Unit, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Length::Unit
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Length
struct CORDL_TYPE Length {
public:
// Declarations
using PropertyBag = ::UnityEngine::UIElements::Length_PropertyBag;

using Unit = ::UnityEngine::UIElements::Length_Unit;

 __declspec(property(get=get_unit, put=set_unit)) ::UnityEngine::UIElements::LengthUnit  unit;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::Length>*() ;

/// @brief Method Auto, addr 0x6ac6068, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length Auto() ;

/// @brief Method Equals, addr 0x6ac617c, size 0x94, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x6ac6158, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::Length  other) ;

/// @brief Method GetHashCode, addr 0x6ac34ac, size 0x24, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsAuto, addr 0x6ac60d4, size 0x10, virtual false, abstract: false, final false
inline bool IsAuto() ;

/// @brief Method IsNone, addr 0x6ac60e4, size 0x10, virtual false, abstract: false, final false
inline bool IsNone() ;

/// @brief Method None, addr 0x6ac6094, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length None() ;

/// @brief Method Percent, addr 0x6ac6020, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length Percent(float_t  value) ;

/// @brief Method ToString, addr 0x6ac6210, size 0x1cc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x6ac60f4, size 0x24, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor, addr 0x6ac6044, size 0x24, virtual false, abstract: false, final false
inline void _ctor(float_t  value, ::UnityEngine::UIElements::LengthUnit  unit) ;

/// @brief Method .ctor, addr 0x6ac6070, size 0x24, virtual false, abstract: false, final false
inline void _ctor(float_t  value, ::UnityEngine::UIElements::Length_Unit  unit) ;

/// @brief Method get_unit, addr 0x6ac60c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::LengthUnit get_unit() ;

/// @brief Method get_value, addr 0x6ac609c, size 0x8, virtual false, abstract: false, final false
inline float_t get_value() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Length>* i___System__IEquatable_1___UnityEngine__UIElements__Length_() ;

/// @brief Method op_Equality, addr 0x6ac30e8, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::UIElements::Length  lhs, ::UnityEngine::UIElements::Length  rhs) ;

/// @brief Method op_Implicit, addr 0x6ac6118, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length op_Implicit___UnityEngine__UIElements__Length(float_t  value) ;

/// @brief Method op_Inequality, addr 0x6ac6138, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::UIElements::Length  lhs, ::UnityEngine::UIElements::Length  rhs) ;

/// @brief Method set_unit, addr 0x6ac60cc, size 0x8, virtual false, abstract: false, final false
inline void set_unit(::UnityEngine::UIElements::LengthUnit  value) ;

/// @brief Method set_value, addr 0x6ac60a4, size 0x20, virtual false, abstract: false, final false
inline void set_value(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Length() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::Length_Unit", modifiers: "", def_value: None }]
constexpr Length(float_t  m_Value, ::UnityEngine::UIElements::Length_Unit  m_Unit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_MaxValue offset 0xffffffff size 0x4
static constexpr float_t  k_MaxValue{static_cast<float_t>(8388608.0f)};

/// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
 float_t  m_Value;

/// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::UIElements::Length_Unit  m_Unit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Length, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Length, m_Unit) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Length, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Length/PropertyBag/ValueProperty
class CORDL_TYPE PropertyBag_Length_ValueProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Length,float_t> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReadOnly_k__BackingField, put=__cordl_internal_set__IsReadOnly_k__BackingField)) bool  _IsReadOnly_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Method GetValue, addr 0x6ac65c8, size 0x8, virtual true, abstract: false, final false
inline float_t GetValue(::ByRef<::UnityEngine::UIElements::Length>  container) ;

static inline ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty* New_ctor() ;

/// @brief Method SetValue, addr 0x6ac65d0, size 0x20, virtual true, abstract: false, final false
inline void SetValue(::ByRef<::UnityEngine::UIElements::Length>  container, float_t  value) ;

constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x6ac64f0, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0x6ac65c0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0x6ac65b8, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBag_Length_ValueProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Length_ValueProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyBag_Length_ValueProperty(PropertyBag_Length_ValueProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Length_ValueProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyBag_Length_ValueProperty(PropertyBag_Length_ValueProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4949};

/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsReadOnly_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length, UnityEngine.UIElements.LengthUnit
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Length/PropertyBag/UnitProperty
class CORDL_TYPE PropertyBag_Length_UnitProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::LengthUnit> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReadOnly_k__BackingField, put=__cordl_internal_set__IsReadOnly_k__BackingField)) bool  _IsReadOnly_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Method GetValue, addr 0x6ac6600, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::LengthUnit GetValue(::ByRef<::UnityEngine::UIElements::Length>  container) ;

static inline ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty* New_ctor() ;

/// @brief Method SetValue, addr 0x6ac6608, size 0x8, virtual true, abstract: false, final false
inline void SetValue(::ByRef<::UnityEngine::UIElements::Length>  container, ::UnityEngine::UIElements::LengthUnit  value) ;

constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x6ac6554, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0x6ac65f8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0x6ac65f0, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBag_Length_UnitProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Length_UnitProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyBag_Length_UnitProperty(PropertyBag_Length_UnitProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Length_UnitProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyBag_Length_UnitProperty(PropertyBag_Length_UnitProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4950};

/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsReadOnly_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Length/PropertyBag
class CORDL_TYPE Length_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::Length> {
public:
// Declarations
using UnitProperty = ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty;

using ValueProperty = ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty;

static inline ::UnityEngine::UIElements::Length_PropertyBag* New_ctor() ;

/// @brief Method .ctor, addr 0x6ac63dc, size 0x114, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Length_PropertyBag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Length_PropertyBag", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Length_PropertyBag(Length_PropertyBag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Length_PropertyBag", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Length_PropertyBag(Length_PropertyBag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4951};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Length_PropertyBag, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Length_Unit, "UnityEngine.UIElements", "Length/Unit");
NEED_NO_BOX(::UnityEngine::UIElements::Length_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Length_PropertyBag*, "UnityEngine.UIElements", "Length/PropertyBag");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*, "UnityEngine.UIElements", "Length/PropertyBag/UnitProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*, "UnityEngine.UIElements", "Length/PropertyBag/ValueProperty");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Length, "UnityEngine.UIElements", "Length");
