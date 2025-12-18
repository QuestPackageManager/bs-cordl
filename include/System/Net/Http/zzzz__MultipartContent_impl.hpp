#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartContent.hpp"
#include "System/Net/Http/zzzz__HttpContent_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Net/Http/zzzz__MultipartContent_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__MultipartContent_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::*)()>(
    &::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0xd58;
  constexpr static std::size_t addrs = 0x5f2c0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f2cdfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::Http::MultipartContent*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "context", ty: "::System::Net::TransportContext*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__3", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_c_5__4", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::MultipartContent__SerializeToStreamAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::Http::MultipartContent* __4__this, ::System::IO::Stream* stream,
    ::System::Net::TransportContext* context, ::System::Text::StringBuilder* _sb_5__2, int32_t _i_5__3, ::System::Net::Http::HttpContent* _c_5__4,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->stream = stream;
  this->context = context;
  this->_sb_5__2 = _sb_5__2;
  this->_i_5__3 = _i_5__3;
  this->_c_5__4 = _c_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8::MultipartContent__SerializeToStreamAsync_d__8() {}
//  Writing Method size for method: ::System::Net::Http::MultipartContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartContent::*)(::StringW)>(&::System::Net::Http::MultipartContent::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f2b0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartContent::*)(::StringW, ::StringW)>(
    &::System::Net::Http::MultipartContent::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5f2b198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.IsValidRFC2049
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::MultipartContent::IsValidRFC2049)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f2b4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), "IsValidRFC2049", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartContent::*)(::System::Net::Http::HttpContent*)>(
    &::System::Net::Http::MultipartContent::Add)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f2b604;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartContent::*)(bool)>(&::System::Net::Http::MultipartContent::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5f2b754;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.SerializeToStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::Http::MultipartContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(&::System::Net::Http::MultipartContent::SerializeToStreamAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f2b8b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.TryComputeLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::MultipartContent::*)(::ByRef<int64_t>)>(
    &::System::Net::Http::MultipartContent::TryComputeLength)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x5f2b97c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Net::Http::HttpContent*>* (
    ::System::Net::Http::MultipartContent::*)()>(&::System::Net::Http::MultipartContent::GetEnumerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f2bf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Net::Http::MultipartContent::*)()>(
    &::System::Net::Http::MultipartContent::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f2c01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>*& System::Net::Http::MultipartContent::__cordl_internal_get_nested_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nested_content;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>* const& System::Net::Http::MultipartContent::__cordl_internal_get_nested_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nested_content;
}
constexpr void System::Net::Http::MultipartContent::__cordl_internal_set_nested_content(::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nested_content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::Http::MultipartContent::__cordl_internal_get_boundary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundary;
}
constexpr ::StringW const& System::Net::Http::MultipartContent::__cordl_internal_get_boundary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundary;
}
constexpr void System::Net::Http::MultipartContent::__cordl_internal_set_boundary(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___boundary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::Http::MultipartContent::_ctor(::StringW subtype) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subtype);
}
inline void System::Net::Http::MultipartContent::_ctor(::StringW subtype, ::StringW boundary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subtype, boundary);
}
inline bool System::Net::Http::MultipartContent::IsValidRFC2049(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), "IsValidRFC2049", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
inline void System::Net::Http::MultipartContent::Add(::System::Net::Http::HttpContent* content) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
inline void System::Net::Http::MultipartContent::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::MultipartContent::SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, stream, context);
}
inline bool System::Net::Http::MultipartContent::TryComputeLength(::ByRef<int64_t> length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, length);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Net::Http::HttpContent*>* System::Net::Http::MultipartContent::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Net::Http::HttpContent*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::Http::MultipartContent::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartContent*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Net::Http::MultipartContent* System::Net::Http::MultipartContent::New_ctor(::StringW subtype) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::MultipartContent*>(subtype));
}
inline ::System::Net::Http::MultipartContent* System::Net::Http::MultipartContent::New_ctor(::StringW subtype, ::StringW boundary) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::MultipartContent*>(subtype, boundary));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>"
constexpr System::Net::Http::MultipartContent::operator ::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>*
System::Net::Http::MultipartContent::i___System__Collections__Generic__IEnumerable_1___System__Net__Http__HttpContent__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Net::Http::MultipartContent::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Net::Http::MultipartContent::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::MultipartContent::MultipartContent() {}
