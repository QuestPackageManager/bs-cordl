#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EasingFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__EasingMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EasingFunction)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class EasingFunction_PropertyBag;
}
namespace UnityEngine::UIElements {
struct EasingMode;
}
namespace UnityEngine::UIElements {
class PropertyBag_EasingFunction_ModeProperty;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EasingFunction_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_EasingFunction_ModeProperty;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EasingFunction_PropertyBag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_EasingFunction_ModeProperty);
MARK_VAL_T(::UnityEngine::UIElements::EasingFunction);
// Dependencies UnityEngine.UIElements.EasingMode
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EasingFunction
struct CORDL_TYPE EasingFunction {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::EasingFunction_PropertyBag;

  __declspec(property(get = get_mode, put = set_mode)) ::UnityEngine::UIElements::EasingMode mode;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>*();

  /// @brief Method Equals, addr 0x6c11cd0, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6c11cc0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::EasingFunction other);

  /// @brief Method GetHashCode, addr 0x6c108b8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6c11d4c, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6c11cac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EasingMode mode);

  /// @brief Method get_mode, addr 0x6c11c9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EasingMode get_mode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>* i___System__IEquatable_1___UnityEngine__UIElements__EasingFunction_();

  /// @brief Method op_Equality, addr 0x6c11cb4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::EasingFunction lhs, ::UnityEngine::UIElements::EasingFunction rhs);

  /// @brief Method op_Implicit, addr 0x6c10ce8, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EasingFunction op_Implicit___UnityEngine__UIElements__EasingFunction(::UnityEngine::UIElements::EasingMode easingMode);

  /// @brief Method set_mode, addr 0x6c11ca4, size 0x8, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::UIElements::EasingMode value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EasingFunction();

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::UIElements::EasingMode", modifiers: "", def_value: None }]
  constexpr EasingFunction(::UnityEngine::UIElements::EasingMode m_Mode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::EasingMode m_Mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EasingFunction, m_Mode) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EasingFunction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.EasingFunction, UnityEngine.UIElements.EasingMode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EasingFunction/PropertyBag/ModeProperty
class CORDL_TYPE PropertyBag_EasingFunction_ModeProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::EasingFunction, ::UnityEngine::UIElements::EasingMode> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6c11ef0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::EasingMode GetValue(::ByRef<::UnityEngine::UIElements::EasingFunction> container);

  static inline ::UnityEngine::UIElements::PropertyBag_EasingFunction_ModeProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c11ef8, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::EasingFunction> container, ::UnityEngine::UIElements::EasingMode value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6c11e7c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c11ee8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c11ee0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_EasingFunction_ModeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_EasingFunction_ModeProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_EasingFunction_ModeProperty(PropertyBag_EasingFunction_ModeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_EasingFunction_ModeProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_EasingFunction_ModeProperty(PropertyBag_EasingFunction_ModeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4710 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_EasingFunction_ModeProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_EasingFunction_ModeProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_EasingFunction_ModeProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.EasingFunction
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EasingFunction/PropertyBag
class CORDL_TYPE EasingFunction_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::EasingFunction> {
public:
  // Declarations
  using ModeProperty = ::UnityEngine::UIElements::PropertyBag_EasingFunction_ModeProperty;

  static inline ::UnityEngine::UIElements::EasingFunction_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6c11db8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EasingFunction_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EasingFunction_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EasingFunction_PropertyBag(EasingFunction_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EasingFunction_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EasingFunction_PropertyBag(EasingFunction_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4711 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EasingFunction_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EasingFunction_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EasingFunction_PropertyBag*, "UnityEngine.UIElements", "EasingFunction/PropertyBag");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_EasingFunction_ModeProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_EasingFunction_ModeProperty*, "UnityEngine.UIElements", "EasingFunction/PropertyBag/ModeProperty");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EasingFunction, "UnityEngine.UIElements", "EasingFunction");
