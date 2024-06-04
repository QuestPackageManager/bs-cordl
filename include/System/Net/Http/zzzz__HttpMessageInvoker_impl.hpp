#pragma once
// IWYU pragma private; include "System/Net/Http/HttpMessageInvoker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpMessageInvoker_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpMessageInvoker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpMessageInvoker::*)(::System::Net::Http::HttpMessageHandler*, bool)>(
    &::System::Net::Http::HttpMessageInvoker::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d877b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMessageHandler*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpMessageInvoker.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpMessageInvoker::*)()>(&::System::Net::Http::HttpMessageInvoker::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d89e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpMessageInvoker.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpMessageInvoker::*)(bool)>(&::System::Net::Http::HttpMessageInvoker::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d879dc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpMessageInvoker.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpMessageInvoker::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpMessageInvoker::SendAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d883ac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(), 6));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Http::HttpMessageInvoker::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Http::HttpMessageInvoker::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Net::Http::HttpMessageHandler*& System::Net::Http::HttpMessageInvoker::__cordl_internal_get_handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpMessageHandler*> const& System::Net::Http::HttpMessageInvoker::__cordl_internal_get_handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr void System::Net::Http::HttpMessageInvoker::__cordl_internal_set_handler(::System::Net::Http::HttpMessageHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Http::HttpMessageInvoker::__cordl_internal_get_disposeHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposeHandler;
}
constexpr bool const& System::Net::Http::HttpMessageInvoker::__cordl_internal_get_disposeHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposeHandler;
}
constexpr void System::Net::Http::HttpMessageInvoker::__cordl_internal_set_disposeHandler(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposeHandler = value;
}
inline ::System::Net::Http::HttpMessageInvoker* System::Net::Http::HttpMessageInvoker::New_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::HttpMessageInvoker*>(handler, disposeHandler));
}
inline void System::Net::Http::HttpMessageInvoker::_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMessageHandler*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler, disposeHandler);
}
inline void System::Net::Http::HttpMessageInvoker::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpMessageInvoker::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpMessageInvoker::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpMessageInvoker*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, request, cancellationToken);
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpMessageInvoker::HttpMessageInvoker() {}
