#pragma once
// IWYU pragma private; include "System\CharEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__CharEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::CharEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::CharEnumerator::*)(::StringW)>(&::System::CharEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bb4718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CharEnumerator.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::CharEnumerator::*)()>(&::System::CharEnumerator::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bb4728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CharEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::CharEnumerator::*)()>(&::System::CharEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bb472c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CharEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::CharEnumerator::*)()>(&::System::CharEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb4790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CharEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::CharEnumerator::*)()>(&::System::CharEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bb47a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CharEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::CharEnumerator::*)()>(&::System::CharEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bb47d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CharEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::CharEnumerator::*)()>(&::System::CharEnumerator::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bb486c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CharEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::CharEnumerator::*)()>(&::System::CharEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bb487c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::CharEnumerator::__cordl_internal_get__str() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____str;
}
constexpr ::StringW const& System::CharEnumerator::__cordl_internal_get__str() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____str;
}
constexpr void System::CharEnumerator::__cordl_internal_set__str(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____str = value;
}
constexpr int32_t& System::CharEnumerator::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::CharEnumerator::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::CharEnumerator::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr char16_t& System::CharEnumerator::__cordl_internal_get__currentElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement;
}
constexpr char16_t const& System::CharEnumerator::__cordl_internal_get__currentElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement;
}
constexpr void System::CharEnumerator::__cordl_internal_set__currentElement(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentElement = value;
}
inline void System::CharEnumerator::_ctor(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline ::System::Object* System::CharEnumerator::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::CharEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::CharEnumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::CharEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline char16_t System::CharEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void System::CharEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::CharEnumerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CharEnumerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::CharEnumerator* System::CharEnumerator::New_ctor(::StringW str) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::CharEnumerator*>(str));
}
inline ::System::CharEnumerator* System::CharEnumerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::CharEnumerator*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::CharEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::CharEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr System::CharEnumerator::operator ::System::Collections::Generic::IEnumerator_1<char16_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* System::CharEnumerator::i___System__Collections__Generic__IEnumerator_1_char16_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::CharEnumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::CharEnumerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::CharEnumerator::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::CharEnumerator::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::CharEnumerator::CharEnumerator() {}
