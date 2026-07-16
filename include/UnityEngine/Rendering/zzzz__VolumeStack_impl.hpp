#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeStack::*)()>(&::UnityEngine::Rendering::VolumeStack::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67c98a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeStack::*)()>(&::UnityEngine::Rendering::VolumeStack::Clear)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x67c9940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack.Reload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeStack::*)(::ArrayW<::System::Type*>)>(&::UnityEngine::Rendering::VolumeStack::Reload)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x67c9ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "Reload", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack.GetComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeComponent> (::UnityEngine::Rendering::VolumeStack::*)(::System::Type*)>(
    &::UnityEngine::Rendering::VolumeStack::GetComponent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67c9cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "GetComponent", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeStack::*)()>(&::UnityEngine::Rendering::VolumeStack::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67c9d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeStack::*)()>(&::UnityEngine::Rendering::VolumeStack::get_isValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c9d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeStack.set_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeStack::*)(bool)>(&::UnityEngine::Rendering::VolumeStack::set_isValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c9d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "set_isValid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_components() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___components;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* const&
UnityEngine::Rendering::VolumeStack::__cordl_internal_get_components() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___components;
}
constexpr void
UnityEngine::Rendering::VolumeStack::__cordl_internal_set_components(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___components = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*>& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*> const& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void UnityEngine::Rendering::VolumeStack::__cordl_internal_set_parameters(::ArrayW<::UnityEngine::Rendering::VolumeParameter*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
constexpr bool& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_requiresReset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresReset;
}
constexpr bool const& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_requiresReset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresReset;
}
constexpr void UnityEngine::Rendering::VolumeStack::__cordl_internal_set_requiresReset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requiresReset = value;
}
constexpr bool& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_requiresResetForAllProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresResetForAllProperties;
}
constexpr bool const& UnityEngine::Rendering::VolumeStack::__cordl_internal_get_requiresResetForAllProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresResetForAllProperties;
}
constexpr void UnityEngine::Rendering::VolumeStack::__cordl_internal_set_requiresResetForAllProperties(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requiresResetForAllProperties = value;
}
constexpr bool& UnityEngine::Rendering::VolumeStack::__cordl_internal_get__isValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValid_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::VolumeStack::__cordl_internal_get__isValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValid_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeStack::__cordl_internal_set__isValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isValid_k__BackingField = value;
}
inline void UnityEngine::Rendering::VolumeStack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeStack::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeStack::Reload(::ArrayW<::System::Type*> componentTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "Reload", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentTypes);
}
template <typename T> inline T UnityEngine::Rendering::VolumeStack::GetComponent() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "GetComponent", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> UnityEngine::Rendering::VolumeStack::GetComponent(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "GetComponent", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeComponent>>(this, ___internal_method, type);
}
inline void UnityEngine::Rendering::VolumeStack::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeStack::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeStack::set_isValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeStack*>(), { "set_isValid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::VolumeStack* UnityEngine::Rendering::VolumeStack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeStack*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::VolumeStack::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::VolumeStack::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeStack::VolumeStack() {}
