#pragma once
// IWYU pragma private; include "System\Net\ContentDecodeStream.hpp"
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/Net/zzzz__ContentDecodeStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__ContentDecodeStream_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::ContentDecodeStream_Mode::ContentDecodeStream_Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::ContentDecodeStream_Mode::ContentDecodeStream_Mode() {}
constexpr ::System::Net::ContentDecodeStream_Mode System::Net::ContentDecodeStream_Mode::GZip{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::ContentDecodeStream_Mode System::Net::ContentDecodeStream_Mode::Deflate{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::System::Net::ContentDecodeStream.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ContentDecodeStream* (*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::ContentDecodeStream_Mode)>(
    &::System::Net::ContentDecodeStream::Create)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x64298c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::ContentDecodeStream*>(),
                            { "Create", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::ContentDecodeStream_Mode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.get_OriginalInnerStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::ContentDecodeStream::*)()>(&::System::Net::ContentDecodeStream::get_OriginalInnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64299d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContentDecodeStream*>(), { "get_OriginalInnerStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContentDecodeStream::*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::IO::Stream*)>(
    &::System::Net::ContentDecodeStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64299b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::ContentDecodeStream*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.ProcessReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::ContentDecodeStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::ContentDecodeStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64299e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ContentDecodeStream*>(), { ::i2c::class_of<::System::Net::ContentDecodeStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.FinishReading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::ContentDecodeStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::ContentDecodeStream::FinishReading)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6429a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ContentDecodeStream*>(), { ::i2c::class_of<::System::Net::ContentDecodeStream*>(), 43 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::ContentDecodeStream::__cordl_internal_get__OriginalInnerStream_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OriginalInnerStream_k__BackingField;
}
constexpr ::System::IO::Stream* const& System::Net::ContentDecodeStream::__cordl_internal_get__OriginalInnerStream_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OriginalInnerStream_k__BackingField;
}
constexpr void System::Net::ContentDecodeStream::__cordl_internal_set__OriginalInnerStream_k__BackingField(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OriginalInnerStream_k__BackingField = value;
}
inline ::System::Net::ContentDecodeStream* System::Net::ContentDecodeStream::Create(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream,
                                                                                    ::System::Net::ContentDecodeStream_Mode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::ContentDecodeStream*>(),
                          { "Create", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::ContentDecodeStream_Mode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ContentDecodeStream*>(nullptr, ___internal_method, operation, innerStream, mode);
}
inline ::System::IO::Stream* System::Net::ContentDecodeStream::get_OriginalInnerStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContentDecodeStream*>(), { "get_OriginalInnerStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void System::Net::ContentDecodeStream::_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* decodeStream, ::System::IO::Stream* originalInnerStream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ContentDecodeStream*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation, decodeStream, originalInnerStream);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::ContentDecodeStream::ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size,
                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ContentDecodeStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::ContentDecodeStream::FinishReading(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ContentDecodeStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Net::ContentDecodeStream* System::Net::ContentDecodeStream::New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* decodeStream,
                                                                                      ::System::IO::Stream* originalInnerStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ContentDecodeStream*>(operation, decodeStream, originalInnerStream));
}
// Ctor Parameters []
constexpr ::System::Net::ContentDecodeStream::ContentDecodeStream() {}
