#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessableByteArray_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableByteArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableByteArray::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::CmsProcessableByteArray::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x127b588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableByteArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableByteArray::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CmsProcessableByteArray::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x127b600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableByteArray.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Cms::CmsProcessableByteArray::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableByteArray::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127b62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableByteArray.GetInputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsProcessableByteArray::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableByteArray::GetInputStream)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x127b634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableByteArray.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableByteArray::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsProcessableByteArray::Write)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x127b6a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableByteArray.GetContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsProcessableByteArray::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableByteArray::GetContent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x127b6d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), 9));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
constexpr Org::BouncyCastle::Cms::CmsProcessableByteArray::operator ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsProcessable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsProcessable"
constexpr ::Org::BouncyCastle::Cms::CmsProcessable* Org::BouncyCastle::Cms::CmsProcessableByteArray::i___Org__BouncyCastle__Cms__CmsProcessable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsProcessable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
constexpr Org::BouncyCastle::Cms::CmsProcessableByteArray::operator ::Org::BouncyCastle::Cms::CmsReadable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsReadable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsReadable"
constexpr ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::CmsProcessableByteArray::i___Org__BouncyCastle__Cms__CmsReadable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsReadable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Cms::CmsProcessableByteArray::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& Org::BouncyCastle::Cms::CmsProcessableByteArray::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableByteArray::__cordl_internal_set_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Cms::CmsProcessableByteArray::__cordl_internal_get_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Cms::CmsProcessableByteArray::__cordl_internal_get_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableByteArray::__cordl_internal_set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::CmsProcessableByteArray* Org::BouncyCastle::Cms::CmsProcessableByteArray::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>(bytes));
}
inline void Org::BouncyCastle::Cms::CmsProcessableByteArray::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes);
}
inline ::Org::BouncyCastle::Cms::CmsProcessableByteArray* Org::BouncyCastle::Cms::CmsProcessableByteArray::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type,
                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>(type, bytes));
}
inline void Org::BouncyCastle::Cms::CmsProcessableByteArray::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, bytes);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::CmsProcessableByteArray::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(),
                                                                             "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsProcessableByteArray::GetInputStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsProcessableByteArray::Write(::System::IO::Stream* zOut) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, zOut);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsProcessableByteArray::GetContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableByteArray*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsProcessableByteArray::CmsProcessableByteArray() {}
