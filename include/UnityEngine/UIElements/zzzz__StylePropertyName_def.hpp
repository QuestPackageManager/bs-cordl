#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyName)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
class PropertyBag_StylePropertyName_IdProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_StylePropertyName_NameProperty;
}
namespace UnityEngine::UIElements {
class StylePropertyName_PropertyBag;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyBag_StylePropertyName_IdProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_StylePropertyName_NameProperty;
}
namespace UnityEngine::UIElements {
class StylePropertyName_PropertyBag;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::StylePropertyName_PropertyBag);
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyName);
// Dependencies UnityEngine.UIElements.StyleSheets.StylePropertyId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyName
struct CORDL_TYPE StylePropertyName {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::StylePropertyName_PropertyBag;

  __declspec(property(get = get_id)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId id;

  __declspec(property(get = get_name)) ::StringW name;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>*();

  /// @brief Method Equals, addr 0x6a66178, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x6a661f4, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StylePropertyName other);

  /// @brief Method GetHashCode, addr 0x6a66170, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method StylePropertyIdFromString, addr 0x6a65fa8, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId StylePropertyIdFromString(::StringW name);

  /// @brief Method ToString, addr 0x6a66204, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6a66104, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x6a66050, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheets::StylePropertyId stylePropertyId);

  /// @brief Method get_id, addr 0x6a65f98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId get_id();

  /// @brief Method get_name, addr 0x6a65fa0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>* i___System__IEquatable_1___UnityEngine__UIElements__StylePropertyName_();

  /// @brief Method op_Equality, addr 0x6a66138, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StylePropertyName lhs, ::UnityEngine::UIElements::StylePropertyName rhs);

  /// @brief Method op_Implicit, addr 0x6a66150, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StylePropertyName op_Implicit___UnityEngine__UIElements__StylePropertyName(::StringW name);

  /// @brief Method op_Inequality, addr 0x6a66144, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::StylePropertyName lhs, ::UnityEngine::UIElements::StylePropertyName rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyName();

  // Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "_name_k__BackingField",
  // ty: "::StringW", modifiers: "", def_value: None }]
  constexpr StylePropertyName(::UnityEngine::UIElements::StyleSheets::StylePropertyId _id_k__BackingField, ::StringW _name_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5055 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <id>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyId _id_k__BackingField;

  /// @brief Field <name>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyName, _id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyName, _name_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyName, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.StylePropertyName, UnityEngine.UIElements.StyleSheets.StylePropertyId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyName/PropertyBag/IdProperty
class CORDL_TYPE PropertyBag_StylePropertyName_IdProperty
    : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::StylePropertyName, ::UnityEngine::UIElements::StyleSheets::StylePropertyId> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a66400, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId GetValue(::ByRef<::UnityEngine::UIElements::StylePropertyName> container);

  static inline ::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a66408, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::StylePropertyName> container, ::UnityEngine::UIElements::StyleSheets::StylePropertyId value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a66320, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a663f8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a663f0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_StylePropertyName_IdProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_StylePropertyName_IdProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_StylePropertyName_IdProperty(PropertyBag_StylePropertyName_IdProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_StylePropertyName_IdProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_StylePropertyName_IdProperty(PropertyBag_StylePropertyName_IdProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5052 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.StylePropertyName
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyName/PropertyBag/NameProperty
class CORDL_TYPE PropertyBag_StylePropertyName_NameProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::StylePropertyName, ::StringW> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a6641c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetValue(::ByRef<::UnityEngine::UIElements::StylePropertyName> container);

  static inline ::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a66424, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::StylePropertyName> container, ::StringW value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a66388, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a66414, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a6640c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_StylePropertyName_NameProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_StylePropertyName_NameProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_StylePropertyName_NameProperty(PropertyBag_StylePropertyName_NameProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_StylePropertyName_NameProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_StylePropertyName_NameProperty(PropertyBag_StylePropertyName_NameProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5053 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.StylePropertyName
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StylePropertyName/PropertyBag
class CORDL_TYPE StylePropertyName_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::StylePropertyName> {
public:
  // Declarations
  using IdProperty = ::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty;

  using NameProperty = ::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty;

  static inline ::UnityEngine::UIElements::StylePropertyName_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6a6620c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyName_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyName_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyName_PropertyBag(StylePropertyName_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyName_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyName_PropertyBag(StylePropertyName_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5054 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyName_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*, "UnityEngine.UIElements", "StylePropertyName/PropertyBag/IdProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*, "UnityEngine.UIElements", "StylePropertyName/PropertyBag/NameProperty");
NEED_NO_BOX(::UnityEngine::UIElements::StylePropertyName_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyName_PropertyBag*, "UnityEngine.UIElements", "StylePropertyName/PropertyBag");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyName, "UnityEngine.UIElements", "StylePropertyName");
