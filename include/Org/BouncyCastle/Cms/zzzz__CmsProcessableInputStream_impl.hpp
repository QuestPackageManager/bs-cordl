#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsProcessableInputStream.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessableInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsProcessableInputStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x265e29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream.GetInputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableInputStream::GetInputStream)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x265f114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsProcessableInputStream::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x265f134;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream.GetContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableInputStream::GetContent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x265f1bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableInputStream.CheckSingleUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableInputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableInputStream::CheckSingleUsage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x265f1c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), 10));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___input)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsProcessableInputStream::GetInputStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsProcessableInputStream::Write(::System::IO::Stream* output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsProcessableInputStream::GetContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsProcessableInputStream::CheckSingleUsage() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsProcessableInputStream* Org::BouncyCastle::Cms::CmsProcessableInputStream::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsProcessableInputStream*>(input));
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
