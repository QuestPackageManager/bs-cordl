#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonContract.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContractType_impl.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorContext_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__SerializationCallback_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__SerializationErrorCallback_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::*)()>(
    &::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee6358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0._CreateSerializationCallback_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::_CreateSerializationCallback_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3ee6368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0*>::get(),
                                    "<CreateSerializationCallback>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::__cordl_internal_get_callbackMethodInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackMethodInfo;
}
constexpr ::System::Reflection::MethodInfo* const& Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::__cordl_internal_get_callbackMethodInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackMethodInfo;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::__cordl_internal_set_callbackMethodInfo(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callbackMethodInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::_CreateSerializationCallback_b__0(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0*>::get(),
                                  "<CreateSerializationCallback>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, context);
}
inline ::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0* Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass57_0::JsonContract___c__DisplayClass57_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::*)()>(
    &::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee6360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0._CreateSerializationErrorCallback_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*)>(
    &::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::_CreateSerializationErrorCallback_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3ee645c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0*>::get(),
                                    "<CreateSerializationErrorCallback>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ErrorContext*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::__cordl_internal_get_callbackMethodInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackMethodInfo;
}
constexpr ::System::Reflection::MethodInfo* const& Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::__cordl_internal_get_callbackMethodInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackMethodInfo;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::__cordl_internal_set_callbackMethodInfo(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callbackMethodInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::_CreateSerializationErrorCallback_b__0(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context,
                                                                                                                        ::Newtonsoft::Json::Serialization::ErrorContext* econtext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0*>::get(),
                                               "<CreateSerializationErrorCallback>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ErrorContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, context, econtext);
}
inline ::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0* Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0::JsonContract___c__DisplayClass58_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_UnderlyingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::JsonContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonContract::get_UnderlyingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_UnderlyingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_CreatedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::JsonContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonContract::get_CreatedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_CreatedType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.set_CreatedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonContract::set_CreatedType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3ee4f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_CreatedType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_IsReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::Serialization::JsonContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonContract::get_IsReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_IsReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.set_IsReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(::System::Nullable_1<bool>)>(
    &::Newtonsoft::Json::Serialization::JsonContract::set_IsReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_IsReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_Converter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (::Newtonsoft::Json::Serialization::JsonContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonContract::get_Converter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_Converter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.set_Converter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(::Newtonsoft::Json::JsonConverter*)>(
    &::Newtonsoft::Json::Serialization::JsonContract::set_Converter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_Converter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_InternalConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (::Newtonsoft::Json::Serialization::JsonContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonContract::get_InternalConverter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_InternalConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.set_InternalConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(::Newtonsoft::Json::JsonConverter*)>(
    &::Newtonsoft::Json::Serialization::JsonContract::set_InternalConverter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_InternalConverter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_OnDeserializedCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* (
    ::Newtonsoft::Json::Serialization::JsonContract::*)()>(&::Newtonsoft::Json::Serialization::JsonContract::get_OnDeserializedCallbacks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3ede124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_OnDeserializedCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_OnDeserializingCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* (
    ::Newtonsoft::Json::Serialization::JsonContract::*)()>(&::Newtonsoft::Json::Serialization::JsonContract::get_OnDeserializingCallbacks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3ede0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_OnDeserializingCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_OnSerializedCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* (
    ::Newtonsoft::Json::Serialization::JsonContract::*)()>(&::Newtonsoft::Json::Serialization::JsonContract::get_OnSerializedCallbacks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3ede034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_OnSerializedCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_OnSerializingCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* (
    ::Newtonsoft::Json::Serialization::JsonContract::*)()>(&::Newtonsoft::Json::Serialization::JsonContract::get_OnSerializingCallbacks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3edbd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_OnSerializingCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_OnErrorCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* (
    ::Newtonsoft::Json::Serialization::JsonContract::*)()>(&::Newtonsoft::Json::Serialization::JsonContract::get_OnErrorCallbacks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3ede19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_OnErrorCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_DefaultCreator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::System::Object*>* (::Newtonsoft::Json::Serialization::JsonContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonContract::get_DefaultCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_DefaultCreator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.set_DefaultCreator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(::System::Func_1<::System::Object*>*)>(
    &::Newtonsoft::Json::Serialization::JsonContract::set_DefaultCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_DefaultCreator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.get_DefaultCreatorNonPublic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonContract::get_DefaultCreatorNonPublic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee5c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                               "get_DefaultCreatorNonPublic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.set_DefaultCreatorNonPublic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(bool)>(
    &::Newtonsoft::Json::Serialization::JsonContract::set_DefaultCreatorNonPublic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3ee5c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_DefaultCreatorNonPublic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonContract::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3ee57ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.InvokeOnSerializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::Newtonsoft::Json::Serialization::JsonContract::InvokeOnSerializing)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3ee5c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnSerializing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.InvokeOnSerialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::Newtonsoft::Json::Serialization::JsonContract::InvokeOnSerialized)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3ee5dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnSerialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.InvokeOnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::Newtonsoft::Json::Serialization::JsonContract::InvokeOnDeserializing)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3ee5f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnDeserializing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.InvokeOnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::Newtonsoft::Json::Serialization::JsonContract::InvokeOnDeserialized)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3ee6088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnDeserialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.InvokeOnError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonContract::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*)>(&::Newtonsoft::Json::Serialization::JsonContract::InvokeOnError)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3ee61e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ErrorContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.CreateSerializationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::SerializationCallback* (*)(::System::Reflection::MethodInfo*)>(
    &::Newtonsoft::Json::Serialization::JsonContract::CreateSerializationCallback)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3edea1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "CreateSerializationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonContract.CreateSerializationErrorCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::SerializationErrorCallback* (*)(::System::Reflection::MethodInfo*)>(
    &::Newtonsoft::Json::Serialization::JsonContract::CreateSerializationErrorCallback)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3edeac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "CreateSerializationErrorCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsNullable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsNullable;
}
constexpr bool const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsNullable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsNullable;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set_IsNullable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsNullable = value;
}
constexpr bool& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsConvertable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsConvertable;
}
constexpr bool const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsConvertable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsConvertable;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set_IsConvertable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsConvertable = value;
}
constexpr bool& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsEnum;
}
constexpr bool const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsEnum;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set_IsEnum(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsEnum = value;
}
constexpr ::System::Type*& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_NonNullableUnderlyingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NonNullableUnderlyingType;
}
constexpr ::System::Type* const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_NonNullableUnderlyingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NonNullableUnderlyingType;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set_NonNullableUnderlyingType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NonNullableUnderlyingType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::ReadType& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_InternalReadType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalReadType;
}
constexpr ::Newtonsoft::Json::ReadType const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_InternalReadType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalReadType;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set_InternalReadType(::Newtonsoft::Json::ReadType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InternalReadType = value;
}
constexpr ::Newtonsoft::Json::Serialization::JsonContractType& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_ContractType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractType;
}
constexpr ::Newtonsoft::Json::Serialization::JsonContractType const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_ContractType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractType;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set_ContractType(::Newtonsoft::Json::Serialization::JsonContractType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ContractType = value;
}
constexpr bool& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsReadOnlyOrFixedSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsReadOnlyOrFixedSize;
}
constexpr bool const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsReadOnlyOrFixedSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsReadOnlyOrFixedSize;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set_IsReadOnlyOrFixedSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsReadOnlyOrFixedSize = value;
}
constexpr bool& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsSealed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsSealed;
}
constexpr bool const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsSealed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsSealed;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set_IsSealed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsSealed = value;
}
constexpr bool& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsInstantiable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsInstantiable;
}
constexpr bool const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get_IsInstantiable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsInstantiable;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set_IsInstantiable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsInstantiable = value;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onDeserializedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDeserializedCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* const&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onDeserializedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDeserializedCallbacks;
}
constexpr void
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__onDeserializedCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onDeserializedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onDeserializingCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDeserializingCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* const&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onDeserializingCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDeserializingCallbacks;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__onDeserializingCallbacks(
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onDeserializingCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onSerializedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSerializedCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* const&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onSerializedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSerializedCallbacks;
}
constexpr void
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__onSerializedCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSerializedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onSerializingCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSerializingCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* const&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onSerializingCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSerializingCallbacks;
}
constexpr void
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__onSerializingCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSerializingCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onErrorCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onErrorCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* const&
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__onErrorCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onErrorCallbacks;
}
constexpr void
Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__onErrorCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onErrorCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__createdType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createdType;
}
constexpr ::System::Type* const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__createdType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createdType;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__createdType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____createdType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__UnderlyingType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnderlyingType_k__BackingField;
}
constexpr ::System::Type* const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__UnderlyingType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnderlyingType_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__UnderlyingType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UnderlyingType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__IsReference_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReference_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__IsReference_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReference_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__IsReference_k__BackingField(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReference_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::JsonConverter*& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__Converter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Converter_k__BackingField;
}
constexpr ::Newtonsoft::Json::JsonConverter* const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__Converter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Converter_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__Converter_k__BackingField(::Newtonsoft::Json::JsonConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Converter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::JsonConverter*& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__InternalConverter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InternalConverter_k__BackingField;
}
constexpr ::Newtonsoft::Json::JsonConverter* const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__InternalConverter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InternalConverter_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__InternalConverter_k__BackingField(::Newtonsoft::Json::JsonConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InternalConverter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::System::Object*>*& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__DefaultCreator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultCreator_k__BackingField;
}
constexpr ::System::Func_1<::System::Object*>* const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__DefaultCreator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultCreator_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__DefaultCreator_k__BackingField(::System::Func_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DefaultCreator_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__DefaultCreatorNonPublic_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultCreatorNonPublic_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_get__DefaultCreatorNonPublic_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultCreatorNonPublic_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonContract::__cordl_internal_set__DefaultCreatorNonPublic_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DefaultCreatorNonPublic_k__BackingField = value;
}
inline ::System::Type* Newtonsoft::Json::Serialization::JsonContract::get_UnderlyingType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_UnderlyingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::Serialization::JsonContract::get_CreatedType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_CreatedType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonContract::set_CreatedType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_CreatedType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Serialization::JsonContract::get_IsReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_IsReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonContract::set_IsReference(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_IsReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::Serialization::JsonContract::get_Converter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_Converter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonContract::set_Converter(::Newtonsoft::Json::JsonConverter* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_Converter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::Serialization::JsonContract::get_InternalConverter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_InternalConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonContract::set_InternalConverter(::Newtonsoft::Json::JsonConverter* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_InternalConverter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* Newtonsoft::Json::Serialization::JsonContract::get_OnDeserializedCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_OnDeserializedCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* Newtonsoft::Json::Serialization::JsonContract::get_OnDeserializingCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_OnDeserializingCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* Newtonsoft::Json::Serialization::JsonContract::get_OnSerializedCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_OnSerializedCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* Newtonsoft::Json::Serialization::JsonContract::get_OnSerializingCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_OnSerializingCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* Newtonsoft::Json::Serialization::JsonContract::get_OnErrorCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_OnErrorCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*, false>(this, ___internal_method);
}
inline ::System::Func_1<::System::Object*>* Newtonsoft::Json::Serialization::JsonContract::get_DefaultCreator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_DefaultCreator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::System::Object*>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonContract::set_DefaultCreator(::System::Func_1<::System::Object*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_DefaultCreator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Serialization::JsonContract::get_DefaultCreatorNonPublic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                                                             "get_DefaultCreatorNonPublic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonContract::set_DefaultCreatorNonPublic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "set_DefaultCreatorNonPublic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::JsonContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, underlyingType);
}
inline void Newtonsoft::Json::Serialization::JsonContract::InvokeOnSerializing(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnSerializing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, context);
}
inline void Newtonsoft::Json::Serialization::JsonContract::InvokeOnSerialized(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnSerialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, context);
}
inline void Newtonsoft::Json::Serialization::JsonContract::InvokeOnDeserializing(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnDeserializing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, context);
}
inline void Newtonsoft::Json::Serialization::JsonContract::InvokeOnDeserialized(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnDeserialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, context);
}
inline void Newtonsoft::Json::Serialization::JsonContract::InvokeOnError(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context,
                                                                         ::Newtonsoft::Json::Serialization::ErrorContext* errorContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "InvokeOnError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ErrorContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, context, errorContext);
}
inline ::Newtonsoft::Json::Serialization::SerializationCallback* Newtonsoft::Json::Serialization::JsonContract::CreateSerializationCallback(::System::Reflection::MethodInfo* callbackMethodInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "CreateSerializationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::SerializationCallback*, false>(nullptr, ___internal_method, callbackMethodInfo);
}
inline ::Newtonsoft::Json::Serialization::SerializationErrorCallback*
Newtonsoft::Json::Serialization::JsonContract::CreateSerializationErrorCallback(::System::Reflection::MethodInfo* callbackMethodInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonContract*>::get(), "CreateSerializationErrorCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::SerializationErrorCallback*, false>(nullptr, ___internal_method, callbackMethodInfo);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::JsonContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonContract*>(underlyingType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonContract::JsonContract() {}
