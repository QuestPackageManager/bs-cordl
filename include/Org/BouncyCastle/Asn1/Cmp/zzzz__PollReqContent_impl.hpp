#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PollReqContent.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PollReqContent_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PollReqContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PollReqContent::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PollReqContent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22fd034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PollReqContent.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PollReqContent* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PollReqContent::GetInstance)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x22f9354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PollReqContent.GetCertReqIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*>,
                         ::Array<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*>>*> (::Org::BouncyCastle::Asn1::Cmp::PollReqContent::*)()>(
        &::Org::BouncyCastle::Asn1::Cmp::PollReqContent::GetCertReqIDs)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x22fd05c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PollReqContent.SequenceToDerIntegerArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*> (*)(
    ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Cmp::PollReqContent::SequenceToDerIntegerArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22fd198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), "SequenceToDerIntegerArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PollReqContent.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::PollReqContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PollReqContent::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22fd28c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::PollReqContent::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::PollReqContent::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PollReqContent::__cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Asn1::Cmp::PollReqContent::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PollReqContent* Org::BouncyCastle::Asn1::Cmp::PollReqContent::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*, false>(nullptr, ___internal_method, obj);
}
inline ::ArrayW<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*>,
                ::Array<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*>>*>
Org::BouncyCastle::Asn1::Cmp::PollReqContent::GetCertReqIDs() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*>,
                                                      ::Array<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*>>*>,
                                             false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*>
Org::BouncyCastle::Asn1::Cmp::PollReqContent::SequenceToDerIntegerArray(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), "SequenceToDerIntegerArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*>, false>(nullptr, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::PollReqContent::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PollReqContent* Org::BouncyCastle::Asn1::Cmp::PollReqContent::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Cmp::PollReqContent*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::PollReqContent::PollReqContent() {}
