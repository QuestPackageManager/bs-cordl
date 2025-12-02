#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BackgroundRepeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__Repeat_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundRepeat)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class BackgroundRepeat_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundRepeat_XProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundRepeat_YProperty;
}
namespace UnityEngine::UIElements {
struct Repeat;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BackgroundRepeat_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundRepeat_XProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundRepeat_YProperty;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BackgroundRepeat_PropertyBag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_XProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_YProperty);
MARK_VAL_T(::UnityEngine::UIElements::BackgroundRepeat);
// Dependencies UnityEngine.UIElements.Repeat
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BackgroundRepeat
struct CORDL_TYPE BackgroundRepeat {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::BackgroundRepeat_PropertyBag;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundRepeat>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundRepeat>*();

  /// @brief Method Equals, addr 0x69fb47c, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x69fb508, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::BackgroundRepeat other);

  /// @brief Method GetHashCode, addr 0x69fb530, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x69fb474, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundRepeat Initial();

  /// @brief Method ToString, addr 0x69fb55c, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x69fb170, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Repeat repeatX, ::UnityEngine::UIElements::Repeat repeatY);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundRepeat>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundRepeat>* i___System__IEquatable_1___UnityEngine__UIElements__BackgroundRepeat_();

  /// @brief Method op_Equality, addr 0x69fb3fc, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::BackgroundRepeat style1, ::UnityEngine::UIElements::BackgroundRepeat style2);

  /// @brief Method op_Inequality, addr 0x69fb550, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::BackgroundRepeat style1, ::UnityEngine::UIElements::BackgroundRepeat style2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundRepeat();

  // Ctor Parameters [CppParam { name: "x", ty: "::UnityEngine::UIElements::Repeat", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::UnityEngine::UIElements::Repeat", modifiers: "",
  // def_value: None }]
  constexpr BackgroundRepeat(::UnityEngine::UIElements::Repeat x, ::UnityEngine::UIElements::Repeat y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4011 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::Repeat x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::Repeat y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BackgroundRepeat, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundRepeat, y) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundRepeat, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.BackgroundRepeat, UnityEngine.UIElements.Repeat
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundRepeat/PropertyBag/XProperty
class CORDL_TYPE PropertyBag_BackgroundRepeat_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::BackgroundRepeat, ::UnityEngine::UIElements::Repeat> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x69fb7f8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Repeat GetValue(::ByRef<::UnityEngine::UIElements::BackgroundRepeat> container);

  static inline ::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_XProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69fb800, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::BackgroundRepeat> container, ::UnityEngine::UIElements::Repeat value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x69fb720, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69fb7f0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69fb7e8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_BackgroundRepeat_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundRepeat_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_BackgroundRepeat_XProperty(PropertyBag_BackgroundRepeat_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundRepeat_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_BackgroundRepeat_XProperty(PropertyBag_BackgroundRepeat_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4008 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_XProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_XProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_XProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.BackgroundRepeat, UnityEngine.UIElements.Repeat
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundRepeat/PropertyBag/YProperty
class CORDL_TYPE PropertyBag_BackgroundRepeat_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::BackgroundRepeat, ::UnityEngine::UIElements::Repeat> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x69fb818, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Repeat GetValue(::ByRef<::UnityEngine::UIElements::BackgroundRepeat> container);

  static inline ::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_YProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69fb820, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::BackgroundRepeat> container, ::UnityEngine::UIElements::Repeat value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x69fb784, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69fb810, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69fb808, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_BackgroundRepeat_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundRepeat_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_BackgroundRepeat_YProperty(PropertyBag_BackgroundRepeat_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundRepeat_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_BackgroundRepeat_YProperty(PropertyBag_BackgroundRepeat_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4009 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_YProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_YProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_YProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.BackgroundRepeat
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundRepeat/PropertyBag
class CORDL_TYPE BackgroundRepeat_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::BackgroundRepeat> {
public:
  // Declarations
  using XProperty = ::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_XProperty;

  using YProperty = ::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_YProperty;

  static inline ::UnityEngine::UIElements::BackgroundRepeat_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x69fb624, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundRepeat_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackgroundRepeat_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackgroundRepeat_PropertyBag(BackgroundRepeat_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackgroundRepeat_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackgroundRepeat_PropertyBag(BackgroundRepeat_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundRepeat_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BackgroundRepeat_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundRepeat_PropertyBag*, "UnityEngine.UIElements", "BackgroundRepeat/PropertyBag");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_XProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_XProperty*, "UnityEngine.UIElements", "BackgroundRepeat/PropertyBag/XProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_YProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_BackgroundRepeat_YProperty*, "UnityEngine.UIElements", "BackgroundRepeat/PropertyBag/YProperty");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundRepeat, "UnityEngine.UIElements", "BackgroundRepeat");
