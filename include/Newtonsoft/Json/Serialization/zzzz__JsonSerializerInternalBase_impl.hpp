#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalBase.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorContext_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonObjectContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerProxy_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__BidirectionalDictionary_2_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer.System_Collections_Generic_IEqualityComparer_System_Object__Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::*)(::System::Object*, ::System::Object*)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::System_Collections_Generic_IEqualityComparer_System_Object__Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3eed880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer*>::get(),
                                    "System.Collections.Generic.IEqualityComparer<System.Object>.Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer.System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::*)(
    ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3eed88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer*>::get(),
                                    "System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3eed2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object* x,
                                                                                                                                                                            ::System::Object* y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer*>::get(),
                                  "System.Collections.Generic.IEqualityComparer<System.Object>.Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t
Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer*>::get(),
                                  "System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer*
Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*
Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)(::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3eed254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase.get_DefaultReferenceMappings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)()>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::get_DefaultReferenceMappings)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3ee83cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(),
                                                 "get_DefaultReferenceMappings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase.ResolvedNullValueHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::NullValueHandling (::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)(
    ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ResolvedNullValueHandling)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3eed2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(), "ResolvedNullValueHandling",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase.GetErrorContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ErrorContext* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)(::System::Object*, ::System::Object*, ::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::GetErrorContext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3eed36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(), "GetErrorContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase.ClearErrorContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ClearErrorContext)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3eed44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(), "ClearErrorContext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase.IsErrorHandled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::*)(
    ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::Newtonsoft::Json::IJsonLineInfo*, ::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::IsErrorHandled)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x3eed4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(), "IsErrorHandled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IJsonLineInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::ErrorContext*& Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get__currentErrorContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentErrorContext;
}
constexpr ::Newtonsoft::Json::Serialization::ErrorContext* const& Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get__currentErrorContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentErrorContext;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_set__currentErrorContext(::Newtonsoft::Json::Serialization::ErrorContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentErrorContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>*& Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get__mappings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mappings;
}
constexpr ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* const&
Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get__mappings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mappings;
}
constexpr void
Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_set__mappings(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mappings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::JsonSerializer*& Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get_Serializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Serializer;
}
constexpr ::Newtonsoft::Json::JsonSerializer* const& Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get_Serializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Serializer;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_set_Serializer(::Newtonsoft::Json::JsonSerializer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Serializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get_TraceWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TraceWriter;
}
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* const& Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get_TraceWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TraceWriter;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TraceWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerProxy*& Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get_InternalSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalSerializer;
}
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerProxy* const& Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_get_InternalSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalSerializer;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalBase::__cordl_internal_set_InternalSerializer(::Newtonsoft::Json::Serialization::JsonSerializerProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InternalSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalBase::_ctor(::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializer);
}
inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* Newtonsoft::Json::Serialization::JsonSerializerInternalBase::get_DefaultReferenceMappings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(),
                                               "get_DefaultReferenceMappings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::NullValueHandling
Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ResolvedNullValueHandling(::Newtonsoft::Json::Serialization::JsonObjectContract* containerContract,
                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty* property) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(),
                                               "ResolvedNullValueHandling", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::NullValueHandling, false>(this, ___internal_method, containerContract, property);
}
inline ::Newtonsoft::Json::Serialization::ErrorContext* Newtonsoft::Json::Serialization::JsonSerializerInternalBase::GetErrorContext(::System::Object* currentObject, ::System::Object* member,
                                                                                                                                     ::StringW path, ::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(), "GetErrorContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ErrorContext*, false>(this, ___internal_method, currentObject, member, path, error);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ClearErrorContext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(), "ClearErrorContext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalBase::IsErrorHandled(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                        ::System::Object* keyValue, ::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path,
                                                                                        ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>::get(), "IsErrorHandled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IJsonLineInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currentObject, contract, keyValue, lineInfo, path, ex);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase* Newtonsoft::Json::Serialization::JsonSerializerInternalBase::New_ctor(::Newtonsoft::Json::JsonSerializer* serializer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>(serializer));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::JsonSerializerInternalBase() {}
