#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\AbstractProgressBar.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AbstractProgressBar_def.hpp"
#include "UnityEngine/UIElements/zzzz__AbstractProgressBar_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6d64784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::*)()>(&::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6d6496c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_get_m_LowValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_get_m_LowValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LowValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_get_m_HighValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_get_m_HighValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_get_m_Title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Title;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_get_m_Title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Title;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::__cordl_internal_set_m_Title(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Title = value;
}
inline void UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                          ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits* UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits::AbstractProgressBar_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.get_title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::AbstractProgressBar::*)()>(&::UnityEngine::UIElements::AbstractProgressBar::get_title)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d63948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "get_title", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.set_title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(::StringW)>(&::UnityEngine::UIElements::AbstractProgressBar::set_title)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d63968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "set_title", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.get_lowValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::AbstractProgressBar::*)()>(&::UnityEngine::UIElements::AbstractProgressBar::get_lowValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d63a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "get_lowValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.set_lowValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(&::UnityEngine::UIElements::AbstractProgressBar::set_lowValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6d63a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "set_lowValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.get_highValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::AbstractProgressBar::*)()>(&::UnityEngine::UIElements::AbstractProgressBar::get_highValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d63c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "get_highValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.set_highValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(&::UnityEngine::UIElements::AbstractProgressBar::set_highValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6d63c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "set_highValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)()>(&::UnityEngine::UIElements::AbstractProgressBar::_ctor)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6d63da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.OnGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::AbstractProgressBar::OnGeometryChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6d64070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(),
                                                                                           { "OnGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::AbstractProgressBar::*)()>(&::UnityEngine::UIElements::AbstractProgressBar::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d64094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { ::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), 141 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(&::UnityEngine::UIElements::AbstractProgressBar::set_value)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6d6409c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { ::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), 142 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(&::UnityEngine::UIElements::AbstractProgressBar::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6d64308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "SetValueWithoutNotify", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.SetProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(&::UnityEngine::UIElements::AbstractProgressBar::SetProgress)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d63b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "SetProgress", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.CalculateProgressWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(&::UnityEngine::UIElements::AbstractProgressBar::CalculateProgressWidth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6d64330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "CalculateProgressWidth", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_Background() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Background;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_Background() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Background;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_set_m_Background(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Background = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_Progress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Progress;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_Progress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Progress;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_set_m_Progress(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Progress = value;
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_Title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Title;
}
constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_Title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Title;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_set_m_Title(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Title = value;
}
constexpr float_t& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_LowValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr float_t const& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_LowValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_set_m_LowValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LowValue = value;
}
constexpr float_t& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_HighValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr float_t const& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_HighValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_set_m_HighValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighValue = value;
}
constexpr float_t& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr float_t const& UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__cordl_internal_set_m_Value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_titleProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "titleProperty", ::UnityEngine::UIElements::AbstractProgressBar*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::AbstractProgressBar::getStaticF_titleProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "titleProperty", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_lowValueProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "lowValueProperty", ::UnityEngine::UIElements::AbstractProgressBar*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::AbstractProgressBar::getStaticF_lowValueProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "lowValueProperty", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_highValueProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "highValueProperty", ::UnityEngine::UIElements::AbstractProgressBar*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::AbstractProgressBar::getStaticF_highValueProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "highValueProperty", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_valueProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "valueProperty", ::UnityEngine::UIElements::AbstractProgressBar*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::AbstractProgressBar::getStaticF_valueProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "valueProperty", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::AbstractProgressBar*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_containerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_containerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_titleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "titleUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_titleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "titleUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_titleContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "titleContainerUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_titleContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "titleContainerUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_progressUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "progressUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_progressUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "progressUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_backgroundUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "backgroundUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_backgroundUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "backgroundUssClassName", ::UnityEngine::UIElements::AbstractProgressBar*>();
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::get_title() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "get_title", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AbstractProgressBar::set_title(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "set_title", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::AbstractProgressBar::get_lowValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "get_lowValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AbstractProgressBar::set_lowValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "set_lowValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::AbstractProgressBar::get_highValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "get_highValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AbstractProgressBar::set_highValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "set_highValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::AbstractProgressBar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AbstractProgressBar::OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(),
                                                                                         { "OnGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline float_t UnityEngine::UIElements::AbstractProgressBar::get_value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), 141 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AbstractProgressBar::set_value(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), 142 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::AbstractProgressBar::SetValueWithoutNotify(float_t newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "SetValueWithoutNotify", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::AbstractProgressBar::SetProgress(float_t p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "SetProgress", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline float_t UnityEngine::UIElements::AbstractProgressBar::CalculateProgressWidth(float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractProgressBar*>(), { "CalculateProgressWidth", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, width);
}
inline ::UnityEngine::UIElements::AbstractProgressBar* UnityEngine::UIElements::AbstractProgressBar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::AbstractProgressBar*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<float_t>"
constexpr UnityEngine::UIElements::AbstractProgressBar::operator ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>*() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<float_t>"
constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>* UnityEngine::UIElements::AbstractProgressBar::i___UnityEngine__UIElements__INotifyValueChanged_1_float_t_() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<float_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::AbstractProgressBar::AbstractProgressBar() {}
