#pragma once
// IWYU pragma private; include "System/Net/Http/StreamContent.hpp"
#include "System/Net/Http/zzzz__HttpContent_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/Http/zzzz__StreamContent_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Net::Http::StreamContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::StreamContent::*)(::System::IO::Stream*)>(&::System::Net::Http::StreamContent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60dc60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::StreamContent::*)(::System::IO::Stream*, int32_t)>(&::System::Net::Http::StreamContent::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60dc614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::StreamContent::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(
    &::System::Net::Http::StreamContent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60d542c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.CreateContentReadStreamAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::Http::StreamContent::*)()>(
    &::System::Net::Http::StreamContent::CreateContentReadStreamAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60dc6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(), { ::i2c::class_of<::System::Net::Http::StreamContent*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::StreamContent::*)(bool)>(&::System::Net::Http::StreamContent::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60dc764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(), { ::i2c::class_of<::System::Net::Http::StreamContent*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.SerializeToStreamAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Http::StreamContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(
    &::System::Net::Http::StreamContent::SerializeToStreamAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x60dc7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(), { ::i2c::class_of<::System::Net::Http::StreamContent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.TryComputeLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::StreamContent::*)(::by_ref<int64_t>)>(&::System::Net::Http::StreamContent::TryComputeLength)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60dc894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(), { ::i2c::class_of<::System::Net::Http::StreamContent*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::Http::StreamContent::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::System::IO::Stream* const& System::Net::Http::StreamContent::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Net::Http::StreamContent::__cordl_internal_set_content(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
constexpr int32_t& System::Net::Http::StreamContent::__cordl_internal_get_bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferSize;
}
constexpr int32_t const& System::Net::Http::StreamContent::__cordl_internal_get_bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferSize;
}
constexpr void System::Net::Http::StreamContent::__cordl_internal_set_bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferSize = value;
}
constexpr ::System::Threading::CancellationToken& System::Net::Http::StreamContent::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& System::Net::Http::StreamContent::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void System::Net::Http::StreamContent::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
constexpr int64_t& System::Net::Http::StreamContent::__cordl_internal_get_startPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPosition;
}
constexpr int64_t const& System::Net::Http::StreamContent::__cordl_internal_get_startPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPosition;
}
constexpr void System::Net::Http::StreamContent::__cordl_internal_set_startPosition(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPosition = value;
}
constexpr bool& System::Net::Http::StreamContent::__cordl_internal_get_contentCopied() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentCopied;
}
constexpr bool const& System::Net::Http::StreamContent::__cordl_internal_get_contentCopied() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentCopied;
}
constexpr void System::Net::Http::StreamContent::__cordl_internal_set_contentCopied(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentCopied = value;
}
inline void System::Net::Http::StreamContent::_ctor(::System::IO::Stream* content) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline void System::Net::Http::StreamContent::_ctor(::System::IO::Stream* content, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, bufferSize);
}
inline void System::Net::Http::StreamContent::_ctor(::System::IO::Stream* content, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::StreamContent*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::Http::StreamContent::CreateContentReadStreamAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::StreamContent*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method);
}
inline void System::Net::Http::StreamContent::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::StreamContent*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::StreamContent::SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::StreamContent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, stream, context);
}
inline bool System::Net::Http::StreamContent::TryComputeLength(::by_ref<int64_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::StreamContent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, length);
}
inline ::System::Net::Http::StreamContent* System::Net::Http::StreamContent::New_ctor(::System::IO::Stream* content) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::StreamContent*>(content));
}
inline ::System::Net::Http::StreamContent* System::Net::Http::StreamContent::New_ctor(::System::IO::Stream* content, int32_t bufferSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::StreamContent*>(content, bufferSize));
}
inline ::System::Net::Http::StreamContent* System::Net::Http::StreamContent::New_ctor(::System::IO::Stream* content, ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::StreamContent*>(content, cancellationToken));
}
// Ctor Parameters []
constexpr ::System::Net::Http::StreamContent::StreamContent() {}
