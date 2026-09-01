#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TabView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TabView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__TabView_def.hpp"
#include "UnityEngine/UIElements/zzzz__Tab_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TabView_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView_UxmlFactory::*)()>(&::UnityEngine::UIElements::TabView_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d77e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TabView_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TabView_UxmlFactory* UnityEngine::UIElements::TabView_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabView_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabView_UxmlFactory::TabView_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TabView_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TabView_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6d77e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::TabView_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView_UxmlTraits::*)()>(&::UnityEngine::UIElements::TabView_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d77fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TabView_UxmlTraits::__cordl_internal_get_m_Reorderable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TabView_UxmlTraits::__cordl_internal_get_m_Reorderable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
constexpr void UnityEngine::UIElements::TabView_UxmlTraits::__cordl_internal_set_m_Reorderable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Reorderable = value;
}
inline void UnityEngine::UIElements::TabView_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                              ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TabView_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::TabView_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TabView_UxmlTraits* UnityEngine::UIElements::TabView_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabView_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabView_UxmlTraits::TabView_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TabView_ViewState.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView_ViewState::*)(::UnityEngine::UIElements::TabView*)>(
    &::UnityEngine::UIElements::TabView_ViewState::Save)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6d7736c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { "Save", {}, { ::i2c::type_of<::UnityEngine::UIElements::TabView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView_ViewState.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView_ViewState::*)(::UnityEngine::UIElements::TabView*)>(
    &::UnityEngine::UIElements::TabView_ViewState::Apply)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6d771c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::TabView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView_ViewState.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView_ViewState::*)()>(&::UnityEngine::UIElements::TabView_ViewState::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d78044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { "OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView_ViewState.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView_ViewState::*)()>(&::UnityEngine::UIElements::TabView_ViewState::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d78050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { "OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView_ViewState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView_ViewState::*)()>(&::UnityEngine::UIElements::TabView_ViewState::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d7805c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::TabView_ViewState::__cordl_internal_get_m_HasPersistedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasPersistedData;
}
constexpr bool const& UnityEngine::UIElements::TabView_ViewState::__cordl_internal_get_m_HasPersistedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasPersistedData;
}
constexpr void UnityEngine::UIElements::TabView_ViewState::__cordl_internal_set_m_HasPersistedData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasPersistedData = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::UIElements::TabView_ViewState::__cordl_internal_get_m_TabOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabOrder;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::UIElements::TabView_ViewState::__cordl_internal_get_m_TabOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabOrder;
}
constexpr void UnityEngine::UIElements::TabView_ViewState::__cordl_internal_set_m_TabOrder(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TabOrder = value;
}
constexpr ::StringW& UnityEngine::UIElements::TabView_ViewState::__cordl_internal_get_m_ActiveTabKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveTabKey;
}
constexpr ::StringW const& UnityEngine::UIElements::TabView_ViewState::__cordl_internal_get_m_ActiveTabKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveTabKey;
}
constexpr void UnityEngine::UIElements::TabView_ViewState::__cordl_internal_set_m_ActiveTabKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveTabKey = value;
}
inline void UnityEngine::UIElements::TabView_ViewState::Save(::UnityEngine::UIElements::TabView* tabView) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { "Save", {}, { ::i2c::type_of<::UnityEngine::UIElements::TabView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabView);
}
inline void UnityEngine::UIElements::TabView_ViewState::Apply(::UnityEngine::UIElements::TabView* tabView) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::TabView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabView);
}
inline void UnityEngine::UIElements::TabView_ViewState::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabView_ViewState::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabView_ViewState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView_ViewState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TabView_ViewState* UnityEngine::UIElements::TabView_ViewState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabView_ViewState*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::UIElements::TabView_ViewState::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::UIElements::TabView_ViewState::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabView_ViewState::TabView_ViewState() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TabView___c__DisplayClass48_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView___c__DisplayClass48_0::*)()>(&::UnityEngine::UIElements::TabView___c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d7777c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView___c__DisplayClass48_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView___c__DisplayClass48_0._OnElementAdded_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView___c__DisplayClass48_0::*)(::UnityEngine::UIElements::Tab*)>(
    &::UnityEngine::UIElements::TabView___c__DisplayClass48_0::_OnElementAdded_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d780d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView___c__DisplayClass48_0*>(),
                                                                                           { "<OnElementAdded>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TabView*& UnityEngine::UIElements::TabView___c__DisplayClass48_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::UIElements::TabView* const& UnityEngine::UIElements::TabView___c__DisplayClass48_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::TabView___c__DisplayClass48_0::__cordl_internal_set___4__this(::UnityEngine::UIElements::TabView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr int32_t& UnityEngine::UIElements::TabView___c__DisplayClass48_0::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::UIElements::TabView___c__DisplayClass48_0::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void UnityEngine::UIElements::TabView___c__DisplayClass48_0::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
inline void UnityEngine::UIElements::TabView___c__DisplayClass48_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView___c__DisplayClass48_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabView___c__DisplayClass48_0::_OnElementAdded_b__0(::UnityEngine::UIElements::Tab* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView___c__DisplayClass48_0*>(),
                                                                                         { "<OnElementAdded>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::UnityEngine::UIElements::TabView___c__DisplayClass48_0* UnityEngine::UIElements::TabView___c__DisplayClass48_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabView___c__DisplayClass48_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabView___c__DisplayClass48_0::TabView___c__DisplayClass48_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TabView___c__DisplayClass55_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView___c__DisplayClass55_0::*)()>(&::UnityEngine::UIElements::TabView___c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d77c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView___c__DisplayClass55_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView___c__DisplayClass55_0._FindTabByKey_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TabView___c__DisplayClass55_0::*)(::UnityEngine::UIElements::Tab*)>(
    &::UnityEngine::UIElements::TabView___c__DisplayClass55_0::_FindTabByKey_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d78104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView___c__DisplayClass55_0*>(),
                                                                                           { "<FindTabByKey>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::TabView___c__DisplayClass55_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::StringW const& UnityEngine::UIElements::TabView___c__DisplayClass55_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void UnityEngine::UIElements::TabView___c__DisplayClass55_0::__cordl_internal_set_key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
inline void UnityEngine::UIElements::TabView___c__DisplayClass55_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView___c__DisplayClass55_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TabView___c__DisplayClass55_0::_FindTabByKey_b__0(::UnityEngine::UIElements::Tab* tab) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView___c__DisplayClass55_0*>(),
                                                                                         { "<FindTabByKey>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tab);
}
inline ::UnityEngine::UIElements::TabView___c__DisplayClass55_0* UnityEngine::UIElements::TabView___c__DisplayClass55_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabView___c__DisplayClass55_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabView___c__DisplayClass55_0::TabView___c__DisplayClass55_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.get_contentContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::TabView::*)()>(
    &::UnityEngine::UIElements::TabView::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d769a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { ::i2c::class_of<::UnityEngine::UIElements::TabView*>(), 135 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.get_header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::TabView::*)()>(&::UnityEngine::UIElements::TabView::get_header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d769ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_header", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.get_tabs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* (::UnityEngine::UIElements::TabView::*)()>(
    &::UnityEngine::UIElements::TabView::get_tabs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d769b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_tabs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.get_tabHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::TabView::*)()>(
    &::UnityEngine::UIElements::TabView::get_tabHeaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d769bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_tabHeaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.get_activeTab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Tab* (::UnityEngine::UIElements::TabView::*)()>(&::UnityEngine::UIElements::TabView::get_activeTab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d769c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_activeTab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.set_activeTab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)(::UnityEngine::UIElements::Tab*)>(&::UnityEngine::UIElements::TabView::set_activeTab)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6d769cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "set_activeTab", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.get_reorderable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TabView::*)()>(&::UnityEngine::UIElements::TabView::get_reorderable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d76b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_reorderable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.set_reorderable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)(bool)>(&::UnityEngine::UIElements::TabView::set_reorderable)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6d76ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "set_reorderable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)()>(&::UnityEngine::UIElements::TabView::_ctor)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6d76d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.OnViewDataReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)()>(&::UnityEngine::UIElements::TabView::OnViewDataReady)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6d770f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { ::i2c::class_of<::UnityEngine::UIElements::TabView*>(), 132 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.SaveViewState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)()>(&::UnityEngine::UIElements::TabView::SaveViewState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d76b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "SaveViewState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.OnElementAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::TabView::OnElementAdded)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6d77554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(),
                                                             { "OnElementAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.OnElementRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TabView::OnElementRemoved)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6d77780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "OnElementRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.OnTabSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)(::UnityEngine::UIElements::Tab*)>(&::UnityEngine::UIElements::TabView::OnTabSelected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d77924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "OnTabSelected", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.OnTabClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)(::UnityEngine::UIElements::Tab*, int32_t)>(&::UnityEngine::UIElements::TabView::OnTabClosed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d77928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(),
                                                                                           { "OnTabClosed", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.ReorderTab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabView::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::TabView::ReorderTab)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6d77944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "ReorderTab", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabView.FindTabByKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Tab* (::UnityEngine::UIElements::TabView::*)(::StringW)>(&::UnityEngine::UIElements::TabView::FindTabByKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6d77b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "FindTabByKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TabView::__cordl_internal_get_m_HeaderContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::TabView::__cordl_internal_get_m_HeaderContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderContainer;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_m_HeaderContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HeaderContainer = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TabView::__cordl_internal_get_m_ContentContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::TabView::__cordl_internal_get_m_ContentContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentContainer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>*& UnityEngine::UIElements::TabView::__cordl_internal_get_m_Tabs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tabs;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* const& UnityEngine::UIElements::TabView::__cordl_internal_get_m_Tabs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tabs;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_m_Tabs(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tabs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::TabView::__cordl_internal_get_m_TabHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeaders;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::TabView::__cordl_internal_get_m_TabHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeaders;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_m_TabHeaders(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TabHeaders = value;
}
constexpr ::UnityEngine::UIElements::Tab*& UnityEngine::UIElements::TabView::__cordl_internal_get_m_ActiveTab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveTab;
}
constexpr ::UnityEngine::UIElements::Tab* const& UnityEngine::UIElements::TabView::__cordl_internal_get_m_ActiveTab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveTab;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_m_ActiveTab(::UnityEngine::UIElements::Tab* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveTab = value;
}
constexpr ::UnityEngine::UIElements::TabView_ViewState*& UnityEngine::UIElements::TabView::__cordl_internal_get_m_ViewState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewState;
}
constexpr ::UnityEngine::UIElements::TabView_ViewState* const& UnityEngine::UIElements::TabView::__cordl_internal_get_m_ViewState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewState;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_m_ViewState(::UnityEngine::UIElements::TabView_ViewState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ViewState = value;
}
constexpr bool& UnityEngine::UIElements::TabView::__cordl_internal_get_m_ApplyingViewState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyingViewState;
}
constexpr bool const& UnityEngine::UIElements::TabView::__cordl_internal_get_m_ApplyingViewState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyingViewState;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_m_ApplyingViewState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ApplyingViewState = value;
}
constexpr bool& UnityEngine::UIElements::TabView::__cordl_internal_get_m_Reordering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reordering;
}
constexpr bool const& UnityEngine::UIElements::TabView::__cordl_internal_get_m_Reordering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reordering;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_m_Reordering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Reordering = value;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::Tab*, ::UnityEngine::UIElements::Tab*>*& UnityEngine::UIElements::TabView::__cordl_internal_get_activeTabChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeTabChanged;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::Tab*, ::UnityEngine::UIElements::Tab*>* const& UnityEngine::UIElements::TabView::__cordl_internal_get_activeTabChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeTabChanged;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_activeTabChanged(::System::Action_2<::UnityEngine::UIElements::Tab*, ::UnityEngine::UIElements::Tab*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activeTabChanged = value;
}
constexpr ::System::Action_2<int32_t, int32_t>*& UnityEngine::UIElements::TabView::__cordl_internal_get_tabReordered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tabReordered;
}
constexpr ::System::Action_2<int32_t, int32_t>* const& UnityEngine::UIElements::TabView::__cordl_internal_get_tabReordered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tabReordered;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_tabReordered(::System::Action_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tabReordered = value;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::Tab*, int32_t>*& UnityEngine::UIElements::TabView::__cordl_internal_get_tabClosed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tabClosed;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::Tab*, int32_t>* const& UnityEngine::UIElements::TabView::__cordl_internal_get_tabClosed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tabClosed;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_tabClosed(::System::Action_2<::UnityEngine::UIElements::Tab*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tabClosed = value;
}
constexpr bool& UnityEngine::UIElements::TabView::__cordl_internal_get_m_Reorderable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
constexpr bool const& UnityEngine::UIElements::TabView::__cordl_internal_get_m_Reorderable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
constexpr void UnityEngine::UIElements::TabView::__cordl_internal_set_m_Reorderable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Reorderable = value;
}
inline void UnityEngine::UIElements::TabView::setStaticF_reorderableProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "reorderableProperty", ::UnityEngine::UIElements::TabView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TabView::getStaticF_reorderableProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "reorderableProperty", ::UnityEngine::UIElements::TabView*>();
}
inline void UnityEngine::UIElements::TabView::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TabView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabView::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TabView*>();
}
inline void UnityEngine::UIElements::TabView::setStaticF_headerContainerClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "headerContainerClassName", ::UnityEngine::UIElements::TabView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabView::getStaticF_headerContainerClassName() {
  return ::cordl_internals::getStaticField<::StringW, "headerContainerClassName", ::UnityEngine::UIElements::TabView*>();
}
inline void UnityEngine::UIElements::TabView::setStaticF_contentContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentContainerUssClassName", ::UnityEngine::UIElements::TabView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabView::getStaticF_contentContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentContainerUssClassName", ::UnityEngine::UIElements::TabView*>();
}
inline void UnityEngine::UIElements::TabView::setStaticF_reorderableUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableUssClassName", ::UnityEngine::UIElements::TabView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabView::getStaticF_reorderableUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableUssClassName", ::UnityEngine::UIElements::TabView*>();
}
inline void UnityEngine::UIElements::TabView::setStaticF_verticalUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalUssClassName", ::UnityEngine::UIElements::TabView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabView::getStaticF_verticalUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalUssClassName", ::UnityEngine::UIElements::TabView*>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TabView::get_contentContainer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TabView*>(), 135 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TabView::get_header() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_header", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>* UnityEngine::UIElements::TabView::get_tabs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_tabs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Tab*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::TabView::get_tabHeaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_tabHeaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Tab* UnityEngine::UIElements::TabView::get_activeTab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_activeTab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Tab*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabView::set_activeTab(::UnityEngine::UIElements::Tab* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "set_activeTab", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::TabView::get_reorderable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "get_reorderable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabView::set_reorderable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "set_reorderable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TabView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabView::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TabView*>(), 132 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabView::SaveViewState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "SaveViewState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabView::OnElementAdded(::UnityEngine::UIElements::VisualElement* ve, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(),
                                                           { "OnElementAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, index);
}
inline void UnityEngine::UIElements::TabView::OnElementRemoved(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "OnElementRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::TabView::OnTabSelected(::UnityEngine::UIElements::Tab* tab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "OnTabSelected", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tab);
}
inline void UnityEngine::UIElements::TabView::OnTabClosed(::UnityEngine::UIElements::Tab* tab, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(),
                                                                                         { "OnTabClosed", {}, { ::i2c::type_of<::UnityEngine::UIElements::Tab*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tab, index);
}
inline void UnityEngine::UIElements::TabView::ReorderTab(int32_t from, int32_t to) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "ReorderTab", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline ::UnityEngine::UIElements::Tab* UnityEngine::UIElements::TabView::FindTabByKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabView*>(), { "FindTabByKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Tab*>(this, ___internal_method, key);
}
inline ::UnityEngine::UIElements::TabView* UnityEngine::UIElements::TabView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabView*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabView::TabView() {}
