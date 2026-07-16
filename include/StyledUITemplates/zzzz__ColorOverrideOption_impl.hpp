#pragma once
// IWYU pragma private; include "StyledUITemplates/ColorOverrideOption.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "StyledUITemplates/zzzz__ColorOverrideOption_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::StyledUITemplates::ColorOverrideOption::*)()>(&::StyledUITemplates::ColorOverrideOption::get_color)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f3ce2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.get_overrideEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::StyledUITemplates::ColorOverrideOption::*)()>(&::StyledUITemplates::ColorOverrideOption::get_overrideEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3ce58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_overrideEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.set_overrideEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::StyledUITemplates::ColorOverrideOption::*)(bool)>(&::StyledUITemplates::ColorOverrideOption::set_overrideEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3ce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "set_overrideEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.get_useFixedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::StyledUITemplates::ColorOverrideOption::*)()>(&::StyledUITemplates::ColorOverrideOption::get_useFixedColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3ce68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_useFixedColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.set_useFixedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::StyledUITemplates::ColorOverrideOption::*)(bool)>(&::StyledUITemplates::ColorOverrideOption::set_useFixedColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3ce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "set_useFixedColor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.get_fixedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::StyledUITemplates::ColorOverrideOption::*)()>(&::StyledUITemplates::ColorOverrideOption::get_fixedColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f3ce78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_fixedColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.set_fixedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::StyledUITemplates::ColorOverrideOption::*)(::UnityEngine::Color)>(&::StyledUITemplates::ColorOverrideOption::set_fixedColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f3ce84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "set_fixedColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.get_scriptableObjectColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ColorSO> (::StyledUITemplates::ColorOverrideOption::*)()>(
    &::StyledUITemplates::ColorOverrideOption::get_scriptableObjectColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3ce90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_scriptableObjectColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.set_scriptableObjectColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::StyledUITemplates::ColorOverrideOption::*)(::GlobalNamespace::ColorSO*)>(
    &::StyledUITemplates::ColorOverrideOption::set_scriptableObjectColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3ce98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "set_scriptableObjectColor", {}, { ::i2c::type_of<::GlobalNamespace::ColorSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::StyledUITemplates::ColorOverrideOption::*)()>(&::StyledUITemplates::ColorOverrideOption::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f3cea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::StyledUITemplates::ColorOverrideOption::*)(::StyledUITemplates::ColorOverrideOption*)>(
    &::StyledUITemplates::ColorOverrideOption::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f3ceac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { ".ctor", {}, { ::i2c::type_of<::StyledUITemplates::ColorOverrideOption*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::StyledUITemplates::ColorOverrideOption::*)(::StyledUITemplates::ColorOverrideOption*)>(
    &::StyledUITemplates::ColorOverrideOption::Equals)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f3cee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "Equals", {}, { ::i2c::type_of<::StyledUITemplates::ColorOverrideOption*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::StyledUITemplates::ColorOverrideOption::*)(::System::Object*)>(&::StyledUITemplates::ColorOverrideOption::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f3d030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { ::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::StyledUITemplates::ColorOverrideOption.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::StyledUITemplates::ColorOverrideOption::*)()>(&::StyledUITemplates::ColorOverrideOption::GetHashCode)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f3d124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { ::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), 2 }));
    return ___internal_method;
  }
};
constexpr bool& StyledUITemplates::ColorOverrideOption::__cordl_internal_get__override() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____override;
}
constexpr bool const& StyledUITemplates::ColorOverrideOption::__cordl_internal_get__override() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____override;
}
constexpr void StyledUITemplates::ColorOverrideOption::__cordl_internal_set__override(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____override = value;
}
constexpr bool& StyledUITemplates::ColorOverrideOption::__cordl_internal_get__useFixedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useFixedColor;
}
constexpr bool const& StyledUITemplates::ColorOverrideOption::__cordl_internal_get__useFixedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useFixedColor;
}
constexpr void StyledUITemplates::ColorOverrideOption::__cordl_internal_set__useFixedColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useFixedColor = value;
}
constexpr ::UnityEngine::Color& StyledUITemplates::ColorOverrideOption::__cordl_internal_get__fixedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedColor;
}
constexpr ::UnityEngine::Color const& StyledUITemplates::ColorOverrideOption::__cordl_internal_get__fixedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedColor;
}
constexpr void StyledUITemplates::ColorOverrideOption::__cordl_internal_set__fixedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& StyledUITemplates::ColorOverrideOption::__cordl_internal_get__scriptableObjectColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scriptableObjectColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& StyledUITemplates::ColorOverrideOption::__cordl_internal_get__scriptableObjectColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scriptableObjectColor;
}
constexpr void StyledUITemplates::ColorOverrideOption::__cordl_internal_set__scriptableObjectColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scriptableObjectColor = value;
}
inline ::UnityEngine::Color StyledUITemplates::ColorOverrideOption::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool StyledUITemplates::ColorOverrideOption::get_overrideEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_overrideEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void StyledUITemplates::ColorOverrideOption::set_overrideEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "set_overrideEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool StyledUITemplates::ColorOverrideOption::get_useFixedColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_useFixedColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void StyledUITemplates::ColorOverrideOption::set_useFixedColor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "set_useFixedColor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color StyledUITemplates::ColorOverrideOption::get_fixedColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_fixedColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void StyledUITemplates::ColorOverrideOption::set_fixedColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "set_fixedColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::ColorSO> StyledUITemplates::ColorOverrideOption::get_scriptableObjectColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "get_scriptableObjectColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ColorSO>>(this, ___internal_method);
}
inline void StyledUITemplates::ColorOverrideOption::set_scriptableObjectColor(::GlobalNamespace::ColorSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "set_scriptableObjectColor", {}, { ::i2c::type_of<::GlobalNamespace::ColorSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void StyledUITemplates::ColorOverrideOption::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void StyledUITemplates::ColorOverrideOption::_ctor(::StyledUITemplates::ColorOverrideOption* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { ".ctor", {}, { ::i2c::type_of<::StyledUITemplates::ColorOverrideOption*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool StyledUITemplates::ColorOverrideOption::Equals(::StyledUITemplates::ColorOverrideOption* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), { "Equals", {}, { ::i2c::type_of<::StyledUITemplates::ColorOverrideOption*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool StyledUITemplates::ColorOverrideOption::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t StyledUITemplates::ColorOverrideOption::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::StyledUITemplates::ColorOverrideOption*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StyledUITemplates::ColorOverrideOption* StyledUITemplates::ColorOverrideOption::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::StyledUITemplates::ColorOverrideOption*>());
}
inline ::StyledUITemplates::ColorOverrideOption* StyledUITemplates::ColorOverrideOption::New_ctor(::StyledUITemplates::ColorOverrideOption* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::StyledUITemplates::ColorOverrideOption*>(other));
}
/// @brief Convert operator to "::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>"
constexpr StyledUITemplates::ColorOverrideOption::operator ::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>*() noexcept {
  return static_cast<::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>"
constexpr ::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>* StyledUITemplates::ColorOverrideOption::i___System__IEquatable_1___StyledUITemplates__ColorOverrideOption__() noexcept {
  return static_cast<::System::IEquatable_1<::StyledUITemplates::ColorOverrideOption*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::StyledUITemplates::ColorOverrideOption::ColorOverrideOption() {}
