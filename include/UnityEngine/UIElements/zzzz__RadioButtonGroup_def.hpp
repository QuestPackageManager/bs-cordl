#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RadioButtonGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RadioButtonGroup)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup_UxmlTraits;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup__get_choices_d__9;
}
namespace UnityEngine::UIElements {
class RadioButton;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RadioButtonGroup;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup_UxmlTraits;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup__get_choices_d__9;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButtonGroup);
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup/UxmlFactory
class CORDL_TYPE RadioButtonGroup_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButtonGroup*, ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b321dc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup_UxmlFactory(RadioButtonGroup_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup_UxmlFactory(RadioButtonGroup_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4296 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup/UxmlTraits
class CORDL_TYPE RadioButtonGroup_UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<int32_t, ::UnityEngine::UIElements::UxmlIntAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Choices, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Choices, put = __cordl_internal_set_m_Choices)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Choices;

  /// @brief Method Init, addr 0x6b32244, size 0x13c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Choices() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Choices();

  constexpr void __cordl_internal_set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b32380, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup_UxmlTraits(RadioButtonGroup_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup_UxmlTraits(RadioButtonGroup_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4297 };

  /// @brief Field m_Choices, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Choices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits, ___m_Choices) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup/<get_choices>d__9
class CORDL_TYPE RadioButtonGroup__get_choices_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::StringW __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::RadioButtonGroup* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__1, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get___s__1, put = __cordl_internal_set___s__1)) ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> __s__1;

  /// @brief Field <radioButton>5__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__radioButton_5__2, put = __cordl_internal_set__radioButton_5__2)) ::UnityEngine::UIElements::RadioButton* _radioButton_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x6b32480, size 0x1e4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x6b326f4, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x6b326ac, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6b3278c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6b326b4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6b326ec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x6b32424, size 0x5c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::UIElements::RadioButtonGroup* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::RadioButtonGroup*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> const& __cordl_internal_get___s__1() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*>& __cordl_internal_get___s__1();

  constexpr ::UnityEngine::UIElements::RadioButton* const& __cordl_internal_get__radioButton_5__2() const;

  constexpr ::UnityEngine::UIElements::RadioButton*& __cordl_internal_get__radioButton_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::RadioButtonGroup* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__1(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> value);

  constexpr void __cordl_internal_set__radioButton_5__2(::UnityEngine::UIElements::RadioButton* value);

  /// @brief Method <>m__Finally1, addr 0x6b32664, size 0x48, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x6b31028, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup__get_choices_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup__get_choices_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup__get_choices_d__9(RadioButtonGroup__get_choices_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup__get_choices_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup__get_choices_d__9(RadioButtonGroup__get_choices_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4298 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::RadioButtonGroup* _____4__this;

  /// @brief Field <>s__1, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> _____s__1;

  /// @brief Field <radioButton>5__2, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::RadioButton* ____radioButton_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9, _____s__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9, ____radioButton_5__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup
class CORDL_TYPE RadioButtonGroup : public ::UnityEngine::UIElements::BaseField_1<int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits;

  using _get_choices_d__9 = ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9;

  __declspec(property(get = get_choices, put = set_choices)) ::System::Collections::Generic::IEnumerable_1<::StringW>* choices;

  /// @brief Field choicesProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_choicesProperty, put = setStaticF_choicesProperty)) ::UnityEngine::UIElements::BindingId choicesProperty;

  /// @brief Field containerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_containerUssClassName, put = setStaticF_containerUssClassName)) ::StringW containerUssClassName;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field m_RadioButtonContainer, offset 0x538, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RadioButtonContainer, put = __cordl_internal_set_m_RadioButtonContainer)) ::UnityEngine::UIElements::VisualElement* m_RadioButtonContainer;

  /// @brief Field m_RadioButtonValueChangedCallback, offset 0x530, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RadioButtonValueChangedCallback,
      put = __cordl_internal_set_m_RadioButtonValueChangedCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* m_RadioButtonValueChangedCallback;

  /// @brief Field m_RadioButtons, offset 0x528, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RadioButtons,
                      put = __cordl_internal_set_m_RadioButtons)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* m_RadioButtons;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  static inline ::UnityEngine::UIElements::RadioButtonGroup* New_ctor();

  static inline ::UnityEngine::UIElements::RadioButtonGroup* New_ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices);

  /// @brief Method RadioButtonValueChangedCallback, addr 0x6b31b40, size 0x114, virtual false, abstract: false, final false
  inline void RadioButtonValueChangedCallback(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method SetValueWithoutNotify, addr 0x6b31c54, size 0x64, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(int32_t newValue);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionAdded, addr 0x6b31cb8, size 0x224, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionRemoved, addr 0x6b31edc, size 0x1a8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UpdateRadioButtons, addr 0x6b316f0, size 0x1c8, virtual false, abstract: false, final false
  inline void UpdateRadioButtons();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_RadioButtonContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_RadioButtonContainer();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* const& __cordl_internal_get_m_RadioButtonValueChangedCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*& __cordl_internal_get_m_RadioButtonValueChangedCallback();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* const& __cordl_internal_get_m_RadioButtons() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*& __cordl_internal_get_m_RadioButtons();

  constexpr void __cordl_internal_set_m_RadioButtonContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_RadioButtonValueChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value);

  constexpr void __cordl_internal_set_m_RadioButtons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* value);

  /// @brief Method .ctor, addr 0x6b318c8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b318d4, size 0x26c, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_choicesProperty();

  static inline ::StringW getStaticF_containerUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_choices, addr 0x6b30fb8, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_choices();

  /// @brief Method get_contentContainer, addr 0x6b318b8, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
  constexpr ::UnityEngine::UIElements::IGroupBox* i___UnityEngine__UIElements__IGroupBox() noexcept;

  static inline void setStaticF_choicesProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_containerUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_choices, addr 0x6b31048, size 0x6a8, virtual false, abstract: false, final false
  inline void set_choices(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup(RadioButtonGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup(RadioButtonGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4299 };

  /// @brief Field m_RadioButtons, offset: 0x528, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* ___m_RadioButtons;

  /// @brief Field m_RadioButtonValueChangedCallback, offset: 0x530, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* ___m_RadioButtonValueChangedCallback;

  /// @brief Field m_RadioButtonContainer, offset: 0x538, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_RadioButtonContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_RadioButtons) == 0x528, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_RadioButtonValueChangedCallback) == 0x530, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_RadioButtonContainer) == 0x538, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButtonGroup, 0x540>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RadioButtonGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButtonGroup*, "UnityEngine.UIElements", "RadioButtonGroup");
NEED_NO_BOX(::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory*, "UnityEngine.UIElements", "RadioButtonGroup/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*, "UnityEngine.UIElements", "RadioButtonGroup/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__9*, "UnityEngine.UIElements", "RadioButtonGroup/<get_choices>d__9");
