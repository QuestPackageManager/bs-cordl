#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransformOrigin.hpp"
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
CORDL_MODULE_EXPORT(TransformOrigin)
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
class PropertyBag_TransformOrigin_XProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TransformOrigin_YProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TransformOrigin_ZProperty;
}
namespace UnityEngine::UIElements {
class TransformOrigin_PropertyBag;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyBag_TransformOrigin_XProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TransformOrigin_YProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TransformOrigin_ZProperty;
}
namespace UnityEngine::UIElements {
class TransformOrigin_PropertyBag;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_TransformOrigin_XProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_TransformOrigin_YProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_TransformOrigin_ZProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::TransformOrigin_PropertyBag);
MARK_VAL_T(::UnityEngine::UIElements::TransformOrigin);
// Dependencies UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TransformOrigin
struct CORDL_TYPE TransformOrigin {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::TransformOrigin_PropertyBag;

  __declspec(property(get = get_x, put = set_x)) ::UnityEngine::UIElements::Length x;

  __declspec(property(get = get_y, put = set_y)) ::UnityEngine::UIElements::Length y;

  __declspec(property(get = get_z, put = set_z)) float_t z;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>*();

  /// @brief Method Equals, addr 0x6aca034, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6ac9fcc, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TransformOrigin other);

  /// @brief Method GetHashCode, addr 0x6ac3f60, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x6ac910c, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TransformOrigin Initial();

  /// @brief Method ToString, addr 0x6aca100, size 0x13c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6ac9f08, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 vector);

  /// @brief Method .ctor, addr 0x6ac9efc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Length x, ::UnityEngine::UIElements::Length y, float_t z);

  /// @brief Method get_x, addr 0x6ac9f34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_x();

  /// @brief Method get_y, addr 0x6ac9f44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_y();

  /// @brief Method get_z, addr 0x6ac9f54, size 0x8, virtual false, abstract: false, final false
  inline float_t get_z();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>* i___System__IEquatable_1___UnityEngine__UIElements__TransformOrigin_();

  /// @brief Method op_Equality, addr 0x6ac3c18, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TransformOrigin lhs, ::UnityEngine::UIElements::TransformOrigin rhs);

  /// @brief Method op_Inequality, addr 0x6ac9f64, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TransformOrigin lhs, ::UnityEngine::UIElements::TransformOrigin rhs);

  /// @brief Method set_x, addr 0x6ac9f3c, size 0x8, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::UIElements::Length value);

  /// @brief Method set_y, addr 0x6ac9f4c, size 0x8, virtual false, abstract: false, final false
  inline void set_y(::UnityEngine::UIElements::Length value);

  /// @brief Method set_z, addr 0x6ac9f5c, size 0x8, virtual false, abstract: false, final false
  inline void set_z(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformOrigin();

  // Ctor Parameters [CppParam { name: "m_X", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }, CppParam { name: "m_Z", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TransformOrigin(::UnityEngine::UIElements::Length m_X, ::UnityEngine::UIElements::Length m_Y, float_t m_Z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4997 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_X, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_X;

  /// @brief Field m_Y, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_Y;

  /// @brief Field m_Z, offset: 0x10, size: 0x4, def value: None
  float_t m_Z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TransformOrigin, m_X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformOrigin, m_Y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformOrigin, m_Z) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransformOrigin, 0x14>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length, UnityEngine.UIElements.TransformOrigin
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransformOrigin/PropertyBag/XProperty
class CORDL_TYPE PropertyBag_TransformOrigin_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6aca4c4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Length GetValue(::ByRef<::UnityEngine::UIElements::TransformOrigin> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TransformOrigin_XProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6aca4cc, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::TransformOrigin> container, ::UnityEngine::UIElements::Length value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6aca388, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6aca4bc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6aca4b4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TransformOrigin_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TransformOrigin_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TransformOrigin_XProperty(PropertyBag_TransformOrigin_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TransformOrigin_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TransformOrigin_XProperty(PropertyBag_TransformOrigin_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4993 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TransformOrigin_XProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TransformOrigin_XProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_TransformOrigin_XProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length, UnityEngine.UIElements.TransformOrigin
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransformOrigin/PropertyBag/YProperty
class CORDL_TYPE PropertyBag_TransformOrigin_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6aca4e4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Length GetValue(::ByRef<::UnityEngine::UIElements::TransformOrigin> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TransformOrigin_YProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6aca4ec, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::TransformOrigin> container, ::UnityEngine::UIElements::Length value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6aca3ec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6aca4dc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6aca4d4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TransformOrigin_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TransformOrigin_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TransformOrigin_YProperty(PropertyBag_TransformOrigin_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TransformOrigin_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TransformOrigin_YProperty(PropertyBag_TransformOrigin_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4994 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TransformOrigin_YProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TransformOrigin_YProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_TransformOrigin_YProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.TransformOrigin
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransformOrigin/PropertyBag/ZProperty
class CORDL_TYPE PropertyBag_TransformOrigin_ZProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TransformOrigin, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6aca504, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::ByRef<::UnityEngine::UIElements::TransformOrigin> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TransformOrigin_ZProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6aca50c, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::TransformOrigin> container, float_t value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6aca450, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6aca4fc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6aca4f4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TransformOrigin_ZProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TransformOrigin_ZProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TransformOrigin_ZProperty(PropertyBag_TransformOrigin_ZProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TransformOrigin_ZProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TransformOrigin_ZProperty(PropertyBag_TransformOrigin_ZProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4995 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TransformOrigin_ZProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TransformOrigin_ZProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_TransformOrigin_ZProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.TransformOrigin
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransformOrigin/PropertyBag
class CORDL_TYPE TransformOrigin_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::TransformOrigin> {
public:
  // Declarations
  using XProperty = ::UnityEngine::UIElements::PropertyBag_TransformOrigin_XProperty;

  using YProperty = ::UnityEngine::UIElements::PropertyBag_TransformOrigin_YProperty;

  using ZProperty = ::UnityEngine::UIElements::PropertyBag_TransformOrigin_ZProperty;

  static inline ::UnityEngine::UIElements::TransformOrigin_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6aca23c, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformOrigin_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransformOrigin_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransformOrigin_PropertyBag(TransformOrigin_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransformOrigin_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransformOrigin_PropertyBag(TransformOrigin_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4996 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransformOrigin_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_TransformOrigin_XProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_TransformOrigin_XProperty*, "UnityEngine.UIElements", "TransformOrigin/PropertyBag/XProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_TransformOrigin_YProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_TransformOrigin_YProperty*, "UnityEngine.UIElements", "TransformOrigin/PropertyBag/YProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_TransformOrigin_ZProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_TransformOrigin_ZProperty*, "UnityEngine.UIElements", "TransformOrigin/PropertyBag/ZProperty");
NEED_NO_BOX(::UnityEngine::UIElements::TransformOrigin_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransformOrigin_PropertyBag*, "UnityEngine.UIElements", "TransformOrigin/PropertyBag");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransformOrigin, "UnityEngine.UIElements", "TransformOrigin");
