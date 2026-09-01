#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsProcessableInputStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessableInputStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsProcessableInputStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36af89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream.GetInputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableInputStream::GetInputStream)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36b0668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsProcessableInputStream::Write)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x36b0688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream.GetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableInputStream::GetContent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36b0724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream.CheckSingleUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)()>(&::Org::BouncyCastle::Cms::CmsProcessableInputStream::CheckSingleUsage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x36b0730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Cms::CmsProcessableInputStream::__cordl_internal_get_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Cms::CmsProcessableInputStream::__cordl_internal_get_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableInputStream::__cordl_internal_set_input(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsProcessableInputStream::__cordl_internal_get_used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___used;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsProcessableInputStream::__cordl_internal_get_used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___used;
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableInputStream::__cordl_internal_set_used(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___used = value;
}
inline void Org::BouncyCastle::Cms::CmsProcessableInputStream::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsProcessableInputStream::GetInputStream() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsProcessableInputStream::Write(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsProcessableInputStream::GetContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsProcessableInputStream::CheckSingleUsage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsProcessableInputStream* Org::BouncyCastle::Cms::CmsProcessableInputStream::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(input));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
constexpr Org::BouncyCastle::Cms::CmsProcessableInputStream::operator ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsProcessable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsProcessable"
constexpr ::Org::BouncyCastle::Cms::CmsProcessable* Org::BouncyCastle::Cms::CmsProcessableInputStream::i___Org__BouncyCastle__Cms__CmsProcessable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsProcessable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
constexpr Org::BouncyCastle::Cms::CmsProcessableInputStream::operator ::Org::BouncyCastle::Cms::CmsReadable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsReadable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsReadable"
constexpr ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::CmsProcessableInputStream::i___Org__BouncyCastle__Cms__CmsReadable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsReadable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsProcessableInputStream::CmsProcessableInputStream() {}
