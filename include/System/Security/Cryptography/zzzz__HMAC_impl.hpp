#pragma once
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.get_BlockSizeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::get_BlockSizeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27defa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                               "get_BlockSizeValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.set_BlockSizeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMAC::*)(int32_t)>(
    &::System::Security::Cryptography::HMAC::set_BlockSizeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27defac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), "set_BlockSizeValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.UpdateIOPadBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::UpdateIOPadBuffers)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x27defb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                               "UpdateIOPadBuffers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.InitializeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMAC::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::HMAC::InitializeKey)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27df118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), "InitializeKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::HMAC::*)()>(
    &::System::Security::Cryptography::HMAC::get_Key)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27df1e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.set_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMAC::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::HMAC::set_Key)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27df260;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HMAC* (*)()>(&::System::Security::Cryptography::HMAC::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27df2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::Initialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27df368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.HashCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMAC::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Security::Cryptography::HMAC::HashCore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27df3b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.HashFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::HMAC::*)()>(
    &::System::Security::Cryptography::HMAC::HashFinal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27df430;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMAC::*)(bool)>(&::System::Security::Cryptography::HMAC::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x27df560;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27df6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Cryptography::HMAC::__cordl_internal_get_blockSizeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSizeValue;
}
constexpr int32_t const& System::Security::Cryptography::HMAC::__cordl_internal_get_blockSizeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSizeValue;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_blockSizeValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockSizeValue = value;
}
constexpr ::StringW& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hashName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hashName;
}
constexpr ::StringW const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hashName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hashName;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_hashName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_hashName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::HashAlgorithm*& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hash1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hash1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hash1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hash1;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_hash1(::System::Security::Cryptography::HashAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_hash1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::HashAlgorithm*& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hash2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hash2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hash2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hash2;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_hash2(::System::Security::Cryptography::HashAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_hash2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Cryptography::HMAC::__cordl_internal_get_m_inner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inner;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_inner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inner;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_inner(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_inner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Cryptography::HMAC::__cordl_internal_get_m_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_outer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_outer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hashing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hashing;
}
constexpr bool const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hashing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hashing;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_hashing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hashing = value;
}
inline int32_t System::Security::Cryptography::HMAC::get_BlockSizeValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                             "get_BlockSizeValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::set_BlockSizeValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), "set_BlockSizeValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::HMAC::UpdateIOPadBuffers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(),
                                                                             "UpdateIOPadBuffers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::InitializeKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), "InitializeKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::HMAC::get_Key() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::HMAC* System::Security::Cryptography::HMAC::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HMAC*, false>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ib, int32_t cb) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgb, ib, cb);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::HMAC::HashFinal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Security::Cryptography::HMAC* System::Security::Cryptography::HMAC::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::HMAC*>());
}
inline void System::Security::Cryptography::HMAC::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMAC*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::HMAC::HMAC() {}
