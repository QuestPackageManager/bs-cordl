#pragma once
#include "System/Net/Http/zzzz__HttpContent_impl.hpp"
#include "System/Net/Http/zzzz__ByteArrayContent_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Net::Http::ByteArrayContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::ByteArrayContent::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Net::Http::ByteArrayContent::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x291a780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::ByteArrayContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::ByteArrayContent.SerializeToStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::Http::ByteArrayContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(&::System::Net::Http::ByteArrayContent::SerializeToStreamAsync)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x291a808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::ByteArrayContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::ByteArrayContent*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::ByteArrayContent.TryComputeLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::ByteArrayContent::*)(ByRef<int64_t>)>(
    &::System::Net::Http::ByteArrayContent::TryComputeLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x291a830;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::ByteArrayContent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::ByteArrayContent*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::Http::ByteArrayContent::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::Http::ByteArrayContent::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Net::Http::ByteArrayContent::__cordl_internal_set_content(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::Http::ByteArrayContent::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int32_t const& System::Net::Http::ByteArrayContent::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void System::Net::Http::ByteArrayContent::__cordl_internal_set_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr int32_t& System::Net::Http::ByteArrayContent::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& System::Net::Http::ByteArrayContent::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Net::Http::ByteArrayContent::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
inline ::System::Net::Http::ByteArrayContent* System::Net::Http::ByteArrayContent::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> content) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::ByteArrayContent*>(content));
}
inline void System::Net::Http::ByteArrayContent::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> content) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::ByteArrayContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::ByteArrayContent::SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::ByteArrayContent*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, stream, context);
}
inline bool System::Net::Http::ByteArrayContent::TryComputeLength(ByRef<int64_t> length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::ByteArrayContent*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, length);
}
// Ctor Parameters []
constexpr ::System::Net::Http::ByteArrayContent::ByteArrayContent() {}
