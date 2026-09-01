#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UI\DebugUIHandlerVector2.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerVector2_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerContainer_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerIndirectFloatField_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__UIFoldout_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2.SetWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::SetWidget)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x6807db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)(float_t, bool, bool)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::SetValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68081a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                                                           { "SetValue", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2.SetupSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::SetupSettings)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6808098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                             { "SetupSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2.OnSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)(bool, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnSelection)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6808244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2.OnDeselection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnDeselection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6808330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2.OnIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)(bool)>(&::UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnIncrement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x680835c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2.OnDecrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)(bool)>(&::UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnDecrement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6808378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2.OnAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnAction)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6808394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::Next)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x68083b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerVector2::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6808484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2._SetWidget_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetWidget_b__6_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x680849c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetWidget>b__6_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2._SetWidget_b__6_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)(float_t)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetWidget_b__6_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68084fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetWidget>b__6_1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2._SetWidget_b__6_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetWidget_b__6_2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6808508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetWidget>b__6_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2._SetWidget_b__6_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)(float_t)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetWidget_b__6_3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6808570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetWidget>b__6_3", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2._SetupSettings_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetupSettings_b__8_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x680857c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetupSettings>b__8_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2._SetupSettings_b__8_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetupSettings_b__8_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6808594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetupSettings>b__8_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVector2._SetupSettings_b__8_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::UI::DebugUIHandlerVector2::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetupSettings_b__8_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x68085ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetupSettings>b__8_2", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_nameLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_nameLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameLabel = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout>& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_valueToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueToggle;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> const& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_valueToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueToggle;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_set_valueToggle(::UnityW<::UnityEngine::Rendering::UI::UIFoldout> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueToggle = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_fieldX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldX;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_fieldX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldX;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_set_fieldX(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldX = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_fieldY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldY;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_fieldY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldY;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_set_fieldY(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldY = value;
}
constexpr ::UnityEngine::Rendering::DebugUI_Vector2Field*& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_m_Field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr ::UnityEngine::Rendering::DebugUI_Vector2Field* const& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_m_Field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_Vector2Field* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Field = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_m_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_get_m_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerVector2::__cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Container = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::SetValue(float_t v, bool x, bool y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                                                         { "SetValue", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v, x, y);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(),
                                                           { "SetupSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNext, previous);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnDeselection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnIncrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnDecrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::OnAction() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> UnityEngine::Rendering::UI::DebugUIHandlerVector2::Next() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetWidget_b__6_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetWidget>b__6_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetWidget_b__6_1(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetWidget>b__6_1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetWidget_b__6_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetWidget>b__6_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetWidget_b__6_3(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetWidget>b__6_3", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetupSettings_b__8_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetupSettings>b__8_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetupSettings_b__8_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetupSettings>b__8_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::UI::DebugUIHandlerVector2::_SetupSettings_b__8_2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>(), { "<SetupSettings>b__8_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerVector2* UnityEngine::Rendering::UI::DebugUIHandlerVector2::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerVector2*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerVector2::DebugUIHandlerVector2() {}
