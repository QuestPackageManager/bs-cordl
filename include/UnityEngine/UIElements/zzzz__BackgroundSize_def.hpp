#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BackgroundSize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSizeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundSize)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct BackgroundSizeType;
}
namespace UnityEngine::UIElements {
class BackgroundSize_PropertyBag;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundSize_SizeTypeProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundSize_XProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundSize_YProperty;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BackgroundSize_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundSize_SizeTypeProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundSize_XProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundSize_YProperty;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BackgroundSize_PropertyBag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_BackgroundSize_SizeTypeProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_BackgroundSize_XProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_BackgroundSize_YProperty);
MARK_VAL_T(::UnityEngine::UIElements::BackgroundSize);
// Dependencies UnityEngine.UIElements.BackgroundSizeType, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BackgroundSize
struct CORDL_TYPE BackgroundSize {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::BackgroundSize_PropertyBag;

  __declspec(property(get = get_sizeType, put = set_sizeType)) ::UnityEngine::UIElements::BackgroundSizeType sizeType;

  __declspec(property(get = get_x, put = set_x)) ::UnityEngine::UIElements::Length x;

  __declspec(property(get = get_y, put = set_y)) ::UnityEngine::UIElements::Length y;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundSize>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundSize>*();

  /// @brief Method Equals, addr 0x6a64704, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6a647d0, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::BackgroundSize other);

  /// @brief Method GetHashCode, addr 0x6a6483c, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x6a646ec, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundSize Initial();

  /// @brief Method ToString, addr 0x6a64908, size 0x104, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6a64030, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BackgroundSizeType sizeType);

  /// @brief Method .ctor, addr 0x6a64040, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Length sizeX, ::UnityEngine::UIElements::Length sizeY);

  /// @brief Method get_sizeType, addr 0x6a646ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundSizeType get_sizeType();

  /// @brief Method get_x, addr 0x6a646c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_x();

  /// @brief Method get_y, addr 0x6a646d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_y();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundSize>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundSize>* i___System__IEquatable_1___UnityEngine__UIElements__BackgroundSize_();

  /// @brief Method op_Equality, addr 0x6a6428c, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::BackgroundSize style1, ::UnityEngine::UIElements::BackgroundSize style2);

  /// @brief Method op_Inequality, addr 0x6a648a4, size 0x64, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::BackgroundSize style1, ::UnityEngine::UIElements::BackgroundSize style2);

  /// @brief Method set_sizeType, addr 0x6a646b4, size 0x10, virtual false, abstract: false, final false
  inline void set_sizeType(::UnityEngine::UIElements::BackgroundSizeType value);

  /// @brief Method set_x, addr 0x6a646cc, size 0xc, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::UIElements::Length value);

  /// @brief Method set_y, addr 0x6a646e0, size 0xc, virtual false, abstract: false, final false
  inline void set_y(::UnityEngine::UIElements::Length value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundSize();

  // Ctor Parameters [CppParam { name: "m_SizeType", ty: "::UnityEngine::UIElements::BackgroundSizeType", modifiers: "", def_value: None }, CppParam { name: "m_X", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }]
  constexpr BackgroundSize(::UnityEngine::UIElements::BackgroundSizeType m_SizeType, ::UnityEngine::UIElements::Length m_X, ::UnityEngine::UIElements::Length m_Y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4016 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_SizeType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::BackgroundSizeType m_SizeType;

  /// @brief Field m_X, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_X;

  /// @brief Field m_Y, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_Y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BackgroundSize, m_SizeType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundSize, m_X) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundSize, m_Y) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundSize, 0x14>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.BackgroundSize, UnityEngine.UIElements.BackgroundSizeType
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundSize/PropertyBag/SizeTypeProperty
class CORDL_TYPE PropertyBag_BackgroundSize_SizeTypeProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSizeType> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a64c94, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundSizeType GetValue(::ByRef<::UnityEngine::UIElements::BackgroundSize> container);

  static inline ::UnityEngine::UIElements::PropertyBag_BackgroundSize_SizeTypeProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a64c9c, size 0x10, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::BackgroundSize> container, ::UnityEngine::UIElements::BackgroundSizeType value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a64b58, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a64c8c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a64c84, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_BackgroundSize_SizeTypeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundSize_SizeTypeProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_BackgroundSize_SizeTypeProperty(PropertyBag_BackgroundSize_SizeTypeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundSize_SizeTypeProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_BackgroundSize_SizeTypeProperty(PropertyBag_BackgroundSize_SizeTypeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4012 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundSize_SizeTypeProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundSize_SizeTypeProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_BackgroundSize_SizeTypeProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.BackgroundSize, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundSize/PropertyBag/XProperty
class CORDL_TYPE PropertyBag_BackgroundSize_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a64cbc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Length GetValue(::ByRef<::UnityEngine::UIElements::BackgroundSize> container);

  static inline ::UnityEngine::UIElements::PropertyBag_BackgroundSize_XProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a64cc4, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::BackgroundSize> container, ::UnityEngine::UIElements::Length value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a64bbc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a64cb4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a64cac, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_BackgroundSize_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundSize_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_BackgroundSize_XProperty(PropertyBag_BackgroundSize_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundSize_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_BackgroundSize_XProperty(PropertyBag_BackgroundSize_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4013 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundSize_XProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundSize_XProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_BackgroundSize_XProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.BackgroundSize, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundSize/PropertyBag/YProperty
class CORDL_TYPE PropertyBag_BackgroundSize_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6a64ce0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Length GetValue(::ByRef<::UnityEngine::UIElements::BackgroundSize> container);

  static inline ::UnityEngine::UIElements::PropertyBag_BackgroundSize_YProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6a64ce8, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::BackgroundSize> container, ::UnityEngine::UIElements::Length value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6a64c20, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6a64cd8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6a64cd0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_BackgroundSize_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundSize_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_BackgroundSize_YProperty(PropertyBag_BackgroundSize_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundSize_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_BackgroundSize_YProperty(PropertyBag_BackgroundSize_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4014 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundSize_YProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundSize_YProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_BackgroundSize_YProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.BackgroundSize
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundSize/PropertyBag
class CORDL_TYPE BackgroundSize_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::BackgroundSize> {
public:
  // Declarations
  using SizeTypeProperty = ::UnityEngine::UIElements::PropertyBag_BackgroundSize_SizeTypeProperty;

  using XProperty = ::UnityEngine::UIElements::PropertyBag_BackgroundSize_XProperty;

  using YProperty = ::UnityEngine::UIElements::PropertyBag_BackgroundSize_YProperty;

  static inline ::UnityEngine::UIElements::BackgroundSize_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6a64a0c, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundSize_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackgroundSize_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackgroundSize_PropertyBag(BackgroundSize_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackgroundSize_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackgroundSize_PropertyBag(BackgroundSize_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4015 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundSize_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BackgroundSize_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundSize_PropertyBag*, "UnityEngine.UIElements", "BackgroundSize/PropertyBag");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_BackgroundSize_SizeTypeProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_BackgroundSize_SizeTypeProperty*, "UnityEngine.UIElements", "BackgroundSize/PropertyBag/SizeTypeProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_BackgroundSize_XProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_BackgroundSize_XProperty*, "UnityEngine.UIElements", "BackgroundSize/PropertyBag/XProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_BackgroundSize_YProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_BackgroundSize_YProperty*, "UnityEngine.UIElements", "BackgroundSize/PropertyBag/YProperty");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundSize, "UnityEngine.UIElements", "BackgroundSize");
