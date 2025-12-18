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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StreamContent::*)(::System::IO::Stream*)>(&::System::Net::Http::StreamContent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2d2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StreamContent::*)(::System::IO::Stream*, int32_t)>(
    &::System::Net::Http::StreamContent::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f2d2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StreamContent::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(
    &::System::Net::Http::StreamContent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f260ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.CreateContentReadStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::Http::StreamContent::*)()>(
    &::System::Net::Http::StreamContent::CreateContentReadStreamAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f2d3ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StreamContent::*)(bool)>(&::System::Net::Http::StreamContent::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f2d424;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.SerializeToStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::Http::StreamContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(&::System::Net::Http::StreamContent::SerializeToStreamAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f2d480;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StreamContent.TryComputeLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::StreamContent::*)(::ByRef<int64_t>)>(
    &::System::Net::Http::StreamContent::TryComputeLength)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f2d554;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), 8));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
inline void System::Net::Http::StreamContent::_ctor(::System::IO::Stream* content, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content, bufferSize);
}
inline void System::Net::Http::StreamContent::_ctor(::System::IO::Stream* content, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::Http::StreamContent::CreateContentReadStreamAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method);
}
inline void System::Net::Http::StreamContent::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::StreamContent::SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, stream, context);
}
inline bool System::Net::Http::StreamContent::TryComputeLength(::ByRef<int64_t> length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StreamContent*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, length);
}
inline ::System::Net::Http::StreamContent* System::Net::Http::StreamContent::New_ctor(::System::IO::Stream* content) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::StreamContent*>(content));
}
inline ::System::Net::Http::StreamContent* System::Net::Http::StreamContent::New_ctor(::System::IO::Stream* content, int32_t bufferSize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::StreamContent*>(content, bufferSize));
}
inline ::System::Net::Http::StreamContent* System::Net::Http::StreamContent::New_ctor(::System::IO::Stream* content, ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::StreamContent*>(content, cancellationToken));
}
// Ctor Parameters []
constexpr ::System::Net::Http::StreamContent::StreamContent() {}
