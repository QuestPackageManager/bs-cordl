#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ReusableCollectionItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__StyleValues_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__ValueAnimation_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.get_rootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ReusableCollectionItem::*)()>(
    &::UnityEngine::UIElements::ReusableCollectionItem::get_rootElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c551dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.get_bindableElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ReusableCollectionItem::*)()>(
    &::UnityEngine::UIElements::ReusableCollectionItem::get_bindableElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c551e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_bindableElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.set_bindableElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ReusableCollectionItem::set_bindableElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c551ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                                                           { "set_bindableElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.get_animator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* (
    ::UnityEngine::UIElements::ReusableCollectionItem::*)()>(&::UnityEngine::UIElements::ReusableCollectionItem::get_animator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c551f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_animator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.set_animator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(
    ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*)>(&::UnityEngine::UIElements::ReusableCollectionItem::set_animator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c551fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                            { "set_animator", {}, { ::i2c::type_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ReusableCollectionItem::*)()>(&::UnityEngine::UIElements::ReusableCollectionItem::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c55204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.set_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(int32_t)>(&::UnityEngine::UIElements::ReusableCollectionItem::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c5520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ReusableCollectionItem::*)()>(&::UnityEngine::UIElements::ReusableCollectionItem::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c55214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.set_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(int32_t)>(&::UnityEngine::UIElements::ReusableCollectionItem::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c5521c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.get_isDragGhost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ReusableCollectionItem::*)()>(&::UnityEngine::UIElements::ReusableCollectionItem::get_isDragGhost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c55224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_isDragGhost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.set_isDragGhost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(bool)>(&::UnityEngine::UIElements::ReusableCollectionItem::set_isDragGhost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c5522c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "set_isDragGhost", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.add_onGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*)>(
    &::UnityEngine::UIElements::ReusableCollectionItem::add_onGeometryChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c55234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                             { "add_onGeometryChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.remove_onGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*)>(
    &::UnityEngine::UIElements::ReusableCollectionItem::remove_onGeometryChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c552f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                             { "remove_onGeometryChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.add_onDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*)>(
    &::UnityEngine::UIElements::ReusableCollectionItem::add_onDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c553b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                             { "add_onDestroy", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.remove_onDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*)>(
    &::UnityEngine::UIElements::ReusableCollectionItem::remove_onDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c55474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                             { "remove_onDestroy", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)()>(&::UnityEngine::UIElements::ReusableCollectionItem::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c55534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ReusableCollectionItem::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c555b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.PreAttachElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)()>(&::UnityEngine::UIElements::ReusableCollectionItem::PreAttachElement)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6c555c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.DetachElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)()>(&::UnityEngine::UIElements::ReusableCollectionItem::DetachElement)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6c55684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.DestroyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)()>(&::UnityEngine::UIElements::ReusableCollectionItem::DestroyElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c55798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.SetSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(bool)>(&::UnityEngine::UIElements::ReusableCollectionItem::SetSelected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6c557b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.SetDragGhost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(bool)>(&::UnityEngine::UIElements::ReusableCollectionItem::SetDragGhost)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6c558bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableCollectionItem.OnGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableCollectionItem::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::ReusableCollectionItem::OnGeometryChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c55a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                                                           { "OnGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__bindableElement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindableElement_k__BackingField;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__bindableElement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindableElement_k__BackingField;
}
constexpr void UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_set__bindableElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindableElement_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*&
UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__animator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* const&
UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__animator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator_k__BackingField;
}
constexpr void UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_set__animator_k__BackingField(
    ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animator_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__index_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__index_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_k__BackingField;
}
constexpr void UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_set__index_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_set__id_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__isDragGhost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDragGhost_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get__isDragGhost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDragGhost_k__BackingField;
}
constexpr void UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_set__isDragGhost_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDragGhost_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get_onGeometryChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onGeometryChanged;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* const& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get_onGeometryChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onGeometryChanged;
}
constexpr void UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_set_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onGeometryChanged = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>*&
UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get_m_GeometryChangedEventCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryChangedEventCallback;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* const&
UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get_m_GeometryChangedEventCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryChangedEventCallback;
}
constexpr void UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_set_m_GeometryChangedEventCallback(
    ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GeometryChangedEventCallback = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get_onDestroy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDestroy;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* const& UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_get_onDestroy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDestroy;
}
constexpr void UnityEngine::UIElements::ReusableCollectionItem::__cordl_internal_set_onDestroy(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onDestroy = value;
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ReusableCollectionItem::get_rootElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ReusableCollectionItem::get_bindableElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_bindableElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::set_bindableElement(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                                                         { "set_bindableElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* UnityEngine::UIElements::ReusableCollectionItem::get_animator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_animator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::set_animator(::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                          { "set_animator", {}, { ::i2c::type_of<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::ReusableCollectionItem::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::ReusableCollectionItem::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::set_id(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::ReusableCollectionItem::get_isDragGhost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "get_isDragGhost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::set_isDragGhost(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { "set_isDragGhost", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::add_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                           { "add_onGeometryChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::remove_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                           { "remove_onGeometryChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::add_onDestroy(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                           { "add_onDestroy", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::remove_onDestroy(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                           { "remove_onDestroy", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::Init(::UnityEngine::UIElements::VisualElement* item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::PreAttachElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::DetachElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::DestroyElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::SetSelected(bool selected) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::SetDragGhost(bool dragGhost) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dragGhost);
}
inline void UnityEngine::UIElements::ReusableCollectionItem::OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableCollectionItem*>(),
                                                                                         { "OnGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::ReusableCollectionItem* UnityEngine::UIElements::ReusableCollectionItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ReusableCollectionItem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ReusableCollectionItem::ReusableCollectionItem() {}
