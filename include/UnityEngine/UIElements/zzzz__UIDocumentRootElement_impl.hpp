#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIDocumentRootElement.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateContainer_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocumentRootElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIRenderer_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocumentRootElement.get_uiRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::UIRenderer> (::UnityEngine::UIElements::UIDocumentRootElement::*)()>(
    &::UnityEngine::UIElements::UIDocumentRootElement::get_uiRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7248bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentRootElement*>(), { "get_uiRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocumentRootElement.set_uiRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocumentRootElement::*)(::UnityEngine::UIElements::UIRenderer*)>(
    &::UnityEngine::UIElements::UIDocumentRootElement::set_uiRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7248bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentRootElement*>(),
                                                                                           { "set_uiRenderer", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIRenderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocumentRootElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocumentRootElement::*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::UIDocumentRootElement::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7248bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentRootElement*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UIElements::UIDocument>& UnityEngine::UIElements::UIDocumentRootElement::__cordl_internal_get_document() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr ::UnityW<::UnityEngine::UIElements::UIDocument> const& UnityEngine::UIElements::UIDocumentRootElement::__cordl_internal_get_document() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr void UnityEngine::UIElements::UIDocumentRootElement::__cordl_internal_set_document(::UnityW<::UnityEngine::UIElements::UIDocument> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___document = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::UIRenderer>& UnityEngine::UIElements::UIDocumentRootElement::__cordl_internal_get__uiRenderer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiRenderer_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::UIElements::UIRenderer> const& UnityEngine::UIElements::UIDocumentRootElement::__cordl_internal_get__uiRenderer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiRenderer_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIDocumentRootElement::__cordl_internal_set__uiRenderer_k__BackingField(::UnityW<::UnityEngine::UIElements::UIRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiRenderer_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::UIElements::UIRenderer> UnityEngine::UIElements::UIDocumentRootElement::get_uiRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentRootElement*>(), { "get_uiRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::UIRenderer>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocumentRootElement::set_uiRenderer(::UnityEngine::UIElements::UIRenderer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentRootElement*>(), { "set_uiRenderer", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIRenderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIDocumentRootElement::_ctor(::UnityEngine::UIElements::UIDocument* document, ::UnityEngine::UIElements::VisualTreeAsset* sourceAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentRootElement*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, document, sourceAsset);
}
inline ::UnityEngine::UIElements::UIDocumentRootElement* UnityEngine::UIElements::UIDocumentRootElement::New_ctor(::UnityEngine::UIElements::UIDocument* document,
                                                                                                                  ::UnityEngine::UIElements::VisualTreeAsset* sourceAsset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIDocumentRootElement*>(document, sourceAsset));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIDocumentRootElement::UIDocumentRootElement() {}
