#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValuePropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StyleValuePropertyBag_2)
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
template <typename TContainer, typename TValue> class StyleValuePropertyBag_2_KeywordProperty;
}
namespace UnityEngine::UIElements {
template <typename TContainer, typename TValue> class StyleValuePropertyBag_2_ValueProperty;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TContainer, typename TValue> class StyleValuePropertyBag_2;
}
namespace UnityEngine::UIElements {
template <typename TContainer, typename TValue> class StyleValuePropertyBag_2_KeywordProperty;
}
namespace UnityEngine::UIElements {
template <typename TContainer, typename TValue> class StyleValuePropertyBag_2_ValueProperty;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::StyleValuePropertyBag_2);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace UnityEngine::UIElements {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleValuePropertyBag`2/ValueProperty<TContainer,TValue>
class CORDL_TYPE StyleValuePropertyBag_2_ValueProperty : public ::Unity::Properties::Property_2<TContainer, TValue> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue GetValue(::ByRef<TContainer> container);

  static inline ::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>* New_ctor();

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<TContainer> container, TValue value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValuePropertyBag_2_ValueProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleValuePropertyBag_2_ValueProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleValuePropertyBag_2_ValueProperty(StyleValuePropertyBag_2_ValueProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleValuePropertyBag_2_ValueProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleValuePropertyBag_2_ValueProperty(StyleValuePropertyBag_2_ValueProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4985 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleValuePropertyBag`2/KeywordProperty<TContainer,TValue>
class CORDL_TYPE StyleValuePropertyBag_2_KeywordProperty : public ::Unity::Properties::Property_2<TContainer, ::UnityEngine::UIElements::StyleKeyword> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleKeyword GetValue(::ByRef<TContainer> container);

  static inline ::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>* New_ctor();

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<TContainer> container, ::UnityEngine::UIElements::StyleKeyword value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValuePropertyBag_2_KeywordProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleValuePropertyBag_2_KeywordProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleValuePropertyBag_2_KeywordProperty(StyleValuePropertyBag_2_KeywordProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleValuePropertyBag_2_KeywordProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleValuePropertyBag_2_KeywordProperty(StyleValuePropertyBag_2_KeywordProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4986 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>
namespace UnityEngine::UIElements {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleValuePropertyBag`2<TContainer,TValue>
class CORDL_TYPE StyleValuePropertyBag_2 : public ::Unity::Properties::ContainerPropertyBag_1<TContainer> {
public:
  // Declarations
  using KeywordProperty = ::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty<TContainer, TValue>;

  using ValueProperty = ::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty<TContainer, TValue>;

  static inline ::UnityEngine::UIElements::StyleValuePropertyBag_2<TContainer, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValuePropertyBag_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleValuePropertyBag_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleValuePropertyBag_2(StyleValuePropertyBag_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleValuePropertyBag_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleValuePropertyBag_2(StyleValuePropertyBag_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4987 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::StyleValuePropertyBag_2, "UnityEngine.UIElements", "StyleValuePropertyBag`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::StyleValuePropertyBag_2_KeywordProperty, "UnityEngine.UIElements", "StyleValuePropertyBag`2/KeywordProperty");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::StyleValuePropertyBag_2_ValueProperty, "UnityEngine.UIElements", "StyleValuePropertyBag`2/ValueProperty");
