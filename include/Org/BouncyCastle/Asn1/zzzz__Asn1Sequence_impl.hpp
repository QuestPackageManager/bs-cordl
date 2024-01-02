#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::*)(
    ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11b8778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible* (
    ::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::*)()>(&::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::ReadObject)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x11b8a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl*>::get(), "ReadObject",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::*)()>(
    &::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b8bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl*>::get(), "ToAsn1Object",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1SequenceParser"
constexpr Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::operator ::Org::BouncyCastle::Asn1::Asn1SequenceParser*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__get_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__get_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr void Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__set_outer(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__set_max(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
inline ::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl* Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* outer) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl*>(outer));
}
inline void Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* outer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outer);
}
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::ReadObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl*>::get(), "ReadObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::ToAsn1Object() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl*>::get(), "ToAsn1Object",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl::__Asn1Sequence__Asn1SequenceParserImpl() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Asn1Sequence::GetInstance)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x11b0da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Asn1Sequence::GetInstance)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x11b8164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Sequence::*)()>(&::Org::BouncyCastle::Asn1::Asn1Sequence::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11b8430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Sequence::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Asn1::Asn1Sequence::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x11b849c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Sequence::*)(
    ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>)>(&::Org::BouncyCastle::Asn1::Asn1Sequence::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x11b8588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Sequence::*)(::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(
    &::Org::BouncyCastle::Asn1::Asn1Sequence::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11b867c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::Asn1Sequence::*)()>(
    &::Org::BouncyCastle::Asn1::Asn1Sequence::GetEnumerator)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11b86fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.get_Parser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SequenceParser* (::Org::BouncyCastle::Asn1::Asn1Sequence::*)()>(
    &::Org::BouncyCastle::Asn1::Asn1Sequence::get_Parser)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x11b8718;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::Asn1Sequence::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::Asn1Sequence::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11b87c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Asn1Sequence::*)()>(&::Org::BouncyCastle::Asn1::Asn1Sequence::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11b87f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.ToArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> (
    ::Org::BouncyCastle::Asn1::Asn1Sequence::*)()>(&::Org::BouncyCastle::Asn1::Asn1Sequence::ToArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11b880c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.Asn1GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Asn1Sequence::*)()>(&::Org::BouncyCastle::Asn1::Asn1Sequence::Asn1GetHashCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11b8864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.Asn1Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Asn1::Asn1Sequence::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::Asn1Sequence::Asn1Equals)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x11b88f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Sequence.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Asn1::Asn1Sequence::*)()>(&::Org::BouncyCastle::Asn1::Asn1Sequence::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11b8a6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Org::BouncyCastle::Asn1::Asn1Sequence::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>& Org::BouncyCastle::Asn1::Asn1Sequence::__get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> const& Org::BouncyCastle::Asn1::Asn1Sequence::__get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void Org::BouncyCastle::Asn1::Asn1Sequence::__set_elements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Asn1Sequence::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Asn1Sequence::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*, false>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Asn1Sequence::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Asn1Sequence*>());
}
inline void Org::BouncyCastle::Asn1::Asn1Sequence::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Asn1Sequence::New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Asn1Sequence*>(element));
}
inline void Org::BouncyCastle::Asn1::Asn1Sequence::_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence*
Org::BouncyCastle::Asn1::Asn1Sequence::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Asn1Sequence*>(elements));
}
inline void Org::BouncyCastle::Asn1::Asn1Sequence::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elements);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Asn1Sequence::New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Asn1Sequence*>(elementVector));
}
inline void Org::BouncyCastle::Asn1::Asn1Sequence::_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementVector);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::Asn1Sequence::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SequenceParser* Org::BouncyCastle::Asn1::Asn1Sequence::get_Parser() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SequenceParser*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::Asn1Sequence::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*, false>(this, ___internal_method, index);
}
inline int32_t Org::BouncyCastle::Asn1::Asn1Sequence::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> Org::BouncyCastle::Asn1::Asn1Sequence::ToArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::Asn1Sequence::Asn1GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::Asn1Sequence::Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, asn1Object);
}
inline ::StringW Org::BouncyCastle::Asn1::Asn1Sequence::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence::Asn1Sequence() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
