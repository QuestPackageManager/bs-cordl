#pragma once
// IWYU pragma private; include "System/RuntimeType.hpp"
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/Reflection/zzzz__TypeInfo_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_impl.hpp"
#include "System/zzzz__ICloneable_impl.hpp"
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
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Guid_def.hpp"
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType_ListBuilder_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename T> inline T System::RuntimeType_ListBuilder_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType_ListBuilder_1<T>>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::RuntimeType_ListBuilder_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType_ListBuilder_1<T>>::get(), "ToArray",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline void System::RuntimeType_ListBuilder_1<T>::CopyTo(::ArrayW<::System::Object*, ::Array<::System::Object*>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType_ListBuilder_1<T>>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename T> inline int32_t System::RuntimeType_ListBuilder_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType_ListBuilder_1<T>>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void System::RuntimeType_ListBuilder_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType_ListBuilder_1<T>>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "_items", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_item", ty: "T", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::RuntimeType_ListBuilder_1<T>::RuntimeType_ListBuilder_1(::ArrayW<T, ::Array<T>*> _items, T _item, int32_t _count, int32_t _capacity) noexcept {
  this->_items = _items;
  this->_item = _item;
  this->_count = _count;
  this->_capacity = _capacity;
}
// Ctor Parameters []
template <typename T> constexpr ::System::RuntimeType_ListBuilder_1<T>::RuntimeType_ListBuilder_1() {}
//  Writing Method size for method: ::System::RuntimeType.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (*)(::StringW, bool, bool, bool, ::ByRef<::System::Threading::StackCrawlMark>)>(
    &::System::RuntimeType::GetType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e31a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.ThrowIfTypeNeverValidGenericArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::RuntimeType*)>(&::System::RuntimeType::ThrowIfTypeNeverValidGenericArgument)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3e31ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "ThrowIfTypeNeverValidGenericArgument", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.SanityCheckGenericArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>, ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>)>(&::System::RuntimeType::SanityCheckGenericArguments)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x3e31c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "SanityCheckGenericArguments", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.SplitName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ByRef<::StringW>, ::ByRef<::StringW>)>(&::System::RuntimeType::SplitName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3e31e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "SplitName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterPreCalculate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::BindingFlags (*)(bool, bool, bool)>(&::System::RuntimeType::FilterPreCalculate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3e31f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterPreCalculate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::BindingFlags, ::ByRef<::StringW>, bool, ::ByRef<bool>, ::ByRef<bool>,
                                                                                           ::ByRef<::System::RuntimeType_MemberListType>)>(&::System::RuntimeType::FilterHelper)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3e31f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::RuntimeType_MemberListType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Reflection::BindingFlags, ::ByRef<::StringW>, ::ByRef<bool>, ::ByRef<::System::RuntimeType_MemberListType>)>(&::System::RuntimeType::FilterHelper)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3e32080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterHelper", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::RuntimeType_MemberListType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyPrefixLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::StringW, bool)>(&::System::RuntimeType::FilterApplyPrefixLookup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3e3210c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyPrefixLookup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags, bool, bool, bool, ::StringW, bool)>(
    &::System::RuntimeType::FilterApplyBase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3e3216c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyBase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Reflection::BindingFlags, ::StringW, bool, ::StringW)>(
    &::System::RuntimeType::FilterApplyType)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3e32358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyMethodInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Reflection::RuntimeMethodInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
        &::System::RuntimeType::FilterApplyMethodInfo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3e32470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyMethodInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyConstructorInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::RuntimeConstructorInfo*, ::System::Reflection::BindingFlags,
                                                                                           ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::RuntimeType::FilterApplyConstructorInfo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3e32750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyConstructorInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FilterApplyMethodBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::BindingFlags, ::System::Reflection::BindingFlags,
                                                                                           ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::RuntimeType::FilterApplyMethodBase)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x3e324f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyMethodBase", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::RuntimeType::*)()>(&::System::RuntimeType::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3e327d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodCandidates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, int32_t, bool)>(
    &::System::RuntimeType::GetMethodCandidates)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3e32818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodCandidates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructorCandidates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, bool)>(
    &::System::RuntimeType::GetConstructorCandidates)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3e32d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetConstructorCandidates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetPropertyCandidates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, bool)>(&::System::RuntimeType::GetPropertyCandidates)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x3e33210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetPropertyCandidates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEventCandidates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, bool)>(&::System::RuntimeType::GetEventCandidates)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3e33704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetEventCandidates", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetFieldCandidates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, bool)>(&::System::RuntimeType::GetFieldCandidates)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x3e33b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetFieldCandidates", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetNestedTypeCandidates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Type*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, bool)>(&::System::RuntimeType::GetNestedTypeCandidates)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3e33ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetNestedTypeCandidates", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethods
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> (::System::RuntimeType::*)(
    ::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetMethods)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3e34538;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> (
    ::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetConstructors)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3e345c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 82));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> (
    ::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetProperties)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3e3465c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 111));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> (::System::RuntimeType::*)(
    ::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetEvents)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3e346e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 85));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetFields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> (::System::RuntimeType::*)(
    ::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetFields)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3e34760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 89));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (::System::RuntimeType::*)(
    ::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetMembers)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3e347e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 93));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructorImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (
    ::System::RuntimeType::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                              ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::RuntimeType::GetConstructorImpl)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3e34ac8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 80));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetPropertyImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (
    ::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                              ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::RuntimeType::GetPropertyImpl)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x3e34cfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 110));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::EventInfo* (::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::RuntimeType::GetEvent)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3e34f98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 84));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::RuntimeType::GetField)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3e35158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 87));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetNestedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::RuntimeType::GetNestedType)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x3e35440;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 103));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags)>(&::System::RuntimeType::GetMember)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x3e35630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 92));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_Module
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_Module)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35ae0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetRuntimeModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeModule* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetRuntimeModule",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_Assembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_Assembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35af0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetRuntimeAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeAssembly* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetRuntimeAssembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetRuntimeAssembly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_TypeHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeTypeHandle (::System::RuntimeType::*)()>(&::System::RuntimeType::get_TypeHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e35b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 112));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsInstanceOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)(::System::Object*)>(&::System::RuntimeType::IsInstanceOfType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35b24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 118));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsAssignableFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)(::System::Type*)>(&::System::RuntimeType::IsAssignableFrom)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3e35b2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)(::System::Type*)>(&::System::RuntimeType::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e35c04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 119));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_BaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_BaseType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e35cb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 115));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetBaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetBaseType)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x3e35cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetBaseType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_UnderlyingSystemType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e35e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetAttributeFlagsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeAttributes (::System::RuntimeType::*)()>(&::System::RuntimeType::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35e9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsContextfulImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsContextfulImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35ea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsByRefImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsByRefImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35eac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsPrimitiveImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35eb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsPointerImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsPointerImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e35ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsCOMObjectImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e35ec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsValueTypeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsValueTypeImpl)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3e35ed0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 75));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsEnum)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3e35ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.HasElementTypeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e36064;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_GenericParameterAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::GenericParameterAttributes (::System::RuntimeType::*)()>(
    &::System::RuntimeType::get_GenericParameterAttributes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3e3606c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsSzArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsSzArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e36130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 128));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsArrayImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e36138;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetArrayRank
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::GetArrayRank)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3e36140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetElementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e361c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEnumNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::RuntimeType::*)()>(&::System::RuntimeType::GetEnumNames)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3e361cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEnumValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetEnumValues)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3e362e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 121));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEnumUnderlyingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetEnumUnderlyingType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3e3645c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 120));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsEnumDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)(::System::Object*)>(&::System::RuntimeType::IsEnumDefined)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x3e3652c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEnumName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)(::System::Object*)>(&::System::RuntimeType::GetEnumName)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3e36a44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericArgumentsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> (::System::RuntimeType::*)()>(
    &::System::RuntimeType::GetGenericArgumentsInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3e36c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGenericArgumentsInternal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::RuntimeType::*)()>(
    &::System::RuntimeType::GetGenericArguments)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3e36ca4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeGenericType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::RuntimeType::MakeGenericType)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x3e36d44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 125));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsGenericTypeDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e37218;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsGenericParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsGenericParameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e37220;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_GenericParameterPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::get_GenericParameterPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3e37228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericTypeDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::GetGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3e372ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsGenericType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsGenericType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e37330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsConstructedGenericType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsConstructedGenericType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3e37338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.InvokeMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                              ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>, ::System::Globalization::CultureInfo*,
                              ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::RuntimeType::InvokeMember)> {
  constexpr static std::size_t size = 0x1178;
  constexpr static std::size_t addrs = 0x3e37380;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 116));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)(::System::Object*)>(&::System::RuntimeType::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e385e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::RuntimeType::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e22d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::RuntimeType::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e25814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::RuntimeType::*)()>(&::System::RuntimeType::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e385f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "Clone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::RuntimeType::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::RuntimeType::GetObjectData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3e385f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::RuntimeType::*)(bool)>(
    &::System::RuntimeType::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3e38658;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::RuntimeType::*)(::System::Type*, bool)>(
    &::System::RuntimeType::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3e386f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)(::System::Type*, bool)>(&::System::RuntimeType::IsDefined)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3e3888c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.FormatTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)(bool)>(&::System::RuntimeType::FormatTypeName)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3e38a20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 129));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_MemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (::System::RuntimeType::*)()>(&::System::RuntimeType::get_MemberType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e38bfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_ReflectedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_ReflectedType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e38c40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_MetadataToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::get_MetadataToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e38c4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceCheckThis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::RuntimeType::*)()>(&::System::RuntimeType::CreateInstanceCheckThis)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3e38c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceCheckThis",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::RuntimeType::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::Globalization::CultureInfo*,
                              ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::ByRef<::System::Threading::StackCrawlMark>)>(&::System::RuntimeType::CreateInstanceImpl)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0x3e22d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceImpl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceDefaultCtor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::RuntimeType::*)(bool, bool, bool, bool, ::ByRef<::System::Threading::StackCrawlMark>)>(
    &::System::RuntimeType::CreateInstanceDefaultCtor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3e23880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceDefaultCtor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetDefaultConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeConstructorInfo* (::System::RuntimeType::*)()>(
    &::System::RuntimeType::GetDefaultConstructor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3e38ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetDefaultConstructor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetDefaultMemberName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::GetDefaultMemberName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3e384f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetDefaultMemberName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetSerializationCtor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeConstructorInfo* (::System::RuntimeType::*)()>(
    &::System::RuntimeType::GetSerializationCtor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3e39034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetSerializationCtor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceSlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::RuntimeType::*)(bool, bool, bool, bool)>(&::System::RuntimeType::CreateInstanceSlow)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3e38e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceSlow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceMono
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::RuntimeType::*)(bool, bool)>(&::System::RuntimeType::CreateInstanceMono)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x3e39218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceMono", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CheckValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::RuntimeType::*)(::System::Object*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags)>(&::System::RuntimeType::CheckValue)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3e394e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CheckValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.TryConvertToType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::RuntimeType::*)(::System::Object*, ::ByRef<bool>)>(
    &::System::RuntimeType::TryConvertToType)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3e39644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "TryConvertToType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsConvertibleToPrimitiveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*)>(&::System::RuntimeType::IsConvertibleToPrimitiveType)> {
  constexpr static std::size_t size = 0xaa4;
  constexpr static std::size_t addrs = 0x3e398a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "IsConvertibleToPrimitiveType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetCachedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)(::System::TypeNameKind)>(&::System::RuntimeType::GetCachedName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3e38bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetCachedName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeNameKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.make_array_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)(int32_t)>(&::System::RuntimeType::make_array_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "make_array_type", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeArrayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::MakeArrayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e3a348;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 122));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeArrayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)(int32_t)>(&::System::RuntimeType::MakeArrayType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3e3a350;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 123));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.make_byref_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::make_byref_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "make_byref_type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeByRefType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::MakeByRefType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e3a39c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 124));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakePointerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::RuntimeType::MakePointerType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "MakePointerType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakePointerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::MakePointerType)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3e3a408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 126));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_ContainsGenericParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3e3a4ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericParameterConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::RuntimeType::*)()>(
    &::System::RuntimeType::GetGenericParameterConstraints)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3e3a5e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceForAnotherGenericParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::System::RuntimeType*)>(
    &::System::RuntimeType::CreateInstanceForAnotherGenericParameter)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3e3a6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceForAnotherGenericParameter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.MakeGenericType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::RuntimeType::MakeGenericType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e37214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "MakeGenericType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodsByName_native
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::System::RuntimeType::*)(
    ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(&::System::RuntimeType::GetMethodsByName_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodsByName_native", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodsByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::RuntimeMethodInfo*, ::Array<::System::Reflection::RuntimeMethodInfo*>*> (
    ::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType, ::System::RuntimeType*)>(&::System::RuntimeType::GetMethodsByName)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3e32a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodsByName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetPropertiesByName_native
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::System::RuntimeType::*)(
    ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(&::System::RuntimeType::GetPropertiesByName_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetPropertiesByName_native", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructors_native
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::System::RuntimeType::*)(::System::Reflection::BindingFlags)>(
    &::System::RuntimeType::GetConstructors_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetConstructors_native", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetConstructors_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::RuntimeConstructorInfo*, ::Array<::System::Reflection::RuntimeConstructorInfo*>*> (
    ::System::RuntimeType::*)(::System::Reflection::BindingFlags, ::System::RuntimeType*)>(&::System::RuntimeType::GetConstructors_internal)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3e32fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetConstructors_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetPropertiesByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::RuntimePropertyInfo*, ::Array<::System::Reflection::RuntimePropertyInfo*>*> (
    ::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType, ::System::RuntimeType*)>(&::System::RuntimeType::GetPropertiesByName)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3e3341c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetPropertiesByName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::RuntimeType::GetGUID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGUID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_GUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::RuntimeType::*)()>(&::System::RuntimeType::get_GUID)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3e3a800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 114));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetTypeFromCLSIDImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Guid, ::StringW, bool)>(&::System::RuntimeType::GetTypeFromCLSIDImpl)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e3a8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetTypeFromCLSIDImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetTypeCodeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (::System::RuntimeType::*)()>(&::System::RuntimeType::GetTypeCodeImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3e3a8f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 113));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetTypeCodeImplInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (*)(::System::Type*)>(&::System::RuntimeType::GetTypeCodeImplInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetTypeCodeImplInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e3a950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsGenericCOMObjectImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::IsGenericCOMObjectImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e38e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "IsGenericCOMObjectImpl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.CreateInstanceInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::RuntimeType::CreateInstanceInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e394e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_DeclaringMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_DeclaringMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.getFullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)(bool, bool)>(&::System::RuntimeType::getFullName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e3a95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "getFullName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericArgumentsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::RuntimeType::*)(bool)>(
    &::System::RuntimeType::GetGenericArgumentsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e36c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGenericArgumentsInternal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericParameterAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::GenericParameterAttributes (::System::RuntimeType::*)()>(
    &::System::RuntimeType::GetGenericParameterAttributes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e360ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGenericParameterAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetGenericParameterPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::GetGenericParameterPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e372a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGenericParameterPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEvents_native
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::System::RuntimeType::*)(::System::IntPtr, ::System::RuntimeType_MemberListType)>(
    &::System::RuntimeType::GetEvents_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetEvents_native", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetFields_native
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (::System::RuntimeType::*)(::System::IntPtr, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(&::System::RuntimeType::GetFields_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetFields_native", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetFields_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::RuntimeFieldInfo*, ::Array<::System::Reflection::RuntimeFieldInfo*>*> (
    ::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType, ::System::RuntimeType*)>(&::System::RuntimeType::GetFields_internal)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3e33d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetFields_internal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetEvents_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::RuntimeEventInfo*, ::Array<::System::Reflection::RuntimeEventInfo*>*> (
    ::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType, ::System::RuntimeType*)>(&::System::RuntimeType::GetEvents_internal)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x3e338d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetEvents_internal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::RuntimeType::*)()>(
    &::System::RuntimeType::GetInterfaces)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a974;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 117));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetNestedTypes_native
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::System::RuntimeType::*)(
    ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(&::System::RuntimeType::GetNestedTypes_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetNestedTypes_native", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetNestedTypes_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> (::System::RuntimeType::*)(
    ::StringW, ::System::Reflection::BindingFlags, ::System::RuntimeType_MemberListType)>(&::System::RuntimeType::GetNestedTypes_internal)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x3e341ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetNestedTypes_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_AssemblyQualifiedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e3a97c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_DeclaringType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::RuntimeType::*)()>(&::System::RuntimeType::get_DeclaringType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a988;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::get_Name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a98c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::get_Namespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e3a990;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::RuntimeType::*)()>(&::System::RuntimeType::GetHashCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3e3a994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_FullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::RuntimeType::*)()>(&::System::RuntimeType::get_FullName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3e3aa60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.get_IsSZArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)()>(&::System::RuntimeType::get_IsSZArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3e3ab28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.IsSubclassOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::RuntimeType::*)(::System::Type*)>(&::System::RuntimeType::IsSubclassOf)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3e3ab80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (
    ::System::RuntimeType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions,
                              ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(
    &::System::RuntimeType::GetMethodImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3e3ac74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 100));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodImplCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (
    ::System::RuntimeType::*)(::StringW, int32_t, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions,
                              ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(
    &::System::RuntimeType::GetMethodImplCommon)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x3e3aca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodImplCommon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeType.GetMethodCandidates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> (::System::RuntimeType::*)(
    ::StringW, int32_t, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, bool)>(
    &::System::RuntimeType::GetMethodCandidates)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x3e3af70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodCandidates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type_info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GenericCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_serializationCtor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::RuntimeType::setStaticF_ValueType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "ValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>(
      std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_ValueType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "ValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>();
}
inline void System::RuntimeType::setStaticF_EnumType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "EnumType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>(
      std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_EnumType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "EnumType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>();
}
inline void System::RuntimeType::setStaticF_ObjectType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "ObjectType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>(
      std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_ObjectType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "ObjectType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>();
}
inline void System::RuntimeType::setStaticF_StringType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "StringType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>(
      std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_StringType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "StringType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>();
}
inline void System::RuntimeType::setStaticF_DelegateType(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "DelegateType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>(
      std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_DelegateType() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "DelegateType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>();
}
inline void System::RuntimeType::setStaticF_s_SICtorParamTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "s_SICtorParamTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>(
      std::forward<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>(value));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::RuntimeType::getStaticF_s_SICtorParamTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "s_SICtorParamTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>();
}
inline void System::RuntimeType::setStaticF_MakeTypeBuilderInstantiation(::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>*, "MakeTypeBuilderInstantiation",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>(
      std::forward<::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>*>(value));
}
inline ::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>* System::RuntimeType::getStaticF_MakeTypeBuilderInstantiation() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>*, "MakeTypeBuilderInstantiation",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>();
}
inline void System::RuntimeType::setStaticF_s_typedRef(::System::RuntimeType* value) {
  ::cordl_internals::setStaticField<::System::RuntimeType*, "s_typedRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>(
      std::forward<::System::RuntimeType*>(value));
}
inline ::System::RuntimeType* System::RuntimeType::getStaticF_s_typedRef() {
  return ::cordl_internals::getStaticField<::System::RuntimeType*, "s_typedRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get>();
}
inline ::System::RuntimeType* System::RuntimeType::GetType(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*, false>(nullptr, ___internal_method, typeName, throwOnError, ignoreCase, reflectionOnly, stackMark);
}
inline void System::RuntimeType::ThrowIfTypeNeverValidGenericArgument(::System::RuntimeType* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "ThrowIfTypeNeverValidGenericArgument", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void System::RuntimeType::SanityCheckGenericArguments(::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> genericArguments,
                                                             ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> genericParamters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "SanityCheckGenericArguments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, genericArguments, genericParamters);
}
inline void System::RuntimeType::SplitName(::StringW fullname, ::ByRef<::StringW> name, ::ByRef<::StringW> ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "SplitName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fullname, name, ns);
}
inline ::System::Reflection::BindingFlags System::RuntimeType::FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterPreCalculate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags, false>(nullptr, ___internal_method, isPublic, isInherited, isStatic);
}
inline void System::RuntimeType::FilterHelper(::System::Reflection::BindingFlags bindingFlags, ::ByRef<::StringW> name, bool allowPrefixLookup, ::ByRef<bool> prefixLookup, ::ByRef<bool> ignoreCase,
                                              ::ByRef<::System::RuntimeType_MemberListType> listType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::RuntimeType_MemberListType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bindingFlags, name, allowPrefixLookup, prefixLookup, ignoreCase, listType);
}
inline void System::RuntimeType::FilterHelper(::System::Reflection::BindingFlags bindingFlags, ::ByRef<::StringW> name, ::ByRef<bool> ignoreCase,
                                              ::ByRef<::System::RuntimeType_MemberListType> listType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::RuntimeType_MemberListType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bindingFlags, name, ignoreCase, listType);
}
inline bool System::RuntimeType::FilterApplyPrefixLookup(::System::Reflection::MemberInfo* memberInfo, ::StringW name, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyPrefixLookup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, memberInfo, name, ignoreCase);
}
inline bool System::RuntimeType::FilterApplyBase(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal,
                                                 bool isStatic, ::StringW name, bool prefixLookup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyBase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, memberInfo, bindingFlags, isPublic, isNonProtectedInternal, isStatic, name, prefixLookup);
}
inline bool System::RuntimeType::FilterApplyType(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags, ::StringW name, bool prefixLookup, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, bindingFlags, name, prefixLookup, ns);
}
inline bool System::RuntimeType::FilterApplyMethodInfo(::System::Reflection::RuntimeMethodInfo* method, ::System::Reflection::BindingFlags bindingFlags,
                                                       ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyMethodInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, method, bindingFlags, callConv, argumentTypes);
}
inline bool System::RuntimeType::FilterApplyConstructorInfo(::System::Reflection::RuntimeConstructorInfo* constructor, ::System::Reflection::BindingFlags bindingFlags,
                                                            ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyConstructorInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, constructor, bindingFlags, callConv, argumentTypes);
}
inline bool System::RuntimeType::FilterApplyMethodBase(::System::Reflection::MethodBase* methodBase, ::System::Reflection::BindingFlags methodFlags, ::System::Reflection::BindingFlags bindingFlags,
                                                       ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "FilterApplyMethodBase", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, methodBase, methodFlags, bindingFlags, callConv, argumentTypes);
}
inline void System::RuntimeType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> System::RuntimeType::GetMethodCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                       ::System::Reflection::CallingConventions callConv,
                                                                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                                                                       int32_t genericParamCount, bool allowPrefixLookup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodCandidates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*>, false>(this, ___internal_method, name, bindingAttr, callConv, types,
                                                                                                                            genericParamCount, allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*> System::RuntimeType::GetConstructorCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                                 ::System::Reflection::CallingConventions callConv,
                                                                                                                                 ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                                                                                 bool allowPrefixLookup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetConstructorCandidates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*>, false>(this, ___internal_method, name, bindingAttr, callConv, types,
                                                                                                                                 allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*>
System::RuntimeType::GetPropertyCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, bool allowPrefixLookup) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetPropertyCandidates", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*>, false>(this, ___internal_method, name, bindingAttr, types, allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*> System::RuntimeType::GetEventCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                     bool allowPrefixLookup) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetEventCandidates", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*>, false>(this, ___internal_method, name, bindingAttr, allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*> System::RuntimeType::GetFieldCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                     bool allowPrefixLookup) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetFieldCandidates", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*>, false>(this, ___internal_method, name, bindingAttr, allowPrefixLookup);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Type*> System::RuntimeType::GetNestedTypeCandidates(::StringW fullname, ::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetNestedTypeCandidates", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Type*>, false>(this, ___internal_method, fullname, bindingAttr, allowPrefixLookup);
}
inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> System::RuntimeType::GetMethods(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> System::RuntimeType::GetConstructors(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 82)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> System::RuntimeType::GetProperties(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 111)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> System::RuntimeType::GetEvents(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 85)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> System::RuntimeType::GetFields(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> System::RuntimeType::GetMembers(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 93)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::ConstructorInfo* System::RuntimeType::GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                      ::System::Reflection::CallingConventions callConvention,
                                                                                      ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                                      ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 80)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::RuntimeType::GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                                ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 110)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline ::System::Reflection::EventInfo* System::RuntimeType::GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 84)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*, false>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Reflection::FieldInfo* System::RuntimeType::GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 87)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*, false>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Type* System::RuntimeType::GetNestedType(::StringW fullname, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 103)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, fullname, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> System::RuntimeType::GetMember(::StringW name, ::System::Reflection::MemberTypes type,
                                                                                                                               ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(this, ___internal_method, name, type, bindingAttr);
}
inline ::System::Reflection::Module* System::RuntimeType::get_Module() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*, false>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::RuntimeType::GetRuntimeModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetRuntimeModule",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::RuntimeType::get_Assembly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeAssembly* System::RuntimeType::GetRuntimeAssembly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetRuntimeAssembly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*, false>(this, ___internal_method);
}
inline ::System::RuntimeTypeHandle System::RuntimeType::get_TypeHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 112)));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsInstanceOfType(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 118)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline bool System::RuntimeType::IsAssignableFrom(::System::Type* c) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool System::RuntimeType::IsEquivalentTo(::System::Type* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 119)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::System::Type* System::RuntimeType::get_BaseType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 115)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::RuntimeType* System::RuntimeType::GetBaseType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetBaseType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::get_UnderlyingSystemType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes System::RuntimeType::GetAttributeFlagsImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsContextfulImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsByRefImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsPrimitiveImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsPointerImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsCOMObjectImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsValueTypeImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 75)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsEnum() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::HasElementTypeImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Reflection::GenericParameterAttributes System::RuntimeType::get_GenericParameterAttributes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::GenericParameterAttributes, false>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsSzArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 128)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsArrayImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::RuntimeType::GetArrayRank() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::GetElementType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::RuntimeType::GetEnumNames() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::System::Array* System::RuntimeType::GetEnumValues() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 121)));
  return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::GetEnumUnderlyingType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 120)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsEnumDefined(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline ::StringW System::RuntimeType::GetEnumName(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> System::RuntimeType::GetGenericArgumentsInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGenericArgumentsInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::RuntimeType::GetGenericArguments() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::MakeGenericType(::ArrayW<::System::Type*, ::Array<::System::Type*>*> instantiation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 125)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, instantiation);
}
inline bool System::RuntimeType::get_IsGenericTypeDefinition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsGenericParameter() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::RuntimeType::get_GenericParameterPosition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::GetGenericTypeDefinition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsGenericType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsConstructedGenericType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::InvokeMember(::StringW name, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::Binder* binder, ::System::Object* target,
                                                           ::ArrayW<::System::Object*, ::Array<::System::Object*>*> providedArgs,
                                                           ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers,
                                                           ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW, ::Array<::StringW>*> namedParams) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 116)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name, bindingFlags, binder, target, providedArgs, modifiers, culture, namedParams);
}
inline bool System::RuntimeType::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool System::RuntimeType::op_Equality(::System::RuntimeType* left, ::System::RuntimeType* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool System::RuntimeType::op_Inequality(::System::RuntimeType* left, ::System::RuntimeType* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::System::Object* System::RuntimeType::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "Clone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::RuntimeType::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::RuntimeType::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::RuntimeType::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, attributeType, inherit);
}
inline bool System::RuntimeType::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeType, inherit);
}
inline ::StringW System::RuntimeType::FormatTypeName(bool serialization) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 129)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, serialization);
}
inline ::System::Reflection::MemberTypes System::RuntimeType::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::get_ReflectedType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t System::RuntimeType::get_MetadataToken() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::RuntimeType::CreateInstanceCheckThis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceCheckThis",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::CreateInstanceImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                 ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::Globalization::CultureInfo* culture,
                                                                 ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes,
                                                                 ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceImpl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, bindingAttr, binder, args, culture, activationAttributes, stackMark);
}
inline ::System::Object* System::RuntimeType::CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions,
                                                                        ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceDefaultCtor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, publicOnly, skipCheckThis, fillCache, wrapExceptions, stackMark);
}
inline ::System::Reflection::RuntimeConstructorInfo* System::RuntimeType::GetDefaultConstructor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetDefaultConstructor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeConstructorInfo*, false>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::GetDefaultMemberName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetDefaultMemberName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeConstructorInfo* System::RuntimeType::GetSerializationCtor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetSerializationCtor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeConstructorInfo*, false>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceSlow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, publicOnly, wrapExceptions, skipCheckThis, fillCache);
}
inline ::System::Object* System::RuntimeType::CreateInstanceMono(bool nonPublic, bool wrapExceptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceMono", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, nonPublic, wrapExceptions);
}
inline ::System::Object* System::RuntimeType::CheckValue(::System::Object* value, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture,
                                                         ::System::Reflection::BindingFlags invokeAttr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CheckValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, binder, culture, invokeAttr);
}
inline ::System::Object* System::RuntimeType::TryConvertToType(::System::Object* value, ::ByRef<bool> failed) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "TryConvertToType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, failed);
}
inline ::System::Object* System::RuntimeType::IsConvertibleToPrimitiveType(::System::Object* value, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "IsConvertibleToPrimitiveType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, value, targetType);
}
inline ::StringW System::RuntimeType::GetCachedName(::System::TypeNameKind kind) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetCachedName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeNameKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, kind);
}
inline ::System::Type* System::RuntimeType::make_array_type(int32_t rank) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "make_array_type", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, rank);
}
inline ::System::Type* System::RuntimeType::MakeArrayType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 122)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::MakeArrayType(int32_t rank) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 123)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, rank);
}
inline ::System::Type* System::RuntimeType::make_byref_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "make_byref_type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::MakeByRefType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 124)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::MakePointerType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "MakePointerType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::RuntimeType::MakePointerType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 126)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline bool System::RuntimeType::get_ContainsGenericParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::RuntimeType::GetGenericParameterConstraints() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::CreateInstanceForAnotherGenericParameter(::System::Type* genericType, ::System::RuntimeType* genericArgument) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceForAnotherGenericParameter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, genericType, genericArgument);
}
inline ::System::Type* System::RuntimeType::MakeGenericType(::System::Type* gt, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "MakeGenericType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, gt, types);
}
inline ::System::IntPtr System::RuntimeType::GetMethodsByName_native(::System::IntPtr namePtr, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodsByName_native", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, namePtr, bindingAttr, listType);
}
inline ::ArrayW<::System::Reflection::RuntimeMethodInfo*, ::Array<::System::Reflection::RuntimeMethodInfo*>*>
System::RuntimeType::GetMethodsByName(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodsByName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimeMethodInfo*, ::Array<::System::Reflection::RuntimeMethodInfo*>*>, false>(this, ___internal_method, name, bindingAttr,
                                                                                                                                                            listType, reflectedType);
}
inline ::System::IntPtr System::RuntimeType::GetPropertiesByName_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetPropertiesByName_native", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, name, bindingAttr, listType);
}
inline ::System::IntPtr System::RuntimeType::GetConstructors_native(::System::Reflection::BindingFlags bindingAttr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetConstructors_native", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::RuntimeConstructorInfo*, ::Array<::System::Reflection::RuntimeConstructorInfo*>*>
System::RuntimeType::GetConstructors_internal(::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetConstructors_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimeConstructorInfo*, ::Array<::System::Reflection::RuntimeConstructorInfo*>*>, false>(this, ___internal_method,
                                                                                                                                                                      bindingAttr, reflectedType);
}
inline ::ArrayW<::System::Reflection::RuntimePropertyInfo*, ::Array<::System::Reflection::RuntimePropertyInfo*>*>
System::RuntimeType::GetPropertiesByName(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetPropertiesByName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimePropertyInfo*, ::Array<::System::Reflection::RuntimePropertyInfo*>*>, false>(this, ___internal_method, name,
                                                                                                                                                                bindingAttr, listType, reflectedType);
}
inline void System::RuntimeType::GetGUID(::System::Type* type, ::ArrayW<uint8_t, ::Array<uint8_t>*> guid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGUID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, guid);
}
inline ::System::Guid System::RuntimeType::get_GUID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 114)));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::GetTypeFromCLSIDImpl(::System::Guid clsid, ::StringW server, bool throwOnError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetTypeFromCLSIDImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, clsid, server, throwOnError);
}
inline ::System::TypeCode System::RuntimeType::GetTypeCodeImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 113)));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode, false>(this, ___internal_method);
}
inline ::System::TypeCode System::RuntimeType::GetTypeCodeImplInternal(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetTypeCodeImplInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode, false>(nullptr, ___internal_method, type);
}
inline ::StringW System::RuntimeType::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsGenericCOMObjectImpl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "IsGenericCOMObjectImpl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::RuntimeType::CreateInstanceInternal(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "CreateInstanceInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::MethodBase* System::RuntimeType::get_DeclaringMethod() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::getFullName(bool full_name, bool assembly_qualified) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "getFullName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, full_name, assembly_qualified);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::RuntimeType::GetGenericArgumentsInternal(bool runtimeArray) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGenericArgumentsInternal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method, runtimeArray);
}
inline ::System::Reflection::GenericParameterAttributes System::RuntimeType::GetGenericParameterAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGenericParameterAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::GenericParameterAttributes, false>(this, ___internal_method);
}
inline int32_t System::RuntimeType::GetGenericParameterPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetGenericParameterPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::IntPtr System::RuntimeType::GetEvents_native(::System::IntPtr name, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetEvents_native", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, name, listType);
}
inline ::System::IntPtr System::RuntimeType::GetFields_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetFields_native", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, name, bindingAttr, listType);
}
inline ::ArrayW<::System::Reflection::RuntimeFieldInfo*, ::Array<::System::Reflection::RuntimeFieldInfo*>*>
System::RuntimeType::GetFields_internal(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetFields_internal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimeFieldInfo*, ::Array<::System::Reflection::RuntimeFieldInfo*>*>, false>(this, ___internal_method, name, bindingAttr,
                                                                                                                                                          listType, reflectedType);
}
inline ::ArrayW<::System::Reflection::RuntimeEventInfo*, ::Array<::System::Reflection::RuntimeEventInfo*>*>
System::RuntimeType::GetEvents_internal(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType, ::System::RuntimeType* reflectedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetEvents_internal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::RuntimeEventInfo*, ::Array<::System::Reflection::RuntimeEventInfo*>*>, false>(this, ___internal_method, name, bindingAttr,
                                                                                                                                                          listType, reflectedType);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::RuntimeType::GetInterfaces() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 117)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::System::IntPtr System::RuntimeType::GetNestedTypes_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetNestedTypes_native", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, name, bindingAttr, listType);
}
inline ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> System::RuntimeType::GetNestedTypes_internal(::StringW displayName, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                       ::System::RuntimeType_MemberListType listType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetNestedTypes_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType_MemberListType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>, false>(this, ___internal_method, displayName, bindingAttr, listType);
}
inline ::StringW System::RuntimeType::get_AssemblyQualifiedName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* System::RuntimeType::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::get_Namespace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::RuntimeType::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::RuntimeType::get_FullName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::RuntimeType::get_IsSZArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::RuntimeType::IsSubclassOf(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline ::System::Reflection::MethodInfo* System::RuntimeType::GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                            ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                            ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), 100)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, bindingAttr, binder, callConv, types, modifiers);
}
inline ::System::Reflection::MethodInfo* System::RuntimeType::GetMethodImplCommon(::StringW name, int32_t genericParameterCount, ::System::Reflection::BindingFlags bindingAttr,
                                                                                  ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConv,
                                                                                  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                                  ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodImplCommon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, genericParameterCount, bindingAttr, binder, callConv, types, modifiers);
}
inline ::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*>
System::RuntimeType::GetMethodCandidates(::StringW name, int32_t genericParameterCount, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::CallingConventions callConv,
                                         ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, bool allowPrefixLookup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::RuntimeType*>::get(), "GetMethodCandidates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*>, false>(this, ___internal_method, name, genericParameterCount, bindingAttr,
                                                                                                                            callConv, types, allowPrefixLookup);
}
inline ::System::RuntimeType* System::RuntimeType::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::RuntimeType*>());
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
