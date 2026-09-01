#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\CreationContext.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext_AttributeOverrideRange._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext_AttributeOverrideRange::*)(
    ::UnityEngine::UIElements::VisualTreeAsset*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*)>(
    &::UnityEngine::UIElements::CreationContext_AttributeOverrideRange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cbc9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::UIElements::CreationContext_AttributeOverrideRange::_ctor(::UnityEngine::UIElements::VisualTreeAsset* sourceAsset,
                                                                       ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceAsset, attributeOverrides);
}
// Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "attributeOverrides", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CreationContext_AttributeOverrideRange::CreationContext_AttributeOverrideRange(
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides) noexcept {
  this->sourceAsset = sourceAsset;
  this->attributeOverrides = attributeOverrides;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CreationContext_AttributeOverrideRange::CreationContext_AttributeOverrideRange() {}
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::*)(
    ::UnityEngine::UIElements::VisualTreeAsset*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*, int32_t)>(
    &::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cbc9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::_ctor(
    ::UnityEngine::UIElements::VisualTreeAsset* sourceAsset, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* attributeOverrides,
    int32_t templateId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sourceAsset, attributeOverrides, templateId);
}
// Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "templateId", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "attributeOverrides", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::CreationContext_SerializedDataOverrideRange(
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset, int32_t templateId,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* attributeOverrides) noexcept {
  this->sourceAsset = sourceAsset;
  this->templateId = templateId;
  this->attributeOverrides = attributeOverrides;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange::CreationContext_SerializedDataOverrideRange() {}
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::get_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_target", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::CreationContext::set_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "set_target", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_veaIdsPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::get_veaIdsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_veaIdsPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_veaIdsPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::UIElements::CreationContext::set_veaIdsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                                                           { "set_veaIdsPath", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_visualTreeAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::VisualTreeAsset> (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::get_visualTreeAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_visualTreeAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_visualTreeAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::CreationContext::set_visualTreeAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                                                           { "set_visualTreeAsset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_slotInsertionPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* (
    ::UnityEngine::UIElements::CreationContext::*)()>(&::UnityEngine::UIElements::CreationContext::get_slotInsertionPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_slotInsertionPoints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_slotInsertionPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::CreationContext::set_slotInsertionPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                            { "set_slotInsertionPoints", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_attributeOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* (
    ::UnityEngine::UIElements::CreationContext::*)()>(&::UnityEngine::UIElements::CreationContext::get_attributeOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_attributeOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_attributeOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*)>(&::UnityEngine::UIElements::CreationContext::set_attributeOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                            { "set_attributeOverrides", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_serializedDataOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* (
    ::UnityEngine::UIElements::CreationContext::*)()>(&::UnityEngine::UIElements::CreationContext::get_serializedDataOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_serializedDataOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_serializedDataOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*)>(&::UnityEngine::UIElements::CreationContext::set_serializedDataOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
            { "set_serializedDataOverrides", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_namesPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::UnityEngine::UIElements::CreationContext::*)()>(
    &::UnityEngine::UIElements::CreationContext::get_namesPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_namesPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.set_namesPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::UIElements::CreationContext::set_namesPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc8e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                                                           { "set_namesPath", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.get_hasOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::CreationContext::*)()>(&::UnityEngine::UIElements::CreationContext::get_hasOverrides)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6cc1bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_hasOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6cc5c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*)>(&::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cc8e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*, ::UnityEngine::UIElements::VisualTreeAsset*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6cc8e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*, ::UnityEngine::UIElements::VisualTreeAsset*,
    ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cc8f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CreationContext::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*, ::UnityEngine::UIElements::VisualTreeAsset*,
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::UIElements::CreationContext::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cbc9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::CreationContext::*)(::System::Object*)>(&::UnityEngine::UIElements::CreationContext::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6cc8fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { ::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::CreationContext::*)(::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::CreationContext::Equals)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6cc9074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CreationContext.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::CreationContext::*)()>(&::UnityEngine::UIElements::CreationContext::GetHashCode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6cc91dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { ::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CreationContext::setStaticF_Default(::UnityEngine::UIElements::CreationContext value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CreationContext, "Default", ::UnityEngine::UIElements::CreationContext>(std::forward<::UnityEngine::UIElements::CreationContext>(value));
}
inline ::UnityEngine::UIElements::CreationContext UnityEngine::UIElements::CreationContext::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CreationContext, "Default", ::UnityEngine::UIElements::CreationContext>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::CreationContext::get_target() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_target", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_target(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "set_target", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::UIElements::CreationContext::get_veaIdsPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_veaIdsPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_veaIdsPath(::System::Collections::Generic::List_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                                                         { "set_veaIdsPath", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> UnityEngine::UIElements::CreationContext::get_visualTreeAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_visualTreeAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                                                         { "set_visualTreeAsset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::CreationContext::get_slotInsertionPoints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_slotInsertionPoints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_slotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                       { "set_slotInsertionPoints", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* UnityEngine::UIElements::CreationContext::get_attributeOverrides() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_attributeOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_attributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                          { "set_attributeOverrides", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* UnityEngine::UIElements::CreationContext::get_serializedDataOverrides() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_serializedDataOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*>(*this, ___internal_method);
}
inline void
UnityEngine::UIElements::CreationContext::set_serializedDataOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                       { "set_serializedDataOverrides", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::UIElements::CreationContext::get_namesPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_namesPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::set_namesPath(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                                                         { "set_namesPath", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::CreationContext::get_hasOverrides() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "get_hasOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::UnityEngine::UIElements::VisualTreeAsset* vta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vta);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, slotInsertionPoints, attributeOverrides);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                            ::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, slotInsertionPoints, vta, target);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides,
                                                            ::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, slotInsertionPoints, attributeOverrides, vta, target);
}
inline void UnityEngine::UIElements::CreationContext::_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* serializedDataOverrides,
                                                            ::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::VisualElement* target,
                                                            ::System::Collections::Generic::List_1<int32_t>* veaIdsPath, ::System::Collections::Generic::List_1<::StringW>* namesPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*>(),
                                                  ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, slotInsertionPoints, attributeOverrides, serializedDataOverrides, vta, target, veaIdsPath, namesPath);
}
inline bool UnityEngine::UIElements::CreationContext::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::UIElements::CreationContext::Equals(::UnityEngine::UIElements::CreationContext other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::UIElements::CreationContext::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CreationContext>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>"
constexpr UnityEngine::UIElements::CreationContext::operator ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>* UnityEngine::UIElements::CreationContext::i___System__IEquatable_1___UnityEngine__UIElements__CreationContext_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_veaIdsPath_k__BackingField",
// ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_visualTreeAsset_k__BackingField", ty:
// "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_slotInsertionPoints_k__BackingField", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_attributeOverrides_k__BackingField",
// ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_serializedDataOverrides_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_namesPath_k__BackingField", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CreationContext::CreationContext(
    ::UnityEngine::UIElements::VisualElement* _target_k__BackingField, ::System::Collections::Generic::List_1<int32_t>* _veaIdsPath_k__BackingField,
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _visualTreeAsset_k__BackingField,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* _slotInsertionPoints_k__BackingField,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* _attributeOverrides_k__BackingField,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* _serializedDataOverrides_k__BackingField,
    ::System::Collections::Generic::List_1<::StringW>* _namesPath_k__BackingField) noexcept {
  this->_target_k__BackingField = _target_k__BackingField;
  this->_veaIdsPath_k__BackingField = _veaIdsPath_k__BackingField;
  this->_visualTreeAsset_k__BackingField = _visualTreeAsset_k__BackingField;
  this->_slotInsertionPoints_k__BackingField = _slotInsertionPoints_k__BackingField;
  this->_attributeOverrides_k__BackingField = _attributeOverrides_k__BackingField;
  this->_serializedDataOverrides_k__BackingField = _serializedDataOverrides_k__BackingField;
  this->_namesPath_k__BackingField = _namesPath_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CreationContext::CreationContext() {}
