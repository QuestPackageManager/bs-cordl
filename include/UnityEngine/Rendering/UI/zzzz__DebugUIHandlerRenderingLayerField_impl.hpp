#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerRenderingLayerField.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerRenderingLayerField_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerContainer_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerIndirectToggle_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__UIFoldout_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField.SetWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::SetWidget)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x6c348a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)(int32_t)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::GetValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c34c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::SetValue)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6c34d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(),
                                                                                           { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField.OnSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)(bool, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnSelection)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c34e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField.OnDeselection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnDeselection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c34f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField.OnIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)(bool)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnIncrement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c34f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField.OnDecrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)(bool)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnDecrement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c34f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField.OnAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnAction)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c34f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::Next)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6c34f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c35058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_nameLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_nameLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameLabel = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout>& UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_valueToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueToggle;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> const& UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_valueToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueToggle;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_set_valueToggle(::UnityW<::UnityEngine::Rendering::UI::UIFoldout> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueToggle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>*&
UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_toggles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>* const&
UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_toggles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toggles;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_set_toggles(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toggles = value;
}
constexpr ::UnityEngine::Rendering::DebugUI_RenderingLayerField*& UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_m_Field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr ::UnityEngine::Rendering::DebugUI_RenderingLayerField* const& UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_m_Field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_RenderingLayerField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Field = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_m_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_get_m_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::__cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Container = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::GetValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::SetValue(int32_t index, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(),
                                                                                         { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNext, previous);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnDeselection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnIncrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnDecrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::OnAction() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::Next() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField* UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField::DebugUIHandlerRenderingLayerField() {}
