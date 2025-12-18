#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Scale.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scale)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class PropertyBag_Scale_ValueProperty;
}
namespace UnityEngine::UIElements {
class Scale_PropertyBag;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyBag_Scale_ValueProperty;
}
namespace UnityEngine::UIElements {
class Scale_PropertyBag;
}
namespace UnityEngine::UIElements {
struct Scale;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Scale_ValueProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::Scale_PropertyBag);
MARK_VAL_T(::UnityEngine::UIElements::Scale);
// Dependencies UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Scale
struct CORDL_TYPE Scale {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::Scale_PropertyBag;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::Vector3 value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Scale>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Scale>*();

  /// @brief Method Equals, addr 0x6ac66bc, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6ac6670, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Scale other);

  /// @brief Method GetHashCode, addr 0x6ac3f0c, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x6ac659c, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale Initial();

  /// @brief Method None, addr 0x6ac65ec, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale None();

  /// @brief Method ToString, addr 0x6ac6770, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6ac658c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 scale);

  /// @brief Method get_value, addr 0x6ac6604, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Scale>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Scale>* i___System__IEquatable_1___UnityEngine__UIElements__Scale_();

  /// @brief Method op_Equality, addr 0x6ac3bc4, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Scale lhs, ::UnityEngine::UIElements::Scale rhs);

  /// @brief Method op_Inequality, addr 0x6ac661c, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Scale lhs, ::UnityEngine::UIElements::Scale rhs);

  /// @brief Method set_value, addr 0x6ac6610, size 0xc, virtual false, abstract: false, final false
  inline void set_value(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Scale();

  // Ctor Parameters [CppParam { name: "m_Scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
  constexpr Scale(::UnityEngine::Vector3 m_Scale, bool m_IsNone) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4961 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Scale, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Scale;

  /// @brief Field m_IsNone, offset: 0xc, size: 0x1, def value: None
  bool m_IsNone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Scale, m_Scale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scale, m_IsNone) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Scale, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Scale, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Scale/PropertyBag/ValueProperty
class CORDL_TYPE PropertyBag_Scale_ValueProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Scale, ::UnityEngine::Vector3> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6ac68b8, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetValue(::ByRef<::UnityEngine::UIElements::Scale> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Scale_ValueProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6ac68c4, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Scale> container, ::UnityEngine::Vector3 value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6ac6844, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6ac68b0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6ac68a8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Scale_ValueProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Scale_ValueProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Scale_ValueProperty(PropertyBag_Scale_ValueProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Scale_ValueProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Scale_ValueProperty(PropertyBag_Scale_ValueProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4959 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Scale_ValueProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Scale_ValueProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Scale_ValueProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.Scale
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Scale/PropertyBag
class CORDL_TYPE Scale_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::Scale> {
public:
  // Declarations
  using ValueProperty = ::UnityEngine::UIElements::PropertyBag_Scale_ValueProperty;

  static inline ::UnityEngine::UIElements::Scale_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6ac6780, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scale_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scale_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scale_PropertyBag(Scale_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scale_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scale_PropertyBag(Scale_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Scale_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Scale_ValueProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Scale_ValueProperty*, "UnityEngine.UIElements", "Scale/PropertyBag/ValueProperty");
NEED_NO_BOX(::UnityEngine::UIElements::Scale_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scale_PropertyBag*, "UnityEngine.UIElements", "Scale/PropertyBag");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scale, "UnityEngine.UIElements", "Scale");
