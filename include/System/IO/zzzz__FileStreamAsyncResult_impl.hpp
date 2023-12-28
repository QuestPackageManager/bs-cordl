#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__FileStreamAsyncResult_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileStreamAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::IO::FileStreamAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2540510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.CBWrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::IO::FileStreamAsyncResult::CBWrapper)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2541554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(), "CBWrapper", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25415e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(), "get_AsyncState",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25415f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                                                                               "get_CompletedSynchronously", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::IO::FileStreamAsyncResult::*)()>(
    &::System::IO::FileStreamAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25415f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                                                                               "get_AsyncWaitHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2541600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(), "get_IsCompleted",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::IO::FileStreamAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
constexpr ::System::Object*& System::IO::FileStreamAsyncResult::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::IO::FileStreamAsyncResult::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::IO::FileStreamAsyncResult::__set_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::IO::FileStreamAsyncResult::__get_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr bool const& System::IO::FileStreamAsyncResult::__get_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr void System::IO::FileStreamAsyncResult::__set_completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::IO::FileStreamAsyncResult::__get_wh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wh;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& System::IO::FileStreamAsyncResult::__get_wh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wh;
}
constexpr void System::IO::FileStreamAsyncResult::__set_wh(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::AsyncCallback*& System::IO::FileStreamAsyncResult::__get_cb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb;
}
constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& System::IO::FileStreamAsyncResult::__get_cb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb;
}
constexpr void System::IO::FileStreamAsyncResult::__set_cb(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::IO::FileStreamAsyncResult::__get_completedSynch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completedSynch;
}
constexpr bool const& System::IO::FileStreamAsyncResult::__get_completedSynch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completedSynch;
}
constexpr void System::IO::FileStreamAsyncResult::__set_completedSynch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completedSynch = value;
}
constexpr int32_t& System::IO::FileStreamAsyncResult::__get_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr int32_t const& System::IO::FileStreamAsyncResult::__get_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr void System::IO::FileStreamAsyncResult::__set_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Count = value;
}
constexpr int32_t& System::IO::FileStreamAsyncResult::__get_OriginalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OriginalCount;
}
constexpr int32_t const& System::IO::FileStreamAsyncResult::__get_OriginalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OriginalCount;
}
constexpr void System::IO::FileStreamAsyncResult::__set_OriginalCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OriginalCount = value;
}
constexpr int32_t& System::IO::FileStreamAsyncResult::__get_BytesRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BytesRead;
}
constexpr int32_t const& System::IO::FileStreamAsyncResult::__get_BytesRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BytesRead;
}
constexpr void System::IO::FileStreamAsyncResult::__set_BytesRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BytesRead = value;
}
constexpr ::System::AsyncCallback*& System::IO::FileStreamAsyncResult::__get_realcb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realcb;
}
constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& System::IO::FileStreamAsyncResult::__get_realcb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realcb;
}
constexpr void System::IO::FileStreamAsyncResult::__set_realcb(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___realcb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::IO::FileStreamAsyncResult* System::IO::FileStreamAsyncResult::New_ctor(::System::AsyncCallback* cb, ::System::Object* state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::FileStreamAsyncResult*>(cb, state));
}
inline void System::IO::FileStreamAsyncResult::_ctor(::System::AsyncCallback* cb, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cb, state);
}
inline void System::IO::FileStreamAsyncResult::CBWrapper(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(), "CBWrapper", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ares);
}
inline ::System::Object* System::IO::FileStreamAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(), "get_AsyncState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::IO::FileStreamAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(),
                                                                             "get_CompletedSynchronously", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::IO::FileStreamAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(), "get_AsyncWaitHandle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(this, ___internal_method);
}
inline bool System::IO::FileStreamAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileStreamAsyncResult*>::get(), "get_IsCompleted",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::FileStreamAsyncResult::FileStreamAsyncResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
