#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/ColumnResizer.hpp"
#include "UnityEngine/UIElements/zzzz__PointerManipulator_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__ColumnResizer_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnCollectionHeader_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnLayout_def.hpp"
#include "UnityEngine/UIElements/zzzz__Column_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.get_columnLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ColumnLayout* (::UnityEngine::UIElements::Internal::ColumnResizer::*)()>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::get_columnLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1fb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "get_columnLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.set_columnLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(::UnityEngine::UIElements::ColumnLayout*)>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::set_columnLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1fb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(),
                                                                                           { "set_columnLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnLayout*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.get_preview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Internal::ColumnResizer::*)()>(&::UnityEngine::UIElements::Internal::ColumnResizer::get_preview)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1fb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "get_preview", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.set_preview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(bool)>(&::UnityEngine::UIElements::Internal::ColumnResizer::set_preview)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1fb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "set_preview", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6d1fb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.RegisterCallbacksOnTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)()>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6d1fbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { ::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)()>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6d1fe18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { ::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.OnKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(::UnityEngine::UIElements::KeyDownEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::OnKeyDown)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d20044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::OnPointerDown)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6d20128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(),
                                                                                           { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.OnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::OnPointerMove)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6d2037c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(),
                                                                                           { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::OnPointerUp)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6d204c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(),
                                                                                           { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.BeginDragResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(float_t)>(&::UnityEngine::UIElements::Internal::ColumnResizer::BeginDragResize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6d20334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "BeginDragResize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.DragResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(float_t)>(&::UnityEngine::UIElements::Internal::ColumnResizer::DragResize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6d20488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "DragResize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.UpdatePreviewPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)()>(&::UnityEngine::UIElements::Internal::ColumnResizer::UpdatePreviewPosition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6d20600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "UpdatePreviewPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnResizer.EndDragResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnResizer::*)(float_t, bool)>(
    &::UnityEngine::UIElements::Internal::ColumnResizer::EndDragResize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6d200cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "EndDragResize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr void UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_set_m_Start(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Start = value;
}
constexpr bool& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr bool const& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr void UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_set_m_Active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Active = value;
}
constexpr bool& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Resizing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resizing;
}
constexpr bool const& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Resizing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resizing;
}
constexpr void UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_set_m_Resizing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Resizing = value;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* const& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr void UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_set_m_Header(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Header = value;
}
constexpr ::UnityEngine::UIElements::Column*& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Column;
}
constexpr ::UnityEngine::UIElements::Column* const& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_Column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Column;
}
constexpr void UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_set_m_Column(::UnityEngine::UIElements::Column* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Column = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_PreviewElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviewElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get_m_PreviewElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviewElement;
}
constexpr void UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_set_m_PreviewElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviewElement = value;
}
constexpr ::UnityEngine::UIElements::ColumnLayout*& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get__columnLayout_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnLayout_k__BackingField;
}
constexpr ::UnityEngine::UIElements::ColumnLayout* const& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get__columnLayout_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnLayout_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_set__columnLayout_k__BackingField(::UnityEngine::UIElements::ColumnLayout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnLayout_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get__preview_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preview_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_get__preview_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preview_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::ColumnResizer::__cordl_internal_set__preview_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preview_k__BackingField = value;
}
inline ::UnityEngine::UIElements::ColumnLayout* UnityEngine::UIElements::Internal::ColumnResizer::get_columnLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "get_columnLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ColumnLayout*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::set_columnLayout(::UnityEngine::UIElements::ColumnLayout* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(),
                                                                                         { "set_columnLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnLayout*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Internal::ColumnResizer::get_preview() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "get_preview", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::set_preview(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "set_preview", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::_ctor(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::RegisterCallbacksOnTarget() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::UnregisterCallbacksFromTarget() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(),
                                                                                         { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(),
                                                                                         { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(),
                                                                                         { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::BeginDragResize(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "BeginDragResize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::DragResize(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "DragResize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::UpdatePreviewPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "UpdatePreviewPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnResizer::EndDragResize(float_t pos, bool cancelled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnResizer*>(), { "EndDragResize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, cancelled);
}
inline ::UnityEngine::UIElements::Internal::ColumnResizer* UnityEngine::UIElements::Internal::ColumnResizer::New_ctor(::UnityEngine::UIElements::Column* column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::ColumnResizer*>(column));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::ColumnResizer::ColumnResizer() {}
