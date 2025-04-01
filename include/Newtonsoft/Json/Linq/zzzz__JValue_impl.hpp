#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JValue.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DynamicProxy_1_impl.hpp"
#include "System/zzzz__IComparable_1_impl.hpp"
#include "System/zzzz__IComparable_impl.hpp"
#include "System/zzzz__IConvertible_impl.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__IFormattable_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Dynamic/zzzz__BinaryOperationBinder_def.hpp"
#include "System/Dynamic/zzzz__ConvertBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy.TryConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::*)(
    ::Newtonsoft::Json::Linq::JValue*, ::System::Dynamic::ConvertBinder*, ::ByRef<::System::Object*>)>(&::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::TryConvert)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3f2ba00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy.TryBinaryOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::*)(
    ::Newtonsoft::Json::Linq::JValue*, ::System::Dynamic::BinaryOperationBinder*, ::System::Object*, ::ByRef<::System::Object*>)>(
    &::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::TryBinaryOperation)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x3f2bbcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::*)()>(
    &::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3f2b324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::TryConvert(::Newtonsoft::Json::Linq::JValue* instance, ::System::Dynamic::ConvertBinder* binder, ::ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, result);
}
inline bool Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::TryBinaryOperation(::Newtonsoft::Json::Linq::JValue* instance, ::System::Dynamic::BinaryOperationBinder* binder, ::System::Object* arg,
                                                                                  ::ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance, binder, arg, result);
}
inline void Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy* Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JValue_JValueDynamicProxy::JValue_JValueDynamicProxy() {}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.WriteToAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken,
                                         ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*>)>(&::Newtonsoft::Json::Linq::JValue::WriteToAsync)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x3f27e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::System::Object*, ::Newtonsoft::Json::Linq::JTokenType)>(
    &::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3f26908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JTokenType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3f286bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonCloneSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::Linq::JValue*)>(
    &::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3f28788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(int64_t)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3f26e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::System::Decimal)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3f27628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(char16_t)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3f28808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(uint64_t)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3f26f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(double_t)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3f2714c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(float_t)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3f27068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::System::DateTime)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3f2775c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f2784c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(bool)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3f2723c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::StringW)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f26d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::System::Guid)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f27aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::System::Uri*)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3f27b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::System::TimeSpan)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3f279b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JValue::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3f28874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.DeepEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JValue::DeepEquals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3f28cd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.get_HasValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JValue::*)()>(&::Newtonsoft::Json::Linq::JValue::get_HasValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f28dc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.CompareBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Numerics::BigInteger, ::System::Object*)>(
    &::Newtonsoft::Json::Linq::JValue::CompareBigInteger)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x3f28dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CompareBigInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Newtonsoft::Json::Linq::JTokenType, ::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Linq::JValue::Compare)> {
  constexpr static std::size_t size = 0xa78;
  constexpr static std::size_t addrs = 0x3f290d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JTokenType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.CompareFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Object*, ::System::Object*)>(&::Newtonsoft::Json::Linq::JValue::CompareFloat)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3f29b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CompareFloat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.Operation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Linq::Expressions::ExpressionType, ::System::Object*, ::System::Object*, ::ByRef<::System::Object*>)>(&::Newtonsoft::Json::Linq::JValue::Operation)> {
  constexpr static std::size_t size = 0x924;
  constexpr static std::size_t addrs = 0x3f29c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "Operation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.CloneToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JValue::CloneToken)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3f2a568;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.CreateComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)(::StringW)>(&::Newtonsoft::Json::Linq::JValue::CreateComment)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3f26c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CreateComment", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)(::StringW)>(&::Newtonsoft::Json::Linq::JValue::CreateString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3f2a5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CreateString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.CreateNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)()>(&::Newtonsoft::Json::Linq::JValue::CreateNull)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f26a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CreateNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.CreateUndefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)()>(&::Newtonsoft::Json::Linq::JValue::CreateUndefined)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f26b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CreateUndefined",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.GetValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Newtonsoft::Json::Linq::JTokenType (*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>, ::System::Object*)>(&::Newtonsoft::Json::Linq::JValue::GetValueType)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x3f288a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "GetValueType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.GetStringValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenType (*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>)>(
    &::Newtonsoft::Json::Linq::JValue::GetStringValueType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3f2a62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "GetStringValueType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenType (::Newtonsoft::Json::Linq::JValue::*)()>(
    &::Newtonsoft::Json::Linq::JValue::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f2a6a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JValue::*)()>(&::Newtonsoft::Json::Linq::JValue::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f2a6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.set_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JValue::set_Value)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3f2a6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "set_Value", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.WriteTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JValue::*)(
    ::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*>)>(&::Newtonsoft::Json::Linq::JValue::WriteTo)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x3f2a7a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.GetDeepHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JValue::*)()>(&::Newtonsoft::Json::Linq::JValue::GetDeepHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3f2af74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.ValuesEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*)>(
    &::Newtonsoft::Json::Linq::JValue::ValuesEquals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3f28d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "ValuesEquals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::Linq::JValue*)>(
    &::Newtonsoft::Json::Linq::JValue::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3f2afc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JValue::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JValue::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3f2afd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JValue::*)()>(&::Newtonsoft::Json::Linq::JValue::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3f2b060;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JValue::*)()>(&::Newtonsoft::Json::Linq::JValue::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3f2b078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JValue::*)(::StringW)>(&::Newtonsoft::Json::Linq::JValue::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3f2b0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f2b268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JValue::*)(::StringW, ::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3f2b150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.GetMetaObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Dynamic::DynamicMetaObject* (::Newtonsoft::Json::Linq::JValue::*)(::System::Linq::Expressions::Expression*)>(&::Newtonsoft::Json::Linq::JValue::GetMetaObject)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3f2b274;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IComparable_CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JValue::*)(::System::Object*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3f2b36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IComparable.CompareTo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::Linq::JValue*)>(
    &::Newtonsoft::Json::Linq::JValue::CompareTo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3f2b428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_GetTypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (::Newtonsoft::Json::Linq::JValue::*)()>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_GetTypeCode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3f2b46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.GetTypeCode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToBoolean", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToSByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToSByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToInt16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToUInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToUInt16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToInt32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToUInt32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToInt64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToUInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToUInt64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToSingle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToDouble", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToDecimal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2b9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToDateTime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JValue.System_IConvertible_ToType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JValue::*)(::System::Type*, ::System::IFormatProvider*)>(
    &::Newtonsoft::Json::Linq::JValue::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f2b9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JTokenType& Newtonsoft::Json::Linq::JValue::__cordl_internal_get__valueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueType;
}
constexpr ::Newtonsoft::Json::Linq::JTokenType const& Newtonsoft::Json::Linq::JValue::__cordl_internal_get__valueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueType;
}
constexpr void Newtonsoft::Json::Linq::JValue::__cordl_internal_set__valueType(::Newtonsoft::Json::Linq::JTokenType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueType = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Linq::JValue::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::System::Object* const& Newtonsoft::Json::Linq::JValue::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void Newtonsoft::Json::Linq::JValue::__cordl_internal_set__value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Linq::JValue::WriteToAsync(::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                                                      ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, writer, cancellationToken, converters);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JTokenType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, type);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::Newtonsoft::Json::Linq::JValue* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonCloneSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other, settings);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::Newtonsoft::Json::Linq::JValue* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::System::DateTimeOffset value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::System::Uri* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::_ctor(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Linq::JValue::DeepEquals(::Newtonsoft::Json::Linq::JToken* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool Newtonsoft::Json::Linq::JValue::get_HasValues() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JValue::CompareBigInteger(::System::Numerics::BigInteger i1, ::System::Object* i2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CompareBigInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, i1, i2);
}
inline int32_t Newtonsoft::Json::Linq::JValue::Compare(::Newtonsoft::Json::Linq::JTokenType valueType, ::System::Object* objA, ::System::Object* objB) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JTokenType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, valueType, objA, objB);
}
inline int32_t Newtonsoft::Json::Linq::JValue::CompareFloat(::System::Object* objA, ::System::Object* objB) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CompareFloat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, objA, objB);
}
inline bool Newtonsoft::Json::Linq::JValue::Operation(::System::Linq::Expressions::ExpressionType operation, ::System::Object* objA, ::System::Object* objB, ::ByRef<::System::Object*> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "Operation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, operation, objA, objB, result);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JValue::CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method, settings);
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::CreateComment(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CreateComment", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JValue*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::CreateString(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CreateString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JValue*, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::CreateNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CreateNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JValue*, false>(nullptr, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::CreateUndefined() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CreateUndefined",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JValue*, false>(nullptr, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JValue::GetValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "GetValueType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType, false>(nullptr, ___internal_method, current, value);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JValue::GetStringValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "GetStringValueType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType, false>(nullptr, ___internal_method, current);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JValue::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::JValue::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JValue::set_Value(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "set_Value", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JValue::WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, converters);
}
inline int32_t Newtonsoft::Json::Linq::JValue::GetDeepHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JValue::ValuesEquals(::Newtonsoft::Json::Linq::JValue* v1, ::Newtonsoft::Json::Linq::JValue* v2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "ValuesEquals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, v1, v2);
}
inline bool Newtonsoft::Json::Linq::JValue::Equals(::Newtonsoft::Json::Linq::JValue* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool Newtonsoft::Json::Linq::JValue::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Newtonsoft::Json::Linq::JValue::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Linq::JValue::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Linq::JValue::ToString(::StringW format) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format);
}
inline ::StringW Newtonsoft::Json::Linq::JValue::ToString(::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, formatProvider);
}
inline ::StringW Newtonsoft::Json::Linq::JValue::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format, formatProvider);
}
inline ::System::Dynamic::DynamicMetaObject* Newtonsoft::Json::Linq::JValue::GetMetaObject(::System::Linq::Expressions::Expression* parameter) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, parameter);
}
inline int32_t Newtonsoft::Json::Linq::JValue::System_IComparable_CompareTo(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IComparable.CompareTo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline int32_t Newtonsoft::Json::Linq::JValue::CompareTo(::Newtonsoft::Json::Linq::JValue* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::System::TypeCode Newtonsoft::Json::Linq::JValue::System_IConvertible_GetTypeCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                             "System.IConvertible.GetTypeCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JValue::System_IConvertible_ToBoolean(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToBoolean", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, provider);
}
inline char16_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToChar(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, provider);
}
inline int8_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToSByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToSByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(this, ___internal_method, provider);
}
inline uint8_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, provider);
}
inline int16_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToInt16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, provider);
}
inline uint16_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToUInt16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, provider);
}
inline int32_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToInt32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, provider);
}
inline uint32_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToUInt32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, provider);
}
inline int64_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToInt64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, provider);
}
inline uint64_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToUInt64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, provider);
}
inline float_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToSingle(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToSingle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, provider);
}
inline double_t Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDouble(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToDouble", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, provider);
}
inline ::System::Decimal Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDecimal(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToDecimal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method, provider);
}
inline ::System::DateTime Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDateTime(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToDateTime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, provider);
}
inline ::System::Object* Newtonsoft::Json::Linq::JValue::System_IConvertible_ToType(::System::Type* conversionType, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JValue*>::get(), "System.IConvertible.ToType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, conversionType, provider);
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value, type));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::Newtonsoft::Json::Linq::JValue* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(other, settings));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::Newtonsoft::Json::Linq::JValue* other) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(other));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(int64_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::System::Decimal value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(char16_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(uint64_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(double_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(float_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::System::DateTime value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::System::DateTimeOffset value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(bool value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::System::Guid value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::System::Uri* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::System::TimeSpan value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JValue::New_ctor(::System::Object* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JValue*>(value));
}
/// @brief Convert operator to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>"
constexpr Newtonsoft::Json::Linq::JValue::operator ::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>*() noexcept {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>"
constexpr ::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>* Newtonsoft::Json::Linq::JValue::i___System__IEquatable_1___Newtonsoft__Json__Linq__JValue__() noexcept {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Newtonsoft::Json::Linq::JValue::operator ::System::IFormattable*() noexcept {
  return static_cast<::System::IFormattable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Newtonsoft::Json::Linq::JValue::i___System__IFormattable() noexcept {
  return static_cast<::System::IFormattable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr Newtonsoft::Json::Linq::JValue::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* Newtonsoft::Json::Linq::JValue::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>"
constexpr Newtonsoft::Json::Linq::JValue::operator ::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>*() noexcept {
  return static_cast<::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>"
constexpr ::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>* Newtonsoft::Json::Linq::JValue::i___System__IComparable_1___Newtonsoft__Json__Linq__JValue__() noexcept {
  return static_cast<::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IConvertible"
constexpr Newtonsoft::Json::Linq::JValue::operator ::System::IConvertible*() noexcept {
  return static_cast<::System::IConvertible*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* Newtonsoft::Json::Linq::JValue::i___System__IConvertible() noexcept {
  return static_cast<::System::IConvertible*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JValue::JValue() {}
