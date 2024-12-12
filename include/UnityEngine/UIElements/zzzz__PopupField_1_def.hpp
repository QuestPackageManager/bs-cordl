#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PopupField_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BasePopupField_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PopupField_1)
namespace UnityEngine::UIElements {
class IGenericMenu;
}
namespace UnityEngine::UIElements {
template <typename T> class PopupField_1___c__DisplayClass26_0;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class PopupField_1;
}
namespace UnityEngine::UIElements {
template <typename T> class PopupField_1___c__DisplayClass26_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::PopupField_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::PopupField_1___c__DisplayClass26_0);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.PopupField`1/<>c__DisplayClass26_0<T>
class CORDL_TYPE PopupField_1___c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::PopupField_1<T>* __4__this;

  /// @brief Field item, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_item, put = __cordl_internal_set_item)) T item;

  static inline ::UnityEngine::UIElements::PopupField_1___c__DisplayClass26_0<T>* New_ctor();

  /// @brief Method <AddMenuItems>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _AddMenuItems_b__0();

  constexpr ::UnityEngine::UIElements::PopupField_1<T>* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::PopupField_1<T>*& __cordl_internal_get___4__this();

  constexpr T const& __cordl_internal_get_item() const;

  constexpr T& __cordl_internal_get_item();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::PopupField_1<T>* value);

  constexpr void __cordl_internal_set_item(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopupField_1___c__DisplayClass26_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PopupField_1___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopupField_1___c__DisplayClass26_0(PopupField_1___c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopupField_1___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopupField_1___c__DisplayClass26_0(PopupField_1___c__DisplayClass26_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5661 };

  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  T ___item;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::PopupField_1<T>* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BasePopupField`2<TValueType, TValueChoice>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.PopupField`1<T>
class CORDL_TYPE PopupField_1 : public ::UnityEngine::UIElements::BasePopupField_2<T, T> {
public:
  // Declarations
  using __c__DisplayClass26_0 = ::UnityEngine::UIElements::PopupField_1___c__DisplayClass26_0<T>;

  __declspec(property(put = set_index)) int32_t index;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_Index, offset 0x470, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) T value;

  /// @brief Method AddMenuItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddMenuItems(::UnityEngine::UIElements::IGenericMenu* menu);

  /// @brief Method ChangeValueFromMenu, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ChangeValueFromMenu(T menuItem);

  /// @brief Method GetListItemToDisplay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetListItemToDisplay(T value);

  /// @brief Method GetValueToDisplay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetValueToDisplay();

  static inline ::UnityEngine::UIElements::PopupField_1<T>* New_ctor(::StringW label);

  /// @brief Method SetValueWithoutNotify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(T newValue);

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_value();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_index, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_index(int32_t value);

  /// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_value(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopupField_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PopupField_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopupField_1(PopupField_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopupField_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopupField_1(PopupField_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5662 };

  /// @brief Field m_Index, offset: 0x470, size: 0x4, def value: None
  int32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PopupField_1, "UnityEngine.UIElements", "PopupField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PopupField_1___c__DisplayClass26_0, "UnityEngine.UIElements", "PopupField`1/<>c__DisplayClass26_0");
