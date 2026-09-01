#pragma once
// IWYU pragma private; include "System\RuntimeType.hpp"
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/Reflection/zzzz__TypeInfo_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__GenericParameterAttributes_def.hpp"
#include "System/Reflection/zzzz__InterfaceMapping_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeEventInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeFieldInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Reflection/zzzz__RuntimePropertyInfo_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MonoTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__TypeNameKind_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::RuntimeType_MemberListType::RuntimeType_MemberListType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::RuntimeType_MemberListType::RuntimeType_MemberListType() {}
constexpr ::System::RuntimeType_MemberListType System::RuntimeType_MemberListType::All{ static_cast<int32_t>(0x0) };
constexpr ::System::RuntimeType_MemberListType System::RuntimeType_MemberListType::CaseSensitive{ static_cast<int32_t>(0x1) };
constexpr ::System::RuntimeType_MemberListType System::RuntimeType_MemberListType::CaseInsensitive{ static_cast<int32_t>(0x2) };
constexpr ::System::RuntimeType_MemberListType System::RuntimeType_MemberListType::HandleToInfo{ static_cast<int32_t>(0x3) };
template <typename T> inline void System::RuntimeType_ListBuilder_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType_ListBuilder_1<T>>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template <typename T> inline T System::RuntimeType_ListBuilder_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType_ListBuilder_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline ::ArrayW<T> System::RuntimeType_ListBuilder_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType_ListBuilder_1<T>>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline void System::RuntimeType_ListBuilder_1<T>::CopyTo(::ArrayW<::System::Object*> array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeType_ListBuilder_1<T>>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, index);
}
template <typename T> inline int32_t System::RuntimeType_ListBuilder_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType_ListBuilder_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void System::RuntimeType_ListBuilder_1<T>::Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType_ListBuilder_1<T>>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "_items", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_item", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::RuntimeType_ListBuilder_1<T>::RuntimeType_ListBuilder_1(::ArrayW<T> _items, T _item, int32_t _count, int32_t _capacity) noexcept {
  this->_items = _items;
  this->_item = _item;
  this->_count = _count;
  this->_capacity = _capacity;
}
// Ctor Parameters []
template <typename T> constexpr ::System::RuntimeType_ListBuilder_1<T>::RuntimeType_ListBuilder_1() {}
//  Writing Method size for method: ::System::RuntimeType.GetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (*)(::StringW, bool, bool, bool, ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::RuntimeType::GetType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c80144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetType",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.ThrowIfTypeNeverValidGenericArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::RuntimeType*)>(&::System::RuntimeType::ThrowIfTypeNeverValidGenericArgument)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c801ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "ThrowIfTypeNeverValidGenericArgument", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.SanityCheckGenericArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::RuntimeType*>, ::ArrayW<::System::RuntimeType*>)>(&::System::RuntimeType::SanityCheckGenericArguments)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c802cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                { "SanityCheckGenericArguments", {}, { ::i2c::type_of<::ArrayW<::System::RuntimeType*>>(), ::i2c::type_of<::ArrayW<::System::RuntimeType*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.SplitName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::RuntimeType::SplitName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c804c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                             { "SplitName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterPreCalculate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::BindingFlags (*)(bool, bool, bool)>(&::System::RuntimeType::FilterPreCalculate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c805b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterPreCalculate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::BindingFlags, ::by_ref<::StringW>, bool, ::by_ref<bool>, ::by_ref<bool>,
                                                                ::by_ref<::System::RuntimeType_MemberListType>)>(&::System::RuntimeType::FilterHelper)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5c805f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterHelper",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                                                            ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(),
                                                                                                            ::i2c::type_of<::by_ref<::System::RuntimeType_MemberListType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::BindingFlags, ::by_ref<::StringW>, ::by_ref<bool>, ::by_ref<::System::RuntimeType_MemberListType>)>(
    &::System::RuntimeType::FilterHelper)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c80720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterHelper",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                                        ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::RuntimeType_MemberListType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyPrefixLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::StringW, bool)>(&::System::RuntimeType::FilterApplyPrefixLookup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c807ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                { "FilterApplyPrefixLookup", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags, bool, bool, bool, ::StringW, bool)>(
    &::System::RuntimeType::FilterApplyBase)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c80818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                             { "FilterApplyBase",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Reflection::BindingFlags, ::StringW, bool, ::StringW)>(&::System::RuntimeType::FilterApplyType)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c809ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterApplyType",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                                            ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyMethodInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::RuntimeMethodInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions,
                                                                ::ArrayW<::System::Type*>)>(&::System::RuntimeType::FilterApplyMethodInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c80b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterApplyMethodInfo",
                                                                         {},
                                                                         { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                           ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyConstructorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::RuntimeConstructorInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions,
                                                                ::ArrayW<::System::Type*>)>(&::System::RuntimeType::FilterApplyConstructorInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c80da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterApplyConstructorInfo",
                                                                         {},
                                                                         { ::i2c::type_of<::System::Reflection::RuntimeConstructorInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                           ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyMethodBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::BindingFlags, ::System::Reflection::BindingFlags,
                                                                ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>)>(&::System::RuntimeType::FilterApplyMethodBase)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5c80ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterApplyMethodBase",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                        ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                        ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeType::*)()>(&::System::RuntimeType::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c80e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodCandidates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, int32_t, bool)>(&::System::RuntimeType::GetMethodCandidates)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5c80e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                { "GetMethodCandidates",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::CallingConventions>(),
                                                    ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructorCandidates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, bool)>(&::System::RuntimeType::GetConstructorCandidates)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5c8139c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                             { "GetConstructorCandidates",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                 ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetPropertyCandidates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::ArrayW<::System::Type*>, bool)>(&::System::RuntimeType::GetPropertyCandidates)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5c81860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetPropertyCandidates",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                                            ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEventCandidates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, bool)>(&::System::RuntimeType::GetEventCandidates)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c81d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                { "GetEventCandidates", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetFieldCandidates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, bool)>(&::System::RuntimeType::GetFieldCandidates)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5c8216c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                { "GetFieldCandidates", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetNestedTypeCandidates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Type*> (::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, bool)>(
    &::System::RuntimeType::GetNestedTypeCandidates)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c8260c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                { "GetNestedTypeCandidates", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(
    &::System::RuntimeType::GetMethods)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c82b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 102 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*> (::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(
    &::System::RuntimeType::GetConstructors)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c82bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*> (::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(
    &::System::RuntimeType::GetProperties)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c82c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 112 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::EventInfo*> (::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetEvents)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c82d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 85 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetFields)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c82d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(
    &::System::RuntimeType::GetMembers)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5c82e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructorImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (
    ::System::RuntimeType::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>,
                              ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::RuntimeType::GetConstructorImpl)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5c830f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetPropertyImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Reflection::PropertyInfo* (::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*>,
                                                                               ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::RuntimeType::GetPropertyImpl)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5c8332c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 110 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetEvent)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c835cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetField)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5c83778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 87 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)(::StringW, bool)>(&::System::RuntimeType::GetInterface)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5c839f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 119 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetNestedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetNestedType)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5c83d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 103 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::RuntimeType::*)(::StringW, ::System::Reflection::MemberTypes,
                                                                                                                              ::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetMember)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x5c83f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_Module
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_Module)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c84438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetRuntimeModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeModule* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c84454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetRuntimeModule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_Assembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_Assembly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c84470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetRuntimeAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeAssembly* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetRuntimeAssembly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c84490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetRuntimeAssembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_TypeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeTypeHandle (::System::RuntimeType::*)()>(&::System::RuntimeType::get_TypeHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c844b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 113 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsInstanceOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)(::System::Object*)>(&::System::RuntimeType::IsInstanceOfType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c844c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 122 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsAssignableFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)(::System::Type*)>(&::System::RuntimeType::IsAssignableFrom)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c844f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)(::System::Type*)>(&::System::RuntimeType::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c845d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 123 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_BaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_BaseType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c84674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 116 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetBaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetBaseType)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5c84678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetBaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_UnderlyingSystemType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8486c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetAttributeFlagsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeAttributes (::System::RuntimeType::*)()>(&::System::RuntimeType::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c84870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsContextfulImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsContextfulImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c84894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsByRefImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsByRefImpl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c8489c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsPrimitiveImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c848b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsPointerImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsPointerImpl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c848ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsCOMObjectImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c84908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsValueTypeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsValueTypeImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c84910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsEnum)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c849d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.HasElementTypeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c84a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_GenericParameterAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::GenericParameterAttributes (::System::RuntimeType::*)()>(&::System::RuntimeType::get_GenericParameterAttributes)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c84a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsSzArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsSzArray)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c84b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 132 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsArrayImpl)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c84b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetArrayRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::GetArrayRank)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c84b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetElementType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c84bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEnumNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::RuntimeType::*)()>(&::System::RuntimeType::GetEnumNames)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c84c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEnumValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetEnumValues)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c84d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 125 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEnumUnderlyingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetEnumUnderlyingType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c84e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 124 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsEnumDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)(::System::Object*)>(&::System::RuntimeType::IsEnumDefined)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5c84eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEnumName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)(::System::Object*)>(&::System::RuntimeType::GetEnumName)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c853cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericArgumentsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::RuntimeType*> (::System::RuntimeType::*)()>(&::System::RuntimeType::GetGenericArgumentsInternal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c85590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGenericArgumentsInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::RuntimeType::*)()>(&::System::RuntimeType::GetGenericArguments)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c85608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeGenericType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)(::ArrayW<::System::Type*>)>(&::System::RuntimeType::MakeGenericType)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5c856b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 129 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsGenericTypeDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c85b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsGenericParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsGenericParameter)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c85b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_GenericParameterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::get_GenericParameterPosition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c85b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericTypeDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c85c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsGenericType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsGenericType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c85cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsConstructedGenericType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsConstructedGenericType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c85cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.InvokeMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::ArrayW<::System::Object*>,
                              ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>)>(&::System::RuntimeType::InvokeMember)> {
  constexpr static std::size_t size = 0x114c;
  constexpr static std::size_t addrs = 0x5c85cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 117 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)(::System::Object*)>(&::System::RuntimeType::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c86f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::RuntimeType::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c71e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "op_Equality", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::RuntimeType::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c74844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::RuntimeType::*)()>(&::System::RuntimeType::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c86f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeType::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::RuntimeType::GetObjectData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c86f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::RuntimeType*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::RuntimeType::*)(bool)>(&::System::RuntimeType::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c86f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::RuntimeType::*)(::System::Type*, bool)>(&::System::RuntimeType::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c8703c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)(::System::Type*, bool)>(&::System::RuntimeType::IsDefined)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c871d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FormatTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)(bool)>(&::System::RuntimeType::FormatTypeName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c87364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 133 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberTypes (::System::RuntimeType::*)()>(&::System::RuntimeType::get_MemberType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c8751c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_ReflectedType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c87578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_MetadataToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::get_MetadataToken)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c87584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceCheckThis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeType::*)()>(&::System::RuntimeType::CreateInstanceCheckThis)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5c875a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceCheckThis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::RuntimeType::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>, ::System::Globalization::CultureInfo*,
                                                             ::ArrayW<::System::Object*>, ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::RuntimeType::CreateInstanceImpl)> {
  constexpr static std::size_t size = 0x9e0;
  constexpr static std::size_t addrs = 0x5c71e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceImpl",
                                                                         {},
                                                                         { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(),
                                                                           ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                                           ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceDefaultCtor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::RuntimeType::*)(bool, bool, bool, bool, ::by_ref<::System::Threading::StackCrawlMark>)>(
    &::System::RuntimeType::CreateInstanceDefaultCtor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c729e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceDefaultCtor",
                                                                                             {},
                                                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetDefaultConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeConstructorInfo* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetDefaultConstructor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c877d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetDefaultConstructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetDefaultMemberName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::GetDefaultMemberName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c86e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetDefaultMemberName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetSerializationCtor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeConstructorInfo* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetSerializationCtor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5c87958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetSerializationCtor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceSlow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::RuntimeType::*)(bool, bool, bool, bool)>(&::System::RuntimeType::CreateInstanceSlow)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c87798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                             { "CreateInstanceSlow", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceMono
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::RuntimeType::*)(bool, bool)>(&::System::RuntimeType::CreateInstanceMono)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5c87b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceMono", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CheckValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::RuntimeType::*)(::System::Object*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*,
                                                                                                    ::System::Reflection::BindingFlags)>(&::System::RuntimeType::CheckValue)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c87e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CheckValue",
                                                                         {},
                                                                         { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::Binder*>(),
                                                                           ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.TryConvertToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::RuntimeType::*)(::System::Object*, ::by_ref<bool>)>(&::System::RuntimeType::TryConvertToType)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5c87f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "TryConvertToType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsConvertibleToPrimitiveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*)>(&::System::RuntimeType::IsConvertibleToPrimitiveType)> {
  constexpr static std::size_t size = 0x8e4;
  constexpr static std::size_t addrs = 0x5c88170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "IsConvertibleToPrimitiveType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetCachedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)(::System::TypeNameKind)>(&::System::RuntimeType::GetCachedName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c874d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetCachedName", {}, { ::i2c::type_of<::System::TypeNameKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.make_array_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)(int32_t)>(&::System::RuntimeType::make_array_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c88a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "make_array_type", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeArrayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::MakeArrayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c88a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 126 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeArrayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)(int32_t)>(&::System::RuntimeType::MakeArrayType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c88a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 127 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.make_byref_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::make_byref_type)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c88aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "make_byref_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeByRefType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::MakeByRefType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c88ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 128 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakePointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::RuntimeType::MakePointerType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c88b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "MakePointerType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakePointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::MakePointerType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c88b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 130 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_ContainsGenericParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c88c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericParameterConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::RuntimeType::*)()>(&::System::RuntimeType::GetGenericParameterConstraints)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c88d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceForAnotherGenericParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::RuntimeType*)>(&::System::RuntimeType::CreateInstanceForAnotherGenericParameter)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c88e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                             { "CreateInstanceForAnotherGenericParameter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeGenericType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&::System::RuntimeType::MakeGenericType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c85b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "MakeGenericType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodsByName_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::RuntimeType::*)(::System::IntPtr, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(
    &::System::RuntimeType::GetMethodsByName_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c88f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::RuntimeType*>(),
            { "GetMethodsByName_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodsByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::RuntimeMethodInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType, ::System::RuntimeType*)>(&::System::RuntimeType::GetMethodsByName)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5c81098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetMethodsByName",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                               ::i2c::type_of<::System::RuntimeType_MemberListType>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetPropertiesByName_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::RuntimeType::*)(::System::IntPtr, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(
    &::System::RuntimeType::GetPropertiesByName_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c88f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetPropertiesByName_native",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                                            ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructors_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetConstructors_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c88f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetConstructors_native", {}, { ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructors_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::RuntimeConstructorInfo*> (::System::RuntimeType::*)(::System::Reflection::BindingFlags, ::System::RuntimeType*)>(
    &::System::RuntimeType::GetConstructors_internal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5c815f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                             { "GetConstructors_internal", {}, { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetPropertiesByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::RuntimePropertyInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType, ::System::RuntimeType*)>(&::System::RuntimeType::GetPropertiesByName)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5c81a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetPropertiesByName",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                               ::i2c::type_of<::System::RuntimeType_MemberListType>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetInterfaceMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::InterfaceMapping (::System::RuntimeType::*)(::System::Type*)>(&::System::RuntimeType::GetInterfaceMap)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5c88f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 121 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetInterfaceMapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*, ::by_ref<::ArrayW<::System::Reflection::MethodInfo*>>,
                                                                ::by_ref<::ArrayW<::System::Reflection::MethodInfo*>>)>(&::System::RuntimeType::GetInterfaceMapData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c891c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetInterfaceMapData",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                            ::i2c::type_of<::by_ref<::ArrayW<::System::Reflection::MethodInfo*>>>(),
                                                                                                            ::i2c::type_of<::by_ref<::ArrayW<::System::Reflection::MethodInfo*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGUID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::ArrayW<uint8_t>)>(&::System::RuntimeType::GetGUID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c891cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGUID", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_GUID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::RuntimeType::*)()>(&::System::RuntimeType::get_GUID)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c891d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 115 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetTypeFromCLSIDImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Guid, ::StringW, bool)>(&::System::RuntimeType::GetTypeFromCLSIDImpl)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c8927c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetTypeFromCLSIDImpl", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetTypeCodeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::System::RuntimeType::*)()>(&::System::RuntimeType::GetTypeCodeImpl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c892c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 114 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetTypeCodeImplInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (*)(::System::Type*)>(&::System::RuntimeType::GetTypeCodeImplInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c89320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetTypeCodeImplInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c89324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsGenericCOMObjectImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsGenericCOMObjectImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c87790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "IsGenericCOMObjectImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::RuntimeType::CreateInstanceInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c87e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_DeclaringMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_DeclaringMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c89334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.getFullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)(bool, bool)>(&::System::RuntimeType::getFullName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c89330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "getFullName", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericArgumentsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::RuntimeType::*)(bool)>(&::System::RuntimeType::GetGenericArgumentsInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c85604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGenericArgumentsInternal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericParameterAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::GenericParameterAttributes (::System::RuntimeType::*)()>(&::System::RuntimeType::GetGenericParameterAttributes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c84b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGenericParameterAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericParameterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::GetGenericParameterPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c85c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGenericParameterPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEvents_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::RuntimeType::*)(::System::IntPtr, ::System::RuntimeType_MemberListType)>(&::System::RuntimeType::GetEvents_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c89338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetEvents_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetFields_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::RuntimeType::*)(::System::IntPtr, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(
    &::System::RuntimeType::GetFields_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8933c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::RuntimeType*>(),
            { "GetFields_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetFields_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::RuntimeFieldInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType, ::System::RuntimeType*)>(&::System::RuntimeType::GetFields_internal)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5c82308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetFields_internal",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                               ::i2c::type_of<::System::RuntimeType_MemberListType>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEvents_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::RuntimeEventInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType, ::System::RuntimeType*)>(&::System::RuntimeType::GetEvents_internal)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5c81ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetEvents_internal",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                               ::i2c::type_of<::System::RuntimeType_MemberListType>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::RuntimeType::*)()>(&::System::RuntimeType::GetInterfaces)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c89340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 120 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetNestedTypes_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::RuntimeType::*)(::System::IntPtr, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(
    &::System::RuntimeType::GetNestedTypes_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c89344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::RuntimeType*>(),
            { "GetNestedTypes_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetNestedTypes_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::RuntimeType*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(&::System::RuntimeType::GetNestedTypes_internal)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5c827b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::RuntimeType*>(),
            { "GetNestedTypes_internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_AssemblyQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c89348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_DeclaringType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c89354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::get_Name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c89358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::get_Namespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8935c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c89360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_FullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::get_FullName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c893e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsSZArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsSZArray)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c894a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsSubclassOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeType::*)(::System::Type*)>(&::System::RuntimeType::IsSubclassOf)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c89508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Reflection::MethodInfo* (::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions,
                                                                             ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::RuntimeType::GetMethodImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c89610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ::i2c::class_of<::System::RuntimeType*>(), 100 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodImplCommon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (
    ::System::RuntimeType::*)(::StringW, int32_t, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>,
                              ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::RuntimeType::GetMethodImplCommon)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5c89640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetMethodImplCommon",
                                                                         {},
                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                           ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Reflection::CallingConventions>(),
                                                                           ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodCandidates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> (::System::RuntimeType::*)(
    ::StringW, int32_t, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, bool)>(&::System::RuntimeType::GetMethodCandidates)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5c89918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                             { "GetMethodCandidates",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                 ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::MonoTypeInfo*& System::RuntimeType::__cordl_internal_get_type_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type_info;
}
constexpr ::System::MonoTypeInfo* const& System::RuntimeType::__cordl_internal_get_type_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type_info;
}
constexpr void System::RuntimeType::__cordl_internal_set_type_info(::System::MonoTypeInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type_info = value;
}
constexpr ::System::Object*& System::RuntimeType::__cordl_internal_get_GenericCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GenericCache;
}
constexpr ::System::Object* const& System::RuntimeType::__cordl_internal_get_GenericCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GenericCache;
}
constexpr void System::RuntimeType::__cordl_internal_set_GenericCache(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GenericCache = value;
}
constexpr ::System::Reflection::RuntimeConstructorInfo*& System::RuntimeType::__cordl_internal_get_m_serializationCtor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serializationCtor;
}
constexpr ::System::Reflection::RuntimeConstructorInfo* const& System::RuntimeType::__cordl_internal_get_m_serializationCtor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serializationCtor;
}
constexpr void System::RuntimeType::__cordl_internal_set_m_serializationCtor(::System::Reflection::RuntimeConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_serializationCtor = value;
}
inline void System::RuntimeType::setStaticF_ValueType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "ValueType", ::System::RuntimeType*>(std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_ValueType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "ValueType", ::System::RuntimeType*>();
}
inline void System::RuntimeType::setStaticF_EnumType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "EnumType", ::System::RuntimeType*>(std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_EnumType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "EnumType", ::System::RuntimeType*>();
}
inline void System::RuntimeType::setStaticF_ObjectType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "ObjectType", ::System::RuntimeType*>(std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_ObjectType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "ObjectType", ::System::RuntimeType*>();
}
inline void System::RuntimeType::setStaticF_StringType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "StringType", ::System::RuntimeType*>(std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_StringType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "StringType", ::System::RuntimeType*>();
}
inline void System::RuntimeType::setStaticF_DelegateType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "DelegateType", ::System::RuntimeType*>(std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_DelegateType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "DelegateType", ::System::RuntimeType*>();
}
inline void System::RuntimeType::setStaticF_s_SICtorParamTypes(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "s_SICtorParamTypes", ::System::RuntimeType*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::RuntimeType::getStaticF_s_SICtorParamTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "s_SICtorParamTypes", ::System::RuntimeType*>();
}
inline void System::RuntimeType::setStaticF_MakeTypeBuilderInstantiation(::System::Func_3<::System::Type*, ::ArrayW<::System::Type*>, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::Type*, ::ArrayW<::System::Type*>, ::System::Type*>*, "MakeTypeBuilderInstantiation", ::System::RuntimeType*>(
      std::forward<::System::Func_3<::System::Type*, ::ArrayW<::System::Type*>, ::System::Type*>*>(value));
}
inline ::System::Func_3<::System::Type*, ::ArrayW<::System::Type*>, ::System::Type*>* System::RuntimeType::getStaticF_MakeTypeBuilderInstantiation() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::Type*, ::ArrayW<::System::Type*>, ::System::Type*>*, "MakeTypeBuilderInstantiation", ::System::RuntimeType*>();
}
inline void System::RuntimeType::setStaticF_s_typedRef(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "s_typedRef", ::System::RuntimeType*>(std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_s_typedRef() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "s_typedRef", ::System::RuntimeType*>();
}
inline ::System::RuntimeType* System::RuntimeType::GetType(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetType",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(nullptr, ___internal_method, typeName, throwOnError, ignoreCase, reflectionOnly, stackMark);
}
inline void System::RuntimeType::ThrowIfTypeNeverValidGenericArgument(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "ThrowIfTypeNeverValidGenericArgument", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void System::RuntimeType::SanityCheckGenericArguments(::ArrayW<::System::RuntimeType*> genericArguments, ::ArrayW<::System::RuntimeType*> genericParamters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                              { "SanityCheckGenericArguments", {}, { ::i2c::type_of<::ArrayW<::System::RuntimeType*>>(), ::i2c::type_of<::ArrayW<::System::RuntimeType*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, genericArguments, genericParamters);
}
inline void System::RuntimeType::SplitName(::StringW fullname, ::by_ref<::StringW> name, ::by_ref<::StringW> ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                           { "SplitName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullname, name, ns);
}
inline ::System::Reflection::BindingFlags System::RuntimeType::FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterPreCalculate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags>(nullptr, ___internal_method, isPublic, isInherited, isStatic);
}
inline void System::RuntimeType::FilterHelper(::System::Reflection::BindingFlags bindingFlags, ::by_ref<::StringW> name, bool allowPrefixLookup, ::by_ref<bool> prefixLookup, ::by_ref<bool> ignoreCase,
                                              ::by_ref<::System::RuntimeType_MemberListType> listType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterHelper",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                                                          ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(),
                                                                                                          ::i2c::type_of<::by_ref<::System::RuntimeType_MemberListType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bindingFlags, name, allowPrefixLookup, prefixLookup, ignoreCase, listType);
}
inline void System::RuntimeType::FilterHelper(::System::Reflection::BindingFlags bindingFlags, ::by_ref<::StringW> name, ::by_ref<bool> ignoreCase,
                                              ::by_ref<::System::RuntimeType_MemberListType> listType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterHelper",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                                             ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::RuntimeType_MemberListType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bindingFlags, name, ignoreCase, listType);
}
inline bool System::RuntimeType::FilterApplyPrefixLookup(::System::Reflection::MemberInfo* memberInfo, ::StringW name, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                              { "FilterApplyPrefixLookup", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memberInfo, name, ignoreCase);
}
inline bool System::RuntimeType::FilterApplyBase(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal,
                                                 bool isStatic, ::StringW name, bool prefixLookup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                           { "FilterApplyBase",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memberInfo, bindingFlags, isPublic, isNonProtectedInternal, isStatic, name, prefixLookup);
}
inline bool System::RuntimeType::FilterApplyType(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags, ::StringW name, bool prefixLookup, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterApplyType",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                                          ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, bindingFlags, name, prefixLookup, ns);
}
inline bool System::RuntimeType::FilterApplyMethodInfo(::System::Reflection::RuntimeMethodInfo* method, ::System::Reflection::BindingFlags bindingFlags,
                                                       ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*> argumentTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterApplyMethodInfo",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                      ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, method, bindingFlags, callConv, argumentTypes);
}
inline bool System::RuntimeType::FilterApplyConstructorInfo(::System::Reflection::RuntimeConstructorInfo* constructor, ::System::Reflection::BindingFlags bindingFlags,
                                                            ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*> argumentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterApplyConstructorInfo",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Reflection::RuntimeConstructorInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                         ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, constructor, bindingFlags, callConv, argumentTypes);
}
inline bool System::RuntimeType::FilterApplyMethodBase(::System::Reflection::MethodBase* methodBase, ::System::Reflection::BindingFlags methodFlags, ::System::Reflection::BindingFlags bindingFlags,
                                                       ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*> argumentTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "FilterApplyMethodBase",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                      ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::CallingConventions>(),
                                                                                      ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, methodBase, methodFlags, bindingFlags, callConv, argumentTypes);
}
inline void System::RuntimeType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> System::RuntimeType::GetMethodCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                       ::System::Reflection::CallingConventions callConv,
                                                                                                                       ::ArrayW<::System::Type*> types, int32_t genericParamCount,
                                                                                                                       bool allowPrefixLookup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                              { "GetMethodCandidates",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::CallingConventions>(),
                                                  ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*>>(this, ___internal_method, name, bindingAttr, callConv, types, genericParamCount,
                                                                                                                     allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*> System::RuntimeType::GetConstructorCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                                 ::System::Reflection::CallingConventions callConv,
                                                                                                                                 ::ArrayW<::System::Type*> types, bool allowPrefixLookup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                           { "GetConstructorCandidates",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                               ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*>>(this, ___internal_method, name, bindingAttr, callConv, types,
                                                                                                                          allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*> System::RuntimeType::GetPropertyCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                           ::ArrayW<::System::Type*> types, bool allowPrefixLookup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetPropertyCandidates",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                                          ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*>>(this, ___internal_method, name, bindingAttr, types, allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*> System::RuntimeType::GetEventCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                     bool allowPrefixLookup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                              { "GetEventCandidates", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*>>(this, ___internal_method, name, bindingAttr, allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*> System::RuntimeType::GetFieldCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                     bool allowPrefixLookup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                              { "GetFieldCandidates", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*>>(this, ___internal_method, name, bindingAttr, allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Type*> System::RuntimeType::GetNestedTypeCandidates(::StringW fullname, ::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                              { "GetNestedTypeCandidates", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Type*>>(this, ___internal_method, fullname, bindingAttr, allowPrefixLookup);
}
inline ::ArrayW<::System::Reflection::MethodInfo*> System::RuntimeType::GetMethods(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 102 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*> System::RuntimeType::GetConstructors(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::PropertyInfo*> System::RuntimeType::GetProperties(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 112 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::EventInfo*> System::RuntimeType::GetEvents(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 85 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::FieldInfo*> System::RuntimeType::GetFields(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::RuntimeType::GetMembers(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::ConstructorInfo* System::RuntimeType::GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                      ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                                                      ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::RuntimeType::GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                ::System::Type* returnType, ::ArrayW<::System::Type*> types,
                                                                                ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 110 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline ::System::Reflection::EventInfo* System::RuntimeType::GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Reflection::FieldInfo* System::RuntimeType::GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Type* System::RuntimeType::GetInterface(::StringW fullname, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 119 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, fullname, ignoreCase);
}
inline ::System::Type* System::RuntimeType::GetNestedType(::StringW fullname, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 103 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, fullname, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::RuntimeType::GetMember(::StringW name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, name, type, bindingAttr);
}
inline ::System::Reflection::Module* System::RuntimeType::get_Module() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::RuntimeType::GetRuntimeModule() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetRuntimeModule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::RuntimeType::get_Assembly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeAssembly* System::RuntimeType::GetRuntimeAssembly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetRuntimeAssembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*>(this, ___internal_method);
}
inline ::System::RuntimeTypeHandle System::RuntimeType::get_TypeHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 113 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle>(this, ___internal_method);
}
inline bool System::RuntimeType::IsInstanceOfType(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 122 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline bool System::RuntimeType::IsAssignableFrom(::System::Type* c) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool System::RuntimeType::IsEquivalentTo(::System::Type* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 123 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::Type* System::RuntimeType::get_BaseType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 116 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::RuntimeType* System::RuntimeType::GetBaseType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetBaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::get_UnderlyingSystemType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes System::RuntimeType::GetAttributeFlagsImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes>(this, ___internal_method);
}
inline bool System::RuntimeType::IsContextfulImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::IsByRefImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::IsPrimitiveImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::IsPointerImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::IsCOMObjectImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::IsValueTypeImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsEnum() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::HasElementTypeImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::GenericParameterAttributes System::RuntimeType::get_GenericParameterAttributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::GenericParameterAttributes>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsSzArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 132 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::IsArrayImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::RuntimeType::GetArrayRank() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::GetElementType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::RuntimeType::GetEnumNames() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::Array* System::RuntimeType::GetEnumValues() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 125 })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::GetEnumUnderlyingType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 124 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::RuntimeType::IsEnumDefined(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW System::RuntimeType::GetEnumName(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::ArrayW<::System::RuntimeType*> System::RuntimeType::GetGenericArgumentsInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGenericArgumentsInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::RuntimeType*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::RuntimeType::GetGenericArguments() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::MakeGenericType(::ArrayW<::System::Type*> instantiation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 129 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, instantiation);
}
inline bool System::RuntimeType::get_IsGenericTypeDefinition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsGenericParameter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::RuntimeType::get_GenericParameterPosition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::GetGenericTypeDefinition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsGenericType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsConstructedGenericType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::InvokeMember(::StringW name, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::Binder* binder, ::System::Object* target,
                                                           ::ArrayW<::System::Object*> providedArgs, ::ArrayW<::System::Reflection::ParameterModifier> modifiers,
                                                           ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW> namedParams) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 117 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, bindingFlags, binder, target, providedArgs, modifiers, culture, namedParams);
}
inline bool System::RuntimeType::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::RuntimeType::op_Equality(::System::RuntimeType* left, ::System::RuntimeType* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "op_Equality", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::RuntimeType::op_Inequality(::System::RuntimeType* left, ::System::RuntimeType* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::System::Object* System::RuntimeType::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::RuntimeType::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::ArrayW<::System::Object*> System::RuntimeType::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::RuntimeType::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline bool System::RuntimeType::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::StringW System::RuntimeType::FormatTypeName(bool serialization) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 133 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, serialization);
}
inline ::System::Reflection::MemberTypes System::RuntimeType::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::get_ReflectedType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t System::RuntimeType::get_MetadataToken() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::RuntimeType::CreateInstanceCheckThis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceCheckThis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::CreateInstanceImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> args,
                                                                 ::System::Globalization::CultureInfo* culture, ::ArrayW<::System::Object*> activationAttributes,
                                                                 ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceImpl",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(),
                                                                         ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                                         ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, bindingAttr, binder, args, culture, activationAttributes, stackMark);
}
inline ::System::Object* System::RuntimeType::CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions,
                                                                        ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceDefaultCtor",
                                                                                           {},
                                                                                           { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, publicOnly, skipCheckThis, fillCache, wrapExceptions, stackMark);
}
inline ::System::Reflection::RuntimeConstructorInfo* System::RuntimeType::GetDefaultConstructor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetDefaultConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeConstructorInfo*>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::GetDefaultMemberName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetDefaultMemberName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeConstructorInfo* System::RuntimeType::GetSerializationCtor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetSerializationCtor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeConstructorInfo*>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                           { "CreateInstanceSlow", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, publicOnly, wrapExceptions, skipCheckThis, fillCache);
}
inline ::System::Object* System::RuntimeType::CreateInstanceMono(bool nonPublic, bool wrapExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceMono", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, nonPublic, wrapExceptions);
}
inline ::System::Object* System::RuntimeType::CheckValue(::System::Object* value, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture,
                                                         ::System::Reflection::BindingFlags invokeAttr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CheckValue",
                                                                       {},
                                                                       { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::Binder*>(),
                                                                         ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, binder, culture, invokeAttr);
}
inline ::System::Object* System::RuntimeType::TryConvertToType(::System::Object* value, ::by_ref<bool> failed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "TryConvertToType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, failed);
}
inline ::System::Object* System::RuntimeType::IsConvertibleToPrimitiveType(::System::Object* value, ::System::Type* targetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "IsConvertibleToPrimitiveType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, targetType);
}
inline ::StringW System::RuntimeType::GetCachedName(::System::TypeNameKind kind) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetCachedName", {}, { ::i2c::type_of<::System::TypeNameKind>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kind);
}
inline ::System::Type* System::RuntimeType::make_array_type(int32_t rank) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "make_array_type", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, rank);
}
inline ::System::Type* System::RuntimeType::MakeArrayType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 126 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::MakeArrayType(int32_t rank) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 127 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, rank);
}
inline ::System::Type* System::RuntimeType::make_byref_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "make_byref_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::MakeByRefType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 128 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::MakePointerType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "MakePointerType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::RuntimeType::MakePointerType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 130 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::RuntimeType::get_ContainsGenericParameters() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::RuntimeType::GetGenericParameterConstraints() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::CreateInstanceForAnotherGenericParameter(::System::Type* genericType, ::System::RuntimeType* genericArgument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                           { "CreateInstanceForAnotherGenericParameter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, genericType, genericArgument);
}
inline ::System::Type* System::RuntimeType::MakeGenericType(::System::Type* gt, ::ArrayW<::System::Type*> types) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "MakeGenericType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, gt, types);
}
inline ::System::IntPtr System::RuntimeType::GetMethodsByName_native(::System::IntPtr namePtr, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::RuntimeType*>(),
          { "GetMethodsByName_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, namePtr, bindingAttr, listType);
}
inline ::ArrayW<::System::Reflection::RuntimeMethodInfo*> System::RuntimeType::GetMethodsByName(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                ::System::RuntimeType_MemberListType listType, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetMethodsByName",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                             ::i2c::type_of<::System::RuntimeType_MemberListType>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimeMethodInfo*>>(this, ___internal_method, name, bindingAttr, listType, reflectedType);
}
inline ::System::IntPtr System::RuntimeType::GetPropertiesByName_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::RuntimeType*>(),
          { "GetPropertiesByName_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, name, bindingAttr, listType);
}
inline ::System::IntPtr System::RuntimeType::GetConstructors_native(::System::Reflection::BindingFlags bindingAttr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetConstructors_native", {}, { ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::RuntimeConstructorInfo*> System::RuntimeType::GetConstructors_internal(::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                           { "GetConstructors_internal", {}, { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimeConstructorInfo*>>(this, ___internal_method, bindingAttr, reflectedType);
}
inline ::ArrayW<::System::Reflection::RuntimePropertyInfo*> System::RuntimeType::GetPropertiesByName(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                     ::System::RuntimeType_MemberListType listType, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetPropertiesByName",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                             ::i2c::type_of<::System::RuntimeType_MemberListType>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimePropertyInfo*>>(this, ___internal_method, name, bindingAttr, listType, reflectedType);
}
inline ::System::Reflection::InterfaceMapping System::RuntimeType::GetInterfaceMap(::System::Type* ifaceType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 121 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::InterfaceMapping>(this, ___internal_method, ifaceType);
}
inline void System::RuntimeType::GetInterfaceMapData(::System::Type* t, ::System::Type* iface, ::by_ref<::ArrayW<::System::Reflection::MethodInfo*>> targets,
                                                     ::by_ref<::ArrayW<::System::Reflection::MethodInfo*>> methods) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetInterfaceMapData",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                          ::i2c::type_of<::by_ref<::ArrayW<::System::Reflection::MethodInfo*>>>(),
                                                                                                          ::i2c::type_of<::by_ref<::ArrayW<::System::Reflection::MethodInfo*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, iface, targets, methods);
}
inline void System::RuntimeType::GetGUID(::System::Type* type, ::ArrayW<uint8_t> guid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGUID", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, guid);
}
inline ::System::Guid System::RuntimeType::get_GUID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 115 })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::GetTypeFromCLSIDImpl(::System::Guid clsid, ::StringW server, bool throwOnError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetTypeFromCLSIDImpl", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, clsid, server, throwOnError);
}
inline ::System::TypeCode System::RuntimeType::GetTypeCodeImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 114 })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(this, ___internal_method);
}
inline ::System::TypeCode System::RuntimeType::GetTypeCodeImplInternal(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetTypeCodeImplInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(nullptr, ___internal_method, type);
}
inline ::StringW System::RuntimeType::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::RuntimeType::IsGenericCOMObjectImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "IsGenericCOMObjectImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::CreateInstanceInternal(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "CreateInstanceInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::MethodBase* System::RuntimeType::get_DeclaringMethod() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::getFullName(bool full_name, bool assembly_qualified) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "getFullName", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, full_name, assembly_qualified);
}
inline ::ArrayW<::System::Type*> System::RuntimeType::GetGenericArgumentsInternal(bool runtimeArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGenericArgumentsInternal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, runtimeArray);
}
inline ::System::Reflection::GenericParameterAttributes System::RuntimeType::GetGenericParameterAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGenericParameterAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::GenericParameterAttributes>(this, ___internal_method);
}
inline int32_t System::RuntimeType::GetGenericParameterPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetGenericParameterPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::IntPtr System::RuntimeType::GetEvents_native(::System::IntPtr name, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetEvents_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, name, listType);
}
inline ::System::IntPtr System::RuntimeType::GetFields_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::RuntimeType*>(),
          { "GetFields_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, name, bindingAttr, listType);
}
inline ::ArrayW<::System::Reflection::RuntimeFieldInfo*> System::RuntimeType::GetFields_internal(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                 ::System::RuntimeType_MemberListType listType, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetFields_internal",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                             ::i2c::type_of<::System::RuntimeType_MemberListType>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimeFieldInfo*>>(this, ___internal_method, name, bindingAttr, listType, reflectedType);
}
inline ::ArrayW<::System::Reflection::RuntimeEventInfo*> System::RuntimeType::GetEvents_internal(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                 ::System::RuntimeType_MemberListType listType, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetEvents_internal",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                             ::i2c::type_of<::System::RuntimeType_MemberListType>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimeEventInfo*>>(this, ___internal_method, name, bindingAttr, listType, reflectedType);
}
inline ::ArrayW<::System::Type*> System::RuntimeType::GetInterfaces() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 120 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::IntPtr System::RuntimeType::GetNestedTypes_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::RuntimeType*>(),
          { "GetNestedTypes_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, name, bindingAttr, listType);
}
inline ::ArrayW<::System::RuntimeType*> System::RuntimeType::GetNestedTypes_internal(::StringW displayName, ::System::Reflection::BindingFlags bindingAttr,
                                                                                     ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::RuntimeType*>(),
          { "GetNestedTypes_internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::RuntimeType_MemberListType>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::RuntimeType*>>(this, ___internal_method, displayName, bindingAttr, listType);
}
inline ::StringW System::RuntimeType::get_AssemblyQualifiedName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::get_Namespace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::RuntimeType::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::get_FullName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsSZArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::RuntimeType::IsSubclassOf(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::System::Reflection::MethodInfo* System::RuntimeType::GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                            ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*> types,
                                                                            ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeType*>(), 100 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, bindingAttr, binder, callConv, types, modifiers);
}
inline ::System::Reflection::MethodInfo* System::RuntimeType::GetMethodImplCommon(::StringW name, int32_t genericParameterCount, ::System::Reflection::BindingFlags bindingAttr,
                                                                                  ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConv,
                                                                                  ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(), { "GetMethodImplCommon",
                                                                       {},
                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                         ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Reflection::CallingConventions>(),
                                                                         ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, genericParameterCount, bindingAttr, binder, callConv, types, modifiers);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> System::RuntimeType::GetMethodCandidates(::StringW name, int32_t genericParameterCount,
                                                                                                                       ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                       ::System::Reflection::CallingConventions callConv,
                                                                                                                       ::ArrayW<::System::Type*> types, bool allowPrefixLookup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeType*>(),
                                                           { "GetMethodCandidates",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                               ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*>>(this, ___internal_method, name, genericParameterCount, bindingAttr, callConv,
                                                                                                                     types, allowPrefixLookup);
}
inline ::System::RuntimeType* System::RuntimeType::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::RuntimeType*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::RuntimeType::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::RuntimeType::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::RuntimeType::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::RuntimeType::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::RuntimeType::RuntimeType() {}
constexpr ::System::Reflection::BindingFlags System::RuntimeType::MemberBindingMask{ static_cast<int32_t>(0xff) };
constexpr ::System::Reflection::BindingFlags System::RuntimeType::InvocationMask{ static_cast<int32_t>(0xff00) };
constexpr ::System::Reflection::BindingFlags System::RuntimeType::BinderNonCreateInstance{ static_cast<int32_t>(0x3d00) };
constexpr ::System::Reflection::BindingFlags System::RuntimeType::BinderGetSetProperty{ static_cast<int32_t>(0x3000) };
constexpr ::System::Reflection::BindingFlags System::RuntimeType::BinderSetInvokeProperty{ static_cast<int32_t>(0x2100) };
constexpr ::System::Reflection::BindingFlags System::RuntimeType::BinderGetSetField{ static_cast<int32_t>(0xc00) };
constexpr ::System::Reflection::BindingFlags System::RuntimeType::BinderSetInvokeField{ static_cast<int32_t>(0x900) };
constexpr ::System::Reflection::BindingFlags System::RuntimeType::BinderNonFieldGetSet{ static_cast<int32_t>(0xfff300) };
constexpr ::System::Reflection::BindingFlags System::RuntimeType::ClassicBindingMask{ static_cast<int32_t>(0xf100) };
