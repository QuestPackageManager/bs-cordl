#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Ratio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Ratio)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class PropertyBag_Ratio_AutoProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Ratio_ValueProperty;
}
namespace UnityEngine::UIElements {
class Ratio_PropertyBag;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyBag_Ratio_AutoProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Ratio_ValueProperty;
}
namespace UnityEngine::UIElements {
class Ratio_PropertyBag;
}
namespace UnityEngine::UIElements {
struct Ratio;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_Ratio_AutoProperty*);
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_Ratio_ValueProperty*);
MARK_REF_T(::UnityEngine::UIElements::Ratio_PropertyBag*);
MARK_VAL_T(::UnityEngine::UIElements::Ratio);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_Ratio_AutoProperty*, "UnityEngine.UIElements", "Ratio/PropertyBag/AutoProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_Ratio_ValueProperty*, "UnityEngine.UIElements", "Ratio/PropertyBag/ValueProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Ratio_PropertyBag*, "UnityEngine.UIElements", "Ratio/PropertyBag");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Ratio, "UnityEngine.UIElements", "Ratio");
// [IsReadOnly]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Ratio
struct CORDL_TYPE Ratio {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::Ratio_PropertyBag;

  __declspec(property(get = get_value)) float_t value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Ratio>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Ratio>*();

  /// @brief Method Equals, addr 0x7106cb4, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x7106c7c, size 0x38, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Ratio other);

  /// @brief Method GetHashCode, addr 0x7106d5c, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsAuto, addr 0x7106bf4, size 0x18, virtual false, abstract: false, final false
  inline bool IsAuto();

  /// @brief Method ToString, addr 0x7106d7c, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x7106be4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method get_value, addr 0x7106bec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Ratio>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Ratio>* i___System__IEquatable_1___UnityEngine__UIElements__Ratio_();

  /// @brief Method op_Equality, addr 0x7106c10, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Ratio lhs, ::UnityEngine::UIElements::Ratio rhs);

  /// @brief Method op_Implicit, addr 0x7105360, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Ratio op_Implicit___UnityEngine__UIElements__Ratio(float_t value);

  /// @brief Method op_Implicit, addr 0x7106c0c, size 0x4, virtual false, abstract: false, final false
  static inline float_t op_Implicit_float_t(::UnityEngine::UIElements::Ratio value);

  /// @brief Method op_Inequality, addr 0x7106c44, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Ratio lhs, ::UnityEngine::UIElements::Ratio rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Ratio();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Ratio(float_t m_Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5023 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Ratio, m_Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Ratio) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Ratio
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Ratio/PropertyBag/ValueProperty
class CORDL_TYPE PropertyBag_Ratio_ValueProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Ratio, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x7107018, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::UIElements::Ratio> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Ratio_ValueProperty* New_ctor();

  /// @brief Method SetValue, addr 0x7107020, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::Ratio> container, float_t value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x7106f3c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_IsReadOnly, addr 0x7107010, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// [CompilerGenerated]
  /// @brief Method get_Name, addr 0x7107008, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Ratio_ValueProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Ratio_ValueProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Ratio_ValueProperty(PropertyBag_Ratio_ValueProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Ratio_ValueProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Ratio_ValueProperty(PropertyBag_Ratio_ValueProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5020 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Ratio_ValueProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Ratio_ValueProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_Ratio_ValueProperty) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Ratio
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Ratio/PropertyBag/AutoProperty
class CORDL_TYPE PropertyBag_Ratio_AutoProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Ratio, bool> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x7107068, size 0x18, virtual true, abstract: false, final false
  inline bool GetValue(::by_ref<::UnityEngine::UIElements::Ratio> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Ratio_AutoProperty* New_ctor();

  /// @brief Method SetValue, addr 0x7107080, size 0x38, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::Ratio> container, bool value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x7106fa0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_IsReadOnly, addr 0x7107060, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// [CompilerGenerated]
  /// @brief Method get_Name, addr 0x7107058, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Ratio_AutoProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Ratio_AutoProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Ratio_AutoProperty(PropertyBag_Ratio_AutoProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Ratio_AutoProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Ratio_AutoProperty(PropertyBag_Ratio_AutoProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5021 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Ratio_AutoProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Ratio_AutoProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_Ratio_AutoProperty) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.Ratio
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Ratio/PropertyBag
class CORDL_TYPE Ratio_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::Ratio> {
public:
  // Declarations
  using AutoProperty = ::UnityEngine::UIElements::PropertyBag_Ratio_AutoProperty;

  using ValueProperty = ::UnityEngine::UIElements::PropertyBag_Ratio_ValueProperty;

  static inline ::UnityEngine::UIElements::Ratio_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x7106e24, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ratio_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ratio_PropertyBag", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ratio_PropertyBag(Ratio_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ratio_PropertyBag", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ratio_PropertyBag(Ratio_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5022 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::Ratio_PropertyBag) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
