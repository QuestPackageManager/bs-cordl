#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatReaderGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatReaderGenerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatClassReaderDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatCollectionReaderDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatGetOnlyCollectionReaderDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatReaderGenerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::*)()>(
    &::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f47c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0._GenerateClassReader_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                       ::System::Runtime::Serialization::XmlObjectSerializerReadContext*,
                                                                                                       ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>,
                                                                                                       ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>)>(
    &::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::_GenerateClassReader_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f47c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0*>::get(),
                                    "<GenerateClassReader>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::ClassDataContract*& System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::__cordl_internal_get_classContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___classContract;
}
constexpr ::System::Runtime::Serialization::ClassDataContract* const&
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::__cordl_internal_get_classContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___classContract;
}
constexpr void
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::__cordl_internal_set_classContract(::System::Runtime::Serialization::ClassDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___classContract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::_GenerateClassReader_b__0(
    ::System::Runtime::Serialization::XmlReaderDelegator* xr, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* ctx,
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNames,
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNamespaces) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0*>::get(),
                                  "<GenerateClassReader>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xr, ctx, memberNames, memberNamespaces);
}
inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0*
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0() {}
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::*)()>(
    &::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f47c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0._GenerateCollectionReader_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                       ::System::Runtime::Serialization::XmlObjectSerializerReadContext*,
                                                                                                       ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                       ::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::_GenerateCollectionReader_b__0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f47cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0*>::get(),
                                    "<GenerateCollectionReader>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::CollectionDataContract*&
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::__cordl_internal_get_collectionContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionContract;
}
constexpr ::System::Runtime::Serialization::CollectionDataContract* const&
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::__cordl_internal_get_collectionContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionContract;
}
constexpr void
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::__cordl_internal_set_collectionContract(::System::Runtime::Serialization::CollectionDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collectionContract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::_GenerateCollectionReader_b__0(
    ::System::Runtime::Serialization::XmlReaderDelegator* xr, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* ctx, ::System::Xml::XmlDictionaryString* inm,
    ::System::Xml::XmlDictionaryString* ins, ::System::Runtime::Serialization::CollectionDataContract* cc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0*>::get(),
                                  "<GenerateCollectionReader>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xr, ctx, inm, ins, cc);
}
inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0*
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0() {}
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::*)()>(
    &::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f47c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0._GenerateGetOnlyCollectionReader_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
    ::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::_GenerateGetOnlyCollectionReader_b__0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f47d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0*>::get(),
                                    "<GenerateGetOnlyCollectionReader>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::CollectionDataContract*&
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::__cordl_internal_get_collectionContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionContract;
}
constexpr ::System::Runtime::Serialization::CollectionDataContract* const&
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::__cordl_internal_get_collectionContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionContract;
}
constexpr void
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::__cordl_internal_set_collectionContract(::System::Runtime::Serialization::CollectionDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collectionContract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::_GenerateGetOnlyCollectionReader_b__0(
    ::System::Runtime::Serialization::XmlReaderDelegator* xr, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* ctx, ::System::Xml::XmlDictionaryString* inm,
    ::System::Xml::XmlDictionaryString* ins, ::System::Runtime::Serialization::CollectionDataContract* cc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0*>::get(),
                                  "<GenerateGetOnlyCollectionReader>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xr, ctx, inm, ins, cc);
}
inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0*
System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper.GenerateClassReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::XmlFormatClassReaderDelegate* (
    ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::GenerateClassReader)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f47698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*>::get(), "GenerateClassReader",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper.GenerateCollectionReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* (
    ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::*)(::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::GenerateCollectionReader)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f478d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*>::get(),
                                    "GenerateCollectionReader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper.GenerateGetOnlyCollectionReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* (
    ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::*)(::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::GenerateGetOnlyCollectionReader)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f47b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*>::get(),
                                    "GenerateGetOnlyCollectionReader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::*)()>(
    &::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f474fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate*
System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::GenerateClassReader(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*>::get(), "GenerateClassReader",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*, false>(this, ___internal_method, classContract);
}
inline ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*
System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::GenerateCollectionReader(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*>::get(), "GenerateCollectionReader",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*, false>(this, ___internal_method, collectionContract);
}
inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*
System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::GenerateGetOnlyCollectionReader(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*>::get(),
                                  "GenerateGetOnlyCollectionReader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*, false>(this, ___internal_method, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper* System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper::XmlFormatReaderGenerator_CriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderGenerator::*)()>(
    &::System::Runtime::Serialization::XmlFormatReaderGenerator::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f474ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderGenerator.GenerateClassReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::XmlFormatClassReaderDelegate* (::System::Runtime::Serialization::XmlFormatReaderGenerator::*)(::System::Runtime::Serialization::ClassDataContract*)>(
        &::System::Runtime::Serialization::XmlFormatReaderGenerator::GenerateClassReader)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5f47500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(), "GenerateClassReader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderGenerator.GenerateCollectionReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* (
    ::System::Runtime::Serialization::XmlFormatReaderGenerator::*)(::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderGenerator::GenerateCollectionReader)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5f47740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(), "GenerateCollectionReader",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderGenerator.GenerateGetOnlyCollectionReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* (
    ::System::Runtime::Serialization::XmlFormatReaderGenerator::*)(::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderGenerator::GenerateGetOnlyCollectionReader)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5f47980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(), "GenerateGetOnlyCollectionReader",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderGenerator.UnsafeGetUninitializedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(int32_t)>(
    &::System::Runtime::Serialization::XmlFormatReaderGenerator::UnsafeGetUninitializedObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f47bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(), "UnsafeGetUninitializedObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*& System::Runtime::Serialization::XmlFormatReaderGenerator::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper* const& System::Runtime::Serialization::XmlFormatReaderGenerator::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderGenerator::__cordl_internal_set_helper(::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___helper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::XmlFormatReaderGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate*
System::Runtime::Serialization::XmlFormatReaderGenerator::GenerateClassReader(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(), "GenerateClassReader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*, false>(this, ___internal_method, classContract);
}
inline ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*
System::Runtime::Serialization::XmlFormatReaderGenerator::GenerateCollectionReader(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(), "GenerateCollectionReader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*, false>(this, ___internal_method, collectionContract);
}
inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*
System::Runtime::Serialization::XmlFormatReaderGenerator::GenerateGetOnlyCollectionReader(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(), "GenerateGetOnlyCollectionReader",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*, false>(this, ___internal_method, collectionContract);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderGenerator::UnsafeGetUninitializedObject(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderGenerator*>::get(), "UnsafeGetUninitializedObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, id);
}
inline ::System::Runtime::Serialization::XmlFormatReaderGenerator* System::Runtime::Serialization::XmlFormatReaderGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlFormatReaderGenerator*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatReaderGenerator::XmlFormatReaderGenerator() {}
