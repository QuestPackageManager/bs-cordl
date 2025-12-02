#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Translate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Translate)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class PropertyBag_Translate_XProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Translate_YProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Translate_ZProperty;
}
namespace UnityEngine::UIElements {
class Translate_PropertyBag;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyBag_Translate_XProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Translate_YProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Translate_ZProperty;
}
namespace UnityEngine::UIElements {
class Translate_PropertyBag;
}
namespace UnityEngine::UIElements {
struct Translate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Translate_XProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Translate_YProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Translate_ZProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::Translate_PropertyBag);
MARK_VAL_T(::UnityEngine::UIElements::Translate);
// Dependencies UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Translate
struct CORDL_TYPE Translate {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::Translate_PropertyBag;

  __declspec(property(get = get_x, put = set_x)) ::UnityEngine::UIElements::Length x;

  __declspec(property(get = get_y, put = set_y)) ::UnityEngine::UIElements::Length y;

  __declspec(property(get = get_z, put = set_z)) float_t z;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Translate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Translate>*();

  /// @brief Method Equals, addr 0x6a617fc, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6a6177c, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Translate other);

  /// @brief Method GetHashCode, addr 0x6a5b150, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method None, addr 0x6a5fc58, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Translate None();

  /// @brief Method ToString, addr 0x6a61890, size 0x13c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6a616a0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 v);

  /// @brief Method .ctor, addr 0x6a61690, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Length x, ::UnityEngine::UIElements::Length y, float_t z);

  /// @brief Method get_x, addr 0x6a616d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_x();

  /// @brief Method get_y, addr 0x6a616e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_y();

  /// @brief Method get_z, addr 0x6a616f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_z();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Translate>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Translate>* i___System__IEquatable_1___UnityEngine__UIElements__Translate_();

  /// @brief Method op_Equality, addr 0x6a5ae00, size 0x80, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Translate lhs, ::UnityEngine::UIElements::Translate rhs);

  /// @brief Method op_Inequality, addr 0x6a61700, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Translate lhs, ::UnityEngine::UIElements::Translate rhs);

  /// @brief Method set_x, addr 0x6a616d8, size 0x8, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::UIElements::Length value);

  /// @brief Method set_y, addr 0x6a616e8, size 0x8, virtual false, abstract: false, final false
  inline void set_y(::UnityEngine::UIElements::Length value);

  /// @brief Method set_z, addr 0x6a616f8, size 0x8, virtual false, abstract: false, final false
  inline void set_z(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Translate();

  // Ctor Parameters [CppParam { name: "m_X", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }, CppParam { name: "m_Z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_isNone", ty: "bool", modifiers: "", def_value: None }]
  constexpr Translate(::UnityEngine::UIElements::Length m_X, ::UnityEngine::UIElements::Length m_Y, float_t m_Z, bool m_isNone) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5002 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_X, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_X;

  /// @brief Field m_Y, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_Y;

  /// @brief Field m_Z, offset: 0x10, size: 0x4, def value: None
  float_t m_Z;

  /// @brief Field m_isNone, offset: 0x14, size: 0x1, def value: None
  bool m_isNone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Translate, m_X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Translate, m_Y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Translate, m_Z) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Translate, m_isNone) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Translate, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length, UnityEngine.UIElements.Translate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Translate/PropertyBag/XProperty
class CORDL_TYPE PropertyBag_Translate_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a61c54, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Length GetValue(::ByRef<::UnityEngine::UIElements::Translate> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Translate_XProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a61c5c, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Translate> container, ::UnityEngine::UIElements::Length value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a61b18, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a61c4c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a61c44, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Translate_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Translate_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Translate_XProperty(PropertyBag_Translate_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Translate_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Translate_XProperty(PropertyBag_Translate_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4998 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Translate_XProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Translate_XProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Translate_XProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length, UnityEngine.UIElements.Translate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Translate/PropertyBag/YProperty
class CORDL_TYPE PropertyBag_Translate_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a61c74, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Length GetValue(::ByRef<::UnityEngine::UIElements::Translate> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Translate_YProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a61c7c, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Translate> container, ::UnityEngine::UIElements::Length value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a61b7c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a61c6c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a61c64, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Translate_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Translate_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Translate_YProperty(PropertyBag_Translate_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Translate_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Translate_YProperty(PropertyBag_Translate_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4999 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Translate_YProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Translate_YProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Translate_YProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Translate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Translate/PropertyBag/ZProperty
class CORDL_TYPE PropertyBag_Translate_ZProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Translate, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a61c94, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::ByRef<::UnityEngine::UIElements::Translate> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Translate_ZProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a61c9c, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Translate> container, float_t value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a61be0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a61c8c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a61c84, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Translate_ZProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Translate_ZProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Translate_ZProperty(PropertyBag_Translate_ZProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Translate_ZProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Translate_ZProperty(PropertyBag_Translate_ZProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5000 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Translate_ZProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Translate_ZProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Translate_ZProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.Translate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Translate/PropertyBag
class CORDL_TYPE Translate_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::Translate> {
public:
  // Declarations
  using XProperty = ::UnityEngine::UIElements::PropertyBag_Translate_XProperty;

  using YProperty = ::UnityEngine::UIElements::PropertyBag_Translate_YProperty;

  using ZProperty = ::UnityEngine::UIElements::PropertyBag_Translate_ZProperty;

  static inline ::UnityEngine::UIElements::Translate_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6a619cc, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Translate_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Translate_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Translate_PropertyBag(Translate_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Translate_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Translate_PropertyBag(Translate_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Translate_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Translate_XProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Translate_XProperty*, "UnityEngine.UIElements", "Translate/PropertyBag/XProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Translate_YProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Translate_YProperty*, "UnityEngine.UIElements", "Translate/PropertyBag/YProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Translate_ZProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Translate_ZProperty*, "UnityEngine.UIElements", "Translate/PropertyBag/ZProperty");
NEED_NO_BOX(::UnityEngine::UIElements::Translate_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Translate_PropertyBag*, "UnityEngine.UIElements", "Translate/PropertyBag");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Translate, "UnityEngine.UIElements", "Translate");
