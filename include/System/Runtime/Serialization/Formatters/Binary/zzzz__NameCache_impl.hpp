#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\NameCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__NameCache_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameCache.GetCachedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::NameCache::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::NameCache::GetCachedValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b644b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameCache*>(), { "GetCachedValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameCache.SetCachedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::NameCache::*)(::System::Object*)>(
    &::System::Runtime::Serialization::Formatters::Binary::NameCache::SetCachedValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b6495c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameCache*>(), { "SetCachedValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::NameCache::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::NameCache::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b60b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::NameCache::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::NameCache::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameCache::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::NameCache::setStaticF_ht(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>*, "ht", ::System::Runtime::Serialization::Formatters::Binary::NameCache*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>* System::Runtime::Serialization::Formatters::Binary::NameCache::getStaticF_ht() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>*, "ht",
                                           ::System::Runtime::Serialization::Formatters::Binary::NameCache*>();
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::NameCache::GetCachedValue(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameCache*>(), { "GetCachedValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline void System::Runtime::Serialization::Formatters::Binary::NameCache::SetCachedValue(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameCache*>(), { "SetCachedValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::NameCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::NameCache* System::Runtime::Serialization::Formatters::Binary::NameCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::NameCache*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::NameCache::NameCache() {}
