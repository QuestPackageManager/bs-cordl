#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextShadow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextShadow)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextShadow_BlurRadiusProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextShadow_ColorProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextShadow_OffsetProperty;
}
namespace UnityEngine::UIElements {
class TextShadow_PropertyBag;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyBag_TextShadow_BlurRadiusProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextShadow_ColorProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextShadow_OffsetProperty;
}
namespace UnityEngine::UIElements {
class TextShadow_PropertyBag;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_TextShadow_BlurRadiusProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_TextShadow_ColorProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_TextShadow_OffsetProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::TextShadow_PropertyBag);
MARK_VAL_T(::UnityEngine::UIElements::TextShadow);
// Dependencies UnityEngine.Color, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TextShadow
struct CORDL_TYPE TextShadow {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::TextShadow_PropertyBag;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>*();

  /// @brief Method Equals, addr 0x6a7e728, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6a7e7bc, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TextShadow other);

  /// @brief Method GetHashCode, addr 0x6a7e838, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method LerpUnclamped, addr 0x6a7ea7c, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextShadow LerpUnclamped(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b, float_t t);

  /// @brief Method ToString, addr 0x6a7e97c, size 0x100, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>* i___System__IEquatable_1___UnityEngine__UIElements__TextShadow_();

  /// @brief Method op_Equality, addr 0x6a7e904, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TextShadow style1, ::UnityEngine::UIElements::TextShadow style2);

  /// @brief Method op_Inequality, addr 0x6a7e934, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TextShadow style1, ::UnityEngine::UIElements::TextShadow style2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextShadow();

  // Ctor Parameters [CppParam { name: "offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "blurRadius", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr TextShadow(::UnityEngine::Vector2 offset, float_t blurRadius, ::UnityEngine::Color color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5109 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field offset, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 offset;

  /// @brief Field blurRadius, offset: 0x8, size: 0x4, def value: None
  float_t blurRadius;

  /// @brief Field color, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Color color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextShadow, offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextShadow, blurRadius) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextShadow, color) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextShadow, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.TextShadow, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextShadow/PropertyBag/OffsetProperty
class CORDL_TYPE PropertyBag_TextShadow_OffsetProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TextShadow, ::UnityEngine::Vector2> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a7ed6c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 GetValue(::ByRef<::UnityEngine::UIElements::TextShadow> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TextShadow_OffsetProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a7ed74, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::TextShadow> container, ::UnityEngine::Vector2 value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a7ec30, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a7ed64, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a7ed5c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TextShadow_OffsetProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextShadow_OffsetProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TextShadow_OffsetProperty(PropertyBag_TextShadow_OffsetProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextShadow_OffsetProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TextShadow_OffsetProperty(PropertyBag_TextShadow_OffsetProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5105 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextShadow_OffsetProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextShadow_OffsetProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_TextShadow_OffsetProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.TextShadow
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextShadow/PropertyBag/BlurRadiusProperty
class CORDL_TYPE PropertyBag_TextShadow_BlurRadiusProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TextShadow, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a7ed8c, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::ByRef<::UnityEngine::UIElements::TextShadow> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TextShadow_BlurRadiusProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a7ed94, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::TextShadow> container, float_t value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a7ec94, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a7ed84, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a7ed7c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TextShadow_BlurRadiusProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextShadow_BlurRadiusProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TextShadow_BlurRadiusProperty(PropertyBag_TextShadow_BlurRadiusProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextShadow_BlurRadiusProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TextShadow_BlurRadiusProperty(PropertyBag_TextShadow_BlurRadiusProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5106 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextShadow_BlurRadiusProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextShadow_BlurRadiusProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_TextShadow_BlurRadiusProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Color, UnityEngine.UIElements.TextShadow
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextShadow/PropertyBag/ColorProperty
class CORDL_TYPE PropertyBag_TextShadow_ColorProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TextShadow, ::UnityEngine::Color> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a7edac, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetValue(::ByRef<::UnityEngine::UIElements::TextShadow> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TextShadow_ColorProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a7edb8, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::TextShadow> container, ::UnityEngine::Color value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a7ecf8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a7eda4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a7ed9c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TextShadow_ColorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextShadow_ColorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TextShadow_ColorProperty(PropertyBag_TextShadow_ColorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextShadow_ColorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TextShadow_ColorProperty(PropertyBag_TextShadow_ColorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5107 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextShadow_ColorProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextShadow_ColorProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_TextShadow_ColorProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.TextShadow
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextShadow/PropertyBag
class CORDL_TYPE TextShadow_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::TextShadow> {
public:
  // Declarations
  using BlurRadiusProperty = ::UnityEngine::UIElements::PropertyBag_TextShadow_BlurRadiusProperty;

  using ColorProperty = ::UnityEngine::UIElements::PropertyBag_TextShadow_ColorProperty;

  using OffsetProperty = ::UnityEngine::UIElements::PropertyBag_TextShadow_OffsetProperty;

  static inline ::UnityEngine::UIElements::TextShadow_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6a7eacc, size 0x164, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextShadow_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextShadow_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextShadow_PropertyBag(TextShadow_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextShadow_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextShadow_PropertyBag(TextShadow_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5108 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextShadow_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_TextShadow_BlurRadiusProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_TextShadow_BlurRadiusProperty*, "UnityEngine.UIElements", "TextShadow/PropertyBag/BlurRadiusProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_TextShadow_ColorProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_TextShadow_ColorProperty*, "UnityEngine.UIElements", "TextShadow/PropertyBag/ColorProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_TextShadow_OffsetProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_TextShadow_OffsetProperty*, "UnityEngine.UIElements", "TextShadow/PropertyBag/OffsetProperty");
NEED_NO_BOX(::UnityEngine::UIElements::TextShadow_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextShadow_PropertyBag*, "UnityEngine.UIElements", "TextShadow/PropertyBag");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextShadow, "UnityEngine.UIElements", "TextShadow");
