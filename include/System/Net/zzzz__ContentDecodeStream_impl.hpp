#pragma once
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/Net/zzzz__ContentDecodeStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__ContentDecodeStream_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__ContentDecodeStream__Mode::__ContentDecodeStream__Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::__ContentDecodeStream__Mode::__ContentDecodeStream__Mode() {}
constexpr ::System::Net::__ContentDecodeStream__Mode System::Net::__ContentDecodeStream__Mode::GZip{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::__ContentDecodeStream__Mode System::Net::__ContentDecodeStream__Mode::Deflate{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::System::Net::ContentDecodeStream.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Net::ContentDecodeStream* (*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::__ContentDecodeStream__Mode)>(&::System::Net::ContentDecodeStream::Create)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2ef1b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ContentDecodeStream__Mode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.get_OriginalInnerStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::ContentDecodeStream::*)()>(
    &::System::Net::ContentDecodeStream::get_OriginalInnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef1c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                                                                               "get_OriginalInnerStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::ContentDecodeStream::*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::IO::Stream*)>(&::System::Net::ContentDecodeStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ef1c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.ProcessReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::ContentDecodeStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::ContentDecodeStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ef1c94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.FinishReading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::ContentDecodeStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::ContentDecodeStream::FinishReading)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2ef1cb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(), 43));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::ContentDecodeStream::__cordl_internal_get__OriginalInnerStream_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OriginalInnerStream_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Net::ContentDecodeStream::__cordl_internal_get__OriginalInnerStream_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OriginalInnerStream_k__BackingField;
}
constexpr void System::Net::ContentDecodeStream::__cordl_internal_set__OriginalInnerStream_k__BackingField(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OriginalInnerStream_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::ContentDecodeStream* System::Net::ContentDecodeStream::Create(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream,
                                                                                    ::System::Net::__ContentDecodeStream__Mode mode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ContentDecodeStream__Mode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ContentDecodeStream*, false>(nullptr, ___internal_method, operation, innerStream, mode);
}
inline ::System::IO::Stream* System::Net::ContentDecodeStream::get_OriginalInnerStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                                                                             "get_OriginalInnerStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::System::Net::ContentDecodeStream* System::Net::ContentDecodeStream::New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* decodeStream,
                                                                                      ::System::IO::Stream* originalInnerStream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ContentDecodeStream*>(operation, decodeStream, originalInnerStream));
}
inline void System::Net::ContentDecodeStream::_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* decodeStream, ::System::IO::Stream* originalInnerStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, decodeStream, originalInnerStream);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::ContentDecodeStream::ProcessReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::ContentDecodeStream::FinishReading(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
constexpr ::System::Net::ContentDecodeStream::ContentDecodeStream() {}
