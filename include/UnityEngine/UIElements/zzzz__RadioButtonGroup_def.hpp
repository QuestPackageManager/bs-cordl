#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RadioButtonGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryBuilder_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class RadioButtonGroup__get_choices_d__17;
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
class RadioButtonGroup__get_choices_d__17;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::RadioButtonGroup*);
MARK_REF_T(::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory*);
MARK_REF_T(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*);
MARK_REF_T(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::RadioButtonGroup*, "UnityEngine.UIElements", "RadioButtonGroup");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory*, "UnityEngine.UIElements", "RadioButtonGroup/UxmlFactory");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*, "UnityEngine.UIElements", "RadioButtonGroup/UxmlTraits");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*, "UnityEngine.UIElements", "RadioButtonGroup/<get_choices>d__17");
// [Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup/UxmlFactory
class CORDL_TYPE RadioButtonGroup_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButtonGroup*, ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x71f7138, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlFactory", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup_UxmlFactory(RadioButtonGroup_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlFactory", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup_UxmlFactory(RadioButtonGroup_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4301 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
// Dependencies UnityEngine.UIElements.BaseFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup/UxmlTraits
class CORDL_TYPE RadioButtonGroup_UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<int32_t, ::UnityEngine::UIElements::UxmlIntAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Choices, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Choices, put = __cordl_internal_set_m_Choices)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Choices;

  /// @brief Method Init, addr 0x71f71a0, size 0x12c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Choices() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Choices();

  constexpr void __cordl_internal_set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x71f72cc, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlTraits", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup_UxmlTraits(RadioButtonGroup_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlTraits", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup_UxmlTraits(RadioButtonGroup_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4302 };

  /// @brief Field m_Choices, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Choices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits, ___m_Choices) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits) == 0xa8, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object, UnityEngine.Pool.PooledObject`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup/<get_choices>d__17
class CORDL_TYPE RadioButtonGroup__get_choices_d__17 : public ::System::Object {
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

  /// @brief Field <_>5__1, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get____5__1,
                      put = __cordl_internal_set____5__1)) ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*>
      ___5__1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__3, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get___s__3, put = __cordl_internal_set___s__3)) ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> __s__3;

  /// @brief Field <button>5__4, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__button_5__4, put = __cordl_internal_set__button_5__4)) ::UnityEngine::UIElements::RadioButton* _button_5__4;

  /// @brief Field <radioButtons>5__2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__radioButtons_5__2,
                      put = __cordl_internal_set__radioButtons_5__2)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* _radioButtons_5__2;

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

  /// @brief Method MoveNext, addr 0x71f7474, size 0x254, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x71f77ac, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x71f7764, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x71f7844, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x71f776c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x71f77a4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x71f7390, size 0xe4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::UIElements::RadioButtonGroup* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::RadioButtonGroup*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*> const& __cordl_internal_get____5__1() const;

  constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*>& __cordl_internal_get____5__1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> const& __cordl_internal_get___s__3() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*>& __cordl_internal_get___s__3();

  constexpr ::UnityEngine::UIElements::RadioButton* const& __cordl_internal_get__button_5__4() const;

  constexpr ::UnityEngine::UIElements::RadioButton*& __cordl_internal_get__button_5__4();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* const& __cordl_internal_get__radioButtons_5__2() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*& __cordl_internal_get__radioButtons_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::RadioButtonGroup* value);

  constexpr void __cordl_internal_set____5__1(::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__3(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> value);

  constexpr void __cordl_internal_set__button_5__4(::UnityEngine::UIElements::RadioButton* value);

  constexpr void __cordl_internal_set__radioButtons_5__2(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* value);

  /// @brief Method <>m__Finally1, addr 0x71f7710, size 0x54, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x71f76c8, size 0x48, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x71f7370, size 0x20, virtual false, abstract: false, final false
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
  constexpr RadioButtonGroup__get_choices_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup__get_choices_d__17", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup__get_choices_d__17(RadioButtonGroup__get_choices_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup__get_choices_d__17", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup__get_choices_d__17(RadioButtonGroup__get_choices_d__17 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4303 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::RadioButtonGroup* _____4__this;

  /// @brief Field <_>5__1, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*> ______5__1;

  /// @brief Field <radioButtons>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* ____radioButtons_5__2;

  /// @brief Field <>s__3, offset: 0x48, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> _____s__3;

  /// @brief Field <button>5__4, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::RadioButton* ____button_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17, ______5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17, ____radioButtons_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17, _____s__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17, ____button_5__4) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17) == 0x68, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.UQueryBuilder`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup
class CORDL_TYPE RadioButtonGroup : public ::UnityEngine::UIElements::BaseField_1<int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits;

  using _get_choices_d__17 = ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17;

  /// @brief [CreateProperty]
  __declspec(property(get = get_choices, put = set_choices)) ::System::Collections::Generic::IEnumerable_1<::StringW>* choices;

  /// @brief Field choicesContainerName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_choicesContainerName, put = setStaticF_choicesContainerName)) ::StringW choicesContainerName;

  __declspec(property(put = set_choicesList)) ::System::Collections::Generic::List_1<::StringW>* choicesList;

  /// @brief Field choicesProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_choicesProperty, put = setStaticF_choicesProperty)) ::UnityEngine::UIElements::BindingId choicesProperty;

  /// @brief Field containerName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_containerName, put = setStaticF_containerName)) ::StringW containerName;

  /// @brief Field containerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_containerUssClassName, put = setStaticF_containerUssClassName)) ::StringW containerUssClassName;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field m_ChoiceRadioButtonContainer, offset 0x358, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChoiceRadioButtonContainer,
                      put = __cordl_internal_set_m_ChoiceRadioButtonContainer)) ::UnityEngine::UIElements::VisualElement* m_ChoiceRadioButtonContainer;

  /// @brief Field m_Choices, offset 0x3b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Choices, put = __cordl_internal_set_m_Choices)) ::System::Collections::Generic::List_1<::StringW>* m_Choices;

  /// @brief Field m_ContentContainer, offset 0x360, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field m_GetAllRadioButtonsQuery, offset 0x368, size 0x30
  __declspec(property(get = __cordl_internal_get_m_GetAllRadioButtonsQuery,
                      put = __cordl_internal_set_m_GetAllRadioButtonsQuery)) ::UnityEngine::UIElements::UQueryBuilder_1<::UnityEngine::UIElements::RadioButton*>
      m_GetAllRadioButtonsQuery;

  /// @brief Field m_RadioButtonValueChangedCallback, offset 0x3a8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RadioButtonValueChangedCallback,
      put = __cordl_internal_set_m_RadioButtonValueChangedCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* m_RadioButtonValueChangedCallback;

  /// @brief Field m_RegisteredRadioButtons, offset 0x398, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredRadioButtons,
                      put = __cordl_internal_set_m_RegisteredRadioButtons)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* m_RegisteredRadioButtons;

  /// @brief Field m_SelectedRadioButton, offset 0x3a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedRadioButton, put = __cordl_internal_set_m_SelectedRadioButton)) ::UnityEngine::UIElements::RadioButton* m_SelectedRadioButton;

  /// @brief Field m_UpdatingButtons, offset 0x3b0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdatingButtons, put = __cordl_internal_set_m_UpdatingButtons)) bool m_UpdatingButtons;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  /// @brief Method GetAllRadioButtons, addr 0x71f6508, size 0xd4, virtual false, abstract: false, final false
  inline void GetAllRadioButtons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* radioButtons);

  static inline ::UnityEngine::UIElements::RadioButtonGroup* New_ctor();

  static inline ::UnityEngine::UIElements::RadioButtonGroup* New_ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices);

  /// @brief Method RadioButtonValueChangedCallback, addr 0x71f62fc, size 0x20c, virtual false, abstract: false, final false
  inline void RadioButtonValueChangedCallback(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method RebuildRadioButtonsFromChoices, addr 0x71f5b78, size 0x294, virtual false, abstract: false, final false
  inline void RebuildRadioButtonsFromChoices();

  /// @brief Method RegisterRadioButton, addr 0x71f6a54, size 0x298, virtual false, abstract: false, final false
  inline void RegisterRadioButton(::UnityEngine::UIElements::RadioButton* radioButton);

  /// @brief Method ScheduleRadioButtons, addr 0x71f5e0c, size 0x138, virtual false, abstract: false, final false
  inline void ScheduleRadioButtons();

  /// @brief Method SetValueWithoutNotify, addr 0x71f65dc, size 0x68, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(int32_t newValue);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionAdded, addr 0x71f6dc4, size 0xd0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionRemoved, addr 0x71f6e94, size 0x108, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnregisterRadioButton, addr 0x71f6cec, size 0xd8, virtual false, abstract: false, final false
  inline void UnregisterRadioButton(::UnityEngine::UIElements::RadioButton* radioButton);

  /// @brief Method UpdateRadioButtons, addr 0x71f6644, size 0x410, virtual false, abstract: false, final false
  inline void UpdateRadioButtons(bool notify);

  /// [CompilerGenerated]
  /// @brief Method <ScheduleRadioButtons>b__31_0, addr 0x71f7130, size 0x8, virtual false, abstract: false, final false
  inline void _ScheduleRadioButtons_b__31_0();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ChoiceRadioButtonContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ChoiceRadioButtonContainer();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_Choices() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Choices();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentContainer();

  constexpr ::UnityEngine::UIElements::UQueryBuilder_1<::UnityEngine::UIElements::RadioButton*> const& __cordl_internal_get_m_GetAllRadioButtonsQuery() const;

  constexpr ::UnityEngine::UIElements::UQueryBuilder_1<::UnityEngine::UIElements::RadioButton*>& __cordl_internal_get_m_GetAllRadioButtonsQuery();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* const& __cordl_internal_get_m_RadioButtonValueChangedCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*& __cordl_internal_get_m_RadioButtonValueChangedCallback();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* const& __cordl_internal_get_m_RegisteredRadioButtons() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*& __cordl_internal_get_m_RegisteredRadioButtons();

  constexpr ::UnityEngine::UIElements::RadioButton* const& __cordl_internal_get_m_SelectedRadioButton() const;

  constexpr ::UnityEngine::UIElements::RadioButton*& __cordl_internal_get_m_SelectedRadioButton();

  constexpr bool const& __cordl_internal_get_m_UpdatingButtons() const;

  constexpr bool& __cordl_internal_get_m_UpdatingButtons();

  constexpr void __cordl_internal_set_m_ChoiceRadioButtonContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Choices(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_GetAllRadioButtonsQuery(::UnityEngine::UIElements::UQueryBuilder_1<::UnityEngine::UIElements::RadioButton*> value);

  constexpr void __cordl_internal_set_m_RadioButtonValueChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value);

  constexpr void __cordl_internal_set_m_RegisteredRadioButtons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* value);

  constexpr void __cordl_internal_set_m_SelectedRadioButton(::UnityEngine::UIElements::RadioButton* value);

  constexpr void __cordl_internal_set_m_UpdatingButtons(bool value);

  /// @brief Method .ctor, addr 0x71f5f58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x71f5f64, size 0x398, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices);

  /// [CompilerGenerated]
  /// @brief Method <set_choices>g__AreListEqual|18_0, addr 0x71f5690, size 0x4e8, virtual false, abstract: false, final false
  static inline bool _set_choices_g__AreListEqual_18_0(::System::Collections::Generic::List_1<::StringW>* list1, ::System::Collections::Generic::IEnumerable_1<::StringW>* list2);

  static inline ::StringW getStaticF_choicesContainerName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_choicesProperty();

  static inline ::StringW getStaticF_containerName();

  static inline ::StringW getStaticF_containerUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// [IteratorStateMachine(typeof(UnityEngine.UIElements.RadioButtonGroup::<get_choices>d__17))]
  /// @brief Method get_choices, addr 0x71f54c4, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_choices();

  /// @brief Method get_contentContainer, addr 0x71f5f48, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
  constexpr ::UnityEngine::UIElements::IGroupBox* i___UnityEngine__UIElements__IGroupBox() noexcept;

  static inline void setStaticF_choicesContainerName(::StringW value);

  static inline void setStaticF_choicesProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_containerName(::StringW value);

  static inline void setStaticF_containerUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_choices, addr 0x71f5534, size 0x15c, virtual false, abstract: false, final false
  inline void set_choices(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method set_choicesList, addr 0x71f5f44, size 0x4, virtual false, abstract: false, final false
  inline void set_choicesList(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup(RadioButtonGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup(RadioButtonGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4304 };

  /// @brief Field m_ChoiceRadioButtonContainer, offset: 0x358, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ChoiceRadioButtonContainer;

  /// @brief Field m_ContentContainer, offset: 0x360, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  /// @brief Field m_GetAllRadioButtonsQuery, offset: 0x368, size: 0x30, def value: None
  ::UnityEngine::UIElements::UQueryBuilder_1<::UnityEngine::UIElements::RadioButton*> ___m_GetAllRadioButtonsQuery;

  /// @brief Field m_RegisteredRadioButtons, offset: 0x398, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* ___m_RegisteredRadioButtons;

  /// @brief Field m_SelectedRadioButton, offset: 0x3a0, size: 0x8, def value: None
  ::UnityEngine::UIElements::RadioButton* ___m_SelectedRadioButton;

  /// @brief Field m_RadioButtonValueChangedCallback, offset: 0x3a8, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* ___m_RadioButtonValueChangedCallback;

  /// @brief Field m_UpdatingButtons, offset: 0x3b0, size: 0x1, def value: None
  bool ___m_UpdatingButtons;

  /// @brief Field m_Choices, offset: 0x3b8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Choices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_ChoiceRadioButtonContainer) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_ContentContainer) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_GetAllRadioButtonsQuery) == 0x368, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_RegisteredRadioButtons) == 0x398, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_SelectedRadioButton) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_RadioButtonValueChangedCallback) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_UpdatingButtons) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_Choices) == 0x3b8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::RadioButtonGroup) == 0x3c0, "Size mismatch!");

} // namespace UnityEngine::UIElements
