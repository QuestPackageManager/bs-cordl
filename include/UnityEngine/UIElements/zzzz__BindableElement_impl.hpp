#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BindableElement.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBindable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindableElement_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindableElement_UxmlFactory::*)()>(&::UnityEngine::UIElements::BindableElement_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c30620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BindableElement_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BindableElement_UxmlFactory* UnityEngine::UIElements::BindableElement_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BindableElement_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindableElement_UxmlFactory::BindableElement_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BindableElement_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindableElement_UxmlTraits::*)()>(&::UnityEngine::UIElements::BindableElement_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c30688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindableElement_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindableElement_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::BindableElement_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6c30718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement_UxmlTraits*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BindableElement_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::BindableElement_UxmlTraits::__cordl_internal_get_m_PropertyPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertyPath;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::BindableElement_UxmlTraits::__cordl_internal_get_m_PropertyPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertyPath;
}
constexpr void UnityEngine::UIElements::BindableElement_UxmlTraits::__cordl_internal_set_m_PropertyPath(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PropertyPath = value;
}
inline void UnityEngine::UIElements::BindableElement_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BindableElement_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                      ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BindableElement_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::BindableElement_UxmlTraits* UnityEngine::UIElements::BindableElement_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BindableElement_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindableElement_UxmlTraits::BindableElement_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BindableElement.get_binding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IBinding* (::UnityEngine::UIElements::BindableElement::*)()>(
    &::UnityEngine::UIElements::BindableElement::get_binding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c305b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement*>(), { "get_binding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindableElement.set_bindingPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindableElement::*)(::StringW)>(&::UnityEngine::UIElements::BindableElement::set_bindingPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c305bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement*>(), { "set_bindingPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindableElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindableElement::*)()>(&::UnityEngine::UIElements::BindableElement::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c305c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::IBinding*& UnityEngine::UIElements::BindableElement::__cordl_internal_get__binding_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binding_k__BackingField;
}
constexpr ::UnityEngine::UIElements::IBinding* const& UnityEngine::UIElements::BindableElement::__cordl_internal_get__binding_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binding_k__BackingField;
}
constexpr void UnityEngine::UIElements::BindableElement::__cordl_internal_set__binding_k__BackingField(::UnityEngine::UIElements::IBinding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____binding_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::UIElements::BindableElement::__cordl_internal_get__bindingPath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingPath_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::BindableElement::__cordl_internal_get__bindingPath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingPath_k__BackingField;
}
constexpr void UnityEngine::UIElements::BindableElement::__cordl_internal_set__bindingPath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingPath_k__BackingField = value;
}
inline ::UnityEngine::UIElements::IBinding* UnityEngine::UIElements::BindableElement::get_binding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement*>(), { "get_binding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IBinding*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BindableElement::set_bindingPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement*>(), { "set_bindingPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BindableElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindableElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BindableElement* UnityEngine::UIElements::BindableElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BindableElement*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IBindable"
constexpr UnityEngine::UIElements::BindableElement::operator ::UnityEngine::UIElements::IBindable*() noexcept {
  return static_cast<::UnityEngine::UIElements::IBindable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IBindable"
constexpr ::UnityEngine::UIElements::IBindable* UnityEngine::UIElements::BindableElement::i___UnityEngine__UIElements__IBindable() noexcept {
  return static_cast<::UnityEngine::UIElements::IBindable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindableElement::BindableElement() {}
