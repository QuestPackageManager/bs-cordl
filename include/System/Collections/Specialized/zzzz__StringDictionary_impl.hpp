#pragma once
// IWYU pragma private; include "System\Collections\Specialized\StringDictionary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Specialized/zzzz__StringDictionary_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::StringDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::StringDictionary::*)()>(&::System::Collections::Specialized::StringDictionary::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f103c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::StringDictionary*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::StringDictionary.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::StringDictionary::*)(::StringW, ::StringW)>(
    &::System::Collections::Specialized::StringDictionary::Add)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63f109c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::StringDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::StringDictionary*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::StringDictionary.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Specialized::StringDictionary::*)()>(
    &::System::Collections::Specialized::StringDictionary::GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f1130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::StringDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::StringDictionary*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Collections::Specialized::StringDictionary::__cordl_internal_get_contents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contents;
}
constexpr ::System::Collections::Hashtable* const& System::Collections::Specialized::StringDictionary::__cordl_internal_get_contents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contents;
}
constexpr void System::Collections::Specialized::StringDictionary::__cordl_internal_set_contents(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contents = value;
}
inline void System::Collections::Specialized::StringDictionary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::StringDictionary*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Specialized::StringDictionary::Add(::StringW key, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::StringDictionary*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Collections::IEnumerator* System::Collections::Specialized::StringDictionary::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::StringDictionary*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::Specialized::StringDictionary* System::Collections::Specialized::StringDictionary::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::StringDictionary*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Specialized::StringDictionary::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Specialized::StringDictionary::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::StringDictionary::StringDictionary() {}
