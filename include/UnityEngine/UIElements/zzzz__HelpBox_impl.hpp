#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/HelpBox.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBoxMessageType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBoxMessageType_def.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HelpBox_UxmlFactory::*)()>(&::UnityEngine::UIElements::HelpBox_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d44470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::HelpBox_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::HelpBox_UxmlFactory* UnityEngine::UIElements::HelpBox_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::HelpBox_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HelpBox_UxmlFactory::HelpBox_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HelpBox_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::HelpBox_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6d444d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::HelpBox_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HelpBox_UxmlTraits::*)()>(&::UnityEngine::UIElements::HelpBox_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6d44638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*& UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_get_m_MessageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageType;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* const&
UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_get_m_MessageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageType;
}
constexpr void
UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_set_m_MessageType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MessageType = value;
}
inline void UnityEngine::UIElements::HelpBox_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                              ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::HelpBox_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::HelpBox_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::HelpBox_UxmlTraits* UnityEngine::UIElements::HelpBox_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::HelpBox_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HelpBox_UxmlTraits::HelpBox_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::HelpBox::*)()>(&::UnityEngine::UIElements::HelpBox::get_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d43d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::StringW)>(&::UnityEngine::UIElements::HelpBox::set_text)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d43d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.get_messageType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::HelpBoxMessageType (::UnityEngine::UIElements::HelpBox::*)()>(&::UnityEngine::UIElements::HelpBox::get_messageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d43e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "get_messageType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.set_messageType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(
    &::UnityEngine::UIElements::HelpBox::set_messageType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6d43e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "set_messageType", {}, { ::i2c::type_of<::UnityEngine::UIElements::HelpBoxMessageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)()>(&::UnityEngine::UIElements::HelpBox::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d43f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::StringW, ::UnityEngine::UIElements::HelpBoxMessageType)>(
    &::UnityEngine::UIElements::HelpBox::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6d43f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::HelpBoxMessageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.GetIconClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(
    &::UnityEngine::UIElements::HelpBox::GetIconClass)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d440ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "GetIconClass", {}, { ::i2c::type_of<::UnityEngine::UIElements::HelpBoxMessageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.UpdateIcon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(&::UnityEngine::UIElements::HelpBox::UpdateIcon)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d43ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "UpdateIcon", {}, { ::i2c::type_of<::UnityEngine::UIElements::HelpBoxMessageType>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::HelpBoxMessageType& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_HelpBoxMessageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HelpBoxMessageType;
}
constexpr ::UnityEngine::UIElements::HelpBoxMessageType const& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_HelpBoxMessageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HelpBoxMessageType;
}
constexpr void UnityEngine::UIElements::HelpBox::__cordl_internal_set_m_HelpBoxMessageType(::UnityEngine::UIElements::HelpBoxMessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HelpBoxMessageType = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_Icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Icon;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_Icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Icon;
}
constexpr void UnityEngine::UIElements::HelpBox::__cordl_internal_set_m_Icon(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Icon = value;
}
constexpr ::StringW& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_IconClass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconClass;
}
constexpr ::StringW const& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_IconClass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconClass;
}
constexpr void UnityEngine::UIElements::HelpBox::__cordl_internal_set_m_IconClass(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IconClass = value;
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_Label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_Label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
constexpr void UnityEngine::UIElements::HelpBox::__cordl_internal_set_m_Label(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Label = value;
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_textProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "textProperty", ::UnityEngine::UIElements::HelpBox*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::HelpBox::getStaticF_textProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "textProperty", ::UnityEngine::UIElements::HelpBox*>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_messageTypeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "messageTypeProperty", ::UnityEngine::UIElements::HelpBox*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::HelpBox::getStaticF_messageTypeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "messageTypeProperty", ::UnityEngine::UIElements::HelpBox*>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::HelpBox*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::HelpBox*>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::HelpBox*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::HelpBox*>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconUssClassName", ::UnityEngine::UIElements::HelpBox*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconUssClassName", ::UnityEngine::UIElements::HelpBox*>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconInfoUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconInfoUssClassName", ::UnityEngine::UIElements::HelpBox*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconInfoUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconInfoUssClassName", ::UnityEngine::UIElements::HelpBox*>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconwarningUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconwarningUssClassName", ::UnityEngine::UIElements::HelpBox*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconwarningUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconwarningUssClassName", ::UnityEngine::UIElements::HelpBox*>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconErrorUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconErrorUssClassName", ::UnityEngine::UIElements::HelpBox*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconErrorUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconErrorUssClassName", ::UnityEngine::UIElements::HelpBox*>();
}
inline ::StringW UnityEngine::UIElements::HelpBox::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::HelpBox::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::HelpBoxMessageType UnityEngine::UIElements::HelpBox::get_messageType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "get_messageType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::HelpBoxMessageType>(this, ___internal_method);
}
inline void UnityEngine::UIElements::HelpBox::set_messageType(::UnityEngine::UIElements::HelpBoxMessageType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "set_messageType", {}, { ::i2c::type_of<::UnityEngine::UIElements::HelpBoxMessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::HelpBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::HelpBox::_ctor(::StringW text, ::UnityEngine::UIElements::HelpBoxMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::HelpBoxMessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, messageType);
}
inline ::StringW UnityEngine::UIElements::HelpBox::GetIconClass(::UnityEngine::UIElements::HelpBoxMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "GetIconClass", {}, { ::i2c::type_of<::UnityEngine::UIElements::HelpBoxMessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, messageType);
}
inline void UnityEngine::UIElements::HelpBox::UpdateIcon(::UnityEngine::UIElements::HelpBoxMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HelpBox*>(), { "UpdateIcon", {}, { ::i2c::type_of<::UnityEngine::UIElements::HelpBoxMessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageType);
}
inline ::UnityEngine::UIElements::HelpBox* UnityEngine::UIElements::HelpBox::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::HelpBox*>());
}
inline ::UnityEngine::UIElements::HelpBox* UnityEngine::UIElements::HelpBox::New_ctor(::StringW text, ::UnityEngine::UIElements::HelpBoxMessageType messageType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::HelpBox*>(text, messageType));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HelpBox::HelpBox() {}
