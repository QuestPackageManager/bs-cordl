#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PopupWindow.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PopupWindow_def.hpp"
#include "UnityEngine/UIElements/zzzz__PopupWindow_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PopupWindow_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PopupWindow_UxmlFactory::*)()>(&::UnityEngine::UIElements::PopupWindow_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d638d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PopupWindow_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PopupWindow_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PopupWindow_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PopupWindow_UxmlFactory* UnityEngine::UIElements::PopupWindow_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PopupWindow_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PopupWindow_UxmlFactory::PopupWindow_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PopupWindow_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PopupWindow_UxmlTraits::*)()>(&::UnityEngine::UIElements::PopupWindow_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d63940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PopupWindow_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PopupWindow_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PopupWindow_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PopupWindow_UxmlTraits* UnityEngine::UIElements::PopupWindow_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PopupWindow_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PopupWindow_UxmlTraits::PopupWindow_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PopupWindow._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PopupWindow::*)()>(&::UnityEngine::UIElements::PopupWindow::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6d636f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PopupWindow*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PopupWindow.get_contentContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::PopupWindow::*)()>(
    &::UnityEngine::UIElements::PopupWindow::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6382c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PopupWindow*>(), { ::i2c::class_of<::UnityEngine::UIElements::PopupWindow*>(), 135 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::PopupWindow::__cordl_internal_get_m_ContentContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::PopupWindow::__cordl_internal_get_m_ContentContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr void UnityEngine::UIElements::PopupWindow::__cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentContainer = value;
}
inline void UnityEngine::UIElements::PopupWindow::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::PopupWindow*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PopupWindow::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::PopupWindow*>();
}
inline void UnityEngine::UIElements::PopupWindow::setStaticF_contentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentUssClassName", ::UnityEngine::UIElements::PopupWindow*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PopupWindow::getStaticF_contentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentUssClassName", ::UnityEngine::UIElements::PopupWindow*>();
}
inline void UnityEngine::UIElements::PopupWindow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PopupWindow*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::PopupWindow::get_contentContainer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PopupWindow*>(), 135 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PopupWindow* UnityEngine::UIElements::PopupWindow::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PopupWindow*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PopupWindow::PopupWindow() {}
